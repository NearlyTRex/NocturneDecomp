// Name: core_thehand.cpp_FUN_00599150
// Address: 00599150
// Address Range: [[00599150, 00599889]]
// Convention: unknown
// Signature: void core_thehand_cpp_FUN_00599150(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_thehand_cpp_FUN_00599150(CCharacter *param_1,float param_2)

{
  float fVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  CMotionList *this_ptr;
  CSkeleton *this_ptr_00;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  char *motion_name;
  SPose aSStack_1e00 [1136];
  float afStack_1990 [1419];
  CMatrix3x4f aCStack_364 [48];
  uint auStack_334 [12];
  uint auStack_304 [12];
  CMatrix3x4f aCStack_2d4 [48];
  uint auStack_2a4 [12];
  uint auStack_274 [12];
  uint auStack_244 [12];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint uStack_1b4;
  uint auStack_1b0 [7];
  uint uStack_194;
  uint auStack_190 [3];
  uint uStack_184;
  uint auStack_180 [3];
  CVector3f CStack_174;
  uint uStack_168;
  float afStack_164 [8];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint auStack_108 [3];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint auStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint auStack_84 [3];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  CVector3f CStack_6c;
  uint uStack_60;
  float afStack_5c [5];
  float fStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CDeformableModelInstance *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CMatrix3x4f *pCStack_20;
  CVector3f *pCStack_1c;
  CDeformableModelInstance *pCStack_18;
  CVector3f *pCStack_14;
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar4 != 0) {
    pCStack_20 = (CMatrix3x4f *)&param_1[1].field_0xd4;
    fStack_30 = param_2 * *(float *)(param_1 + 1);
    pCStack_14 = (CVector3f *)&param_1->field_0x20;
    pCStack_1c = (CVector3f *)&param_1->field_0x30;
    pCStack_18 = (CDeformableModelInstance *)&param_1->field_0x158;
    while (0.0 < fStack_30) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        ((CMotionController *)pCStack_18,afStack_5c + 0xb);
      if (0x22 < uVar6) {
        if (uVar6 < 0x24) {
          iVar4 = *(int *)&param_1[1].field_0x18;
          if ((iVar4 != 0) &&
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == 0)) {
            core_thehand_cpp_FUN_00599be0(param_1);
            puVar7 = auStack_1e4;
            puVar8 = auStack_2a4;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            core_xform_cpp_FUN_005b6270(auStack_2a4);
            auStack_cc[0] = uStack_f0;
            afStack_164[(uint)bVar9 * -2 + 0x27] = afStack_164[(uint)bVar9 * -2 + 0x1e];
            afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28] =
                 afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
            core_actor_cpp_FUN_00408b40(param_1,auStack_cc);
            fStack_114 = fStack_e4;
            afStack_164[(uint)bVar9 * -2 + 0x15] = afStack_164[(uint)bVar9 * -2 + 0x21];
            afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
                 afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22];
            iVar4 = *(int *)&param_1[1].field_0x18;
            fStack_12c = fStack_114 - *(float *)(iVar4 + 0x20);
            fStack_128 = fStack_110 - *(float *)(iVar4 + 0x24);
            fStack_124 = fStack_10c - *(float *)(iVar4 + 0x28);
            fStack_fc = fStack_12c;
            afStack_164[(uint)bVar9 * -2 + 0x1b] = afStack_164[(uint)bVar9 * -2 + 0xf];
            afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
                 afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
            if (((ABS(fStack_f8) <= (float)_DAT_005f7fac) &&
                (fStack_fc * fStack_fc + fStack_f4 * fStack_f4 <= (float)_DAT_005f7fb4)) &&
               (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,param_1,1), iVar4 != 0))
            {
              *(uint *)&param_1[1].field_0xa0 = 0;
              core_xform_cpp_FUN_005b5760
                        (aCStack_2d4,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20),
                         (CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x30));
              core_xform_cpp_FUN_005b5620(aCStack_364,pCStack_14,pCStack_1c);
              core_xform_cpp_FUN_005b6380(auStack_2a4);
              puVar7 = auStack_244;
              puVar8 = auStack_334;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_2d4,aCStack_364,auStack_334);
              puVar7 = auStack_214;
              puVar8 = auStack_304;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(auStack_304);
              puVar7 = auStack_274;
              puVar8 = (uint *)&param_1[1].field_0xa4;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              afStack_164[2] = 0.229711;
              afStack_164[4] = -0.768452;
              afStack_164[3] = 0.101114;
              CStack_6c._0_4_ = 0xc01c8e61;
              CStack_174._0_4_ = 0x3e6b395c;
              *(float *)((int)&CStack_174 + (uint)bVar9 * -8 + 4) =
                   afStack_164[(uint)bVar9 * -2 + 3];
              *(float *)((int)&CStack_174 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                   afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
              CStack_6c._4_4_ = 0xbff530be;
              CStack_6c._8_4_ = 0xbf448777;
              core_xform_cpp_FUN_005b5760(pCStack_20,&CStack_6c,&CStack_174);
            }
          }
        }
        else if ((uVar6 == 0x5dc) && (iVar4 = *(int *)&param_1[1].field_0x18, iVar4 != 0)) {
          (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4);
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)pCStack_18);
    if ((*(int *)(pSVar5 + 0x24) != 0) && (*(int *)(pSVar5 + 0x24) == 1)) {
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      *(int *)&param_1[1].field_0x18 = iVar4;
      if ((iVar4 != 0) &&
         ((iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 < 1 &&
          (iVar4 = (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0xf4))
                             (*(int *)&param_1[1].field_0x18), pCVar2 = pCStack_18, iVar4 == 0)))) {
        if (_DAT_02c8ad54 == 0) {
          core_skeleton_cpp_FUN_0056acc0(pCStack_18,aSStack_1e00);
          iVar4 = 1;
          motion_name = "attack_nocollision";
          this_ptr = core_motion_cpp_FUN_00524a00((CMotionController *)pCVar2);
          iVar4 = core_motion_cpp_FUN_005240c0(this_ptr,motion_name,iVar4);
          core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
                    (pCVar2,iVar4,30.0);
          core_skeleton_cpp_FUN_00569040(pCVar2,_DAT_02c8ad48);
          auStack_108[0] = uStack_60;
          afStack_164[(uint)bVar9 * -2 + 0x18] = afStack_5c[(uint)bVar9 * -2];
          afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
               afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          core_skeleton_cpp_FUN_0056ad90(pCStack_18,aSStack_1e00);
          *(uint *)&param_1->field_0x30 = 0;
          *(uint *)&param_1->field_0x38 = 0;
          iVar4 = _DAT_01d06ab4;
          *(uint *)&param_1->field_0x34 = 0xbfc90fdb;
          iVar4 = *(int *)(iVar4 * 4 + 0x1d06aa4);
          *(float *)pCStack_14 = *(float *)(iVar4 + 0x20);
          *(uint *)&pCStack_14->field_0x4 = *(uint *)(iVar4 + 0x24);
          *(uint *)&pCStack_14->field_0x8 = *(uint *)(iVar4 + 0x28);
          *(float *)(pCStack_14 + 1) = *(float *)(iVar4 + 0x2c);
          *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + _DAT_005f7f9c;
          core_dirmat_cpp_FUN_0045f3e0((CMatrix3x3f *)&param_1->field_0x3c,pCStack_1c);
          core_actor_cpp_FUN_00408ac0(param_1,auStack_108);
          pCVar3 = pCStack_14;
          fStack_d8 = fStack_a8;
          afStack_164[(uint)bVar9 * -2 + 0x24] = afStack_164[(uint)bVar9 * -2 + 0x30];
          afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
               afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31];
          *(float *)pCVar3 = *(float *)pCVar3 - fStack_d8;
          *(float *)&pCVar3->field_0x4 = *(float *)&pCVar3->field_0x4 - fStack_d4;
          *(float *)&pCVar3->field_0x8 = *(float *)&pCVar3->field_0x8 - fStack_d0;
          uStack_78 = 0;
          uStack_70 = 0xbf800000;
          uStack_74 = 0;
          core_actor_cpp_FUN_00408ac0(param_1,&uStack_78);
          pCVar3 = pCStack_14;
          fStack_b4 = fStack_48;
          afStack_164[(uint)bVar9 * -2 + 0x2d] = afStack_5c[(uint)bVar9 * -2 + 6];
          afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e] =
               afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          _DAT_02c8ad54 = 1;
          *(float *)pCVar3 = *(float *)pCVar3 - fStack_b4;
          *(float *)&pCVar3->field_0x4 = *(float *)&pCVar3->field_0x4 - fStack_b0;
          *(float *)&pCVar3->field_0x8 = *(float *)&pCVar3->field_0x8 - fStack_ac;
        }
        this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                                ((CDeformableModelInstance *)
                                 (*(int *)&param_1[1].field_0x18 + 0x158));
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                          (this_ptr_00,"Bip01 Pelvis",1);
        core_skeleton_cpp_FUN_00569040(*(int *)&param_1[1].field_0x18 + 0x158,iVar4);
        auStack_84[0] = uStack_9c;
        afStack_164[(uint)bVar9 * -2 + 0x39] = afStack_164[(uint)bVar9 * -2 + 0x33];
        afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a] =
             afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34];
        core_actor_cpp_FUN_00408bb0(param_1,auStack_84);
        uStack_138 = afStack_5c[2];
        afStack_164[(uint)bVar9 * -2 + 0xc] = afStack_5c[(uint)bVar9 * -2 + 3];
        afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        if ((uint *)&param_1[1].field_0x104 != &uStack_138) {
          *(uint *)&param_1[1].field_0x104 = uStack_138;
          *(uint *)&param_1[1].field_0x108 = uStack_134;
          *(uint *)&param_1[1].field_0x10c = uStack_130;
        }
        puVar7 = (uint *)((int)param_1 + (uint)bVar9 * -8 + 0xc2d8);
        fStack_144 = *(float *)&param_1[1].field_0x104;
        afStack_164[(uint)bVar9 * -2 + 9] = (float)*puVar7;
        afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] = (float)puVar7[(uint)bVar9 * -2 + 1];
        pCStack_2c = (CDeformableModelInstance *)&param_1->field_0x158;
        core_skeleton_cpp_FUN_00569040(pCStack_2c,_DAT_02c8ad4c);
        fVar1 = fStack_144;
        fStack_3c = fStack_120;
        afStack_5c[(uint)bVar9 * -2 + 9] = afStack_164[(uint)bVar9 * -2 + 0x12];
        afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        fStack_90 = fVar1 - fStack_3c;
        fStack_8c = fStack_140 - fStack_38;
        fStack_88 = fStack_13c - fStack_34;
        afStack_164[5] = fVar1 - fStack_3c;
        afStack_164[(uint)bVar9 * -2 + 6] = afStack_164[(uint)bVar9 * -2 + 0x36];
        afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37];
        core_vecdir_cpp_FUN_005a7520(afStack_164 + 5);
        pCVar2 = pCStack_2c;
        uStack_168 = uStack_c0;
        afStack_164[(uint)bVar9 * 0xfffffffe] = afStack_164[(uint)bVar9 * -2 + 0x2a];
        afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b];
        fStack_28 = *(float *)((int)pCVar2 + 8);
        if (_DAT_005f7fa0 <= fStack_28) {
          fStack_24 = 1.0 - (fStack_28 + _DAT_005f7fa4) * _DAT_005f7fa8;
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = fStack_28 * _DAT_005f7fa8;
        }
        core_xform_cpp_FUN_005b7af0(uStack_168);
        uStack_184 = uStack_1b4;
        auStack_180[(uint)bVar9 * -2] = auStack_1b0[(uint)bVar9 * -2];
        auStack_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             auStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        (auStack_180 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (auStack_1b0 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
        pCStack_2c = (CDeformableModelInstance *)&param_1->field_0x158;
        core_skeleton_cpp_FUN_005695e0
                  (pCStack_2c,(CQuaternion4f *)&uStack_184,fStack_24,_DAT_02c8ad50,
                   core_skeleton_cpp_FUN_00567360);
        core_xform_cpp_FUN_005b7b30(afStack_164[0]);
        fVar1 = fStack_24;
        pCVar2 = pCStack_2c;
        uStack_194 = auStack_1b0[3];
        auStack_190[(uint)bVar9 * -2] = auStack_1b0[(uint)bVar9 * -2 + 4];
        auStack_190[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             auStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
        (auStack_190 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (auStack_1b0 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
        core_skeleton_cpp_FUN_005695e0
                  (pCVar2,(CQuaternion4f *)&uStack_194,fVar1,_DAT_02c8ad4c,
                   core_skeleton_cpp_FUN_00567360);
      }
    }
    fVar1 = param_2 / _DAT_00606df8 + *(float *)&param_1[1].field_0xa0;
    *(float *)&param_1[1].field_0xa0 = fVar1;
    if (1.0 < fVar1) {
      *(uint *)&param_1[1].field_0xa0 = 0x3f800000;
    }
    core_charactr_cpp_FUN_0042e160(param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_00433e80(param_1,param_2);
  }
  return;
}
