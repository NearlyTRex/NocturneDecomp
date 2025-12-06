// Name: core_charactr.cpp_CCharacter_FUN_0042b110
// Address: 0042b110
// Address Range: [[0042b110, 0042b18e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b110(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b110(CCharacter *this_ptr)

{
  CSkeleton *pCVar1;
  char *pcVar2;
  CCharacter *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(&this_ptr->model);
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    pcVar2 = this_ptr->cloth_data + 0x934;
    pCVar3 = this_ptr;
    do {
      if (((this_ptr->model).part_visibility_flags[*(int *)(pCVar3->cloth_data + 0x484)] != 0) &&
         (pCVar1->bone_list[*(int *)(pCVar3->cloth_data + 0x488)].parent_index != -1)) {
        (**(code **)(*(int *)(pcVar2 + 0x154) + 0xc))();
      }
      pCVar3 = (CCharacter *)((pCVar3->base_actor).actor_name + 0x18);
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 0x2a4;
    } while (iVar4 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  return;
}
