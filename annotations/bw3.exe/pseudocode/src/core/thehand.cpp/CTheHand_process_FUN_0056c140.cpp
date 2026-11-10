// Name: core_thehand.cpp_CTheHand_process_FUN_0056c140
// Address: 0056c140
// Address Range: [[0056c140, 0056c87d]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_process_FUN_0056c140(CTheHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_thehand_cpp_CTheHand_process_FUN_0056c140(CTheHand *this_ptr,float delta_time)

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
  float *pfVar10;
  byte bVar11;
  char *motion_name;
  SPose aSStack_1e00 [1136];
  float afStack_1990 [1431];
  CMatrix3x4f CStack_334;
  uint auStack_304 [12];
  uint auStack_2d4 [12];
  byte auStack_2a4 [48];
  uint auStack_274 [12];
  uint auStack_244 [12];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  CQuaternion4f CStack_1b4;
  float fStack_1a4;
  float afStack_1a0 [7];
  CQuaternion4f CStack_184;
  float fStack_174;
  float afStack_170 [5];
  float fStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  float afStack_144 [3];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float afStack_12c [3];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [3];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  float fStack_d8;
  float afStack_cc [3];
  float afStack_c0 [4];
  float afStack_b0 [5];
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  float afStack_78 [3];
  float fStack_6c;
  float afStack_60 [4];
  float afStack_50 [5];
  uint uStack_3c;
  float fStack_30;
  CDeformableModelInstance *pCStack_2c;
  float fStack_28;
  float fStack_24;
  byte *puStack_20;
  CVector3f *pCStack_1c;
  CDeformableModelInstance *pCStack_18;
  CVector3f *pCStack_14;
  
  bVar11 = 0;
  iVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar4 != 0) {
    puStack_20 = &this_ptr->field_0xd090;
    fStack_30 = delta_time * *(float *)&this_ptr->field_0xcdcc;
    pCStack_14 = (CVector3f *)&this_ptr->field_0x20;
    pCStack_1c = (CVector3f *)&this_ptr->field_0x30;
    pCStack_18 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    while (0.0 < fStack_30) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                        (&pCStack_18->base,afStack_50 + 8);
      if (0x22 < uVar6) {
        if (uVar6 < 0x24) {
          iVar4 = *(int *)&this_ptr->field_0xcde4;
          if ((iVar4 != 0) &&
             (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == 0)) {
            core_thehand_cpp_FUN_0056cbd0(this_ptr);
            puVar7 = auStack_244;
            puVar9 = auStack_274;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
              puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            }
            core_xform_cpp_FUN_00584450(auStack_274);
            afStack_114[0] = (float)uStack_e4;
            afStack_170[(uint)bVar11 * -2 + 0x18] = afStack_170[(uint)bVar11 * -2 + 0x24];
            afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                 afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
            core_actor_cpp_FUN_00408b80(this_ptr,afStack_170 + 0x17);
            fStack_108 = fStack_d8;
            afStack_170[(uint)bVar11 * -2 + 0x1b] = afStack_170[(uint)bVar11 * -2 + 0x27];
            afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                 afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
            iVar4 = *(int *)&this_ptr->field_0xcde4;
            fStack_120 = fStack_108 - *(float *)(iVar4 + 0x20);
            fStack_11c = fStack_104 - *(float *)(iVar4 + 0x24);
            fStack_118 = fStack_100 - *(float *)(iVar4 + 0x28);
            fStack_174 = fStack_120;
            afStack_170[(uint)bVar11 * -2] = afStack_170[(uint)bVar11 * -2 + 0x15];
            afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
            if (((ABS(afStack_170[0]) <= (float)_DAT_005d651b) &&
                (fStack_174 * fStack_174 + afStack_170[1] * afStack_170[1] <= (float)_DAT_005d6523))
               && (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xec))(iVar4,this_ptr,1),
                  iVar4 != 0)) {
              *(uint *)&this_ptr->field_0xd05c = 0;
              core_xform_cpp_FUN_00583940
                        (auStack_2a4,*(int *)&this_ptr->field_0xcde4 + 0x20,
                         *(int *)&this_ptr->field_0xcde4 + 0x30);
              core_xform_cpp_FUN_00583800(&CStack_334,pCStack_14,pCStack_1c);
              core_xform_cpp_inverse_FUN_00584560(auStack_274);
              puVar7 = auStack_214;
              puVar9 = auStack_304;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_2a4,&CStack_334,auStack_304);
              puVar7 = auStack_1e4;
              puVar9 = auStack_2d4;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_2d4);
              pfVar8 = afStack_1990 + 0x58b;
              pfVar10 = (float *)&this_ptr->field_0xd060;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar10 = *pfVar8;
                pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              uStack_150 = 0x3e6b395c;
              uStack_148 = 0xbf44b945;
              uStack_14c = 0x3dcf14db;
              afStack_60[0] = -2.44619;
              afStack_cc[0] = 0.229711;
              afStack_170[(uint)bVar11 * -2 + 0x2a] = afStack_170[(uint)bVar11 * -2 + 9];
              afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
                   afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              afStack_60[1] = -1.91555;
              afStack_60[2] = -0.767692;
              core_xform_cpp_FUN_00583940(puStack_20,afStack_b0 + 0x14,afStack_170 + 0x29);
            }
          }
        }
        else if ((uVar6 == 0x5dc) && (iVar4 = *(int *)&this_ptr->field_0xcde4, iVar4 != 0)) {
          (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4);
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_18->base);
    if ((*(int *)(pSVar5 + 0x24) != 0) && (*(int *)(pSVar5 + 0x24) == 1)) {
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      *(int *)&this_ptr->field_0xcde4 = iVar4;
      if ((iVar4 != 0) &&
         ((iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 < 1 &&
          (iVar4 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf4))
                             (*(int *)&this_ptr->field_0xcde4), pCVar2 = pCStack_18, iVar4 == 0))))
      {
        if (_DAT_02cfd7a4 == 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850
                    (pCStack_18,aSStack_1e00);
          iVar4 = 1;
          motion_name = "attack_nocollision";
          this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&pCVar2->base);
          iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                            (this_ptr_00,motion_name,iVar4);
          core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
                    (pCVar2,iVar4,30.0);
          core_skeleton_cpp_FUN_0054dbd0(pCVar2,_DAT_02cfd798);
          afStack_12c[0] = (float)uStack_3c;
          afStack_170[(uint)bVar11 * -2 + 0x12] = afStack_50[(uint)bVar11 * -2 + 6];
          afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
               afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920
                    (pCStack_18,aSStack_1e00);
          *(uint *)&this_ptr->field_0x30 = 0;
          *(uint *)&this_ptr->field_0x38 = 0;
          iVar4 = _DAT_01d5ba14;
          *(uint *)&this_ptr->field_0x34 = 0xbfc90fdb;
          iVar4 = *(int *)(iVar4 * 4 + 0x1d5ba04);
          pCStack_14->x = *(float *)(iVar4 + 0x20);
          pCStack_14->y = *(float *)(iVar4 + 0x24);
          pCStack_14->z = *(float *)(iVar4 + 0x28);
          pCStack_14[1].x = *(float *)(iVar4 + 0x2c);
          *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + _DAT_005d650b;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                    ((CMatrix3x3f *)&this_ptr->field_0x3c,pCStack_1c);
          core_actor_cpp_FUN_00408b00(this_ptr,afStack_170 + 0x11);
          pCVar3 = pCStack_14;
          fStack_fc = fStack_9c;
          afStack_170[(uint)bVar11 * -2 + 0x1e] = afStack_b0[(uint)bVar11 * -2 + 6];
          afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
               afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          pCVar3->x = pCVar3->x - fStack_fc;
          pCVar3->y = pCVar3->y - fStack_f8;
          pCVar3->z = pCVar3->z - fStack_f4;
          afStack_c0[0] = 0.0;
          afStack_c0[2] = -1.0;
          afStack_c0[1] = 0.0;
          core_actor_cpp_FUN_00408b00(this_ptr,afStack_170 + 0x2c);
          pCVar3 = pCStack_14;
          afStack_60[3] = fStack_6c;
          afStack_50[(uint)bVar11 * -2] = afStack_b0[(uint)bVar11 * -2 + 0x12];
          afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
          _DAT_02cfd7a4 = 1;
          pCVar3->x = pCVar3->x - afStack_60[3];
          pCVar3->y = pCVar3->y - afStack_50[0];
          pCVar3->z = pCVar3->z - afStack_50[1];
        }
        this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                ((CDeformableModelInstance *)
                                 (*(int *)&this_ptr->field_0xcde4 + 0x158));
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                          (this_ptr_01,"Bip01 Pelvis",1);
        core_skeleton_cpp_FUN_0054dbd0(*(int *)&this_ptr->field_0xcde4 + 0x158,iVar4);
        afStack_78[0] = afStack_50[2];
        afStack_b0[(uint)bVar11 * -2 + 0xf] = afStack_50[(uint)bVar11 * -2 + 3];
        afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
             afStack_50[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        core_actor_cpp_FUN_00408bf0(this_ptr,afStack_b0 + 0xe);
        fStack_15c = (float)uStack_84;
        afStack_170[(uint)bVar11 * -2 + 6] = afStack_b0[(uint)bVar11 * -2 + 0xc];
        afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
        if ((float *)&this_ptr->field_0xd0c0 != afStack_170 + 5) {
          *(float *)&this_ptr->field_0xd0c0 = fStack_15c;
          *(uint *)&this_ptr->field_0xd0c4 = uStack_158;
          *(uint *)&this_ptr->field_0xd0c8 = uStack_154;
        }
        pfVar8 = (float *)((int)this_ptr + (uint)bVar11 * -8 + 0xd0c4);
        fStack_138 = *(float *)&this_ptr->field_0xd0c0;
        afStack_170[(uint)bVar11 * -2 + 0xf] = *pfVar8;
        afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] = pfVar8[(uint)bVar11 * -2 + 1];
        pCStack_2c = (CDeformableModelInstance *)&this_ptr->field_0x158;
        core_skeleton_cpp_FUN_0054dbd0(pCStack_2c,_DAT_02cfd79c);
        fVar1 = fStack_138;
        fStack_90 = afStack_170[2];
        afStack_b0[(uint)bVar11 * -2 + 9] = afStack_170[(uint)bVar11 * -2 + 3];
        afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_f0 = fVar1 - fStack_90;
        fStack_ec = fStack_134 - fStack_8c;
        fStack_e8 = fStack_130 - fStack_88;
        afStack_144[0] = fVar1 - fStack_90;
        afStack_170[(uint)bVar11 * -2 + 0xc] = afStack_170[(uint)bVar11 * -2 + 0x21];
        afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             afStack_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_170 + 0xb);
        pCVar2 = pCStack_2c;
        afStack_b0[2] = afStack_c0[3];
        afStack_b0[(uint)bVar11 * -2 + 3] = afStack_b0[(uint)bVar11 * -2];
        afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_28 = *(float *)((int)pCVar2 + 8);
        if (_DAT_005d650f <= fStack_28) {
          fStack_24 = 1.0 - (fStack_28 + _DAT_005d6513) * _DAT_005d6517;
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = fStack_28 * _DAT_005d6517;
        }
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(afStack_b0[2]);
        CStack_184.w = fStack_1a4;
        pfVar8 = (float *)((int)&CStack_184 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *(float *)((int)&CStack_184 + (uint)bVar11 * -8 + 4) = afStack_1a0[(uint)bVar11 * -2];
        *pfVar8 = afStack_1a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        pfVar8[(uint)bVar11 * -2 + 1] =
             (afStack_1a0 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        pCStack_2c = (CDeformableModelInstance *)&this_ptr->field_0x158;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCStack_2c,&CStack_184,fStack_24,_DAT_02cfd7a0,core_skeleton_cpp_FUN_0054bef0);
        core_xform_cpp_quaternionFromAngleY_FUN_00585d10(afStack_b0[3]);
        fVar1 = fStack_24;
        pCVar2 = pCStack_2c;
        CStack_1b4.w = afStack_1a0[3];
        pfVar8 = (float *)((int)&CStack_1b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        *(float *)((int)&CStack_1b4 + (uint)bVar11 * -8 + 4) = afStack_1a0[(uint)bVar11 * -2 + 4];
        *pfVar8 = afStack_1a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
        pfVar8[(uint)bVar11 * -2 + 1] =
             (afStack_1a0 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCVar2,&CStack_1b4,fVar1,_DAT_02cfd79c,core_skeleton_cpp_FUN_0054bef0);
      }
    }
    fVar1 = delta_time / _DAT_005e54f8 + *(float *)&this_ptr->field_0xd05c;
    *(float *)&this_ptr->field_0xd05c = fVar1;
    if (1.0 < fVar1) {
      *(uint *)&this_ptr->field_0xd05c = 0x3f800000;
    }
    core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&this_ptr->field_0x158);
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  }
  return;
}
