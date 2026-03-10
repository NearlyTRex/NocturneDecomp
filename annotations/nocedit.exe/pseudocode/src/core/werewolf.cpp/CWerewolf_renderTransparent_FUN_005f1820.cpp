// Name: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005f1820
// Address: 005f1820
// Address Range: [[005f1820, 005f1975]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820(CWerewolf *this_ptr)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_50;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar4 = 0;
  if (((this_ptr->base).base.was_rendered_opaque == 0) || ((this_ptr->base).pool_me != 0)) {
    return 0;
  }
  if (1.0 < this_ptr->eye_glow_phase) {
    this_ptr->eye_glow_phase = this_ptr->eye_glow_phase + -1.0f;
  }
  if (this_ptr->eye_glow_phase <= (float)0.80000000000000004) {
    if ((this_ptr->base).base.was_rendered_opaque != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      pCVar2 = (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               this_ptr->bone_indices[4];
      pCVar3 = &local_50;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_50,&local_14);
      core_xform_cpp_getTranslation_FUN_005f6110(&local_50,&local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&g_ZeroVector.i,(CVector3i *)&local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&local_14,(CVector3i *)0x0);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005f1230(this_ptr,(CVector3f *)&FLOAT_03f96b44);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005f1230(this_ptr,(CVector3f *)&FLOAT_03f96b50);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0((CCharacter *)this_ptr);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0((CCharacter *)this_ptr);
  return iVar1;
}
