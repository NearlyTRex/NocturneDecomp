// Name: core_cow.cpp_FUN_00444c00
// Address: 00444c00
// Address Range: [[00444c00, 00444c4e]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444c00()

#include "nocturne.h"

/* Signature: byte actors_enemy_cow.cpp_FUN_00444c00(uint param_1, uint param_2)
    */

uint core_cow_cpp_FUN_00444c00(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_10,
                      *(int *)(in_stack_00000004 + 0xbebc));
  if (in_stack_00000008 == pCVar1) {
    return 1;
  }
  in_stack_00000008->x = pCVar1->x;
  in_stack_00000008->y = pCVar1->y;
  in_stack_00000008->z = pCVar1->z;
  return 1;
}
