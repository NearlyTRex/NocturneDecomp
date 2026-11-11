// Name: core_game.cpp_scaleBoneRecursive_FUN_004b9060
// Address: 004b9060
// Address Range: [[004b9060, 004b90c6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004b9060(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)

#include "nocturne.h"

void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004b9060(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)

{
  int bone_index_00;
  CSkeleton *pCVar1;
  
  model_instance->rest_bone_scales[bone_index] =
       model_instance->rest_bone_scales[bone_index] * scale_factor;
  bone_index_00 = 0;
  pCVar1 = skeleton;
  if (0 < skeleton->bone_count) {
    do {
      if (bone_index == pCVar1->bone_list[0].parent_index) {
        core_game_cpp_scaleBoneRecursive_FUN_004b9060
                  (model_instance,skeleton,scale_factor,bone_index_00);
      }
      bone_index_00 = bone_index_00 + 1;
      pCVar1 = (CSkeleton *)((pCVar1->motion_list).state_names[1] + 2);
    } while (bone_index_00 < skeleton->bone_count);
  }
  return;
}
