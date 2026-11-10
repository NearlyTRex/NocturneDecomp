// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004cb1e0
// Address: 004cb1e0
// Address Range: [[004cb1e0, 004cb705]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004cb1e0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004cb1e0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10a4 [940];
  CMatrix3x4f CStack_158;
  uint auStack_128 [12];
  float afStack_f8 [6];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [5];
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
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
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CVector3f CStack_20;
  int iStack_14;
  int iStack_10;
  
  bVar8 = 0;
  iVar1 = *(int *)(&this_ptr->field_0x25b0 + hand_index * 0x78);
  iStack_14 = *(int *)(&this_ptr->field_0x25a8 + hand_index * 0x78);
  CStack_c8.z = 0.0;
  CStack_c8.y = 0.0;
  CStack_c8.x = 0.0;
  afStack_b8[4] = 0.0;
  afStack_b8[3] = 0.0;
  afStack_b8[2] = 0.0;
  iStack_10 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar1,DAT_007c5330);
  if (iStack_10 == 0) goto LAB_004cb25f;
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
  pfVar3 = afStack_f8;
  pfVar6 = &fStack_e0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  fStack_5c = fStack_e0 + fStack_d4;
  fStack_58 = fStack_dc + fStack_d0;
  fStack_54 = fStack_d8 + fStack_cc;
  fStack_68 = fStack_e0 + fStack_d4;
  afStack_94[(uint)bVar8 * -2 + 0xc] = afStack_94[(uint)bVar8 * -2 + 0xf];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
  fStack_74 = fStack_68 * _DAT_005e1274;
  fStack_70 = fStack_64 * _DAT_005e1274;
  fStack_6c = fStack_60 * _DAT_005e1274;
  fStack_50 = fStack_68 * _DAT_005e1274;
  afStack_94[(uint)bVar8 * -2 + 0x12] = afStack_94[(uint)bVar8 * -2 + 9];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
       afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  if (afStack_b8 + 2 != afStack_94 + 0x11) {
    afStack_b8[2] = fStack_50;
    afStack_b8[3] = fStack_4c;
    afStack_b8[4] = fStack_48;
  }
  iVar1 = *(int *)(iStack_10 + 0x678);
  if (iVar1 == 2) {
    afStack_b8[3] = fStack_d0;
    goto LAB_004cb25f;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      afStack_b8[3] = fStack_d0;
    }
    else {
      _DAT_01d1d400 = "..\\core\\gabriela.cpp";
      _DAT_01d1d404 = 0x944;
      core_main_c_FUN_005030e0("Don't know how to carry light %s",iStack_10);
    }
    goto LAB_004cb25f;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_005b6e10(0xbfc90fdb);
    puVar4 = (uint *)&stack0xfffffe48;
LAB_004cb547:
    puVar7 = (uint *)&stack0xfffffe78;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc90fdb);
      puVar4 = (uint *)&stack0xfffffe18;
      goto LAB_004cb547;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&stack0xfffffe78);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&stack0xfffffe78,&this_ptr->field_0xfd8 + iStack_14 * 0x30);
  puVar4 = auStack_128;
  puVar7 = (uint *)&stack0xfffffe78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xfffffe78);
  CStack_80.x = fStack_bc;
  afStack_94[(uint)bVar8 * -2 + 6] = afStack_b8[(uint)bVar8 * -2];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&CStack_c8 != (CVector3f *)(afStack_94 + 5)) {
    CStack_c8.x = CStack_80.x;
    CStack_c8.y = CStack_80.y;
    CStack_c8.z = CStack_80.z;
  }
  afStack_b8[4] = fStack_cc * (float)_DAT_005e1284 + fStack_d8 * (float)_DAT_005e127c;
LAB_004cb25f:
  if (hand_index == 0) {
    CStack_38.y = (float)hand_index;
    CStack_38.x = -0.4;
    CStack_38.z = (float)hand_index;
    if (&CStack_20 != (CVector3f *)(afStack_94 + 0x17)) {
      CStack_20.y = (float)hand_index;
      CStack_20.z = (float)hand_index;
      CStack_20.x = -0.4;
    }
  }
  else if (hand_index == 1) {
    CStack_a4.y = 0.0;
    CStack_a4.z = 0.0;
    CStack_a4.x = 0.4;
    if (&CStack_20 != (CVector3f *)(afStack_b8 + 5)) {
      CStack_20.x = 0.4;
      CStack_20.y = 0.0;
      CStack_20.z = 0.0;
    }
  }
  else {
    CStack_20.y = 0.0;
    CStack_20.x = 0.0;
    CStack_20.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100
            (&CStack_20,&this_ptr->field_0xfd8 + iStack_14 * 0x30);
  core_xform_cpp_FUN_005b5760(&CStack_158,&CStack_20,&CStack_c8);
  core_xform_cpp_FUN_005b5080(afStack_b8 + 2,&CStack_158);
  fStack_98 = fStack_44;
  afStack_94[(uint)bVar8 * -2] = afStack_94[(uint)bVar8 * -2 + 0x15];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
  fStack_2c = CStack_20.x - fStack_98;
  afStack_28[0] = CStack_20.y - afStack_94[0];
  afStack_28[1] = CStack_20.z - afStack_94[1];
  afStack_94[2] = CStack_20.x - fStack_98;
  afStack_94[(uint)bVar8 * -2 + 3] = afStack_28[(uint)bVar8 * -2];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_28[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  CStack_158.m[0].z = CStack_158.m[0].z + afStack_94[2];
  CStack_158.m[1].z = CStack_158.m[1].z + afStack_94[3];
  CStack_158.m[2].z = CStack_158.m[2].z + fStack_84;
  pCVar2 = &CStack_158;
  pCVar5 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
  }
  return out_matrix;
}
