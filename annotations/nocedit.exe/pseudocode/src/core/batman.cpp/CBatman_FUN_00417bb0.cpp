// Name: core_batman.cpp_CBatman_FUN_00417bb0
// Address: 00417bb0
// Address Range: [[00417bb0, 00417ca8]]
// Convention: __cdecl
// Signature: int core_batman.cpp_CBatman_FUN_00417bb0(CBatman * this_ptr)

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_FUN_00417bb0(CBatman *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar2 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_1c,INT_008227b8);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 0x84)] != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_28,INT_008227dc);
    if (in_stack_00000008 + 1 != pCVar1) {
      in_stack_00000008[1].x = pCVar1->x;
      in_stack_00000008[1].y = pCVar1->y;
      in_stack_00000008[1].z = pCVar1->z;
    }
    iVar2 = 2;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 0x70)] == 0) {
    return iVar2;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_34,DAT_008227e4);
  pCVar3 = in_stack_00000008 + iVar2;
  if (pCVar3 != pCVar1) {
    pCVar3->x = pCVar1->x;
    pCVar3->y = pCVar1->y;
    pCVar3->z = pCVar1->z;
  }
  return iVar2 + 1;
}
