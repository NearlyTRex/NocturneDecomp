// Name: FUN_004662b0
// Address: 004662b0
// Address Range: [[004662b0, 004663ae]]
// Convention: unknown
// Signature: void FUN_004662b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004662b0(int param_1)

{
  int iVar1;
  byte auStack_10c [256];
  
  FUN_004663b0(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_005a4b20(*(int *)(param_1 + 0x20),0xc);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) {
      FUN_005a28c0(auStack_10c,"CDemonPart::alloc - Out of vertex %d memory!",*(uint *)(param_1 + 0x20));
      _DAT_01d71de4 = 0x8b;
      _DAT_01d71de0 = "..\\core\\dpart.cpp";
      FUN_004e4330(auStack_10c);
    }
    iVar1 = FUN_005a4b20(*(uint *)(param_1 + 0x20),0xc);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dpart.cpp";
      _DAT_01d71de4 = 0x91;
      FUN_004e4330("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_005a4b20(*(int *)(param_1 + 0x24),0x20);
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dpart.cpp";
      _DAT_01d71de4 = 0x99;
      FUN_004e4330("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
