// Name: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_0058d670
// Address: 0058d670
// Address Range: [[0058d670, 0058d7d9]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_0058d670(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_0058d670(CWerewolf *this_ptr)

{
  int iVar1;
  CVector3f *unaff_ESI;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStackY_1020 [1001];
  CVector3f *translation;
  CMatrix3x4f CStack_68;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [2];
  CVector3f CStack_14;
  
  bVar4 = 0;
  if (((this_ptr->base).base.was_rendered_opaque == 0) || ((this_ptr->base).pool_me != 0)) {
    return 0;
  }
  if (1.0 < this_ptr->eye_glow_phase) {
    this_ptr->eye_glow_phase = this_ptr->eye_glow_phase + _DAT_005ee756;
  }
  if (this_ptr->eye_glow_phase <= (float)_DAT_005ee75a) {
    if ((this_ptr->base).base.was_rendered_opaque != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
      pCVar2 = (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               this_ptr->bone_indices[4];
      pCVar3 = &CStack_68;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3->m[0].w = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&CStack_68,unaff_ESI);
      CStack_2c.x = fStack_20;
      *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) = afStack_1c[(uint)bVar4 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_xform_cpp_getTranslation_FUN_00592720(&CStack_68,&CStack_14);
      translation = &CStack_38;
      CStack_38.x = CStack_14.x;
      *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_14 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,(CVector3f *)&DAT_0265370c,translation);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&CStack_2c,(CVector3f *)0x0);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0(this_ptr,(CVector3f *)&DAT_02662d04);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0(this_ptr,(CVector3f *)&DAT_02662d10);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
  return iVar1;
}
