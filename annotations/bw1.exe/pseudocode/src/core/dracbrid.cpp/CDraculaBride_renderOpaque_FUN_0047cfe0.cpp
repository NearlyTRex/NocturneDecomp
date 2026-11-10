// Name: core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0
// Address: 0047cfe0
// Address Range: [[0047cfe0, 0047d1d3]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_0047cfe0(CDraculaBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_0047cfe0(CDraculaBride *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint render_flags;
  float fStack_48;
  uint auStack_44 [6];
  uint auStack_2c [7];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if (this_ptr->mist_state != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((((iVar2 == 0) || (this_ptr->mist_state == 0)) && (iVar1 == 0)) &&
       ((this_ptr->base).base.render_active == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
      puVar3 = auStack_2c;
      puVar4 = auStack_44;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = core_box_cpp_FUN_004207b0(auStack_44);
      if (iVar1 != 0) {
        iVar2 = this_ptr->mist_state;
        (this_ptr->base).base.was_rendered_opaque = 1;
        if (iVar2 == 0) {
          if (this_ptr->exploded == 0) {
            core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960((CCharacter *)this_ptr);
          }
        }
        else {
          if (iVar2 == 1) {
            fStack_48 = (1.0 - this_ptr->vanish_timer) / 0x3F800000;
          }
          else {
            fStack_48 = ((float)_DAT_005daebd - this_ptr->vanish_timer) / 0x3F800000;
            if (fStack_48 < 0.0) {
              fStack_48 = 0.0;
            }
          }
          if (0.0 < (double)fStack_48) {
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
            engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
                      (DAT_00612560,fStack_48);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
            if ((double)fStack_48 <= _DAT_005daebd) {
              render_flags = 0x267;
            }
            else {
              render_flags = 0x2e7;
            }
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                      (&(this_ptr->base).base.model,-1,render_flags,1,0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
          }
        }
        if (_DAT_01d39d34 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
          if (iVar2 == 0) {
            core_motion_cpp_FUN_005254b0(&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
            (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
          }
        }
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      return iVar1;
    }
  }
  return 0;
}
