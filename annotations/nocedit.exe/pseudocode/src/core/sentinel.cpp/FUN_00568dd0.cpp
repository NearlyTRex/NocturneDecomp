// Name: core_sentinel.cpp_FUN_00568dd0
// Address: 00568dd0
// Address Range: [[00568dd0, 00568eed]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568dd0()

#include "nocturne.h"

/* Signature: byte actors_enemy_sentinel.cpp_FUN_00568dd0(uint param_1, uint
   param_2) */

uint core_sentinel_cpp_FUN_00568dd0(void)

{
  CVector3f *pCVar1;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_34,INT_0311420c
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_28,INT_03114220
                     );
  if (in_stack_00000008 + 1 != pCVar1) {
    in_stack_00000008[1].x = pCVar1->x;
    in_stack_00000008[1].y = pCVar1->y;
    in_stack_00000008[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_1c,INT_03114224
                     );
  if (in_stack_00000008 + 2 != pCVar1) {
    in_stack_00000008[2].x = pCVar1->x;
    in_stack_00000008[2].y = pCVar1->y;
    in_stack_00000008[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_40,INT_03114230
                     );
  if (in_stack_00000008 + 3 != pCVar1) {
    in_stack_00000008[3].x = pCVar1->x;
    in_stack_00000008[3].y = pCVar1->y;
    in_stack_00000008[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_4c,INT_03114238
                     );
  if (in_stack_00000008 + 4 == pCVar1) {
    return 5;
  }
  in_stack_00000008[4].x = pCVar1->x;
  in_stack_00000008[4].y = pCVar1->y;
  in_stack_00000008[4].z = pCVar1->z;
  return 5;
}
