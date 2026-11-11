// Name: core_npc.cpp_CNPC_renderTransparent_FUN_005095f0
// Address: 005095f0
// Address Range: [[005095f0, 005097fc]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_renderTransparent_FUN_005095f0(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_npc_cpp_CNPC_renderTransparent_FUN_005095f0(CNPC *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_01;
  int iVar3;
  CNPC *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint local_40 [6];
  uint local_28 [6];
  
  bVar7 = 0;
  if (((this_ptr->fade_state != -1) || ((this_ptr->base).is_spectral != 0)) ||
     ((this_ptr->base).additive != 0)) {
    if (((this_ptr->base).is_spectral != 0) &&
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"heroCanSee"), iVar3 == 0)) {
      return 0;
    }
    if (this_ptr->pool_me == 0) {
      if (0.0 < this_ptr->fade_timer) {
        if (this_ptr->fade_state == 0) {
          fVar8 = ((float10)this_ptr->fade_timer / (float10)this_ptr->fade_time) *
                  (float10)_DAT_005cb5d0;
        }
        else {
          fVar8 = ((float10)1 - (float10)this_ptr->fade_timer / (float10)this_ptr->fade_time) *
                  (float10)_DAT_005cb5d8;
        }
        round();
        this_ptr->fade_alpha = (int)ROUND(fVar8);
        iVar3 = 0;
        if (0 < (this_ptr->base).cloth_list.count) {
          fVar1 = (float)_DAT_005cb5e0;
          fVar2 = (float)_DAT_005cb5e8;
          pCVar4 = this_ptr;
          do {
            iVar3 = iVar3 + 1;
            (pCVar4->base).cloth_list.cloths[0]->weight =
                 ((float)this_ptr->fade_alpha + fVar2) * fVar1;
            pCVar4 = (CNPC *)((pCVar4->base).base.actor_name + 4);
          } while (iVar3 < (this_ptr->base).cloth_list.count);
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
      puVar5 = local_28;
      puVar6 = local_40;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = core_box_cpp_FUN_0041daf0(local_40);
      this_ptr_01 = DAT_005f2afc;
      if (iVar3 != 0) {
        iVar3 = this_ptr->fade_alpha;
        (this_ptr->base).was_rendered_opaque = 1;
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar3);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
                  (DAT_005f2afc,(uint)((this_ptr->base).additive != 0));
        engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
        this_ptr_00 = &(this_ptr->base).model;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                  (this_ptr_00,-1,0x2e7,1,0);
        engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
        if (_DAT_01d8e40c != 0) {
          core_motion_cpp_FUN_004fcdc0(&this_ptr_00->base,(CDemonActor *)this_ptr);
        }
      }
      core_cloth_cpp_CClothList_render_FUN_0043fc50
                (&(this_ptr->base).cloth_list,(CDeformableModelInstance *)0x0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
      return (this_ptr->base).was_rendered_opaque;
    }
  }
  return 0;
}
