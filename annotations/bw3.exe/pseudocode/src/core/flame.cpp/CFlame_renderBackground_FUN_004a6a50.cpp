// Name: core_flame.cpp_CFlame_renderBackground_FUN_004a6a50
// Address: 004a6a50
// Address Range: [[004a6a50, 004a6c11]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004a6a50(CFlame *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004a6a50(CFlame *this_ptr,int layer_flag)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  CDemonActor *pCVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_1018 [1002];
  CBoundingBox3D *this_ptr_01;
  int in_stack_ffffff9c;
  CBoundingBox3D CStack_60;
  uint auStack_48 [6];
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  int iStack_18;
  CLocation *pCStack_14;
  
  this_ptr_00 = g_CDemonRenderer_PTR_005f2afc;
  bVar9 = 0;
  this_ptr->render_corona = 0;
  this_ptr->do_visibility_check = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr_00);
  if ((iVar4 == 0) && (layer_flag != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    this_ptr_01 = &CStack_60;
    puVar7 = auStack_48;
    puVar8 = (uint *)&stack0xffffff98;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_01,in_stack_ffffff9c);
    this_ptr->is_visible = iVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    if ((((this_ptr->is_visible != 0) &&
         (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
         fVar3 = (this_ptr->flame_size).z, 1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)
         )) && (0.0 < this_ptr->globe_scalar)) && (this_ptr->which_flame == FLAME_TYPE_TORCH)) {
      pCStack_14 = &(this_ptr->base).location;
      iVar6 = 0;
      iStack_18 = 0;
      for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar6),
                            g_CFlameClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          afStack_2c[2] = (pCStack_14->position).x - (pCVar5->location).position.x;
          afStack_2c[3] = (pCStack_14->position).y - (pCVar5->location).position.y;
          fStack_1c = (pCStack_14->position).z - (pCVar5->location).position.z;
          fStack_30 = afStack_2c[2];
          afStack_2c[(uint)bVar9 * -2] = afStack_2c[(uint)bVar9 * -2 + 3];
          afStack_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          if ((SQRT(afStack_2c[1] * afStack_2c[1] +
                    fStack_30 * fStack_30 + afStack_2c[0] * afStack_2c[0]) <
               (float)5) && (pCVar5[1].render_needs_update == 1)) {
            return;
          }
        }
        iVar6 = iVar6 + 4;
      }
      if (iStack_18 == 0) {
        this_ptr->render_corona = 1;
        return;
      }
    }
  }
  return;
}
