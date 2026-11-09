// Name: core_dcamera.cpp_FUN_00450e10
// Address: 00450e10
// Address Range: [[00450e10, 00451242]]
// Convention: unknown
// Signature: undefined4 * core_dcamera_cpp_FUN_00450e10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_dcamera_cpp_FUN_00450e10(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int aiStackY_10ec [6];
  float afStackY_10d4 [12];
  int aiStackY_10a4 [9];
  float afStackY_1080 [3];
  int aiStackY_1074 [3];
  float afStackY_1068 [15];
  int aiStackY_102c [961];
  CBoundingBox3D *this_ptr;
  float *pfVar6;
  CVector3f *point;
  byte auStack_11c [24];
  uint uStack_104;
  int aiStack_100 [2];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [5];
  uint uStack_d4;
  int iStack_cc;
  CVector3f CStack_c8;
  uint uStack_bc;
  float fStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_a4;
  uint uStack_98;
  int iStack_90;
  uint uStack_8c;
  int iStack_84;
  float fStack_80;
  float afStack_7c [5];
  uint uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  if (&stack0x00000000 != (byte *)0x2cfda10) {
    auStack_11c._12_4_ = _DAT_02cfd900;
    auStack_11c._16_4_ = _DAT_02cfd904;
    auStack_11c._20_4_ = _DAT_02cfd908;
  }
  if (auStack_11c != auStack_11c + 0xc) {
    auStack_11c._0_4_ = auStack_11c._12_4_;
    auStack_11c._4_4_ = auStack_11c._16_4_;
    auStack_11c._8_4_ = auStack_11c._20_4_;
  }
  iStack_38 = 0;
  iStack_14 = 1;
  do {
    iVar1 = iStack_38;
    if (*(int *)(param_1 + 0x148) + -1 <= iStack_14) {
      puVar3 = (uint *)auStack_11c;
      puVar4 = unaff_ESI;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      return unaff_ESI;
    }
    iStack_18 = 0;
    for (iStack_10 = 1; iStack_10 < *(int *)(param_1 + 0x144) + -1; iStack_10 = iStack_10 + 1) {
      core_dcamera_cpp_FUN_00449eb0(param_1,iStack_10,iStack_14);
      uStack_50 = afStack_e8[2];
      (&fStack_4c)[(uint)bVar5 * -2] = afStack_e8[(uint)bVar5 * -2 + 3];
      (&fStack_4c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if (iStack_48 < 0x1f401) {
LAB_00450fda:
        core_dcamera_cpp_FUN_00449f80(param_1,&uStack_50);
        iStack_44 = iStack_a4;
        (&fStack_4c)[(uint)bVar5 * -2 + 3] = (&fStack_b8)[(uint)bVar5 * -2 + 6];
        (&fStack_4c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             (&fStack_b8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        fStack_5c = (float)iStack_44 * _DAT_005ddfc4;
        fStack_58 = (float)iStack_40 * _DAT_005ddfc4;
        fStack_54 = (float)iStack_3c * _DAT_005ddfc4;
        fStack_80 = (float)iStack_44 * _DAT_005ddfc4 - *(float *)(param_1 + 4);
        afStack_7c[0] = (float)iStack_40 * _DAT_005ddfc4 - *(float *)(param_1 + 8);
        pfVar6 = &fStack_ec;
        afStack_7c[1] = (float)iStack_3c * _DAT_005ddfc4 - *(float *)(param_1 + 0xc);
        fStack_ec = fStack_80;
        afStack_e8[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
        afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_dirmat_cpp_FUN_0045b870(param_1 + 0x10,pfVar6);
        point = &CStack_f8;
        CStack_f8._0_4_ = CStack_c8._0_4_;
        *(uint *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_c8 + (uint)bVar5 * -8 + 4);
        this_ptr = (CBoundingBox3D *)auStack_11c;
        *(uint *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(this_ptr,point);
      }
      else {
        uVar2 = 0;
        if ((iStack_10 < 2) || (iStack_14 < 2)) {
LAB_00450f84:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_18,iVar1);
          uStack_d4 = afStack_7c[2];
          afStack_e8[(uint)bVar5 * -2 + 6] = afStack_7c[(uint)bVar5 * -2 + 3];
          afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (0x1f400 < iStack_cc) goto LAB_00450f84;
        }
        if ((iStack_10 < 2) || (*(int *)(param_1 + 0x148) + -2 <= iStack_14)) {
LAB_00450f93:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_18,iStack_14 + 1);
          uStack_bc = uStack_104;
          (&fStack_b8)[(uint)bVar5 * -2] = (float)aiStack_100[(uint)bVar5 * -2];
          (&fStack_b8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               (float)aiStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (0x1f400 < iStack_b4) goto LAB_00450f93;
        }
        if ((iStack_10 < *(int *)(param_1 + 0x144) + -2) && (1 < iStack_14)) {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_10 + 1,iVar1);
          uStack_98 = uStack_68;
          (&fStack_b8)[(uint)bVar5 * -2 + 9] = afStack_7c[(uint)bVar5 * -2 + 6];
          (&fStack_b8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
               afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if (0x1f400 < iStack_90) goto LAB_00450fac;
        }
        else {
LAB_00450fac:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_10 < *(int *)(param_1 + 0x144) + -2) &&
           (iStack_14 < *(int *)(param_1 + 0x148) + -2)) {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_10 + 1,iStack_14 + 1);
          uStack_8c = uStack_b0;
          (&fStack_b8)[(uint)bVar5 * -2 + 0xc] = (&fStack_b8)[(uint)bVar5 * -2 + 3];
          (&fStack_b8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
               (&fStack_b8)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (0x1f400 < iStack_84) goto LAB_00450fc5;
        }
        else {
LAB_00450fc5:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          iStack_48 = 0x1f400;
          goto LAB_00450fda;
        }
      }
      iStack_18 = iStack_18 + 1;
    }
    iStack_14 = iStack_14 + 1;
    iStack_38 = iStack_38 + 1;
  } while( true );
}
