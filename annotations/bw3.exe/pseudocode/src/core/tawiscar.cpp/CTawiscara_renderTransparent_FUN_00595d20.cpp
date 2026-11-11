// Name: core_tawiscar.cpp_CTawiscara_renderTransparent_FUN_00595d20
// Address: 00595d20
// Address Range: [[00595d20, 00595e89]]
// Convention: __cdecl
// Signature: int __cdecl core_tawiscar_cpp_CTawiscara_renderTransparent_FUN_00595d20(CTawiscara *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tawiscar_cpp_CTawiscara_renderTransparent_FUN_00595d20(CTawiscara *this_ptr)

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
    this_ptr->eye_glow_phase = this_ptr->eye_glow_phase + _DAT_005d93ad;
  }
  if (this_ptr->eye_glow_phase <= (float)_DAT_005d93b1) {
    if ((this_ptr->base).base.was_rendered_opaque != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      pCVar2 = (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               this_ptr->bone_indices[4];
      puVar3 = auStack_68;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(auStack_68);
      CStack_2c.x = fStack_20;
      *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) = afStack_1c[(uint)bVar4 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_xform_cpp_FUN_00584450(auStack_68);
      translation = &CStack_38;
      CStack_38.x = afStack_1c[2];
      *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) = afStack_1c[(uint)bVar4 * -2 + 3];
      *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,(CVector3f *)&DAT_02cfd900,translation);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&CStack_2c,(CVector3f *)0x0);
      unkafter_tawiscar_cpp_FUN_00595760(this_ptr,&DAT_02d24a54);
      unkafter_tawiscar_cpp_FUN_00595760(this_ptr,&DAT_02d24a60);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510((CCharacter *)this_ptr);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510((CCharacter *)this_ptr);
  return iVar1;
}
