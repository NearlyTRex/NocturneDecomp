// Name: core_gabriela.cpp_FUN_004cb1e0
// Address: 004cb1e0
// Address Range: [[004cb1e0, 004cb705]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004cb1e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004cb1e0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10a4 [940];
  CMatrix3x4f aCStack_158 [12];
  float fStack_14c;
  float fStack_13c;
  float fStack_12c;
  uint auStack_128 [12];
  float afStack_f8 [6];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [2];
  byte auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar8 = 0;
  iVar1 = (int)param_2 * 0x78 + param_1;
  iVar2 = *(int *)(iVar1 + 0x25b0);
  iStack_14 = *(int *)(iVar1 + 0x25a8);
  CStack_c8._8_4_ = 0;
  CStack_c8._4_4_ = 0;
  CStack_c8._0_4_ = 0;
  fStack_a8 = 0.0;
  fStack_ac = 0.0;
  fStack_b0 = 0.0;
  iStack_10 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar2,DAT_007c5330);
  if (iStack_10 == 0) goto LAB_004cb25f;
  (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
  pfVar4 = afStack_f8;
  pfVar6 = &fStack_e0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  fStack_5c = fStack_e0 + fStack_d4;
  fStack_58 = fStack_dc + fStack_d0;
  fStack_54 = fStack_d8 + fStack_cc;
  afStack_70[2] = fStack_e0 + fStack_d4;
  afStack_70[(uint)bVar8 * -2 + 3] = afStack_70[(uint)bVar8 * -2 + 6];
  afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_74 = afStack_70[2] * _DAT_005e1274;
  afStack_70[0] = afStack_70[3] * _DAT_005e1274;
  afStack_70[1] = fStack_60 * _DAT_005e1274;
  fStack_50 = afStack_70[2] * _DAT_005e1274;
  afStack_70[(uint)bVar8 * -2 + 9] = afStack_70[(uint)bVar8 * -2];
  afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
       afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (&fStack_b0 != afStack_70 + 8) {
    fStack_b0 = fStack_50;
    fStack_ac = fStack_4c;
    fStack_a8 = fStack_48;
  }
  iVar2 = *(int *)(iStack_10 + 0x678);
  if (iVar2 == 2) {
    fStack_ac = fStack_d0;
    goto LAB_004cb25f;
  }
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      fStack_ac = fStack_d0;
    }
    else {
      _DAT_01d1d400 = "..\\core\\gabriela.cpp";
      _DAT_01d1d404 = 0x944;
      core_main_c_FUN_005030e0("Don't know how to carry light %s",iStack_10);
    }
    goto LAB_004cb25f;
  }
  if (param_2 == 0.0) {
    core_xform_cpp_buildRotationY_FUN_005b6e10(0xbfc90fdb);
    puVar5 = (uint *)&stack0xfffffe48;
LAB_004cb547:
    puVar7 = (uint *)&stack0xfffffe78;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  else {
    if (param_2 == 1.4013e-45) {
      core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc90fdb);
      puVar5 = (uint *)&stack0xfffffe18;
      goto LAB_004cb547;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&stack0xfffffe78);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&stack0xfffffe78,iStack_14 * 0x30 + param_1 + 0xfd8)
  ;
  puVar5 = auStack_128;
  puVar7 = (uint *)&stack0xfffffe78;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_FUN_005b5930(&stack0xfffffe78);
  CStack_80._0_4_ = CStack_bc._0_4_;
  *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&CStack_bc + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&CStack_bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  if (&CStack_c8 != &CStack_80) {
    CStack_c8._0_4_ = CStack_80._0_4_;
    CStack_c8._4_4_ = CStack_80._4_4_;
    CStack_c8._8_4_ = CStack_80._8_4_;
  }
  fStack_a8 = fStack_cc * (float)_DAT_005e1284 + fStack_d8 * (float)_DAT_005e127c;
LAB_004cb25f:
  if (param_2 == 0.0) {
    fStack_34 = param_2;
    fStack_38 = -0.4;
    fStack_30 = param_2;
    if ((float *)auStack_20 != afStack_70 + 0xe) {
      fStack_1c = param_2;
      fStack_18 = param_2;
      auStack_20 = (byte  [4])0xbecccccd;
    }
  }
  else if (param_2 == 1.4013e-45) {
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_a4 = 0x3ecccccd;
    if ((uint *)auStack_20 != &uStack_a4) {
      auStack_20 = (byte  [4])0x3ecccccd;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
    }
  }
  else {
    fStack_1c = 0.0;
    auStack_20 = (byte  [4])0x0;
    fStack_18 = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100
            (auStack_20,param_1 + 0xfd8 + iStack_14 * 0x30);
  core_xform_cpp_FUN_005b5760(aCStack_158,(CVector3f *)auStack_20,&CStack_c8);
  core_xform_cpp_FUN_005b5080(&fStack_b0,aCStack_158);
  fStack_98 = fStack_44;
  afStack_94[(uint)bVar8 * -2] = afStack_70[(uint)bVar8 * -2 + 0xc];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
  fStack_2c = (float)auStack_20 - fStack_98;
  afStack_28[0] = fStack_1c - afStack_94[0];
  afStack_28[1] = fStack_18 - afStack_94[1];
  afStack_94[2] = (float)auStack_20 - fStack_98;
  afStack_94[(uint)bVar8 * -2 + 3] = afStack_28[(uint)bVar8 * -2];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_28[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_14c = fStack_14c + afStack_94[2];
  fStack_13c = fStack_13c + afStack_94[3];
  fStack_12c = fStack_12c + fStack_84;
  pCVar3 = aCStack_158;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *(uint *)pCVar3;
    pCVar3 = pCVar3 + ((uint)bVar8 * -2 + 1) * 4;
    unaff_ESI = unaff_ESI + (uint)bVar8 * -2 + 1;
  }
  return;
}
