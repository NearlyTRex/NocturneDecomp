// Name: core_flame.cpp_CFlame_renderBackground_FUN_004caa80
// Address: 004caa80
// Address Range: [[004caa80, 004cabf2]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004caa80(CFlame *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004caa80(CFlame *this_ptr,int layer_flag)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  CBoundingBox3D *this_ptr_01;
  CFlame *pCVar5;
  int iVar5;
  CBoundingBox3D CStack_38;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  this_ptr_00 = g_CDemonRendererPtr2;
  this_ptr->render_corona = 0;
  this_ptr->do_visibility_check = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  if ((iVar4 == 0) && (layer_flag != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_38);
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    this_ptr->is_visible = iVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if ((this_ptr->is_visible != 0) &&
       (((fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
         fVar3 = (this_ptr->flame_size).z, 1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)
         && (0.0 < this_ptr->globe_scalar)) && (this_ptr->which_flame == 0)))) {
      iVar4 = 0;
      iStack_14 = 0;
      for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
        pCVar5 = (CFlame *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar4),
                            g_CFlameClassInfo.name_hash);
        if (pCVar5 != (CFlame *)0x0) {
          fStack_20 = (this_ptr->base).location.position.x - (pCVar5->base).location.position.x;
          fStack_1c = (this_ptr->base).location.position.y - (pCVar5->base).location.position.y;
          fStack_18 = (this_ptr->base).location.position.z - (pCVar5->base).location.position.z;
          if ((SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) <
               (float)5) && (pCVar5->render_corona == 1)) {
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
