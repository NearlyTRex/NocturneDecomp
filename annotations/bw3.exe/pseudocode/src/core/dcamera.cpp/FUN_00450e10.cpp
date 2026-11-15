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
  int aiStackY_10ec [6];
  float afStackY_10d4 [6];
  int aiStackY_10bc [21];
  float afStackY_1068 [3];
  int aiStackY_105c [973];
  CVector3f *pCVar6;
  CBoundingBox3D CStack_11c;
  CVector3i CStack_104;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3i CStack_e0;
  int iStack_d4;
  int aiStack_d0 [2];
  CVector3f CStack_c8;
  int iStack_bc;
  int aiStack_b8 [2];
  CVector3i CStack_b0;
  CVector3i CStack_a4;
  int iStack_98;
  int aiStack_94 [4];
  int iStack_84;
  float fStack_80;
  float afStack_7c [2];
  CVector3i CStack_74;
  CVector3i CStack_68;
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
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                (param_1,iStack_10,iStack_14,&CStack_e0);
      CStack_50.x = CStack_e0.x;
      *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
        pCVar6 = &CStack_ec;
        afStack_7c[1] = (float)aiStack_40[1] * _DAT_005ddfc4 - (param_1->base).position.f.z;
        CStack_ec.x = fStack_80;
        *(float *)((int)&CStack_ec + (uint)bVar5 * -8 + 4) = afStack_7c[(uint)bVar5 * -2];
        *(float *)((int)&CStack_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
                  (&(param_1->base).rotation_matrix,pCVar6,&CStack_c8);
        pCVar6 = &CStack_f8;
        CStack_f8.x = CStack_c8.x;
        *(uint *)((int)&CStack_f8 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_c8 + (uint)bVar5 * -8 + 4);
        pCVar3 = &CStack_11c;
        *(uint *)((int)&CStack_f8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar3,pCVar6);
      }
      else {
        uVar2 = 0;
        if ((iStack_10 < 2) || (iStack_14 < 2)) {
LAB_00450f84:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                    (param_1,iStack_18,iVar1,&CStack_74);
          iStack_d4 = CStack_74.x;
          aiStack_d0[(uint)bVar5 * -2] = *(int *)((int)&CStack_74 + (uint)bVar5 * -8 + 4);
          aiStack_d0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               *(int *)((int)&CStack_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          if (0x1f400 < aiStack_d0[1]) goto LAB_00450f84;
        }
        if ((iStack_10 < 2) || (param_1->framebuffer_height + -2 <= iStack_14)) {
LAB_00450f93:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                    (param_1,iStack_18,iStack_14 + 1,&CStack_104);
          iStack_bc = CStack_104.x;
          aiStack_b8[(uint)bVar5 * -2] = *(int *)((int)&CStack_104 + (uint)bVar5 * -8 + 4);
          aiStack_b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               *(int *)((int)&CStack_104 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          if (0x1f400 < aiStack_b8[1]) goto LAB_00450f93;
        }
        if ((iStack_10 < param_1->framebuffer_width + -2) && (1 < iStack_14)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                    (param_1,iStack_10 + 1,iVar1,&CStack_68);
          iStack_98 = CStack_68.x;
          aiStack_94[(uint)bVar5 * -2] = *(int *)((int)&CStack_68 + (uint)bVar5 * -8 + 4);
          aiStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               *(int *)((int)&CStack_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          if (0x1f400 < aiStack_94[1]) goto LAB_00450fac;
        }
        else {
LAB_00450fac:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_10 < param_1->framebuffer_width + -2) &&
           (iStack_14 < param_1->framebuffer_height + -2)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                    (param_1,iStack_10 + 1,iStack_14 + 1,&CStack_b0);
          aiStack_94[2] = CStack_b0.x;
          aiStack_94[(uint)bVar5 * -2 + 3] = *(int *)((int)&CStack_b0 + (uint)bVar5 * -8 + 4);
          aiStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               *(int *)((int)&CStack_b0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
