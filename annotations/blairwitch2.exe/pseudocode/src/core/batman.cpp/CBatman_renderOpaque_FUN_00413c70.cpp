// Name: core_batman.cpp_CBatman_renderOpaque_FUN_00413c70
// Address: 00413c70
// Address Range: [[00413c70, 00413e51]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_00413c70(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_00413c70(CBatman *this_ptr)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if (((this_ptr->mist_state != 2) &&
      (((iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
        iVar2 == 0 || (this_ptr->mist_state == 0)) && (iVar1 == 0)))) &&
     ((this_ptr->base).base.render_active == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar3 = auStack_2c;
    puVar4 = auStack_44;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_44);
    if (iVar1 != 0) {
      iVar2 = this_ptr->mist_state;
      (this_ptr->base).base.was_rendered_opaque = 1;
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0((CCharacter *)this_ptr);
      }
      else {
        if (iVar2 == 1) {
          fStack_48 = (1.0 - this_ptr->vanish_timer) / 0x3F800000;
        }
        else {
          fStack_48 = ((float)_DAT_005cbb5e - this_ptr->vanish_timer) / 0x3F800000;
          if (fStack_48 < 0.0) {
            fStack_48 = 0.0;
          }
        }
        if (0.0 < (double)fStack_48) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
          engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0
                    (DAT_0060b280,fStack_48);
          engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
          if ((double)fStack_48 <= _DAT_005cbb5e) {
            render_flags = 0x267;
          }
          else {
            render_flags = 0x2e7;
          }
          core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                    (&(this_ptr->base).base.model,-1,render_flags,1,0);
          engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
        }
      }
      if ((_DAT_01d1cdc8 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
         iVar2 == 0)) {
        core_motion_cpp_FUN_005042e0(&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
