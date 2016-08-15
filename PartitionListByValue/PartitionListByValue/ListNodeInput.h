#pragma once
#include"ListNode.h"
#include<iostream>
using namespace std;

class SingleListInput {
public:
	ListNode* Input(){
		int len;
		cin >> len;
		ListNode* head = new ListNode(), *p = head;
		for (int i = 1; i < len; i++,p =p ->next) {
			cin >> p->val;
			p->next = new ListNode;
	}
		cin >> p->val;
		//for (p = head; p; p = p->next)
		//	cout << p->val << " ";
		return head;
	}
};