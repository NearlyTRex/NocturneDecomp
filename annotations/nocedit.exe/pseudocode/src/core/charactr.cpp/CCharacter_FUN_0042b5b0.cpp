// Name: core_charactr.cpp_CCharacter_FUN_0042b5b0
// Address: 0042b5b0
// Address Range: [[0042b5b0, 0042b662]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042b5b0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b5b0(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  CCharacter *pCVar3;
  CVector3f *in_stack_00000008;
  int in_stack_00000010;
  float in_stack_00000014;
  int in_stack_00000018;
  
  if ((this_ptr->fire_count < 0x32) &&
     (((in_stack_00000018 != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CHero"), iVar1 == 0)
       ) && ((this_ptr->model).model_name[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
                      (&this_ptr->model,in_stack_00000008);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        if (iVar1 == *(int *)(pCVar3->field65_0x2f1c[0].unk + 4)) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base).actor_name + 0x18);
      } while (iVar2 < this_ptr->fire_count);
    }
    this_ptr->field63_0x2f14 = in_stack_00000010;
    this_ptr->field64_0x2f18 = in_stack_00000014;
    core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model);
    core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
    (this_ptr->base).is_transparent = 1;
    return;
  }
  return;
}
