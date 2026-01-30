// Name: core_dracbrid.cpp_FUN_00486360
// Address: 00486360
// Address Range: [[00486360, 00486421]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_FUN_00486360(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00486360(uint param_1, uint
   param_2) */

int __cdecl core_dracbrid_cpp_FUN_00486360(void)

{
  CVector3f *pCVar1;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (*(int *)(in_stack_00000004 + 0xbf48) != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_24,INT_02c6d0a0
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_18,INT_02c6d0b4
                     );
  if (in_stack_00000008 + 1 != pCVar1) {
    in_stack_00000008[1].x = pCVar1->x;
    in_stack_00000008[1].y = pCVar1->y;
    in_stack_00000008[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_30,INT_02c6d0bc
                     );
  if (in_stack_00000008 + 2 != pCVar1) {
    in_stack_00000008[2].x = pCVar1->x;
    in_stack_00000008[2].y = pCVar1->y;
    in_stack_00000008[2].z = pCVar1->z;
  }
  return 3;
}
