// Name: core_manpuz.cpp_FUN_005091d0
// Address: 005091d0
// Address Range: [[005091d0, 005092dd]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005091d0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_005091d0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_005091d0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_hero_cpp_FUN_004f2220();
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050af00();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050a8d0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050a610();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_00509b20();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050af80();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((uint *)(in_stack_00000004 + 0x13c8) != (uint *)(in_stack_00000004 + 0x1368)) {
      *(uint *)(in_stack_00000004 + 0x13c8) = *(uint *)(in_stack_00000004 + 0x1368);
      *(uint *)(in_stack_00000004 + 0x13cc) = *(uint *)(in_stack_00000004 + 0x136c);
      *(uint *)(in_stack_00000004 + 0x13d0) = *(uint *)(in_stack_00000004 + 0x1370);
    }
    *(byte *)(in_stack_00000004 + 0x13cf) = *(byte *)(in_stack_00000004 + 0x13cf) ^ 0x80;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(in_stack_00000004 + 0x1374),(CVector3f *)(in_stack_00000004 + 0x1368)
              );
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(in_stack_00000004 + 0x13d4),(CVector3f *)(in_stack_00000004 + 0x13c8)
              );
    core_game_cpp_CGame_FUN_004d8730(g_CGamePtr);
  }
  return;
}
