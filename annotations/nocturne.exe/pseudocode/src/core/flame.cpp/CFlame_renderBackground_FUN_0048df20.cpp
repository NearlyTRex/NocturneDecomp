// Name: core_flame.cpp_CFlame_renderBackground_FUN_0048df20
// Address: 0048df20
// Address Range: [[0048df20, 0048e096]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_0048df20(CFlame *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_0048df20(CFlame *this_ptr,int layer_flag)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  CBoundingBox3D *this_ptr_01;
  CDemonActor *pCVar5;
  int iVar6;
  CBoundingBox3D local_38;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  this_ptr_00 = DAT_005ae704;
  this_ptr->render_corona = 0;
  this_ptr->do_visibility_check = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr_00);
  if ((iVar4 == 0) && (layer_flag != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_38);
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    this_ptr->is_visible = iVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    if ((this_ptr->is_visible != 0) &&
       (((fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
         fVar3 = (this_ptr->flame_size).z, 1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)
         && (0.0 < this_ptr->globe_scalar)) && (this_ptr->which_flame == 0)))) {
      iVar4 = 0;
      iStack_14 = 0;
      for (iVar6 = 0; iVar6 < g_CDemonSet_PTR_005be368->actor_count; iVar6 = iVar6 + 1) {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar4),
                            g_CFlameActorType_01c70618.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          fStack_20 = (this_ptr->base).location.position.x - (pCVar5->location).position.x;
          fStack_1c = (this_ptr->base).location.position.y - (pCVar5->location).position.y;
          fStack_18 = (this_ptr->base).location.position.z - (pCVar5->location).position.z;
          if ((SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) <
               (float)5) && (pCVar5[1].prev_actor == (CDemonActor *)0x1)) {
            return;
          }
        }
        iVar4 = iVar4 + 4;
      }
      if (iStack_14 == 0) {
        this_ptr->render_corona = 1;
        return;
      }
    }
  }
  return;
}
