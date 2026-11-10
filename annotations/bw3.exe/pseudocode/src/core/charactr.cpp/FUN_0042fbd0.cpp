// Name: core_charactr.cpp_FUN_0042fbd0
// Address: 0042fbd0
// Address Range: [[0042fbd0, 0042fc8c]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042fbd0(CCharacter *param_1,CVector3f *param_2,undefined4 param_3,EFlameType param_4,float param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042fbd0(CCharacter *param_1,CVector3f *param_2,uint param_3,EFlameType param_4,float param_5,int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((param_1->fire_count < 0x32) &&
     (((param_6 != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(&param_1->base,"CHero"), iVar1 == 0))
      && ((param_1->model).model_name[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0054f480
                      (&param_1->model,param_2);
    iVar2 = 0;
    pCVar3 = param_1;
    if (0 < param_1->fire_count) {
      do {
        if (iVar1 == *(int *)&pCVar3->fires[0].field_0x4) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base).actor_name + 0x18);
      } while (iVar2 < param_1->fire_count);
    }
    param_1->pending_flame_type = param_4;
    param_1->flame_scale = param_5;
    *(uint *)&param_1->field_0x3260 = param_7;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         (&param_1->model);
    core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(param_1,skeleton,iVar1);
    (param_1->base).is_transparent = 1;
    return;
  }
  return;
}
