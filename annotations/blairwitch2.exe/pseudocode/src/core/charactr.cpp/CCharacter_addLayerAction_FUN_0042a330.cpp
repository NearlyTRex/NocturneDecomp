// Name: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330
// Address: 0042a330
// Address Range: [[0042a330, 0042a3c5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

{
  SLayerAction SVar1;
  int iVar2;
  SLayerAction *pSVar3;
  SLayerAction *pSVar4;
  
  if (0x15 < this_ptr->layer_action_count) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x11a0;
    core_main_c_FUN_004e4500("CCharacter::addLayerAction - too many");
  }
  iVar2 = this_ptr->layer_action_count;
  this_ptr->layer_action_count = this_ptr->layer_action_count + 1;
  pSVar3 = this_ptr->layer_actions + iVar2 * 0x38;
  *(int *)pSVar3 = from_bone_index;
  pSVar4 = pSVar3 + 8;
  *(int *)(pSVar3 + 4) = to_bone_index;
  do {
    SVar1 = (SLayerAction)*motion_name;
    *pSVar4 = SVar1;
    if (SVar1 == (SLayerAction)0x0) break;
    SVar1 = *(SLayerAction *)(motion_name + 1);
    motion_name = motion_name + 2;
    pSVar4[1] = SVar1;
    pSVar4 = pSVar4 + 2;
  } while (SVar1 != (SLayerAction)0x0);
  *(int *)(pSVar3 + 0x28) = direction;
  return;
}
