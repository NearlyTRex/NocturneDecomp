// Name: core_boneguy.cpp_FUN_0041d180
// Address: 0041d180
// Address Range: [[0041d180, 0041d1a1]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d180()

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_FUN_0041d180(uint param_1) */

void core_boneguy_cpp_FUN_0041d180(void)

{
  int iVar1;
  CCharacter *in_stack_00000008;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000008);
  return;
}
