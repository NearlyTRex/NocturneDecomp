// Name: core_dynamite.cpp_FUN_0049ce70
// Address: 0049ce70
// Address Range: [[0049ce70, 0049cedd]]
// Convention: unknown
// Signature: undefined4 core_dynamite_cpp_FUN_0049ce70(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_dynamite.cpp_FUN_0049ce70(uint param_1) */

uint core_dynamite_cpp_FUN_0049ce70(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_weapon_cpp_FUN_005ee6e0();
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_FUN_004c8dd0(g_CFireEffectPtr);
  *(uint *)(in_stack_00000004 + 0x588) = 0;
  *(uint *)(in_stack_00000004 + 0x578) = 0xbf800000;
  *(uint *)(in_stack_00000004 + 0x584) = 0;
  *(uint *)(in_stack_00000004 + 0x580) = *(uint *)(in_stack_00000004 + 0x584);
  *(uint *)(in_stack_00000004 + 0x57c) = *(uint *)(in_stack_00000004 + 0x580);
  return 1;
}
