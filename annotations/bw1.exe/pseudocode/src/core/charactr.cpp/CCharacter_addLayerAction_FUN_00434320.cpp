// Name: core_charactr.cpp_CCharacter_addLayerAction_FUN_00434320
// Address: 00434320
// Address Range: [[00434320, 004343b5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_00434320(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

{
  char cVar1;
  int iVar2;
  SLayerAction *pSVar3;
  char *pcVar4;
  
  if (0x15 < this_ptr->layer_action_count) {
    _DAT_01d1d400 = "..\\core\\charactr.cpp";
    _DAT_01d1d404 = 0x117a;
    core_main_c_FUN_005030e0("CCharacter::addLayerAction - too many");
  }
  iVar2 = this_ptr->layer_action_count;
  this_ptr->layer_action_count = this_ptr->layer_action_count + 1;
  pSVar3 = this_ptr->layer_actions + iVar2;
  pSVar3->from_bone_index = from_bone_index;
  pcVar4 = pSVar3->motion_name;
  pSVar3->to_bone_index = to_bone_index;
  do {
    cVar1 = *motion_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = motion_name[1];
    motion_name = motion_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pSVar3->direction = direction;
  return;
}
