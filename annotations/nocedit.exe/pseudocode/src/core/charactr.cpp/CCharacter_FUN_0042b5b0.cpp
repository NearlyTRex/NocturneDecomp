// Name: core_charactr.cpp_CCharacter_FUN_0042b5b0
// Address: 0042b5b0
// Address Range: [[0042b5b0, 0042b662]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b5b0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b5b0(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  CCharacter *pCVar3;
  CVector3f *in_stack_0000000c;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  if ((*(int *)(this_ptr->cloth_data + 0x478) < 0x32) &&
     (((in_stack_00000018 != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base_actor,"CHero"),
       iVar1 == 0)) && ((this_ptr->model).model_name[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
                      (&this_ptr->model,in_stack_0000000c);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      do {
        if (iVar1 == *(int *)(pCVar3->cloth_data + 0x488)) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base_actor).actor_name + 0x18);
      } while (iVar2 < *(int *)(this_ptr->cloth_data + 0x478));
    }
    *(int *)(this_ptr->cloth_data + 0x47c) = in_stack_00000018;
    *(uint *)(this_ptr->cloth_data + 0x480) = in_stack_0000001c;
    core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model);
    core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
    (this_ptr->base_actor).is_transparent = 1;
    return;
  }
  return;
}
