// Name: core_larva.cpp_FUN_00503c00
// Address: 00503c00
// Address Range: [[00503c00, 00503c48]]
// Convention: __cdecl
// Signature: int __cdecl core_larva_cpp_FUN_00503c00(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_larva.cpp_FUN_00503c00(uint param_1, uint param_2)
    */

int __cdecl core_larva_cpp_FUN_00503c00(void)

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
