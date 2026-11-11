// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004b22c0
// Address: 004b22c0
// Address Range: [[004b22c0, 004b27e5]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004b22c0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004b22c0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  int unaff_EBP;
  float *pfVar2;
  uint *puVar3;
  int unaff_EDI;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_109c [939];
  CBoundingBox3D *in_stack_fffffe18;
  uint auStack_180 [12];
  float afStack_150 [3];
  float fStack_144;
  float fStack_134;
  float fStack_124;
  uint auStack_120 [12];
  uint auStack_f0 [4];
  uint auStack_e0 [2];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint auStack_b0 [2];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [4];
  float afStack_8c [4];
  float fStack_7c;
  uint uStack_78;
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
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float afStack_20 [5];
  
  bVar6 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  afStack_20[3] = (float)(this_ptr->base).base.carry_hands[hand_index].bone_index;
  uStack_c0 = 0;
  fStack_c4 = 0.0;
  fStack_c8 = 0.0;
  fStack_a8 = 0.0;
  auStack_b0[1] = 0;
  auStack_b0[0] = 0;
  afStack_20[4] = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0(this_ptr_00,DAT_007bcc84);
  if (afStack_20[4] == 0.0) goto LAB_004b233f;
  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffe18);
  puVar3 = auStack_f0;
  puVar5 = auStack_e0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_54 = fStack_d8 + fStack_cc;
  fStack_50 = fStack_d4 + fStack_c8;
  fStack_4c = fStack_d0 + fStack_c4;
  fStack_60 = fStack_d8 + fStack_cc;
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + 0xc) * 4) =
       *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + 0xf) * 4);
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd) * 4) =
       *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10) * 4);
  fStack_6c = fStack_60 * _DAT_005d71fb;
  fStack_68 = fStack_5c * _DAT_005d71fb;
  fStack_64 = fStack_58 * _DAT_005d71fb;
  fStack_48 = fStack_60 * _DAT_005d71fb;
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + 0x12) * 4) =
       *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + 9) * 4);
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13) * 4) =
       *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 10) * 4);
  if (&fStack_a8 != &fStack_48) {
    fStack_a8 = fStack_48;
    fStack_a4 = fStack_44;
    fStack_a0 = fStack_40;
  }
  iVar1 = *(int *)(unaff_EDI + 0x7d4);
  if (iVar1 == 2) {
    fStack_a4 = fStack_c8;
    goto LAB_004b233f;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      fStack_a4 = fStack_c8;
    }
    else {
      _DAT_01d046a0 = "..\\core\\gabriela.cpp";
      _DAT_01d046a4 = 0x944;
      core_main_c_FUN_004e4500("Don't know how to carry light %s",unaff_EDI);
    }
    goto LAB_004b233f;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_005932c0(0xbfc90fdb);
    puVar3 = (uint *)&stack0xfffffe50;
LAB_004b2627:
    puVar5 = auStack_180;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_005932c0(0x3fc90fdb);
      puVar3 = (uint *)&stack0xfffffe20;
      goto LAB_004b2627;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(auStack_180);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (auStack_180,(this_ptr->base).base.model.bone_transform.bone_model_matrices[unaff_EBP].m
            );
  puVar3 = auStack_120;
  puVar5 = auStack_180;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(auStack_180);
  uStack_78 = uStack_b4;
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + 6) * 4) =
       *(uint *)((int)auStack_b0 + (uint)bVar6 * 0xfffffff8);
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4) =
       *(uint *)((int)auStack_b0 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
  if (&uStack_c0 != &uStack_78) {
    uStack_c0 = uStack_78;
    uStack_bc = uStack_74;
    uStack_b8 = uStack_70;
  }
  fStack_a0 = fStack_c4 * (float)_DAT_005d720b + fStack_d0 * (float)_DAT_005d7203;
LAB_004b233f:
  if (hand_index == 0) {
    iStack_2c = hand_index;
    fStack_30 = -0.4;
    iStack_28 = hand_index;
    if (afStack_20 + 2 != &fStack_30) {
      afStack_20[3] = (float)hand_index;
      afStack_20[4] = (float)hand_index;
      afStack_20[2] = -0.4;
    }
  }
  else if (hand_index == 1) {
    afStack_9c[1] = 0.0;
    afStack_9c[2] = 0.0;
    afStack_9c[0] = 0.4;
    if (afStack_20 + 2 != afStack_9c) {
      afStack_20[2] = 0.4;
      afStack_20[3] = 0.0;
      afStack_20[4] = 0.0;
    }
  }
  else {
    afStack_20[3] = 0.0;
    afStack_20[2] = 0.0;
    afStack_20[4] = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            (afStack_20 + 2,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[unaff_EBP].m);
  core_xform_cpp_FUN_00591c10(afStack_150,afStack_20 + 2,&uStack_c0);
  core_xform_cpp_FUN_00591530(&fStack_a8,afStack_150);
  afStack_9c[3] = fStack_3c;
  *(uint *)((int)afStack_8c + (uint)bVar6 * 0xfffffff8) =
       *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + 0x15) * 4);
  *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
       *(uint *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16) * 4);
  fStack_24 = afStack_20[2] - afStack_9c[3];
  afStack_20[0] = afStack_20[3] - afStack_8c[0];
  afStack_20[1] = afStack_20[4] - afStack_8c[1];
  afStack_8c[2] = afStack_20[2] - afStack_9c[3];
  *(float *)((int)afStack_8c + ((uint)bVar6 * -2 + 3) * 4) = afStack_20[(uint)bVar6 * -2];
  *(float *)((int)afStack_8c + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
       afStack_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_144 = fStack_144 + afStack_8c[2];
  fStack_134 = fStack_134 + afStack_8c[3];
  fStack_124 = fStack_124 + fStack_7c;
  pfVar2 = afStack_150;
  pCVar4 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
