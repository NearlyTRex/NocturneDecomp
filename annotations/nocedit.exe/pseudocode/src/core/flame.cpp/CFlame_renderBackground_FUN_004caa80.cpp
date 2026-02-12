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
  CDemonActor *pCVar5;
  int iVar6;
  
  this_ptr_00 = g_CDemonRendererPtr2;
  this_ptr->render_corona = 0;
  this_ptr->do_visibility_check = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  if ((iVar4 == 0) && (layer_flag != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffc8);
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    this_ptr->is_visible = iVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if ((this_ptr->is_visible != 0) &&
       (((fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
         fVar3 = (this_ptr->flame_size).z, 1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)
         && (0.0 < this_ptr->globe_scalar)) && (this_ptr->which_flame == 0)))) {
      iVar4 = 0;
      iVar6 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
          this_ptr->render_corona = 1;
          return;
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4),
                            g_CFlameClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) &&
            (fVar1 = (this_ptr->base).location.position.x - (pCVar5->location).position.x,
            fVar2 = (this_ptr->base).location.position.y - (pCVar5->location).position.y,
            fVar3 = (this_ptr->base).location.position.z - (pCVar5->location).position.z,
            SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < (float)5)) &&
           (pCVar5[1].unk14 == 1)) break;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
      }
      return;
    }
  }
  return;
}
