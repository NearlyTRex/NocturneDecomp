// Name: core_dcamera.cpp_FUN_00450e10
// Address: 00450e10
// Address Range: [[00450e10, 00451242]]
// Convention: unknown
// Signature: undefined4 * core_dcamera_cpp_FUN_00450e10(CDemonCamera *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_dcamera_cpp_FUN_00450e10(CDemonCamera *param_1)

{
  int iVar1;
  uint uVar2;
  uint *unaff_ESI;
  CBoundingBox3D *pCVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ec [24];
  int aiStackY_108c [3];
  float afStackY_1080 [21];
  int aiStackY_102c [961];
  float *pfVar6;
  CVector3f *point;
  CBoundingBox3D CStack_11c;
  uint uStack_104;
  float afStack_100 [2];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [2];
  int iStack_e0;
  uint uStack_d4;
  int iStack_cc;
  float fStack_c8;
  float afStack_c4 [4];
  int iStack_b4;
  uint uStack_b0;
  CVector3i CStack_a4;
  uint uStack_98;
  float fStack_94;
  int iStack_90;
  uint uStack_8c;
  int iStack_84;
  float fStack_80;
  float afStack_7c [5];
  uint uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3i CStack_50;
  int iStack_44;
  int aiStack_40 [3];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  if (&stack0x00000000 != (byte *)0x2cfda10) {
    CStack_11c.max.x = _DAT_02cfd900;
    CStack_11c.max.y = _DAT_02cfd904;
    CStack_11c.max.z = _DAT_02cfd908;
  }
  if (&CStack_11c != (CBoundingBox3D *)&CStack_11c.max) {
    CStack_11c.min.x = CStack_11c.max.x;
    CStack_11c.min.y = CStack_11c.max.y;
    CStack_11c.min.z = CStack_11c.max.z;
  }
  aiStack_40[2] = 0;
  iStack_14 = 1;
  do {
    iVar1 = aiStack_40[2];
    if (param_1->framebuffer_height + -1 <= iStack_14) {
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
    for (iStack_10 = 1; iStack_10 < param_1->framebuffer_width + -1; iStack_10 = iStack_10 + 1) {
      core_dcamera_cpp_FUN_00449eb0(param_1,iStack_10,iStack_14);
      CStack_50.x = iStack_e0;
      *(float *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) = afStack_e8[(uint)bVar5 * -2 + 3];
      *(float *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if (CStack_50.z < 0x1f401) {
LAB_00450fda:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                  (param_1,&CStack_50,&CStack_a4);
        iStack_44 = CStack_a4.x;
        aiStack_40[(uint)bVar5 * -2] = *(int *)((int)&CStack_a4 + (uint)bVar5 * -8 + 4);
        aiStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(int *)((int)&CStack_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        fStack_5c = (float)iStack_44 * _DAT_005ddfc4;
        fStack_58 = (float)aiStack_40[0] * _DAT_005ddfc4;
        fStack_54 = (float)aiStack_40[1] * _DAT_005ddfc4;
        fStack_80 = (float)iStack_44 * _DAT_005ddfc4 - (param_1->base).position.f.x;
        afStack_7c[0] = (float)aiStack_40[0] * _DAT_005ddfc4 - (param_1->base).position.f.y;
        pfVar6 = &fStack_ec;
        afStack_7c[1] = (float)aiStack_40[1] * _DAT_005ddfc4 - (param_1->base).position.f.z;
        fStack_ec = fStack_80;
        afStack_e8[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
        afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_dirmat_cpp_FUN_0045b870(&(param_1->base).rotation_matrix,pfVar6);
        point = &CStack_f8;
        CStack_f8.x = fStack_c8;
        *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) = afStack_c4[(uint)bVar5 * -2];
        pCVar3 = &CStack_11c;
        *(float *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar3,point);
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
        if ((iStack_10 < 2) || (param_1->framebuffer_height + -2 <= iStack_14)) {
LAB_00450f93:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_18,iStack_14 + 1);
          afStack_c4[2] = (float)uStack_104;
          afStack_c4[(uint)bVar5 * -2 + 3] = afStack_100[(uint)bVar5 * -2];
          afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (0x1f400 < iStack_b4) goto LAB_00450f93;
        }
        if ((iStack_10 < param_1->framebuffer_width + -2) && (1 < iStack_14)) {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_10 + 1,iVar1);
          uStack_98 = uStack_68;
          (&fStack_94)[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2 + 6];
          (&fStack_94)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if (0x1f400 < iStack_90) goto LAB_00450fac;
        }
        else {
LAB_00450fac:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_10 < param_1->framebuffer_width + -2) &&
           (iStack_14 < param_1->framebuffer_height + -2)) {
          core_dcamera_cpp_FUN_00449eb0(param_1,iStack_10 + 1,iStack_14 + 1);
          uStack_8c = uStack_b0;
          (&fStack_94)[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2 + 6];
          (&fStack_94)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if (0x1f400 < iStack_84) goto LAB_00450fc5;
        }
        else {
LAB_00450fc5:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          CStack_50.z = 0x1f400;
          goto LAB_00450fda;
        }
      }
      iStack_18 = iStack_18 + 1;
    }
    iStack_14 = iStack_14 + 1;
    aiStack_40[2] = aiStack_40[2] + 1;
  } while( true );
}
