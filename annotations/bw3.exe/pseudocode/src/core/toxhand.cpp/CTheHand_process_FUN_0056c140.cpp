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
  uint *puVar11;
  CMatrix3x4f *pCVar12;
  CMatrix3x4f *pCVar13;
  float *pfVar14;
  uint *puVar15;
  CMatrix3x4f *pCVar16;
  byte bVar17;
  char *motion_name;
  SPose SStack_1e00;
  CMatrix3x4f CStack_364;
  CMatrix3x4f CStack_334;
  CMatrix3x4f CStack_304;
  CMatrix3x4f CStack_2d4;
  CMatrix3x4f CStack_2a4;
  uint auStack_274 [12];
  uint auStack_244 [12];
  float afStack_214 [12];
  CMatrix3x4f CStack_1e4;
  CQuaternion4f CStack_1b4;
  float fStack_1a4;
  float afStack_1a0 [7];
  CQuaternion4f CStack_184;
  float fStack_174;
  float afStack_170 [2];
  CVector3f CStack_168;
  float fStack_15c;
  float afStack_158 [8];
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
  float fStack_84;
  float afStack_78 [3];
  float fStack_6c;
  float afStack_60 [4];
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
            core_toxhand_cpp_FUN_0056cbd0(this_ptr);
            puVar11 = auStack_244;
            puVar15 = auStack_274;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar15 = *puVar11;
              puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
              puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
            }
            core_xform_cpp_FUN_00584450(auStack_274);
            afStack_114[0] = (float)uStack_e4;
            afStack_158[(uint)bVar17 * -2 + 0x12] = afStack_158[(uint)bVar17 * -2 + 0x1e];
            afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
                 afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1f];
            core_actor_cpp_FUN_00408b80(this_ptr,afStack_158 + 0x11);
            fStack_108 = fStack_d8;
            afStack_158[(uint)bVar17 * -2 + 0x15] = afStack_158[(uint)bVar17 * -2 + 0x21];
            afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
                 afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x22];
            pCVar3 = (this_ptr->base).victim;
            fStack_120 = fStack_108 - (pCVar3->base).location.position.x;
            fStack_11c = fStack_104 - (pCVar3->base).location.position.y;
            fStack_118 = fStack_100 - (pCVar3->base).location.position.z;
            fStack_174 = fStack_120;
            afStack_170[(uint)bVar17 * -2] = afStack_158[(uint)bVar17 * -2 + 0xf];
            afStack_170[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
            if (((ABS(afStack_170[0]) <= (float)_DAT_005d651b) &&
                (fStack_174 * fStack_174 + afStack_170[1] * afStack_170[1] <= (float)_DAT_005d6523))
               && (iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                     (pCVar3,(CDemonActor *)this_ptr,1), iVar6 != 0)) {
              pCVar3 = (this_ptr->base).victim;
              this_ptr->target_blend = 0.0;
              core_xform_cpp_FUN_00583940
                        (&CStack_2a4,&(pCVar3->base).location,&(pCVar3->base).orient);
              core_xform_cpp_FUN_00583800(&CStack_334,pCStack_14,pCStack_1c);
              core_xform_cpp_inverse_FUN_00584560(auStack_274);
              pCVar13 = &CStack_304;
              pfVar14 = afStack_214;
              pCVar12 = &CStack_304;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                pCVar12->m[0].w = *pfVar14;
                pfVar14 = pfVar14 + (uint)bVar17 * -2 + 1;
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_2a4,&CStack_334,&CStack_1e4);
              pCVar12 = &CStack_1e4;
              pCVar16 = &CStack_2d4;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                pCVar16->m[0].w = pCVar12->m[0].w;
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
                pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar17 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_2d4,pCVar13,&CStack_364);
              pCVar13 = &CStack_364;
              pCVar12 = &this_ptr->target_matrix;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                pCVar12->m[0].w = pCVar13->m[0].w;
                pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar17 * -2 + 1) * 4);
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + (uint)bVar17 * -8 + 4);
              }
              afStack_158[2] = 0.229711;
              afStack_158[4] = -0.768452;
              afStack_158[3] = 0.101114;
              afStack_60[0] = -2.44619;
              afStack_cc[0] = 0.229711;
              afStack_158[(uint)bVar17 * -2 + 0x24] = afStack_158[(uint)bVar17 * -2 + 3];
              afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x25] =
                   afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
              afStack_60[1] = -1.91555;
              afStack_60[2] = -0.767692;
              core_xform_cpp_FUN_00583940(pCStack_20,afStack_b0 + 0x14,afStack_158 + 0x23);
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
          afStack_12c[0] = CStack_3c.x;
          afStack_158[(uint)bVar17 * -2 + 0xc] = *(float *)((int)&CStack_3c + (uint)bVar17 * -8 + 4)
          ;
          afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
               *(float *)((int)&CStack_3c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
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
          core_actor_cpp_FUN_00408b00(this_ptr,afStack_158 + 0xb);
          pCVar5 = pCStack_14;
          fStack_fc = fStack_9c;
          afStack_158[(uint)bVar17 * -2 + 0x18] = afStack_b0[(uint)bVar17 * -2 + 6];
          afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
               afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
          fVar1 = pCVar5->y;
          fVar2 = pCVar5->z;
          ((CVector3f *)&pCVar5->x)->x = ((CVector3f *)&pCVar5->x)->x - fStack_fc;
          pCVar5->y = fVar1 - fStack_f8;
          pCVar5->z = fVar2 - fStack_f4;
          afStack_c0[0] = 0.0;
          afStack_c0[2] = -1.0;
          afStack_c0[1] = 0.0;
          core_actor_cpp_FUN_00408b00(this_ptr,afStack_158 + 0x26);
          pCVar5 = pCStack_14;
          afStack_60[3] = fStack_6c;
          afStack_50[(uint)bVar17 * -2] = afStack_b0[(uint)bVar17 * -2 + 0x12];
          afStack_50[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13];
          fVar1 = pCVar5->y;
          fVar2 = pCVar5->z;
          _DAT_02cfd7a4 = 1;
          ((CVector3f *)&pCVar5->x)->x = ((CVector3f *)&pCVar5->x)->x - afStack_60[3];
          pCVar5->y = fVar1 - afStack_50[0];
          pCVar5->z = fVar2 - afStack_50[1];
        }
        this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                                (&((this_ptr->base).victim)->model);
        iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                          (this_ptr_01,"Bip01 Pelvis",1);
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&((this_ptr->base).victim)->model,iVar6,&CStack_48);
        afStack_78[0] = CStack_48.x;
        afStack_b0[(uint)bVar17 * -2 + 0xf] = *(float *)((int)&CStack_48 + (uint)bVar17 * -8 + 4);
        afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10] =
             *(float *)((int)&CStack_48 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        core_actor_cpp_FUN_00408bf0(this_ptr,afStack_b0 + 0xe);
        fStack_15c = fStack_84;
        afStack_158[(uint)bVar17 * -2] = afStack_b0[(uint)bVar17 * -2 + 0xc];
        afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
        if (&this_ptr->target_point != (CVector3f *)&fStack_15c) {
          (this_ptr->target_point).x = fStack_15c;
          (this_ptr->target_point).y = afStack_158[0];
          (this_ptr->target_point).z = afStack_158[1];
        }
        pfVar14 = (float *)((int)this_ptr + (uint)bVar17 * -8 + 0xd0c4);
        fStack_138 = (this_ptr->target_point).x;
        afStack_158[(uint)bVar17 * -2 + 9] = *pfVar14;
        afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] = pfVar14[(uint)bVar17 * -2 + 1];
        pCStack_2c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_2c,_DAT_02cfd79c,&CStack_168);
        fVar1 = fStack_138;
        fStack_90 = CStack_168.x;
        afStack_b0[(uint)bVar17 * -2 + 9] = *(float *)((int)&CStack_168 + (uint)bVar17 * -8 + 4);
        afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
             *(float *)((int)&CStack_168 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        fStack_f0 = fVar1 - fStack_90;
        fStack_ec = fStack_134 - fStack_8c;
        fStack_e8 = fStack_130 - fStack_88;
        afStack_158[5] = fVar1 - fStack_90;
        afStack_158[(uint)bVar17 * -2 + 6] = afStack_158[(uint)bVar17 * -2 + 0x1b];
        afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_158[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x1c];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_158 + 5);
        pCVar4 = pCStack_2c;
        afStack_b0[2] = afStack_c0[3];
        afStack_b0[(uint)bVar17 * -2 + 3] = afStack_b0[(uint)bVar17 * -2];
        afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
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
        core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(afStack_b0[2]);
        CStack_184.w = fStack_1a4;
        pfVar14 = (float *)((int)&CStack_184 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *(float *)((int)&CStack_184 + (uint)bVar17 * -8 + 4) = afStack_1a0[(uint)bVar17 * -2];
        *pfVar14 = afStack_1a0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        pfVar14[(uint)bVar17 * -2 + 1] =
             (afStack_1a0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
        pCStack_2c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                  (pCStack_2c,&CStack_184,fStack_24,_DAT_02cfd7a0,
                   core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
        core_xform_cpp_quaternionFromAngleY_FUN_00585d10(afStack_b0[3]);
        fVar1 = fStack_24;
        pCVar4 = pCStack_2c;
        CStack_1b4.w = afStack_1a0[3];
        pfVar14 = (float *)((int)&CStack_1b4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *(float *)((int)&CStack_1b4 + (uint)bVar17 * -8 + 4) = afStack_1a0[(uint)bVar17 * -2 + 4];
        *pfVar14 = afStack_1a0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
        pfVar14[(uint)bVar17 * -2 + 1] =
             (afStack_1a0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 5)[(uint)bVar17 * -2 + 1];
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
