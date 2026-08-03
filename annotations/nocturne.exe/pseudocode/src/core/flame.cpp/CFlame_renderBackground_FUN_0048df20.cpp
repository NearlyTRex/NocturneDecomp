// Name: core_flame.cpp_CFlame_renderBackground_FUN_0048df20
// Address: 0048df20
// Address Range: [[0048df20, 0048e096]]
// Convention: unknown
// Signature: void core_flame_cpp_CFlame_renderBackground_FUN_0048df20(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_flame_cpp_CFlame_renderBackground_FUN_0048df20(CDemonActor *param_1,int param_2)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CBoundingBox3D local_38;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  this_ptr = DAT_005ae704;
  param_1[1].prev_actor = (CDemonActor *)0x0;
  param_1[1].previous_transform_state.dirty_flags = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr);
  if ((iVar1 == 0) && (param_2 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr_00 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_38);
    fVar2 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    param_1[1].previous_transform_state.orientation.vec.y = fVar2;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    if ((param_1[1].previous_transform_state.orientation.vec.y != 0.0) &&
       (((1.0 < SQRT(*(float *)(param_1[1].actor_name + 8) * *(float *)(param_1[1].actor_name + 8) +
                     *(float *)param_1[1].actor_name * *(float *)param_1[1].actor_name +
                     *(float *)(param_1[1].actor_name + 4) * *(float *)(param_1[1].actor_name + 4))
         && (0.0 < param_1[1].orient_matrix.m[2].x)) && (param_1[1].orient_matrix.m[1].z == 0.0))))
    {
      iVar1 = 0;
      iStack_14 = 0;
      for (iVar4 = 0; iVar4 < g_CDemonSet_PTR_005be368->actor_count; iVar4 = iVar4 + 1) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar1),
                            g_CFlameActorType_01c70618.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          fStack_20 = (param_1->location).position.x - (pCVar3->location).position.x;
          fStack_1c = (param_1->location).position.y - (pCVar3->location).position.y;
          fStack_18 = (param_1->location).position.z - (pCVar3->location).position.z;
          if ((SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) <
               (float)5) && (pCVar3[1].prev_actor == (CDemonActor *)0x1)) {
            return;
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (iStack_14 == 0) {
        param_1[1].prev_actor = (CDemonActor *)0x1;
        return;
      }
    }
  }
  return;
}
