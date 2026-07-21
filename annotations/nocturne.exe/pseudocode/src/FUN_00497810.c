// Name: FUN_00497810
// Address: 00497810
// Address Range: [[00497810, 0049785f]]
// Convention: unknown
// Signature: undefined4 FUN_00497810(int param_1)

#include "nocturne.h"

uint FUN_00497810(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x24ac),DAT_00764ad4);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x664) == 2 || (*(int *)(iVar1 + 0x664) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
