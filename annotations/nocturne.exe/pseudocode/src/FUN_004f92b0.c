// Name: FUN_004f92b0
// Address: 004f92b0
// Address Range: [[004f92b0, 004f93b2]]
// Convention: unknown
// Signature: void FUN_004f92b0(int param_1)

#include "nocturne.h"

void FUN_004f92b0(int param_1)

{
  int iVar1;
  int iVar2;
  char local_170 [276];
  byte local_5c [80];
  int local_c;
  
  iVar1 = FUN_0056568c("pod.ini",&DAT_0058dced);
  if (iVar1 == 0) {
    FUN_00456c00(local_170);
    FUN_00456c40(local_170,"*.pod");
    while (local_170[0] != '\0') {
      (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,local_170);
      FUN_00456cc0(local_170);
    }
    FUN_00456d40(local_170);
    FUN_00456c20(local_170,0);
    return;
  }
  FUN_00563350(iVar1,&DAT_0058dcfe,&local_c);
  iVar2 = 0;
  if (0 < local_c) {
    do {
      FUN_00563350(iVar1,&DAT_0058dd02,local_5c);
      (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,local_5c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_c);
  }
  FUN_00563380(iVar1);
  return;
}
