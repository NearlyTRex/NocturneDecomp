// Name: core_thehand.cpp_CTheHand_process_FUN_00599150
// Address: 00599150
// Address Range: [[00599150, 00599889]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_process_FUN_00599150(CTheHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_thehand_cpp_CTheHand_process_FUN_00599150(CTheHand *this_ptr,float delta_time)

{
  float fVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  CMotionList *this_ptr_00;
  CSkeleton *this_ptr_01;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  char *motion_name;
  SPose aSStack_1e00 [1136];
  float afStack_1990 [1419];
  CMatrix3x4f CStack_364;
  uint auStack_334 [12];
  uint auStack_304 [12];
  CMatrix3x4f CStack_2d4;
  uint auStack_2a4 [12];
  uint auStack_274 [12];
  uint auStack_244 [12];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  float fStack_1b4;
  float afStack_1b0 [7];
  CQuaternion4f CStack_194;
  CQuaternion4f CStack_184;
  CVector3f CStack_174;
  uint uStack_168;
  float afStack_164 [8];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [3];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [3];
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
  
  bVar10 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    pCStack_20 = (CMatrix3x4f *)&this_ptr->field_0xc2a4;
    fStack_30 = delta_time * *(float *)&this_ptr->field_0xc1d0;
    pCStack_14 = (CVector3f *)&this_ptr->field_0x20;
    pCStack_1c = (CVector3f *)&this_ptr->field_0x30;
    pCStack_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    while (0.0 < fStack_30) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        (&pCStack_18->base,afStack_5c + 0xb);
      if (0x22 < uVar6) {
        if (uVar6 < 0x24) {
          iVar4 = *(int *)&this_ptr->field_0xc1e8;
          if ((iVar4 != 0) &&
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == 0)) {
            core_thehand_cpp_FUN_00599be0(this_ptr);
            puVar7 = auStack_1e4;
            puVar9 = auStack_2a4;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
              puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
            }
            core_xform_cpp_FUN_005b6270(auStack_2a4);
            afStack_cc[0] = (float)uStack_f0;
            afStack_164[(uint)bVar10 * -2 + 0x27] = afStack_164[(uint)bVar10 * -2 + 0x1e];
            afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28] =
                 afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
            core_actor_cpp_FUN_00408b40(this_ptr,afStack_164 + 0x26);
            fStack_114 = fStack_e4;
            afStack_164[(uint)bVar10 * -2 + 0x15] = afStack_164[(uint)bVar10 * -2 + 0x21];
            afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
                 afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
            iVar4 = *(int *)&this_ptr->field_0xc1e8;
            fStack_12c = fStack_114 - *(float *)(iVar4 + 0x20);
            fStack_128 = fStack_110 - *(float *)(iVar4 + 0x24);
            fStack_124 = fStack_10c - *(float *)(iVar4 + 0x28);
            fStack_fc = fStack_12c;
            afStack_164[(uint)bVar10 * -2 + 0x1b] = afStack_164[(uint)bVar10 * -2 + 0xf];
            afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
                 afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
            if (((ABS(fStack_f8) <= (float)_DAT_005f7fac) &&
                (fStack_fc * fStack_fc + fStack_f4 * fStack_f4 <= (float)_DAT_005f7fb4)) &&
               (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,this_ptr,1), iVar4 != 0)
               ) {
              *(uint *)&this_ptr->field_0xc270 = 0;
              core_xform_cpp_FUN_005b5760
                        (&CStack_2d4,(CVector3f *)(*(int *)&this_ptr->field_0xc1e8 + 0x20),
                         (CVector3f *)(*(int *)&this_ptr->field_0xc1e8 + 0x30));
              core_xform_cpp_FUN_005b5620(&CStack_364,pCStack_14,pCStack_1c);
              core_xform_cpp_inverse_FUN_005b6380(auStack_2a4);
              puVar7 = auStack_244;
              puVar9 = auStack_334;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_2d4,&CStack_364,auStack_334);
              puVar7 = auStack_214;
              puVar9 = auStack_304;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(auStack_304);
              puVar7 = auStack_274;
              puVar9 = (uint *)&this_ptr->field_0xc274;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              afStack_164[2] = 0.229711;
              afStack_164[4] = -0.768452;
              afStack_164[3] = 0.101114;
              CStack_6c.x = -2.44619;
              CStack_174.x = 0.229711;
              *(float *)((int)&CStack_174 + (uint)bVar10 * -8 + 4) =
                   afStack_164[(uint)bVar10 * -2 + 3];
              *(float *)((int)&CStack_174 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              CStack_6c.y = -1.91555;
              CStack_6c.z = -0.767692;
              core_xform_cpp_FUN_005b5760(pCStack_20,&CStack_6c,&CStack_174);
            }
          }
        }
        else if ((uVar6 == 0x5dc) && (iVar4 = *(int *)&this_ptr->field_0xc1e8, iVar4 != 0)) {
          (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4);
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_18->base);
    if ((*(int *)(pSVar5 + 0x24) != 0) && (*(int *)(pSVar5 + 0x24) == 1)) {
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      *(int *)&this_ptr->field_0xc1e8 = iVar4;
      if ((iVar4 != 0) &&
         ((iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 < 1 &&
          (iVar4 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf4))
                             (*(int *)&this_ptr->field_0xc1e8), pCVar2 = pCStack_18, iVar4 == 0))))
      {
        if (_DAT_02c8ad54 == 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
                    (pCStack_18,aSStack_1e00);
          iVar4 = 1;
          motion_name = "attack_nocollision";
          this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&pCVar2->base);
          iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                            (this_ptr_00,motion_name,iVar4);
          core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
                    (pCVar2,iVar4,30.0);
          core_skeleton_cpp_FUN_00569040(pCVar2,_DAT_02c8ad48);
          afStack_108[0] = (float)uStack_60;
          afStack_164[(uint)bVar10 * -2 + 0x18] = afStack_5c[(uint)bVar10 * -2];
          afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
               afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
                    (pCStack_18,aSStack_1e00);
          *(uint *)&this_ptr->field_0x30 = 0;
          *(uint *)&this_ptr->field_0x38 = 0;
          iVar4 = _DAT_01d06ab4;
          *(uint *)&this_ptr->field_0x34 = 0xbfc90fdb;
          iVar4 = *(int *)(iVar4 * 4 + 0x1d06aa4);
          pCStack_14->x = *(float *)(iVar4 + 0x20);
          pCStack_14->y = *(float *)(iVar4 + 0x24);
          pCStack_14->z = *(float *)(iVar4 + 0x28);
          pCStack_14[1].x = *(float *)(iVar4 + 0x2c);
          *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + _DAT_005f7f9c;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                    ((CMatrix3x3f *)&this_ptr->field_0x3c,pCStack_1c);
          core_actor_cpp_FUN_00408ac0(this_ptr,afStack_164 + 0x17);
          pCVar3 = pCStack_14;
          fStack_d8 = fStack_a8;
          afStack_164[(uint)bVar10 * -2 + 0x24] = afStack_164[(uint)bVar10 * -2 + 0x30];
          afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
               afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31];
          pCVar3->x = pCVar3->x - fStack_d8;
          pCVar3->y = pCVar3->y - fStack_d4;
          pCVar3->z = pCVar3->z - fStack_d0;
          afStack_78[0] = 0.0;
          afStack_78[2] = -1.0;
          afStack_78[1] = 0.0;
          core_actor_cpp_FUN_00408ac0(this_ptr,afStack_164 + 0x3b);
          pCVar3 = pCStack_14;
          fStack_b4 = fStack_48;
          afStack_164[(uint)bVar10 * -2 + 0x2d] = afStack_5c[(uint)bVar10 * -2 + 6];
          afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
               afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          _DAT_02c8ad54 = 1;
          pCVar3->x = pCVar3->x - fStack_b4;
          pCVar3->y = pCVar3->y - fStack_b0;
          pCVar3->z = pCVar3->z - fStack_ac;
        }
        this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                                ((CDeformableModelInstance *)
                                 (*(int *)&this_ptr->field_0xc1e8 + 0x158));
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                          (this_ptr_01,"Bip01 Pelvis",1);
        core_skeleton_cpp_FUN_00569040(*(int *)&this_ptr->field_0xc1e8 + 0x158,iVar4);
        afStack_84[0] = (float)uStack_9c;
        afStack_164[(uint)bVar10 * -2 + 0x39] = afStack_164[(uint)bVar10 * -2 + 0x33];
        afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a] =
             afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34];
        core_actor_cpp_FUN_00408bb0(this_ptr,afStack_164 + 0x38);
        fStack_138 = afStack_5c[2];
        afStack_164[(uint)bVar10 * -2 + 0xc] = afStack_5c[(uint)bVar10 * -2 + 3];
        afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        if ((float *)&this_ptr->field_0xc2d4 != afStack_164 + 0xb) {
          *(float *)&this_ptr->field_0xc2d4 = fStack_138;
          *(uint *)&this_ptr->field_0xc2d8 = uStack_134;
          *(uint *)&this_ptr->field_0xc2dc = uStack_130;
        }
        pfVar8 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0xc2d8);
        fStack_144 = *(float *)&this_ptr->field_0xc2d4;
        afStack_164[(uint)bVar10 * -2 + 9] = *pfVar8;
        afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] = pfVar8[(uint)bVar10 * -2 + 1];
        pCStack_2c = (CDeformableModelInstance *)&this_ptr->field_0x158;
        core_skeleton_cpp_FUN_00569040(pCStack_2c,_DAT_02c8ad4c);
        fVar1 = fStack_144;
        fStack_3c = fStack_120;
        afStack_5c[(uint)bVar10 * -2 + 9] = afStack_164[(uint)bVar10 * -2 + 0x12];
        afStack_5c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
        fStack_90 = fVar1 - fStack_3c;
        fStack_8c = fStack_140 - fStack_38;
        fStack_88 = fStack_13c - fStack_34;
        afStack_164[5] = fVar1 - fStack_3c;
        afStack_164[(uint)bVar10 * -2 + 6] = afStack_164[(uint)bVar10 * -2 + 0x36];
        afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_164 + 5);
        pCVar2 = pCStack_2c;
        uStack_168 = uStack_c0;
        afStack_164[(uint)bVar10 * -2] = afStack_164[(uint)bVar10 * -2 + 0x2a];
        afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_164[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
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
        core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(uStack_168);
        CStack_184.w = fStack_1b4;
        pfVar8 = (float *)((int)&CStack_184 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&CStack_184 + (uint)bVar10 * -8 + 4) = afStack_1b0[(uint)bVar10 * -2];
        *pfVar8 = afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        pfVar8[(uint)bVar10 * -2 + 1] =
             (afStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        pCStack_2c = (CDeformableModelInstance *)&this_ptr->field_0x158;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCStack_2c,&CStack_184,fStack_24,_DAT_02c8ad50,core_skeleton_cpp_FUN_00567360);
        core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(afStack_164[0]);
        fVar1 = fStack_24;
        pCVar2 = pCStack_2c;
        CStack_194.w = afStack_1b0[3];
        pfVar8 = (float *)((int)&CStack_194 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&CStack_194 + (uint)bVar10 * -8 + 4) = afStack_1b0[(uint)bVar10 * -2 + 4];
        *pfVar8 = afStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        pfVar8[(uint)bVar10 * -2 + 1] =
             (afStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCVar2,&CStack_194,fVar1,_DAT_02c8ad4c,core_skeleton_cpp_FUN_00567360);
      }
    }
    fVar1 = delta_time / _DAT_00606df8 + *(float *)&this_ptr->field_0xc270;
    *(float *)&this_ptr->field_0xc270 = fVar1;
    if (1.0 < fVar1) {
      *(uint *)&this_ptr->field_0xc270 = 0x3f800000;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&this_ptr->field_0x158);
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  }
  return;
}
