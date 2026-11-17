// Name: core_thehand.cpp_CTheHand_process_FUN_00599150
// Address: 00599150
// Address Range: [[00599150, 00599889]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_process_FUN_00599150(CTheHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_thehand_cpp_CTheHand_process_FUN_00599150(CTheHand *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CHero *pCVar3;
  CCharacter *pCVar4;
  CDeformableModelInstance *pCVar5;
  CVector3f *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  uint uVar9;
  EDeathState EVar10;
  CDemonActor *pCVar11;
  CMotionList *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMatrix3x4f *pCVar12;
  CMatrix3x4f *pCVar13;
  float *pfVar14;
  uint *puVar15;
  CMatrix3x4f *pCVar16;
  uint *puVar17;
  byte bVar18;
  char *motion_name;
  SPose SStack_1e00;
  CMatrix3x4f CStack_364;
  CMatrix3x4f CStack_334;
  CMatrix3x4f CStack_304;
  CMatrix3x4f CStack_2d4;
  CMatrix3x4f CStack_2a4;
  CMatrix3x4f CStack_274;
  CMatrix3x4f CStack_244;
  CMatrix3x4f CStack_214;
  CMatrix3x4f CStack_1e4;
  CQuaternion4f CStack_1b4;
  CQuaternion4f CStack_1a4;
  CQuaternion4f CStack_194;
  CQuaternion4f CStack_184;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [5];
  CVector3f CStack_150;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [3];
  CDeformableModelInstance *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CMatrix3x4f *pCStack_20;
  CVector3f *pCStack_1c;
  CDeformableModelInstance *pCStack_18;
  CVector3f *pCStack_14;
  
  bVar18 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 != 0) {
    pCStack_20 = &this_ptr->prev_target_matrix;
    afStack_38[2] = delta_time * (this_ptr->base).speed;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    pCStack_1c = (CVector3f *)&(this_ptr->base).base.base.orient;
    pCStack_18 = &(this_ptr->base).base.model;
    while (0.0 < afStack_38[2]) {
      uVar9 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        (&pCStack_18->base,afStack_38 + 2);
      if (0x22 < uVar9) {
        if (uVar9 < 0x24) {
          pCVar4 = (this_ptr->base).victim;
          if ((pCVar4 != (CCharacter *)0x0) &&
             (pCVar11 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
             pCVar11 == (CDemonActor *)0x0)) {
            core_thehand_cpp_CTheHand_getHandBoneMatrix_FUN_00599be0(this_ptr,&CStack_1e4);
            pCVar13 = &CStack_1e4;
            pCVar12 = &CStack_2a4;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              pCVar12->m[0].w = pCVar13->m[0].w;
              pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar18 * -2 + 1) * 4);
              pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar18 * -2 + 1) * 4);
            }
            core_xform_cpp_getTranslation_FUN_005b6270(&CStack_2a4,&CStack_f0);
            CStack_cc.x = CStack_f0.x;
            *(uint *)((int)&CStack_cc + (uint)bVar18 * -8 + 4) =
                 *(uint *)((int)&CStack_f0 + (uint)bVar18 * -8 + 4);
            *(uint *)((int)&CStack_cc + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
                 *(uint *)((int)&CStack_f0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      ((CDemonActor *)this_ptr,&CStack_cc,&CStack_e4);
            fStack_114 = CStack_e4.x;
            afStack_110[(uint)bVar18 * -2] = *(float *)((int)&CStack_e4 + (uint)bVar18 * -8 + 4);
            afStack_110[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 *(float *)((int)&CStack_e4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            pCVar4 = (this_ptr->base).victim;
            fStack_12c = fStack_114 - (pCVar4->base).location.position.x;
            fStack_128 = afStack_110[0] - (pCVar4->base).location.position.y;
            fStack_124 = afStack_110[1] - (pCVar4->base).location.position.z;
            fStack_fc = fStack_12c;
            afStack_f8[(uint)bVar18 * -2] = afStack_140[(uint)bVar18 * -2 + 6];
            afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
            if (((ABS(afStack_f8[0]) <= (float)6) &&
                (fStack_fc * fStack_fc + afStack_f8[1] * afStack_f8[1] <= (float)16))
               && (iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                     (pCVar4,(CDemonActor *)this_ptr,1), iVar7 != 0)) {
              pCVar4 = (this_ptr->base).victim;
              this_ptr->target_blend = 0.0;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
                        (&CStack_2d4,&(pCVar4->base).location.position,&(pCVar4->base).orient.vec);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005b5620
                        (&CStack_364,pCStack_14,pCStack_1c);
              core_xform_cpp_inverse_FUN_005b6380(&CStack_2a4,&CStack_244);
              pCVar13 = &CStack_334;
              pCVar12 = &CStack_244;
              pCVar16 = &CStack_334;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                pCVar16->m[0].w = pCVar12->m[0].w;
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar18 * -2 + 1) * 4);
                pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar18 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_2d4,&CStack_364,&CStack_214);
              pCVar12 = &CStack_214;
              pCVar16 = &CStack_304;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                pCVar16->m[0].w = pCVar12->m[0].w;
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar18 * -2 + 1) * 4);
                pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar18 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_304,pCVar13,&CStack_274);
              pCVar13 = &CStack_274;
              pCVar12 = &this_ptr->target_matrix;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                pCVar12->m[0].w = pCVar13->m[0].w;
                pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar18 * -2 + 1) * 4);
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + (uint)bVar18 * -8 + 4);
              }
              afStack_164[2] = 0.229711;
              afStack_164[4] = -0.768452;
              afStack_164[3] = 0.101114;
              CStack_6c.x = -2.44619;
              CStack_174.x = 0.229711;
              *(float *)((int)&CStack_174 + (uint)bVar18 * -8 + 4) =
                   afStack_164[(uint)bVar18 * -2 + 3];
              *(float *)((int)&CStack_174 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
                   afStack_164[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
              CStack_6c.y = -1.91555;
              CStack_6c.z = -0.767692;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
                        (pCStack_20,&CStack_6c,&CStack_174);
            }
          }
        }
        else if ((uVar9 == 0x5dc) && (pCVar4 = (this_ptr->base).victim, pCVar4 != (CCharacter *)0x0)
                ) {
          (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4);
        }
      }
    }
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_18->base);
    if ((pSVar8->state_index != 0) && (pSVar8->state_index == 1)) {
      pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
      (this_ptr->base).victim = &pCVar3->base;
      if ((pCVar3 != (CHero *)0x0) &&
         ((EVar10 = (*(((pCVar3->base).base.vtable._uc)->_uc).getDeathState)(&pCVar3->base),
          (int)EVar10 < 1 &&
          (pCVar4 = (this_ptr->base).victim,
          pCVar11 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4), pCVar5 = pCStack_18,
          pCVar11 == (CDemonActor *)0x0)))) {
        if (g_INT_02c8ad54 == 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
                    (pCStack_18,&SStack_1e00);
          iVar7 = 1;
          motion_name = "attack_nocollision";
          this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&pCVar5->base);
          iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                            (this_ptr_00,motion_name,iVar7);
          core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
                    (pCVar5,iVar7,30.0);
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (pCVar5,g_INT_02c8ad48,&CStack_60);
          CStack_108.x = CStack_60.x;
          *(uint *)((int)&CStack_108 + (uint)bVar18 * -8 + 4) =
               *(uint *)((int)&CStack_60 + (uint)bVar18 * -8 + 4);
          *(uint *)((int)&CStack_108 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
               *(uint *)((int)&CStack_60 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
                    (pCStack_18,&SStack_1e00);
          (this_ptr->base).base.base.orient.vec.x = 0.0;
          (this_ptr->base).base.base.orient.vec.z = 0.0;
          iVar7 = g_INT_01d06ab4;
          (this_ptr->base).base.base.orient.vec.y = -1.5707964;
          pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[iVar7];
          ((CVector3f *)&pCStack_14->x)->x = (pCVar3->base).base.location.position.x;
          pCStack_14->y = (pCVar3->base).base.location.position.y;
          pCStack_14->z = (pCVar3->base).base.location.position.z;
          pCStack_14[1].x = (float)(pCVar3->base).base.location.area_id;
          (this_ptr->base).base.base.location.position.y =
               (this_ptr->base).base.base.location.position.y + 3.0f;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                    (&(this_ptr->base).base.base.orient_matrix,pCStack_1c);
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    ((CDemonActor *)this_ptr,&CStack_108,&CStack_a8);
          pCVar6 = pCStack_14;
          fStack_d8 = CStack_a8.x;
          afStack_d4[(uint)bVar18 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + 4);
          afStack_d4[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          fVar1 = pCVar6->y;
          fVar2 = pCVar6->z;
          ((CVector3f *)&pCVar6->x)->x = ((CVector3f *)&pCVar6->x)->x - fStack_d8;
          pCVar6->y = fVar1 - afStack_d4[0];
          pCVar6->z = fVar2 - afStack_d4[1];
          CStack_78.x = 0.0;
          CStack_78.z = -1.0;
          CStack_78.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
                    ((CDemonActor *)this_ptr,&CStack_78,&CStack_48);
          pCVar6 = pCStack_14;
          fStack_b4 = CStack_48.x;
          afStack_b0[(uint)bVar18 * -2] = *(float *)((int)&CStack_48 + (uint)bVar18 * -8 + 4);
          afStack_b0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               *(float *)((int)&CStack_48 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          fVar1 = pCVar6->y;
          fVar2 = pCVar6->z;
          g_INT_02c8ad54 = 1;
          ((CVector3f *)&pCVar6->x)->x = ((CVector3f *)&pCVar6->x)->x - fStack_b4;
          pCVar6->y = fVar1 - afStack_b0[0];
          pCVar6->z = fVar2 - afStack_b0[1];
        }
        this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                                (&((this_ptr->base).victim)->model);
        iVar7 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                          (this_ptr_01,"Bip01 Pelvis",1);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (&((this_ptr->base).victim)->model,iVar7,&CStack_9c);
        CStack_84.x = CStack_9c.x;
        *(uint *)((int)&CStack_84 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_9c + (uint)bVar18 * -8 + 4);
        *(uint *)((int)&CStack_84 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             *(uint *)((int)&CStack_9c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&CStack_84,&CStack_54);
        afStack_140[2] = CStack_54.x;
        afStack_140[(uint)bVar18 * -2 + 3] = *(float *)((int)&CStack_54 + (uint)bVar18 * -8 + 4);
        afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
             *(float *)((int)&CStack_54 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        if (&this_ptr->target_point != (CVector3f *)(afStack_140 + 2)) {
          (this_ptr->target_point).x = afStack_140[2];
          (this_ptr->target_point).y = afStack_140[3];
          (this_ptr->target_point).z = fStack_130;
        }
        pfVar14 = (float *)((int)this_ptr + (uint)bVar18 * -8 + 0xc2d8);
        fStack_144 = (this_ptr->target_point).x;
        afStack_140[(uint)bVar18 * -2] = *pfVar14;
        afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] = pfVar14[(uint)bVar18 * -2 + 1];
        pCStack_2c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (pCStack_2c,g_INT_02c8ad4c,&CStack_120);
        fVar1 = fStack_144;
        fStack_3c = CStack_120.x;
        afStack_38[(uint)bVar18 * -2] = *(float *)((int)&CStack_120 + (uint)bVar18 * -8 + 4);
        afStack_38[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
             *(float *)((int)&CStack_120 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        fStack_90 = fVar1 - fStack_3c;
        afStack_8c[0] = afStack_140[0] - afStack_38[0];
        afStack_8c[1] = afStack_140[1] - afStack_38[1];
        CStack_150.x = fVar1 - fStack_3c;
        *(float *)((int)&CStack_150 + (uint)bVar18 * -8 + 4) = afStack_8c[(uint)bVar18 * -2];
        *(float *)((int)&CStack_150 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
             afStack_8c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_150,&CStack_c0);
        pCVar5 = pCStack_2c;
        fStack_168 = CStack_c0.x;
        afStack_164[(uint)bVar18 * -2] = *(float *)((int)&CStack_c0 + (uint)bVar18 * -8 + 4);
        afStack_164[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
             *(float *)((int)&CStack_c0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        fStack_28 = (pCVar5->base).current_frame_number;
        if (38.0f <= fStack_28) {
          fStack_24 = 1.0 - (fStack_28 + -38.0f) * 0.02631579f;
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = fStack_28 * 0.02631579f;
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(fStack_168,&CStack_1b4);
        CStack_184.w = CStack_1b4.w;
        puVar17 = (uint *)((int)&CStack_184 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        puVar15 = (uint *)((int)&CStack_1b4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        *(uint *)((int)&CStack_184 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar18 * -8 + 4);
        *puVar17 = *puVar15;
        puVar17[(uint)bVar18 * -2 + 1] = puVar15[(uint)bVar18 * -2 + 1];
        pCStack_2c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCStack_2c,&CStack_184,fStack_24,g_INT_02c8ad50,
                   core_skeleton_cpp_blendWeightCallback_FUN_00567360);
        core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(afStack_164[0],&CStack_1a4);
        fVar1 = fStack_24;
        pCVar5 = pCStack_2c;
        CStack_194.w = CStack_1a4.w;
        puVar17 = (uint *)((int)&CStack_194 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        puVar15 = (uint *)((int)&CStack_1a4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        *(uint *)((int)&CStack_194 + (uint)bVar18 * -8 + 4) =
             *(uint *)((int)&CStack_1a4 + (uint)bVar18 * -8 + 4);
        *puVar17 = *puVar15;
        puVar17[(uint)bVar18 * -2 + 1] = puVar15[(uint)bVar18 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
                  (pCVar5,&CStack_194,fVar1,g_INT_02c8ad4c,
                   core_skeleton_cpp_blendWeightCallback_FUN_00567360);
      }
    }
    fVar1 = delta_time / 0.01f + this_ptr->target_blend;
    this_ptr->target_blend = fVar1;
    if (1.0 < fVar1) {
      this_ptr->target_blend = 1.0;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              (&(this_ptr->base).base.model);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  }
  return;
}
