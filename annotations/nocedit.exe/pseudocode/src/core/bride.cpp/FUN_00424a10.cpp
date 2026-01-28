// Name: core_bride.cpp_FUN_00424a10
// Address: 00424a10
// Address Range: [[00424a10, 00424a9e]]
// Convention: unknown
// Signature: undefined4 core_bride_cpp_FUN_00424a10(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bride.cpp_FUN_00424a10(uint param_1, uint param_2)
    */

uint core_bride_cpp_FUN_00424a10(void)

{
  CVector3f *pCVar1;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (*(int *)(in_stack_00000004 + *(int *)(in_stack_00000004 + 0xbedc) * 4 + 0x2298) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_10,
                        DAT_00822cdc);
    if (in_stack_00000008 != pCVar1) {
      in_stack_00000008->x = pCVar1->x;
      in_stack_00000008->y = pCVar1->y;
      in_stack_00000008->z = pCVar1->z;
    }
    return 1;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_1c,DAT_00822d00
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  return 1;
}
