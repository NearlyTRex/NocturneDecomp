// Name: FUN_0051c000
// Address: 0051c000
// Address Range: [[0051c000, 0051c102]]
// Convention: unknown
// Signature: void FUN_0051c000(int param_1)

#include "nocturne.h"

void FUN_0051c000(int param_1)

{
  int iVar1;
  int iVar2;
  char acStack_170 [276];
  byte auStack_5c [80];
  int iStack_c;
  
  iVar1 = FUN_005b910c("pod.ini",&DAT_005e2992);
  if (iVar1 == 0) {
    FUN_00460e10(acStack_170);
    FUN_00460e50(acStack_170,"*.pod");
    while (acStack_170[0] != '\0') {
      (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,acStack_170);
      FUN_00460ed0(acStack_170);
    }
    FUN_00460f50(acStack_170);
    FUN_00460e30(acStack_170,0);
    return;
  }
  FUN_005b8100(iVar1,&DAT_005e29a3,&iStack_c);
  iVar2 = 0;
  if (0 < iStack_c) {
    do {
      FUN_005b8100(iVar1,&DAT_005e29a7,auStack_5c);
      (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,auStack_5c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_c);
  }
  FUN_005b89c0(iVar1);
  return;
}
