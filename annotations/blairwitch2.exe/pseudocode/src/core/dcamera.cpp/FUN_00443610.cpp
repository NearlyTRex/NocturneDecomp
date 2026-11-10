// Name: core_dcamera.cpp_FUN_00443610
// Address: 00443610
// Address Range: [[00443610, 00443a42]]
// Convention: unknown
// Signature: undefined4 * core_dcamera_cpp_FUN_00443610(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_dcamera_cpp_FUN_00443610(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *unaff_ESI;
  CBoundingBox3D *pCVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ec [1009];
  float *pfVar6;
  CVector3f *point;
  CBoundingBox3D CStack_11c;
  uint uStack_104;
  float afStack_100 [2];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [5];
  uint uStack_d4;
  int iStack_cc;
  float fStack_c8;
  float afStack_c4 [4];
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
  if (&stack0x00000000 != (byte *)0x265381c) {
    CStack_11c.max.x = _DAT_0265370c;
    CStack_11c.max.y = _DAT_02653710;
    CStack_11c.max.z = _DAT_02653714;
  }
  if (&CStack_11c != (CBoundingBox3D *)&CStack_11c.max) {
    CStack_11c.min.x = CStack_11c.max.x;
    CStack_11c.min.y = CStack_11c.max.y;
    CStack_11c.min.z = CStack_11c.max.z;
  }
  iStack_38 = 0;
  iStack_14 = 1;
  do {
    iVar1 = iStack_38;
    if (*(int *)(param_1 + 0x148) + -1 <= iStack_14) {
      pCVar3 = &CStack_11c;
      puVar4 = unaff_ESI;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *(uint *)pCVar3;
        pCVar3 = (CBoundingBox3D *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      return unaff_ESI;
    }
    iStack_18 = 0;
    for (iStack_10 = 1; iStack_10 < *(int *)(param_1 + 0x144) + -1; iStack_10 = iStack_10 + 1) {
      core_dcamera_cpp_FUN_0043c6b0(param_1,iStack_10,iStack_14);
      uStack_50 = afStack_e8[2];
      (&fStack_4c)[(uint)bVar5 * -2] = afStack_e8[(uint)bVar5 * -2 + 3];
      (&fStack_4c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if (iStack_48 < 0x1f401) {
LAB_004437da:
        core_dcamera_cpp_FUN_0043c780(param_1,&uStack_50);
        iStack_44 = iStack_a4;
        (&fStack_4c)[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2 + 9];
        (&fStack_4c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        fStack_5c = (float)iStack_44 * _DAT_005f4dd4;
        fStack_58 = (float)iStack_40 * _DAT_005f4dd4;
        fStack_54 = (float)iStack_3c * _DAT_005f4dd4;
        fStack_80 = (float)iStack_44 * _DAT_005f4dd4 - *(float *)(param_1 + 4);
        afStack_7c[0] = (float)iStack_40 * _DAT_005f4dd4 - *(float *)(param_1 + 8);
        pfVar6 = &fStack_ec;
        afStack_7c[1] = (float)iStack_3c * _DAT_005f4dd4 - *(float *)(param_1 + 0xc);
        fStack_ec = fStack_80;
        afStack_e8[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
        afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_dirmat_cpp_FUN_004495a0(param_1 + 0x10,pfVar6);
        point = &CStack_f8;
        CStack_f8.x = fStack_c8;
        *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) = afStack_c4[(uint)bVar5 * -2];
        pCVar3 = &CStack_11c;
        *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar3,point);
      }
      else {
        uVar2 = 0;
        if ((iStack_10 < 2) || (iStack_14 < 2)) {
LAB_00443784:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_FUN_0043c6b0(param_1,iStack_18,iVar1);
          uStack_d4 = afStack_7c[2];
          afStack_e8[(uint)bVar5 * -2 + 6] = afStack_7c[(uint)bVar5 * -2 + 3];
          afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (0x1f400 < iStack_cc) goto LAB_00443784;
        }
        if ((iStack_10 < 2) || (*(int *)(param_1 + 0x148) + -2 <= iStack_14)) {
LAB_00443793:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_FUN_0043c6b0(param_1,iStack_18,iStack_14 + 1);
          afStack_c4[2] = (float)uStack_104;
          afStack_c4[(uint)bVar5 * -2 + 3] = afStack_100[(uint)bVar5 * -2];
          afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (0x1f400 < iStack_b4) goto LAB_00443793;
        }
        if ((iStack_10 < *(int *)(param_1 + 0x144) + -2) && (1 < iStack_14)) {
          core_dcamera_cpp_FUN_0043c6b0(param_1,iStack_10 + 1,iVar1);
          uStack_98 = uStack_68;
          afStack_c4[(uint)bVar5 * -2 + 0xc] = afStack_7c[(uint)bVar5 * -2 + 6];
          afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
               afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if (0x1f400 < iStack_90) goto LAB_004437ac;
        }
        else {
LAB_004437ac:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_10 < *(int *)(param_1 + 0x144) + -2) &&
           (iStack_14 < *(int *)(param_1 + 0x148) + -2)) {
          core_dcamera_cpp_FUN_0043c6b0(param_1,iStack_10 + 1,iStack_14 + 1);
          uStack_8c = uStack_b0;
          afStack_c4[(uint)bVar5 * -2 + 0xf] = afStack_c4[(uint)bVar5 * -2 + 6];
          afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
               afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if (0x1f400 < iStack_84) goto LAB_004437c5;
        }
        else {
LAB_004437c5:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          iStack_48 = 0x1f400;
          goto LAB_004437da;
        }
      }
      iStack_18 = iStack_18 + 1;
    }
    iStack_14 = iStack_14 + 1;
    iStack_38 = iStack_38 + 1;
  } while( true );
}
