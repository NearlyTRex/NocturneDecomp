// Name: FUN_004799e0
// Address: 004799e0
// Address Range: [[004799e0, 00479ade]]
// Convention: unknown
// Signature: void FUN_004799e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004799e0(int param_1)

{
  int iVar1;
  byte auStack_10c [256];
  
  FUN_00479ae0(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_005c1cb0(*(int *)(param_1 + 0x20),0xc);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) {
      FUN_005bfb40(auStack_10c,"CDemonPart::alloc - Out of vertex %d memory!",*(uint *)(param_1 + 0x20));
      _DAT_01d1d404 = 0x8b;
      _DAT_01d1d400 = "..\\core\\dpart.cpp";
      FUN_005030e0(auStack_10c);
    }
    iVar1 = FUN_005c1cb0(*(uint *)(param_1 + 0x20),0xc);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dpart.cpp";
      _DAT_01d1d404 = 0x91;
      FUN_005030e0("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_005c1cb0(*(int *)(param_1 + 0x24),0x20);
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dpart.cpp";
      _DAT_01d1d404 = 0x99;
      FUN_005030e0("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
