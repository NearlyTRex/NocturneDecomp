// Name: core_charactr.cpp_CCharacter_renderPhantomEyes_FUN_0042b620
// Address: 0042b620
// Address Range: [[0042b620, 0042b753]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderPhantomEyes_FUN_0042b620(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_renderPhantomEyes_FUN_0042b620(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *unaff_ESI;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1020 [1001];
  CDemonRenderer *this_ptr_00;
  CVector3f *euler_angles;
  CVector3f *translation;
  CMatrix3x4f local_68;
  float local_38;
  float afStack_34 [2];
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar4 = 0;
  if (this_ptr->eye_glow_enabled == 0) {
    return;
  }
  pCVar2 = (this_ptr->model).bone_transform.bone_model_matrices + this_ptr->eye_glow_bone;
  pfVar3 = (float *)&local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)&pCVar2->m[0].x;
    pfVar3 = pfVar3 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_68,unaff_ESI);
  local_2c.x = local_38;
  *(float *)((int)&local_2c + (uint)bVar4 * -8 + 4) = afStack_34[(uint)bVar4 * -2];
  *(float *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_xform_cpp_getTranslation_FUN_00592720(&local_68,&local_14);
  translation = &local_20;
  euler_angles = &g_ZeroVector;
  local_20.x = local_14.x;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_14 + (uint)bVar4 * -8 + 4);
  this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (this_ptr_00,euler_angles,translation);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (g_CDemonRenderer_PTR_0060b280,&local_2c,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->eye_glow_left_angles,
             &this_ptr->eye_glow_left_offset);
  core_charactr_cpp_CCharacter_renderEyeGlow_FUN_0042b760(this_ptr,&g_ZeroVector);
  engine_drender_cpp_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->eye_glow_right_angles,
             &this_ptr->eye_glow_right_offset);
  core_charactr_cpp_CCharacter_renderEyeGlow_FUN_0042b760(this_ptr,&g_ZeroVector);
  engine_drender_cpp_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return;
}
