// Name: core_game.cpp_scaleBoneRecursive_FUN_004dda80
// Address: 004dda80
// Address Range: [[004dda80, 004ddae6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004dda80(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)

#include "nocturne.h"

void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004dda80(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)

{
  int bone_index_00;
  CSkeleton *pCVar1;
  
  model_instance->rest_pose_data[bone_index] =
       model_instance->rest_pose_data[bone_index] * scale_factor;
  bone_index_00 = 0;
  pCVar1 = skeleton;
  if (0 < skeleton->bone_count) {
    do {
      if (bone_index == pCVar1->bone_list[0].parent_index) {
        core_game_cpp_scaleBoneRecursive_FUN_004dda80
                  (model_instance,skeleton,scale_factor,bone_index_00);
      }
      bone_index_00 = bone_index_00 + 1;
      pCVar1 = (CSkeleton *)((pCVar1->motion_list).state_names[1] + 2);
    } while (bone_index_00 < skeleton->bone_count);
  }
  return;
}
