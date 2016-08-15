// PartitionListByValue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"PartitionListByValue.h"
#include"ListNodeOutput.h"
#include"ListNodeInput.h"

int main()
{
	SingleListInput SLI;
	ListNode* LN = SLI.Input();
	int x;
	cin >> x;
	PartitionListByValue PLV;
	LN = PLV.partition(LN, x);
	ListNodeOutput LNOP;
	LNOP.ListOutput(LN);
    return 0;
}

