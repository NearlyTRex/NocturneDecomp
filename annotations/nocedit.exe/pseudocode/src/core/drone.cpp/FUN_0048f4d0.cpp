// Name: core_drone.cpp_FUN_0048f4d0
// Address: 0048f4d0
// Address Range: [[0048f4d0, 0048f518]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048f4d0()

#include "nocturne.h"

/* Signature: byte actors_enemy_drone.cpp_FUN_0048f4d0(uint param_1, uint param_2)
    */

uint core_drone_cpp_FUN_0048f4d0(void)

{
  CVector3f *pCVar1;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_10,0);
  if (in_stack_00000008 == pCVar1) {
    return 1;
  }
  in_stack_00000008->x = pCVar1->x;
  in_stack_00000008->y = pCVar1->y;
  in_stack_00000008->z = pCVar1->z;
  return 1;
}
