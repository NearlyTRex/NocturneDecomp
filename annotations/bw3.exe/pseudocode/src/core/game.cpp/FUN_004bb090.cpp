// Name: core_game.cpp_FUN_004bb090
// Address: 004bb090
// Address Range: [[004bb090, 004bb0f6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bb090(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004bb090(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)

{
  int bone_index_00;
  CSkeleton *pCVar1;
  
  *(float *)(&model_instance->field_0x514 + bone_index * 4) =
       *(float *)(&model_instance->field_0x514 + bone_index * 4) * scale_factor;
  bone_index_00 = 0;
  pCVar1 = skeleton;
  if (0 < *(int *)&skeleton->field_0x1de78) {
    do {
      if (bone_index == *(int *)&pCVar1->field_0x1de9c) {
        core_game_cpp_FUN_004bb090(model_instance,skeleton,scale_factor,bone_index_00);
      }
      bone_index_00 = bone_index_00 + 1;
      pCVar1 = (CSkeleton *)&pCVar1->field_0x24;
    } while (bone_index_00 < *(int *)&skeleton->field_0x1de78);
  }
  return;
}
