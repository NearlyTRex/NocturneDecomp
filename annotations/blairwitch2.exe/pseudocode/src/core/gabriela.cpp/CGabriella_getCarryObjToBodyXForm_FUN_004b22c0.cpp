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
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10a4 [940];
  uint auStack_188 [12];
  float afStack_158 [3];
  float fStack_14c;
  float fStack_13c;
  float fStack_12c;
  uint auStack_128 [12];
  uint auStack_f8 [6];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint auStack_b8 [2];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [4];
  float afStack_94 [4];
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
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
  float fStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  float afStack_28 [5];
  int iStack_14;
  int iStack_10;
  
  bVar6 = 0;
  iVar1 = *(int *)(&this_ptr->field_0x2620 + hand_index * 0x78);
  iStack_14 = *(int *)(&this_ptr->field_0x2618 + hand_index * 0x78);
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  fStack_a8 = 0.0;
  fStack_ac = 0.0;
  fStack_b0 = 0.0;
  iStack_10 = core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar1,DAT_007bcc84);
  if (iStack_10 == 0) goto LAB_004b233f;
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
  puVar3 = auStack_f8;
  puVar5 = &fStack_e0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_5c = fStack_e0 + fStack_d4;
  fStack_58 = fStack_dc + fStack_d0;
  fStack_54 = fStack_d8 + fStack_cc;
  fStack_68 = fStack_e0 + fStack_d4;
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + 0xc) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + 0xf) * 4);
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10) * 4);
  fStack_74 = fStack_68 * _DAT_005d71fb;
  fStack_70 = fStack_64 * _DAT_005d71fb;
  fStack_6c = fStack_60 * _DAT_005d71fb;
  fStack_50 = fStack_68 * _DAT_005d71fb;
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + 0x12) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + 9) * 4);
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 10) * 4);
  if (&fStack_b0 != &fStack_50) {
    fStack_b0 = fStack_50;
    fStack_ac = fStack_4c;
    fStack_a8 = fStack_48;
  }
  iVar1 = *(int *)(iStack_10 + 0x7d4);
  if (iVar1 == 2) {
    fStack_ac = fStack_d0;
    goto LAB_004b233f;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      fStack_ac = fStack_d0;
    }
    else {
      _DAT_01d046a0 = "..\\core\\gabriela.cpp";
      _DAT_01d046a4 = 0x944;
      core_main_c_FUN_004e4500("Don't know how to carry light %s",iStack_10);
    }
    goto LAB_004b233f;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_005932c0(0xbfc90fdb);
    puVar3 = (uint *)&stack0xfffffe48;
LAB_004b2627:
    puVar5 = auStack_188;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_005932c0(0x3fc90fdb);
      puVar3 = (uint *)&stack0xfffffe18;
      goto LAB_004b2627;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(auStack_188);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (auStack_188,&this_ptr->field_0x1134 + iStack_14 * 0x30);
  puVar3 = auStack_128;
  puVar5 = auStack_188;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(auStack_188);
  uStack_80 = uStack_bc;
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + 6) * 4) =
       *(uint *)((int)auStack_b8 + (uint)bVar6 * 0xfffffff8);
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + -8) * 4);
  if (&uStack_c8 != &uStack_80) {
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    uStack_c0 = uStack_78;
  }
  fStack_a8 = fStack_cc * (float)_DAT_005d720b + fStack_d8 * (float)_DAT_005d7203;
LAB_004b233f:
  if (hand_index == 0) {
    iStack_34 = hand_index;
    fStack_38 = -0.4;
    iStack_30 = hand_index;
    if (afStack_28 + 2 != &fStack_38) {
      afStack_28[3] = (float)hand_index;
      afStack_28[4] = (float)hand_index;
      afStack_28[2] = -0.4;
    }
  }
  else if (hand_index == 1) {
    afStack_a4[1] = 0.0;
    afStack_a4[2] = 0.0;
    afStack_a4[0] = 0.4;
    if (afStack_28 + 2 != afStack_a4) {
      afStack_28[2] = 0.4;
      afStack_28[3] = 0.0;
      afStack_28[4] = 0.0;
    }
  }
  else {
    afStack_28[3] = 0.0;
    afStack_28[2] = 0.0;
    afStack_28[4] = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            (afStack_28 + 2,&this_ptr->field_0x1134 + iStack_14 * 0x30);
  core_xform_cpp_FUN_00591c10(afStack_158,afStack_28 + 2,&uStack_c8);
  core_xform_cpp_FUN_00591530(&fStack_b0,afStack_158);
  afStack_a4[3] = fStack_44;
  *(uint *)((int)afStack_94 + (uint)bVar6 * 0xfffffff8) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + 0x15) * 4);
  *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
       *(uint *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16) * 4);
  fStack_2c = afStack_28[2] - afStack_a4[3];
  afStack_28[0] = afStack_28[3] - afStack_94[0];
  afStack_28[1] = afStack_28[4] - afStack_94[1];
  afStack_94[2] = afStack_28[2] - afStack_a4[3];
  *(float *)((int)afStack_94 + ((uint)bVar6 * -2 + 3) * 4) = afStack_28[(uint)bVar6 * -2];
  *(float *)((int)afStack_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
       afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fStack_14c = fStack_14c + afStack_94[2];
  fStack_13c = fStack_13c + afStack_94[3];
  fStack_12c = fStack_12c + fStack_84;
  pfVar2 = afStack_158;
  pCVar4 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
