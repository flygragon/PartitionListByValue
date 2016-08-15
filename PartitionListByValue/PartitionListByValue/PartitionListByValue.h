#pragma once
#include"ListNode.h"

class PartitionListByValue {
public:
	ListNode* partition(ListNode* head, int x) {
		if (!head || !head->next)
			return head;
		ListNode *p, *q, *r, *temp = head;
		if (temp->val >= x) {
			while (temp->next && temp->next->val >= x)
				temp = temp->next;
			if (!temp->next)
				return head;
			for (p = temp->next, q = p; q->next && q->next->val <x;
				q = q->next);
			temp->next = q->next;
			q->next = head;
			head = p, r = q->next;
		}
		else {
			for (q = head; q->next && q->next->val <x; q = q->next);
			if (!q->next) return head;
			r = q->next, temp = r;
		}
		while (temp->next) {
			while (temp->next && temp->next->val >= x)
				temp = temp->next;
			if (!temp->next) return head;
			for (p = temp->next; p->next && p->next->val <x; p = p->next);
			q->next = temp->next;
			temp->next = p->next;
			p->next = r;
			q = p;
		}
		return head;
	}
};