// Name: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
// Address: 0042e5d0
// MANUAL RECONSTRUCTION
// Address Range: [[0042e5d0, 0042e665]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

{
  SLayerAction *pSVar3;

  if (0x13 < this_ptr->layer_action_count) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 3906;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::addLayerAction - too many");
  }
  pSVar3 = this_ptr->layer_actions + this_ptr->layer_action_count;
  this_ptr->layer_action_count = this_ptr->layer_action_count + 1;
  pSVar3->from_bone_index = from_bone_index;
  pSVar3->to_bone_index = to_bone_index;
  strcpy(pSVar3->motion_name,motion_name);
  pSVar3->direction = direction;
  return;
}
