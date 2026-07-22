// Name: FUN_00456f60
// Address: 00456f60
// Address Range: [[00456f60, 0045705e]]
// Convention: unknown
// Signature: void FUN_00456f60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456f60(int param_1)

{
  int iVar1;
  byte auStack_10c [256];
  
  core_dpart_cpp_CDemonPart_free_FUN_00457060(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_00565c50(*(int *)(param_1 + 0x20),0xc);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) {
      _sprintf(auStack_10c,"CDemonPart::alloc - Out of vertex %d memory!",*(uint *)(param_1 + 0x20));
      _DAT_01cc4804 = 0x8b;
      _DAT_01cc4800 = "..\\core\\dpart.cpp";
      FUN_004c8440(auStack_10c);
    }
    iVar1 = FUN_00565c50(*(uint *)(param_1 + 0x20),0xc);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\core\\dpart.cpp";
      _DAT_01cc4804 = 0x91;
      FUN_004c8440("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_00565c50(*(int *)(param_1 + 0x24),0x20);
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\core\\dpart.cpp";
      _DAT_01cc4804 = 0x99;
      FUN_004c8440("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
