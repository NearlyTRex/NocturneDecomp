// Name: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005b11c0
// Address: 005b11c0
// Address Range: [[005b11c0, 005b1329]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005b11c0(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005b11c0(CWerewolf *this_ptr)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1020 [1001];
  CVector3f *translation;
  uint auStack_68 [12];
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [5];
  
  bVar4 = 0;
  if (((this_ptr->base).base.was_rendered_opaque == 0) || ((this_ptr->base).pool_me != 0)) {
    return 0;
  }
  if (1.0 < this_ptr->eye_glow_phase) {
    this_ptr->eye_glow_phase = this_ptr->eye_glow_phase + _DAT_005f9b2e;
  }
  if (this_ptr->eye_glow_phase <= (float)_DAT_005f9b32) {
    if ((this_ptr->base).base.was_rendered_opaque != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      pCVar2 = (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               this_ptr->bone_indices[4];
      puVar3 = auStack_68;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(auStack_68);
      CStack_2c.x = fStack_20;
      *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) = afStack_1c[(uint)bVar4 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_xform_cpp_FUN_005b6270(auStack_68);
      translation = &CStack_38;
      CStack_38.x = afStack_1c[2];
      *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) = afStack_1c[(uint)bVar4 * -2 + 3];
      *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,(CVector3f *)&DAT_02c8af28,translation);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&CStack_2c,(CVector3f *)0x0);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005b0c00(this_ptr,(CVector3f *)&DAT_02c9a544);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005b0c00(this_ptr,(CVector3f *)&DAT_02c9a550);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
  return iVar1;
}
