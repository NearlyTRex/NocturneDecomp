// Name: core_flame.cpp_CFlame_renderBackground_FUN_004a6a50
// Address: 004a6a50
// Address Range: [[004a6a50, 004a6c11]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004a6a50(CFlame *this_ptr,int layer_flag)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004a6a50(CFlame *this_ptr,int layer_flag)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_1020 [1004];
  uint auStack_68 [6];
  uint auStack_50 [6];
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  int iStack_20;
  CLocation *pCStack_1c;
  int iStack_18;
  
  this_ptr_00 = DAT_005f2afc;
  bVar8 = 0;
  this_ptr->render_corona = 0;
  this_ptr->do_visibility_check = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr_00);
  if ((iVar4 == 0) && (layer_flag != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar6 = auStack_50;
    puVar7 = auStack_68;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    iVar4 = core_box_cpp_FUN_0041daf0(auStack_68);
    this_ptr->is_visible = iVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    if ((((this_ptr->is_visible != 0) &&
         (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
         fVar3 = (this_ptr->flame_size).z, 1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)
         )) && (0.0 < this_ptr->globe_scalar)) && (this_ptr->which_flame == FLAME_TYPE_TORCH)) {
      pCStack_1c = &(this_ptr->base).location;
      iVar4 = 0;
      iStack_20 = 0;
      for (iStack_18 = 0; iStack_18 < g_CDemonSetPtr->actor_count; iStack_18 = iStack_18 + 1) {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)((int)g_CDemonSetPtr->actors + iVar4),
                           g_CFlameClassInfo.name_hash);
        if (iVar5 != 0) {
          afStack_34[2] = (pCStack_1c->position).x - *(float *)(iVar5 + 0x20);
          afStack_34[3] = (pCStack_1c->position).y - *(float *)(iVar5 + 0x24);
          fStack_24 = (pCStack_1c->position).z - *(float *)(iVar5 + 0x28);
          fStack_38 = afStack_34[2];
          *(float *)((int)afStack_34 + (uint)bVar8 * 0xfffffff8) =
               afStack_34[(uint)bVar8 * 0xfffffffe + 3];
          afStack_34[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1] =
               afStack_34[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 4];
          if ((SQRT(afStack_34[1] * afStack_34[1] +
                    fStack_38 * fStack_38 + afStack_34[0] * afStack_34[0]) < (float)_DAT_005c0bf4)
             && (*(int *)(iVar5 + 0x2a0) == 1)) {
            return;
          }
        }
        iVar4 = iVar4 + 4;
      }
      if (iStack_20 == 0) {
        this_ptr->render_corona = 1;
        return;
      }
    }
  }
  return;
}
