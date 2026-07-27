// Name: crt_unknown.c_FUN_005634b0
// Address: 005634b0
// Address Range: [[005634b0, 005635a1]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005634b0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005634b0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte auStack_124 [276];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
      uVar1 = FUN_00568890(param_1);
    }
    (*(code *)PTR_FUN_005c1ac0)(*(uint *)(param_1 + 0x10));
    iVar2 = _ftell(param_1);
    if (iVar2 != -1) {
      FUN_005689c0(*(uint *)(param_1 + 0x10),iVar2,0);
    }
    if (param_2 != 0) {
      uVar3 = FUN_00568a50(*(uint *)(param_1 + 0x10));
      uVar1 = uVar1 | uVar3;
    }
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      FUN_005638d0(*(uint *)(*(int *)(param_1 + 8) + 8));
      *(uint *)(*(int *)(param_1 + 8) + 8) = 0;
    }
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      FUN_005633fc(auStack_124,*(byte *)(*(int *)(param_1 + 8) + 0x14));
      remove(auStack_124);
    }
    (*(code *)PTR_FUN_005c1ac4)(*(uint *)(param_1 + 0x10));
    if (param_2 != 0) {
      (*(code *)PTR_FUN_005c1acc)(*(uint *)(param_1 + 0x10));
    }
  }
  return uVar1;
}
