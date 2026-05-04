// Name: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005f1820
// Address: 005f1820
// MANUAL RECONSTRUCTION
// Address Range: [[005f1820, 005f1975] [03fc3b28, 03fc3b80]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820(CWerewolf *this_ptr)

#include "nocturne.h"

int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820(CWerewolf *this_ptr)

{
  CMatrix3x4f *pCVar1;
  int iVar2;
  CMatrix3x4f local_50;
  CVector3f local_20;
  CVector3f local_14;
  
  if (((this_ptr->base).base.was_rendered_opaque == 0) || ((this_ptr->base).pool_me != 0)) {
    return 0;
  }
  if (1.0 < this_ptr->eye_glow_phase) {
    this_ptr->eye_glow_phase = this_ptr->eye_glow_phase + -1.0f;
  }
  if (this_ptr->eye_glow_phase <= (float)0.80000000000000004) {
    if ((this_ptr->base).base.was_rendered_opaque != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      pCVar1 = (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               this_ptr->bone_indices[4];
      local_50 = *pCVar1;
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_50,&local_14);
      core_xform_cpp_getTranslation_FUN_005f6110(&local_50,&local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&g_ZeroVector.f,&local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_14,(CVector3f *)0x0);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005f1230(this_ptr,(CVector3f *)&FLOAT_03f96b44);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005f1230(this_ptr,(CVector3f *)&FLOAT_03f96b50);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0((CCharacter *)this_ptr);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0((CCharacter *)this_ptr);
  return iVar2;
}
