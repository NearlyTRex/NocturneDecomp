// Name: core_set.cpp_FUN_00551990
// Address: 00551990
// Address Range: [[00551990, 005519f8]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00551990(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00551990(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fe55d0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (param_2 == *(int *)(iVar2 + 0x1fe55d4)) {
        _DAT_01fe55d0 = _DAT_01fe55d0 + -1;
        memmove
                  ((void *)(iVar2 + 0x1fe55d4),(void *)(iVar2 + 0x1fe55d8),
                   (_DAT_01fe55d0 - iVar3) * 4);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01fe55d0 * 4);
  }
  return;
}
