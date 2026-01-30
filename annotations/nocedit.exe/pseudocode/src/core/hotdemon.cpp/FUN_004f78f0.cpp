// Name: core_hotdemon.cpp_FUN_004f78f0
// Address: 004f78f0
// Address Range: [[004f78f0, 004f79aa]]
// Convention: __cdecl
// Signature: int __cdecl core_hotdemon_cpp_FUN_004f78f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_hotdemon.cpp_FUN_004f78f0(uint param_1, uint
   param_2) */

int __cdecl core_hotdemon_cpp_FUN_004f78f0(void)

{
  CVector3f *pCVar1;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_28,INT_02db88c8
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_1c,INT_02db88ec
                     );
  if (in_stack_00000008 + 1 != pCVar1) {
    in_stack_00000008[1].x = pCVar1->x;
    in_stack_00000008[1].y = pCVar1->y;
    in_stack_00000008[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_34,INT_02db88f4
                     );
  if (in_stack_00000008 + 2 == pCVar1) {
    return 3;
  }
  in_stack_00000008[2].x = pCVar1->x;
  in_stack_00000008[2].y = pCVar1->y;
  in_stack_00000008[2].z = pCVar1->z;
  return 3;
}
