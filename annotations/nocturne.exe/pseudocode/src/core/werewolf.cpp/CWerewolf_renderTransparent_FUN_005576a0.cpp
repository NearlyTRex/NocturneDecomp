// Name: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005576a0
// Address: 005576a0
// Address Range: [[005576a0, 005577f5]]
// Convention: unknown
// Signature: int core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005576a0(CWerewolf *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005576a0(CWerewolf *param_1)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_50;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar4 = 0;
  if (((param_1->base).base.was_rendered_opaque == 0) || ((param_1->base).pool_me != 0)) {
    return 0;
  }
  if (1.0 < param_1->eye_glow_phase) {
    param_1->eye_glow_phase = param_1->eye_glow_phase + -1.0f;
  }
  if (param_1->eye_glow_phase <= (float)0.80000000000000004) {
    if ((param_1->base).base.was_rendered_opaque != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)param_1);
      pCVar2 = (param_1->base).base.model.bone_transform.bone_world_matrices +
               param_1->bone_indices[4];
      pCVar3 = &local_50;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_50,&local_14);
      core_xform_cpp_getTranslation_FUN_0055bc00(&local_50,&local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,(CVector3f *)&DAT_02dd1184,&local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&local_14,(CVector3f *)0x0);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(param_1,&CVector3f_02de0774);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(param_1,&CVector3f_02de0780);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)param_1);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260((CCharacter *)param_1);
    return (param_1->base).base.was_rendered_opaque;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260((CCharacter *)param_1);
  return iVar1;
}
