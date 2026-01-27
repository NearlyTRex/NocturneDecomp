// Name: core_dracbrid.cpp_FUN_00485bc0
// Address: 00485bc0
// Address Range: [[00485bc0, 00485bde]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00485bc0()

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00485bc0(uint param_1, uint
   param_2) */

int core_dracbrid_cpp_FUN_00485bc0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  SCollisionInfo *in_stack_00000008;
  
  if (in_stack_00000004[1].base.unk12 != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    (in_stack_00000004,in_stack_00000008);
  return iVar1;
}
