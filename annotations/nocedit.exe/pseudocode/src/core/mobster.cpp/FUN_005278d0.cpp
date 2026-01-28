// Name: core_mobster.cpp_FUN_005278d0
// Address: 005278d0
// Address Range: [[005278d0, 005279c8]]
// Convention: unknown
// Signature: int core_mobster_cpp_FUN_005278d0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_005278d0(uint param_1, uint
   param_2) */

int core_mobster_cpp_FUN_005278d0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_1c,INT_02f37ec8
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf80) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_28,
                        INT_02f37eec);
    if (in_stack_00000008 + 1 != pCVar1) {
      in_stack_00000008[1].x = pCVar1->x;
      in_stack_00000008[1].y = pCVar1->y;
      in_stack_00000008[1].z = pCVar1->z;
    }
    iVar2 = 2;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf84) * 4) == 0) {
    return iVar2;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_34,INT_02f37ef4
                     );
  in_stack_00000008 = in_stack_00000008 + iVar2;
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  return iVar2 + 1;
}
