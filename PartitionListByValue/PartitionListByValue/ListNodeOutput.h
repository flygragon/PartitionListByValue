#pragma once
#include<iostream>
#include"ListNode.h"

class ListNodeOutput {
public:
	void ListOutput(ListNode* head) {
		for (ListNode* p = head; p; p = p->next)
			std::cout << p->val << " ";
		std::cout << "\n";
	}
};