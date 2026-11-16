// Name: core_toxhand.cpp_CTheHand_process_FUN_0056c140
// Address: 0056c140
// Address Range: [[0056c140, 0056c87d]]
// Convention: __cdecl
// Signature: void __cdecl core_toxhand_cpp_CTheHand_process_FUN_0056c140(CTheHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_toxhand_cpp_CTheHand_process_FUN_0056c140(CTheHand *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CCharacter *pCVar3;
  CDeformableModelInstance *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  uint uVar8;
  EDeathState EVar9;
  CDemonActor *pCVar10;
  CMotionList *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMatrix3x4f *pCVar11;
  CMatrix3x4f *pCVar12;
  float *pfVar13;
  uint *puVar14;
  CMatrix3x4f *pCVar15;
  uint *puVar16;
  byte bVar17;
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
  float fStack_174;
  float afStack_170 [2];
  CVector3f CStack_168;
  float fStack_15c;
  float afStack_158 [5];
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  CDeformableModelInstance *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CMatrix3x4f *pCStack_20;
  CVector3f *pCStack_1c;
  CDeformableModelInstance *pCStack_18;
  CVector3f *pCStack_14;
  
  bVar17 = 0;
  iVar6 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar6 != 0) {
    pCStack_20 = &this_ptr->prev_target_matrix;
    fStack_30 = delta_time * (this_ptr->base).speed;
    pCStack_14 = &(this_ptr->base).base.base.location.position;
    pCStack_1c = (CVector3f *)&(this_ptr->base).base.base.orient;
    pCStack_18 = &(this_ptr->base).base.model;
    while (0.0 < fStack_30) {
      uVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_18->base,&fStack_30);
      if (0x22 < uVar8) {
        if (uVar8 < 0x24) {
          pCVar3 = (this_ptr->base).victim;
          if ((pCVar3 != (CCharacter *)0x0) &&
             (pCVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
             pCVar10 == (CDemonActor *)0x0)) {
            core_toxhand_cpp_CTheHand_getHandBoneMatrix_FUN_0056cbd0(this_ptr,&CStack_244);
            pCVar12 = &CStack_244;
            pCVar11 = &CStack_274;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              pCVar11->m[0].w = pCVar12->m[0].w;
              pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
              pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar17 * -2 + 1) * 4);
            }
            core_xform_cpp_getTranslation_FUN_00584450(&CStack_274,&CStack_e4);
            CStack_114.x = CStack_e4.x;
            *(uint *)((int)&CStack_114 + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&CStack_e4 + (uint)bVar17 * -8 + 4);
            *(uint *)((int)&CStack_114 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                 *(uint *)((int)&CStack_e4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,&CStack_114,&CStack_d8);
            fStack_108 = CStack_d8.x;
            afStack_104[(uint)bVar17 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar17 * -8 + 4);
            afStack_104[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 *(float *)((int)&CStack_d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            pCVar3 = (this_ptr->base).victim;
            fStack_120 = fStack_108 - (pCVar3->base).location.position.x;
            afStack_11c[0] = afStack_104[0] - (pCVar3->base).location.position.y;
            afStack_11c[1] = afStack_104[1] - (pCVar3->base).location.position.z;
            fStack_174 = fStack_120;
            afStack_170[(uint)bVar17 * -2] = afStack_11c[(uint)bVar17 * -2];
            afStack_170[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_11c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            if (((ABS(afStack_170[0]) <= (float)_DAT_005d651b) &&
                (fStack_174 * fStack_174 + afStack_170[1] * afStack_170[1] <= (float)_DAT_005d6523))
               && (iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                     (pCVar3,(CDemonActor *)this_ptr,1), iVar6 != 0)) {
              pCVar3 = (this_ptr->base).victim;
              this_ptr->target_blend = 0.0;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                        (&CStack_2a4,&(pCVar3->base).location.position,&(pCVar3->base).orient.vec);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00583800
                        (&CStack_334,pCStack_14,pCStack_1c);
              core_xform_cpp_inverse_FUN_00584560(&CStack_274,&CStack_214);
              pCVar12 = &CStack_304;
              pCVar11 = &CStack_214;
              pCVar15 = &CStack_304;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                pCVar15->m[0].w = pCVar11->m[0].w;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar17 * -2 + 1) * 4);
                pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar17 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_2a4,&CStack_334,&CStack_1e4);
              pCVar11 = &CStack_1e4;
              pCVar15 = &CStack_2d4;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                pCVar15->m[0].w = pCVar11->m[0].w;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar17 * -2 + 1) * 4);
                pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar17 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_2d4,pCVar12,&CStack_364);
              pCVar12 = &CStack_364;
              pCVar11 = &this_ptr->target_matrix;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                pCVar11->m[0].w = pCVar12->m[0].w;
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + (uint)bVar17 * -8 + 4);
              }
              afStack_158[2] = 0.229711;
              afStack_158[4] = -0.768452;
              afStack_158[3] = 0.101114;
              CStack_60.x = -2.44619;
              CStack_cc.x = 0.229711;
              *(float *)((int)&CStack_cc + (uint)bVar17 * -8 + 4) =
                   afStack_158[(uint)bVar17 * -2 + 3];
              *(float *)((int)&CStack_cc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                   afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
              CStack_60.y = -1.91555;
              CStack_60.z = -0.767692;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                        (pCStack_20,&CStack_60,&CStack_cc);
            }
          }
        }
        else if ((uVar8 == 0x5dc) && (pCVar3 = (this_ptr->base).victim, pCVar3 != (CCharacter *)0x0)
                ) {
          (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        }
      }
    }
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_18->base);
    if ((pSVar7->state_index != 0) && (pSVar7->state_index == 1)) {
      pCVar3 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      (this_ptr->base).victim = pCVar3;
      if ((pCVar3 != (CCharacter *)0x0) &&
         ((EVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), (int)EVar9 < 1 &&
          (pCVar3 = (this_ptr->base).victim,
          pCVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3), pCVar4 = pCStack_18,
          pCVar10 == (CDemonActor *)0x0)))) {
        if (_DAT_02cfd7a4 == 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850
                    (pCStack_18,&SStack_1e00);
          iVar6 = 1;
          motion_name = "attack_nocollision";
          this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&pCVar4->base);
          iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                            (this_ptr_00,motion_name,iVar6);
          core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
                    (pCVar4,iVar6,30.0);
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                    (pCVar4,_DAT_02cfd798,&CStack_3c);
          CStack_12c.x = CStack_3c.x;
          *(uint *)((int)&CStack_12c + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&CStack_3c + (uint)bVar17 * -8 + 4);
          *(uint *)((int)&CStack_12c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               *(uint *)((int)&CStack_3c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920
                    (pCStack_18,&SStack_1e00);
          (this_ptr->base).base.base.orient.vec.x = 0.0;
          (this_ptr->base).base.base.orient.vec.z = 0.0;
          iVar6 = _DAT_01d5ba14;
          (this_ptr->base).base.base.orient.vec.y = -1.5707964;
          iVar6 = *(int *)(iVar6 * 4 + 0x1d5ba04);
          ((CVector3f *)&pCStack_14->x)->x = *(float *)(iVar6 + 0x20);
          pCStack_14->y = *(float *)(iVar6 + 0x24);
          pCStack_14->z = *(float *)(iVar6 + 0x28);
          pCStack_14[1].x = *(float *)(iVar6 + 0x2c);
          (this_ptr->base).base.base.location.position.y =
               (this_ptr->base).base.base.location.position.y + _DAT_005d650b;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                    (&(this_ptr->base).base.base.orient_matrix,pCStack_1c);
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                    ((CDemonActor *)this_ptr,&CStack_12c,&CStack_9c);
          pCVar5 = pCStack_14;
          afStack_104[2] = CStack_9c.x;
          afStack_104[(uint)bVar17 * -2 + 3] = *(float *)((int)&CStack_9c + (uint)bVar17 * -8 + 4);
          afStack_104[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
               *(float *)((int)&CStack_9c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          fVar1 = pCVar5->y;
          fVar2 = pCVar5->z;
          ((CVector3f *)&pCVar5->x)->x = ((CVector3f *)&pCVar5->x)->x - afStack_104[2];
          pCVar5->y = fVar1 - afStack_104[3];
          pCVar5->z = fVar2 - fStack_f4;
          CStack_c0.x = 0.0;
          CStack_c0.z = -1.0;
          CStack_c0.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                    ((CDemonActor *)this_ptr,&CStack_c0,&CStack_6c);
          pCVar5 = pCStack_14;
          fStack_54 = CStack_6c.x;
          afStack_50[(uint)bVar17 * -2] = *(float *)((int)&CStack_6c + (uint)bVar17 * -8 + 4);
          afStack_50[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               *(float *)((int)&CStack_6c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          fVar1 = pCVar5->y;
          fVar2 = pCVar5->z;
          _DAT_02cfd7a4 = 1;
          ((CVector3f *)&pCVar5->x)->x = ((CVector3f *)&pCVar5->x)->x - fStack_54;
          pCVar5->y = fVar1 - afStack_50[0];
          pCVar5->z = fVar2 - afStack_50[1];
        }
        this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                (&((this_ptr->base).victim)->model);
        iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                          (this_ptr_01,"Bip01 Pelvis",1);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&((this_ptr->base).victim)->model,iVar6,&CStack_48);
        CStack_78.x = CStack_48.x;
        *(uint *)((int)&CStack_78 + (uint)bVar17 * -8 + 4) =
             *(uint *)((int)&CStack_48 + (uint)bVar17 * -8 + 4);
        *(uint *)((int)&CStack_78 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
             *(uint *)((int)&CStack_48 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  ((CDemonActor *)this_ptr,&CStack_78,&CStack_84);
        fStack_15c = CStack_84.x;
        afStack_158[(uint)bVar17 * -2] = *(float *)((int)&CStack_84 + (uint)bVar17 * -8 + 4);
        afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_84 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        if (&this_ptr->target_point != (CVector3f *)&fStack_15c) {
          (this_ptr->target_point).x = fStack_15c;
          (this_ptr->target_point).y = afStack_158[0];
          (this_ptr->target_point).z = afStack_158[1];
        }
        pfVar13 = (float *)((int)this_ptr + (uint)bVar17 * -8 + 0xd0c4);
        fStack_138 = (this_ptr->target_point).x;
        afStack_134[(uint)bVar17 * -2] = *pfVar13;
        afStack_134[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] = pfVar13[(uint)bVar17 * -2 + 1];
        pCStack_2c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_2c,_DAT_02cfd79c,&CStack_168);
        fVar1 = fStack_138;
        fStack_90 = CStack_168.x;
        afStack_8c[(uint)bVar17 * -2] = *(float *)((int)&CStack_168 + (uint)bVar17 * -8 + 4);
        afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_168 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        fStack_f0 = fVar1 - fStack_90;
        fStack_ec = afStack_134[0] - afStack_8c[0];
        fStack_e8 = afStack_134[1] - afStack_8c[1];
        CStack_144.x = fVar1 - fStack_90;
        *(float *)((int)&CStack_144 + (uint)bVar17 * -8 + 4) = afStack_104[(uint)bVar17 * -2 + 6];
        *(float *)((int)&CStack_144 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
             afStack_104[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_144,&CStack_b4);
        pCVar4 = pCStack_2c;
        fStack_a8 = CStack_b4.x;
        afStack_a4[(uint)bVar17 * -2] = *(float *)((int)&CStack_b4 + (uint)bVar17 * -8 + 4);
        afStack_a4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_b4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        fStack_28 = (pCVar4->base).current_frame_number;
        if (_DAT_005d650f <= fStack_28) {
          fStack_24 = 1.0 - (fStack_28 + _DAT_005d6513) * _DAT_005d6517;
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = fStack_28 * _DAT_005d6517;
        }
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fStack_a8,&CStack_1a4);
        CStack_184.w = CStack_1a4.w;
        puVar16 = (uint *)((int)&CStack_184 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        puVar14 = (uint *)((int)&CStack_1a4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *(uint *)((int)&CStack_184 + (uint)bVar17 * -8 + 4) =
             *(uint *)((int)&CStack_1a4 + (uint)bVar17 * -8 + 4);
        *puVar16 = *puVar14;
        puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
        pCStack_2c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCStack_2c,&CStack_184,fStack_24,_DAT_02cfd7a0,
                   core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
        core_xform_cpp_quaternionFromAngleY_FUN_00585d10(afStack_a4[0],&CStack_194);
        fVar1 = fStack_24;
        pCVar4 = pCStack_2c;
        CStack_1b4.w = CStack_194.w;
        puVar16 = (uint *)((int)&CStack_1b4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        puVar14 = (uint *)((int)&CStack_194 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *(uint *)((int)&CStack_1b4 + (uint)bVar17 * -8 + 4) =
             *(uint *)((int)&CStack_194 + (uint)bVar17 * -8 + 4);
        *puVar16 = *puVar14;
        puVar16[(uint)bVar17 * -2 + 1] = puVar14[(uint)bVar17 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCVar4,&CStack_1b4,fVar1,_DAT_02cfd79c,
                   core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      }
    }
    fVar1 = delta_time / _DAT_005e54f8 + this_ptr->target_blend;
    this_ptr->target_blend = fVar1;
    if (1.0 < fVar1) {
      this_ptr->target_blend = 1.0;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              (&(this_ptr->base).base.model);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  }
  return;
}
