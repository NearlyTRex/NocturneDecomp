// Name: core_netgame.cpp_CNetGame_FUN_00541260
// Address: 00541260
// Address Range: [[00541260, 005412a3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_FUN_00541260(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_00541260(uint param_1, uint
   param_2) */

int __cdecl core_netgame_cpp_CNetGame_FUN_00541260(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
    piVar1 = (int *)(in_stack_00000004 + 0x3c);
    do {
      if (((short)piVar1[1] == (short)in_stack_00000008[1]) && (*piVar1 == *in_stack_00000008)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x1e;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x1c));
  }
  return -1;
}
