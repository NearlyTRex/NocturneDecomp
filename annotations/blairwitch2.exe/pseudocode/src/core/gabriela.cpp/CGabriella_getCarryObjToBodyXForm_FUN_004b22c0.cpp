// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004b22c0
// Address: 004b22c0
// Address Range: [[004b22c0, 004b27e5]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004b22c0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004b22c0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int unaff_EBP;
  float *pfVar2;
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  int unaff_EDI;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_109c [939];
  CBoundingBox3D *in_stack_fffffe18;
  CMatrix3x4f CStack_1e0;
  CMatrix3x4f CStack_1b0;
  CMatrix3x4f CStack_180;
  float afStack_150 [3];
  float fStack_144;
  float fStack_134;
  float fStack_124;
  CMatrix3x4f CStack_120;
  uint auStack_f0 [4];
  uint auStack_e0 [2];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [4];
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [2];
  CVector3f CStack_18;
  
  bVar7 = 0;
  actor_ptr = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  CStack_18.y = (float)(this_ptr->base).base.carry_hands[hand_index].bone_index;
  fStack_c0 = 0.0;
  fStack_c4 = 0.0;
  fStack_c8 = 0.0;
  afStack_b0[2] = 0.0;
  afStack_b0[1] = 0.0;
  afStack_b0[0] = 0.0;
  CStack_18.z = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,DAT_007bcc84);
  if ((CDemonActor *)CStack_18.z == (CDemonActor *)0x0) goto LAB_004b233f;
  (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,in_stack_fffffe18);
  puVar3 = auStack_f0;
  puVar5 = auStack_e0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  fStack_54 = fStack_d8 + fStack_cc;
  fStack_50 = fStack_d4 + fStack_c8;
  fStack_4c = fStack_d0 + fStack_c4;
  fStack_60 = fStack_d8 + fStack_cc;
  afStack_8c[(uint)bVar7 * -2 + 0xc] = afStack_8c[(uint)bVar7 * -2 + 0xf];
  afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  fStack_6c = fStack_60 * _DAT_005d71fb;
  fStack_68 = fStack_5c * _DAT_005d71fb;
  fStack_64 = fStack_58 * _DAT_005d71fb;
  fStack_48 = fStack_60 * _DAT_005d71fb;
  afStack_8c[(uint)bVar7 * -2 + 0x12] = afStack_8c[(uint)bVar7 * -2 + 9];
  afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  if (afStack_b0 + 2 != afStack_8c + 0x11) {
    afStack_b0[2] = fStack_48;
    afStack_b0[3] = fStack_44;
    fStack_a0 = fStack_40;
  }
  iVar1 = *(int *)(unaff_EDI + 0x7d4);
  if (iVar1 == 2) {
    afStack_b0[3] = fStack_c8;
    goto LAB_004b233f;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      afStack_b0[3] = fStack_c8;
    }
    else {
      _DAT_01d046a0 = "..\\core\\gabriela.cpp";
      _DAT_01d046a4 = 0x944;
      core_main_c_FUN_004e4500("Don't know how to carry light %s",unaff_EDI);
    }
    goto LAB_004b233f;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&CStack_1b0);
    pCVar4 = &CStack_1b0;
LAB_004b2627:
    pCVar6 = &CStack_180;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar6->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&CStack_1e0);
      pCVar4 = &CStack_1e0;
      goto LAB_004b2627;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&CStack_180);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (&CStack_180,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[unaff_EBP].m,&CStack_120
            );
  pCVar4 = &CStack_120;
  pCVar6 = &CStack_180;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar6->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&CStack_180);
  fStack_78 = fStack_b4;
  afStack_8c[(uint)bVar7 * -2 + 6] = afStack_b0[(uint)bVar7 * -2];
  afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (&fStack_c0 != afStack_8c + 5) {
    fStack_c0 = fStack_78;
    uStack_bc = uStack_74;
    uStack_b8 = uStack_70;
  }
  fStack_a0 = fStack_c4 * (float)_DAT_005d720b + fStack_d0 * (float)_DAT_005d7203;
LAB_004b233f:
  if (hand_index == 0) {
    CStack_30.y = (float)hand_index;
    CStack_30.x = -0.4;
    CStack_30.z = (float)hand_index;
    if (&CStack_18 != (CVector3f *)(afStack_8c + 0x17)) {
      CStack_18.y = (float)hand_index;
      CStack_18.z = (float)hand_index;
      CStack_18.x = -0.4;
    }
  }
  else if (hand_index == 1) {
    CStack_9c.y = 0.0;
    CStack_9c.z = 0.0;
    CStack_9c.x = 0.4;
    if (&CStack_18 != &CStack_9c) {
      CStack_18.x = 0.4;
      CStack_18.y = 0.0;
      CStack_18.z = 0.0;
    }
  }
  else {
    CStack_18.y = 0.0;
    CStack_18.x = 0.0;
    CStack_18.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            (&CStack_18,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[unaff_EBP].m);
  core_xform_cpp_FUN_00591c10(afStack_150,&CStack_18,&fStack_c0);
  core_xform_cpp_FUN_00591530(afStack_b0 + 2,afStack_150);
  fStack_90 = fStack_3c;
  afStack_8c[(uint)bVar7 * -2] = afStack_8c[(uint)bVar7 * -2 + 0x15];
  afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
  fStack_24 = CStack_18.x - fStack_90;
  afStack_20[0] = CStack_18.y - afStack_8c[0];
  afStack_20[1] = CStack_18.z - afStack_8c[1];
  afStack_8c[2] = CStack_18.x - fStack_90;
  afStack_8c[(uint)bVar7 * -2 + 3] = afStack_20[(uint)bVar7 * -2];
  afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_20[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_144 = fStack_144 + afStack_8c[2];
  fStack_134 = fStack_134 + afStack_8c[3];
  fStack_124 = fStack_124 + fStack_7c;
  pfVar2 = afStack_150;
  pCVar4 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar7 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
  }
  return out_matrix;
}
