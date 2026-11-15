// Name: core_prye.cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0
// Address: 0051c1c0
// Address Range: [[0051c1c0, 0051e277]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0(CPrye *this_ptr)

{
  CDoor *pCVar1;
  CLever *this_ptr_00;
  CMotionController *pCVar2;
  CVector3f *pCVar3;
  SMotion *pSVar4;
  CSkeleton *this_ptr_01;
  CDemonActor *pCVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  double dVar12;
  CDeformableModelInstance *this_ptr_02;
  CDeformableModelInstance *pCVar13;
  CQuaternion4f *pCVar14;
  float fVar15;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  char *motion_name;
  code *pcVar16;
  int iVar17;
  CBoundingBox3D *this_ptr_03;
  float fStack_2454;
  CDeformableModel_MotionBlendWeightFunc *local_2450;
  CDeformableModel_MotionBlendWeightFunc *local_244c;
  CDeformableModel_MotionBlendWeightFunc *local_2448;
  CQuaternion4f *pCStack_243c;
  CDeformableModel_MotionBlendWeightFunc *local_2428;
  CQuaternion4f *local_2420;
  CDeformableModel_MotionBlendWeightFunc *local_2418;
  CDeformableModel_MotionBlendWeightFunc *local_2410;
  byte local_2404 [6856];
  float afStack_93c [6];
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  CQuaternion4f CStack_914;
  CQuaternion4f CStack_904;
  CQuaternion4f CStack_8f4;
  float fStack_8e4;
  float local_8e0 [3];
  CQuaternion4f CStack_8d4;
  float fStack_8c4;
  float local_8c0 [3];
  CQuaternion4f CStack_8b4;
  CQuaternion4f CStack_8a4;
  CQuaternion4f CStack_894;
  CQuaternion4f CStack_884;
  CQuaternion4f CStack_874;
  CQuaternion4f CStack_864;
  CQuaternion4f CStack_854;
  float fStack_844;
  float local_840 [3];
  CQuaternion4f CStack_834;
  CQuaternion4f CStack_824;
  CQuaternion4f CStack_814;
  byte auStack_804 [16];
  uint auStack_7f4 [4];
  float fStack_7e4;
  CMotionList *local_7e0 [2];
  CQuaternion4f CStack_7d8;
  CQuaternion4f CStack_7c4;
  float afStack_7b4 [3];
  CQuaternion4f CStack_7a8;
  CQuaternion4f CStack_794;
  float afStack_784 [3];
  CQuaternion4f CStack_778;
  CQuaternion4f CStack_764;
  float fStack_754;
  float local_750 [3];
  CQuaternion4f CStack_744;
  float afStack_734 [4];
  CQuaternion4f CStack_724;
  byte auStack_714 [16];
  uint auStack_704 [4];
  CQuaternion4f CStack_6f4;
  CQuaternion4f CStack_6e4;
  float fStack_6d4;
  float afStack_6d0 [3];
  CQuaternion4f CStack_6c4;
  CQuaternion4f CStack_6b4;
  CQuaternion4f CStack_6a4;
  uint auStack_694 [4];
  CQuaternion4f CStack_684;
  CQuaternion4f CStack_674;
  float fStack_664;
  float local_660 [2];
  CQuaternion4f CStack_658;
  float fStack_648;
  float afStack_644 [4];
  CQuaternion4f CStack_634;
  CQuaternion4f CStack_624;
  float afStack_614 [4];
  CQuaternion4f CStack_604;
  CQuaternion4f CStack_5f4;
  float fStack_5e4;
  float local_5e0 [3];
  byte auStack_5d4 [16];
  float afStack_5c4 [4];
  CQuaternion4f CStack_5b4;
  CQuaternion4f CStack_5a4;
  CQuaternion4f CStack_594;
  byte auStack_584 [16];
  float afStack_574 [4];
  CQuaternion4f CStack_564;
  float fStack_554;
  float local_550 [3];
  CQuaternion4f CStack_544;
  CQuaternion4f CStack_534;
  CQuaternion4f CStack_524;
  float fStack_514;
  float local_510 [3];
  CQuaternion4f CStack_504;
  CQuaternion4f CStack_4f4;
  float fStack_4e4;
  float local_4e0 [3];
  CQuaternion4f CStack_4d4;
  CQuaternion4f CStack_4c4;
  float fStack_4b4;
  CQuaternion4f CStack_4a4;
  CQuaternion4f CStack_494;
  CQuaternion4f CStack_484;
  CQuaternion4f CStack_474;
  float fStack_464;
  CMotionController_vtable *local_460 [3];
  CVector3f CStack_454;
  float fStack_448;
  float afStack_444 [4];
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float fStack_404;
  float afStack_400 [4];
  float local_3f0;
  CVector3f CStack_3e8;
  float fStack_3dc;
  float local_3d8 [2];
  CVector3f CStack_3d0;
  float fStack_3c4;
  float local_3c0 [4];
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  CMotionController_vtable *local_3a0;
  float local_39c [4];
  float local_38c;
  float local_388;
  float local_384;
  byte local_378 [12];
  CMotionController_vtable *local_36c [3];
  CVector3f local_360;
  float local_354;
  float afStack_350 [5];
  float local_33c;
  float local_338;
  CVector3f local_334;
  float fStack_328;
  float local_324 [5];
  float fStack_310;
  CVector3f CStack_304;
  CVector3f CStack_2f8;
  float fStack_2ec;
  float local_2e8;
  float local_2e4 [4];
  float fStack_2d4;
  CBoundingBox3D local_2d0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac [3];
  CVector3f local_2a0;
  float local_294;
  float local_290 [4];
  CMotionController_vtable *local_280;
  float local_27c;
  float local_278;
  CVector3f local_274;
  CVector3f CStack_268;
  float local_25c;
  float afStack_258 [4];
  float local_248;
  float local_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  CVector3f CStack_22c;
  CVector3f CStack_220;
  CVector3f CStack_214;
  float fStack_208;
  float local_204 [2];
  CVector3f CStack_1fc;
  float fStack_1f0;
  float local_1ec [4];
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  CVector3f CStack_1c0;
  float fStack_1b4;
  float local_1b0 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_17c;
  float afStack_178 [4];
  CMotionController_vtable *local_168;
  float local_164;
  CVector3f local_160;
  byte local_150 [12];
  float local_144 [6];
  CMotionController_vtable *local_12c;
  float local_128;
  CVector3f local_124;
  CVector3f CStack_118;
  CMotionController_vtable *pCStack_10c;
  float local_108;
  float local_104 [4];
  float local_f4;
  float fStack_e0;
  float afStack_dc [4];
  float local_cc;
  float fStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f local_9c;
  float local_90 [5];
  CVector3f CStack_7c;
  float fStack_70;
  float local_6c [4];
  float fStack_5c;
  CDeformableModelInstance *pCStack_54;
  float local_4c;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  CQuaternion4f *local_30;
  CVector3f *local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CQuaternion4f *local_14;
  
  bVar10 = 0;
  pCVar13 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar13);
  local_14 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&pCVar13->base,0);
  local_2420 = local_14;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_2420 = (CQuaternion4f *)((this_ptr->turn_blend_weight / _DAT_005cd337) * (float)local_14);
  }
  dVar12 = (double)this_ptr->turn_blend_weight;
  if (0.8499999940395355 < dVar12) {
    local_2420 = (CQuaternion4f *)(((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_2420)
    ;
  }
  pCVar13 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCVar13);
  if ((0.0 < (float)local_2420) && (-1 < this_ptr->turn_motion_index)) {
    core_prye_cpp_CPrye_extractTurnPose_FUN_0051e280(this_ptr,(SPose *)local_2404);
    local_2404._0_4_ = 0.0;
    local_2404._8_4_ = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0
              (pCVar13,(SPoseData *)local_2404,(float)local_2420,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  }
  core_prye_cpp_CPrye_makeDrawDecision_FUN_0051e6d0(this_ptr);
  this_ptr_03 = (CBoundingBox3D *)&(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr_03);
  local_1c = (CDeformableModelInstance *)pSVar4->state_index;
  if (((local_1c == (CDeformableModelInstance *)0x2b) ||
      (local_1c == (CDeformableModelInstance *)0x2a)) ||
     (local_1c == (CDeformableModelInstance *)0x27)) {
    local_24 = &this_ptr->carry_object_world_center;
    if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
      core_door_cpp_FUN_00464c10();
      local_378._0_4_ = local_354;
      *(float *)(local_378 + (uint)bVar10 * -8 + 4) = afStack_350[(uint)bVar10 * -2];
      local_36c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1] =
           (CMotionController_vtable *)afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,(CVector3f *)local_378,&local_360);
      local_12c = (CMotionController_vtable *)local_360.x;
      local_144[(uint)bVar10 * -2 + 7] = *(float *)((int)&local_360 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&local_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           *(uint *)((int)&local_360 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if ((CVector3f *)(local_144 + 6) != local_24) {
        local_24->x = (float)local_12c;
        local_24->y = local_128;
        local_24->z = local_124.x;
      }
    }
    else {
      core_door_cpp_FUN_00464c10();
      local_2a0.x = local_cc;
      *(float *)((int)&local_2a0 + (uint)bVar10 * -8 + 4) = afStack_dc[(uint)bVar10 * -2 + 5];
      *(float *)((int)&local_2a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,&local_2a0,&local_9c);
      pCVar3 = local_24;
      local_168 = (CMotionController_vtable *)local_9c.x;
      afStack_178[(uint)bVar10 * -2 + 5] = local_90[(uint)bVar10 * -2 + -2];
      *(float *)((int)&local_160 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4) =
           local_90[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
      if ((CVector3f *)(afStack_178 + 4) != pCVar3) {
        pCVar3->x = (float)local_168;
        pCVar3->y = local_164;
        pCVar3->z = local_160.x;
      }
      _DAT_01ed36a8 = (this_ptr->base).door_to_open;
    }
    pCVar13 = &(this_ptr->base).base.model;
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    local_104[2] = (this_ptr->carry_object_world_center).x;
    local_14 = (CQuaternion4f *)pCVar13;
    local_104[(uint)bVar10 * -2 + 3] = *pfVar6;
    local_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,(int)_DAT_01ed36e8,(CVector3f *)local_150);
    fVar15 = local_104[2];
    local_290[2] = (float)local_150._0_4_;
    local_290[(uint)bVar10 * -2 + 3] = *(float *)(local_150 + (uint)bVar10 * -8 + 4);
    (&local_280)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         (CMotionController_vtable *)local_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
    fVar15 = fVar15 - local_290[2];
    local_33c = fVar15;
    local_338 = local_104[3] - local_290[3];
    local_334.x = local_f4 - (float)local_280;
    local_294 = fVar15;
    local_290[(uint)bVar10 * -2] = (&local_338)[(uint)bVar10 * -2];
    local_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&local_334 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_27c = fVar15;
    local_278 = local_338;
    local_274.x = local_334.x;
    this_ptr_03 = &local_2d0;
    local_2d0.min.x = fVar15;
    *(float *)((int)&local_2d0 + (uint)bVar10 * -8 + 4) = (&local_278)[(uint)bVar10 * -2];
    *(uint *)((int)&local_2d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&local_274 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    local_144[3] = local_3f0;
    local_144[(uint)bVar10 * -2 + 4] = afStack_400[(uint)bVar10 * -2 + 5];
    local_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         *(float *)((int)&CStack_3e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_38 = SQRT(local_290[1] * local_290[1] +
                    local_294 * local_294 + local_290[0] * local_290[0]);
    fStack_2454 = (float)((ulonglong)dVar12 >> 0x20);
    if (local_38 < _DAT_005e352c) {
      this_ptr_03 = (CBoundingBox3D *)0x51c4f9;
      dVar12 = acos((double)(local_38 / _DAT_005e352c));
      local_44 = (float)dVar12;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
      pCVar13 = &(this_ptr->base).base.model;
      CStack_624.w = fStack_664;
      afStack_614[(uint)bVar10 * -2 + -3] = local_660[(uint)bVar10 * -2];
      afStack_614[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2] =
           local_660[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (afStack_614 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1] =
           (local_660 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      local_18 = pCVar13;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar13,&CStack_624,fStack_2454,(int)_DAT_01ed36e8,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
      CStack_474.w = fStack_754;
      pfVar6 = (float *)((int)&CStack_474 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&CStack_474 + (uint)bVar10 * -8 + 4) = local_750[(uint)bVar10 * -2];
      *pfVar6 = local_750[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar6[(uint)bVar10 * -2 + 1] =
           (local_750 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&CStack_474,fStack_2454,_DAT_01ed36f0,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_144[2],&CStack_7c4);
    pCVar13 = &(this_ptr->base).base.model;
    auStack_584._0_4_ = CStack_7c4.w;
    *(float *)(auStack_584 + (uint)bVar10 * -8 + 4) = afStack_7b4[(uint)bVar10 * -2 + -3];
    *(float *)(auStack_584 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_7b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2];
    *(float *)((int)(auStack_584 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
              ((uint)bVar10 * -2 + 1) * 4) =
         (afStack_7b4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1];
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,(CQuaternion4f *)auStack_584,fStack_2454,(int)_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    CStack_894.w = fStack_844;
    pfVar6 = (float *)((int)&CStack_894 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_894 + (uint)bVar10 * -8 + 4) = local_840[(uint)bVar10 * -2];
    *pfVar6 = local_840[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_840 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_18,&CStack_894,fStack_2454,(int)_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    pCVar1 = (this_ptr->base).door_to_open;
    if (pCVar1 != (CDoor *)0x0) {
      pfVar6 = (float *)((int)pCVar1 + (uint)bVar10 * -8 + 0x9c0);
      local_39c[2] = (pCVar1->open_position).x;
      local_39c[(uint)bVar10 * -2 + 3] = *pfVar6;
      local_39c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] = pfVar6[(uint)bVar10 * -2 + 1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (&pCVar1->base,&(this_ptr->base).base.base.location.position,&CStack_3e8);
      local_1ec[2] = CStack_3e8.x;
      local_1ec[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_3e8 + (uint)bVar10 * -8 + 4);
      local_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           *(float *)((int)&CStack_3e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      this_ptr->door_align_timer = 0.5;
      if (fStack_1dc < 0.0) {
        fVar15 = (float)((this_ptr->base).door_to_open)->door_swing;
        if (fVar15 == 0.0) {
          local_160.z = -2.0;
          local_160.x = fVar15;
          local_160.y = fVar15;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                    (&((this_ptr->base).door_to_open)->base,&local_160,&CStack_b8);
          local_190 = CStack_b8.x;
          local_1b0[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_b8 + (uint)bVar10 * -8 + 4);
          local_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
               *(float *)((int)&CStack_b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          local_39c[2] = local_39c[2] + local_190;
          local_39c[3] = local_39c[3] + local_18c;
          local_38c = local_38c + local_188;
        }
        if (((this_ptr->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          this_ptr->door_align_timer = 0.0;
        }
      }
      if (0.0 < fStack_1dc) {
        if (((this_ptr->base).door_to_open)->door_swing == DOOR_SWING_COUNTER_CLOCKWISE) {
          CStack_268.x = 0.0;
          CStack_268.z = 2.0;
          CStack_268.y = 0.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
                    (&((this_ptr->base).door_to_open)->base,&CStack_268,&CStack_1fc);
          local_1b0[2] = CStack_1fc.x;
          local_1b0[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_1fc + (uint)bVar10 * -8 + 4);
          local_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               *(float *)((int)&CStack_1fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          local_39c[2] = local_39c[2] + local_1b0[2];
          local_39c[3] = local_39c[3] + local_1b0[3];
          local_38c = local_38c + local_1a0;
        }
        if (((this_ptr->base).door_to_open)->door_swing == DOOR_SWING_CLOCKWISE) {
          this_ptr->door_align_timer = 0.0;
        }
      }
      fStack_328 = local_39c[2] - (this_ptr->base).base.base.location.position.x;
      local_324[0] = local_39c[3] - (this_ptr->base).base.base.location.position.y;
      local_324[1] = local_38c - (this_ptr->base).base.base.location.position.z;
      local_1d8 = fStack_328;
      local_1ec[(uint)bVar10 * -2 + 6] = local_324[(uint)bVar10 * -2];
      local_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           local_324[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (&this_ptr->door_align_offset != (CVector3f *)(local_1ec + 5)) {
        (this_ptr->door_align_offset).x = local_1d8;
        (this_ptr->door_align_offset).y = local_1d4;
        (this_ptr->door_align_offset).z = local_1d0;
      }
      pCVar1 = (this_ptr->base).door_to_open;
      (this_ptr->door_align_offset).y = 0.0;
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,&pCVar1->open_position,&CStack_214);
      afStack_350[1] = CStack_214.x;
      afStack_350[(uint)bVar10 * -2 + 2] = *(float *)((int)&CStack_214 + (uint)bVar10 * -8 + 4);
      afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
           *(float *)((int)&CStack_214 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
      local_388 = fStack_310;
      local_39c[(uint)bVar10 * -2 + 6] = local_324[(uint)bVar10 * -2 + 6];
      local_39c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           local_324[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      this_ptr->door_align_yaw = (this_ptr->base).base.base.orient.vec.y + local_384;
    }
  }
  pCVar13 = &(this_ptr->base).base.model;
  local_1c = pCVar13;
  if (local_20 == 4.48416e-44) {
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    local_418 = (this_ptr->carry_object_world_center).x;
    afStack_444[(uint)bVar10 * -2 + 0xc] = *pfVar6;
    afStack_444[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,(int)_DAT_01ed36ec,&CStack_7c);
    fVar15 = local_418;
    local_3c0[2] = CStack_7c.x;
    local_3c0[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_7c + (uint)bVar10 * -8 + 4);
    local_3c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)&CStack_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_424 = fVar15 - local_3c0[2];
    local_420 = local_414 - local_3c0[3];
    local_41c = local_410 - local_3b0;
    local_f4 = fVar15 - local_3c0[2];
    local_104[(uint)bVar10 * -2 + 5] = afStack_444[(uint)bVar10 * -2 + 9];
    local_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6] =
         afStack_444[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar13 = local_1c;
    afStack_400[0] = local_2d0.min.z;
    afStack_400[(uint)bVar10 * -2 + 1] = *(float *)((int)&local_2d0 + (uint)bVar10 * -8 + 0xc);
    afStack_400[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2] =
         *(float *)((int)&local_2d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 0x10);
    fVar15 = (pCVar13->base).current_frame_number;
    if ((float)_DAT_005cd3a7 <= fVar15) {
      local_244c = (CDeformableModel_MotionBlendWeightFunc *)
                   (1.0 - (fVar15 + (float)_DAT_005cd3af) * (float)_DAT_005cd3b7);
      if ((float)local_244c < 0.0) {
        local_244c = (CDeformableModel_MotionBlendWeightFunc *)0x0;
      }
    }
    else {
      local_244c = (CDeformableModel_MotionBlendWeightFunc *)(fVar15 * (float)_DAT_005cd3b7);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(afStack_400[0],&CStack_5f4);
    pCVar13 = &(this_ptr->base).base.model;
    CStack_8f4.w = CStack_5f4.w;
    puVar8 = (uint *)((int)&CStack_8f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_5f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_8f4 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_5f4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x51ca90;
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_8f4,(float)local_244c,_DAT_01ed3720,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    CStack_724.w = fStack_4b4;
    puVar7 = (uint *)((int)&CStack_4c4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 5) * 4 + 4);
    *(uint *)(auStack_714 + (uint)bVar10 * -8 + -0xc) =
         *(uint *)((int)&CStack_4c4 + ((uint)bVar10 * -2 + 4) * 4 + 4);
    *(uint *)(auStack_714 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + -0xc) = *puVar7;
    *(uint *)
     ((int)(auStack_714 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + -0xc) +
     ((uint)bVar10 * -2 + 1) * 4) = puVar7[(uint)bVar10 * -2 + 1];
    pCStack_243c = (CQuaternion4f *)(afStack_734 + 4);
    pCVar13 = local_18;
    blend_callback = _DAT_01ed36ec;
  }
  else if (local_20 == 4.2039e-44) {
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    local_19c = (this_ptr->carry_object_world_center).x;
    local_1b0[(uint)bVar10 * -2 + 6] = *pfVar6;
    local_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,(int)_DAT_01ed36ec,&CStack_22c);
    fVar15 = local_19c;
    fStack_1f0 = CStack_22c.x;
    local_1ec[(uint)bVar10 * -2] = *(float *)((int)&CStack_22c + (uint)bVar10 * -8 + 4);
    local_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&CStack_22c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fStack_3c4 = fVar15 - fStack_1f0;
    local_3c0[0] = local_198 - local_1ec[0];
    local_3c0[1] = local_194 - local_1ec[1];
    fStack_70 = fVar15 - fStack_1f0;
    local_6c[(uint)bVar10 * -2] = local_3c0[(uint)bVar10 * -2];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_3c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar13 = local_1c;
    local_9c.z = local_324[2];
    local_90[(uint)bVar10 * -2] = local_324[(uint)bVar10 * -2 + 3];
    local_90[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_324[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    fVar15 = (pCVar13->base).current_frame_number;
    if ((float)_DAT_005cd38f <= fVar15) {
      local_2448 = (CDeformableModel_MotionBlendWeightFunc *)
                   (1.0 - (fVar15 + (float)_DAT_005cd397) * (float)_DAT_005cd35f);
      if ((float)local_2448 < 0.0) {
        local_2448 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
      }
    }
    else {
      local_2448 = (CDeformableModel_MotionBlendWeightFunc *)(fVar15 * (float)_DAT_005cd39f);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(-local_9c.z,&CStack_834);
    pCVar13 = &(this_ptr->base).base.model;
    CStack_814.w = CStack_834.w;
    puVar7 = (uint *)((int)&CStack_834 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)(auStack_804 + (uint)bVar10 * -8 + -0xc) =
         *(uint *)((int)&CStack_834 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_804 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) = *puVar7;
    *(uint *)
     ((int)(auStack_804 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) + ((uint)bVar10 * -2 + 1) * 4)
         = puVar7[(uint)bVar10 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x51d290;
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_814,(float)local_2448,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCStack_243c = &CStack_4a4;
    CStack_4a4.w = fStack_8e4;
    pfVar6 = (float *)((int)&CStack_4c4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 9) * 4 + 4);
    *(float *)((int)&CStack_4c4 + ((uint)bVar10 * -2 + 8) * 4 + 4) = local_8e0[(uint)bVar10 * -2];
    *pfVar6 = local_8e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_8e0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    pCVar13 = local_18;
    local_244c = local_2448;
    blend_callback = _DAT_01ed36ec;
  }
  else if (local_20 == 4.62428e-44) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              ((CMatrix3x3f *)(local_2404 + 0x1a98),&(this_ptr->base).target_orientation.vec);
    if ((DAT_01ed36bc & 1) == 0) {
      DAT_01ed36bc = DAT_01ed36bc | 1;
    }
    pCVar5 = (this_ptr->base).target_actor;
    if (pCVar5 != (CDemonActor *)0x0) {
      (*((pCVar5->vtable)._ub)->getBoundingBox)(pCVar5,this_ptr_03);
      pfVar6 = afStack_93c;
      pfVar9 = &fStack_924;
      for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
        *pfVar9 = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
        pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
      }
      fStack_404 = fStack_924 + fStack_918;
      afStack_400[0] = fStack_920 + CStack_914.w;
      afStack_400[1] = fStack_91c + CStack_914.x;
      local_2e4[3] = fStack_924 + fStack_918;
      (&fStack_2d4)[(uint)bVar10 * -2] = afStack_400[(uint)bVar10 * -2];
      *(float *)((int)&local_2d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           afStack_400[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_e0 = local_2e4[3] * _DAT_005cd367;
      afStack_dc[0] = fStack_2d4 * _DAT_005cd367;
      afStack_dc[1] = local_2d0.min.x * _DAT_005cd367;
      fStack_17c = local_2e4[3] * _DAT_005cd367;
      afStack_178[(uint)bVar10 * -2] = afStack_dc[(uint)bVar10 * -2];
      afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (&stack0x00000000 != (byte *)0x1ed3828) {
        _DAT_01ed36ac = fStack_17c;
        _DAT_01ed36b0 = afStack_178[0];
        _DAT_01ed36b4 = afStack_178[1];
      }
    }
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              ((CMatrix3x3f *)(local_2404 + 0x1a98),(CVector3f *)&DAT_01ed36ac,&CStack_3d0);
    local_1cc = CStack_3d0.x;
    local_1ec[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_3d0 + (uint)bVar10 * -8 + 4);
    local_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         *(float *)((int)&CStack_3d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    afStack_dc[0] = (this_ptr->base).target_position.x + local_1cc;
    afStack_dc[1] = (this_ptr->base).target_position.y + local_1c8;
    afStack_dc[2] = (this_ptr->base).target_position.z + fStack_1c4;
    CStack_1c0.x = afStack_dc[0];
    *(float *)((int)&CStack_1c0 + (uint)bVar10 * -8 + 4) = afStack_dc[(uint)bVar10 * -2 + 1];
    *(float *)((int)&CStack_1c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              ((CDemonActor *)this_ptr,&CStack_1c0,&CStack_ac);
    local_244 = CStack_ac.x;
    afStack_258[(uint)bVar10 * -2 + 6] = *(float *)((int)&CStack_ac + (uint)bVar10 * -8 + 4);
    afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         *(float *)((int)&CStack_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_18 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (local_18,(int)_DAT_01ed36ec,&CStack_2f8);
    fVar15 = local_244;
    afStack_178[0] = CStack_2f8.x;
    afStack_178[(uint)bVar10 * -2 + 1] = *(float *)((int)&CStack_2f8 + (uint)bVar10 * -8 + 4);
    afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2] =
         *(float *)((int)&CStack_2f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_25c = fVar15 - afStack_178[0];
    afStack_258[0] = fStack_240 - afStack_178[1];
    afStack_258[1] = fStack_23c - afStack_178[2];
    fStack_c4 = fVar15 - afStack_178[0];
    afStack_dc[(uint)bVar10 * -2 + 7] = afStack_258[(uint)bVar10 * -2];
    afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 8] =
         afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar13 = local_18;
    fStack_238 = fStack_448;
    afStack_258[(uint)bVar10 * -2 + 9] = afStack_444[(uint)bVar10 * -2];
    afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_444[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fVar15 = (pCVar13->base).current_frame_number;
    if ((float)_DAT_005cd36f <= fVar15) {
      local_2418 = (CDeformableModel_MotionBlendWeightFunc *)
                   (1.0 - (fVar15 + (float)_DAT_005cd377) * (float)_DAT_005cd37f);
      if ((float)local_2418 < 0.0) {
        local_2418 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
      }
    }
    else {
      local_2418 = (CDeformableModel_MotionBlendWeightFunc *)(fVar15 * (float)_DAT_005cd387);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fStack_238,&CStack_634);
    auStack_714._0_4_ = CStack_634.w;
    puVar7 = (uint *)((int)&CStack_634 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)(auStack_714 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_634 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_714 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) = *puVar7;
    *(uint *)
     ((int)(auStack_714 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4)
         = puVar7[(uint)bVar10 * -2 + 1];
    pCVar13 = &(this_ptr->base).base.model;
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,(CQuaternion4f *)auStack_714,(float)local_2418,_DAT_01ed3720,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    this_ptr_02 = local_18;
    pCStack_243c = &CStack_4c4;
    CStack_4c4.w = fStack_6d4;
    pfVar6 = (float *)((int)&CStack_4c4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4);
    *(float *)((int)&CStack_4c4 + (uint)bVar10 * -8 + 4) = afStack_6d0[(uint)bVar10 * -2];
    *pfVar6 = afStack_6d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (afStack_6d0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_244c = local_2418;
    blend_callback = _DAT_01ed36ec;
  }
  else if (local_20 == 6.16571e-44) {
    local_24 = &this_ptr->carry_object_world_center;
    this_ptr_00 = (this_ptr->base).lever_to_pull;
    if (this_ptr_00 == (CLever *)0x0) {
      core_lever_cpp_CLever_getHandlePosition_FUN_004e0770(_DAT_01ed36b8,&local_274);
      CStack_220.x = local_274.x;
      *(uint *)((int)&CStack_220 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&local_274 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_220 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&local_274 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,&CStack_220,&CStack_454);
      local_3a0 = (CMotionController_vtable *)CStack_454.x;
      local_39c[(uint)bVar10 * -2] = *(float *)((int)&CStack_454 + (uint)bVar10 * -8 + 4);
      local_39c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           *(float *)((int)&CStack_454 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if ((CVector3f *)&local_3a0 != local_24) {
        local_24->x = (float)local_3a0;
        local_24->y = local_39c[0];
        local_24->z = local_39c[1];
      }
    }
    else {
      core_lever_cpp_CLever_getHandlePosition_FUN_004e0770(this_ptr_00,&local_124);
      local_150._8_4_ = local_124.x;
      local_144[(uint)bVar10 * -2] = *(float *)((int)&local_124 + (uint)bVar10 * -8 + 4);
      local_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           *(float *)((int)&local_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,(CVector3f *)(local_150 + 8),&CStack_118);
      pCVar3 = local_24;
      pCStack_10c = (CMotionController_vtable *)CStack_118.x;
      local_104[(uint)bVar10 * -2 + -1] = *(float *)((int)&CStack_118 + (uint)bVar10 * -8 + 4);
      local_104[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
           *(float *)((int)&CStack_118 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if ((CVector3f *)&pCStack_10c != pCVar3) {
        pCVar3->x = (float)pCStack_10c;
        pCVar3->y = local_108;
        pCVar3->z = local_104[0];
      }
      _DAT_01ed36b8 = (this_ptr->base).lever_to_pull;
    }
    pCVar13 = &(this_ptr->base).base.model;
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    afStack_444[2] = (this_ptr->carry_object_world_center).x;
    local_18 = pCVar13;
    afStack_444[(uint)bVar10 * -2 + 3] = *pfVar6;
    afStack_444[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,(int)_DAT_01ed36ec,(CVector3f *)(local_378 + 8));
    fVar15 = afStack_444[2];
    local_3ac = (float)local_378._8_4_;
    local_3c0[(uint)bVar10 * -2 + 6] = (float)local_36c[(uint)bVar10 * -2];
    local_3c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         (float)local_36c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fVar15 = fVar15 - local_3ac;
    fStack_2ec = fVar15;
    local_2e8 = afStack_444[3] - local_3a8;
    local_2e4[0] = local_434 - local_3a4;
    local_430 = fVar15;
    afStack_444[(uint)bVar10 * -2 + 6] = local_2e4[(uint)bVar10 * -2 + -1];
    afStack_444[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         local_2e4[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    afStack_258[2] = fVar15;
    afStack_258[3] = local_2e8;
    local_248 = local_2e4[0];
    fStack_3dc = fVar15;
    local_3d8[(uint)bVar10 * -2] = afStack_258[(uint)bVar10 * -2 + 3];
    local_3d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
    pCVar13 = local_18;
    local_90[2] = fStack_1b4;
    local_90[(uint)bVar10 * -2 + 3] = local_1b0[(uint)bVar10 * -2];
    local_90[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fVar15 = (pCVar13->base).current_frame_number;
    if ((float)_DAT_005cd33f <= fVar15) {
      if (_DAT_005cd347 <= (double)fVar15) {
        local_2428 = (CDeformableModel_MotionBlendWeightFunc *)
                     (1.0 - (fVar15 + (float)_DAT_005cd34f) * (float)_DAT_005cd357);
        if ((float)local_2428 < 0.0) {
          local_2428 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
        }
      }
      else {
        local_2428 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
      }
    }
    else {
      local_2428 = (CDeformableModel_MotionBlendWeightFunc *)(fVar15 * (float)_DAT_005cd35f);
    }
    local_40 = SQRT(local_428 * local_428 + local_430 * local_430 + local_42c * local_42c);
    if (local_40 < _DAT_005e352c) {
      dVar12 = acos((double)(local_40 / _DAT_005e352c));
      pCStack_54 = (CDeformableModelInstance *)(float)dVar12;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(pCStack_54);
      pCVar13 = &(this_ptr->base).base.model;
      auStack_5d4._12_4_ = CStack_7c4.z;
      afStack_5c4[(uint)bVar10 * -2] = afStack_7b4[(uint)bVar10 * -2];
      afStack_5c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_7b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (afStack_5c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (afStack_7b4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      local_1c = pCVar13;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar13,(CQuaternion4f *)(auStack_5d4 + 0xc),0.15,(int)_DAT_01ed36ec,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-(float)pCStack_54);
      CStack_658.w = CStack_624.z;
      pfVar6 = (float *)((int)&CStack_658 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(float *)((int)&CStack_658 + (uint)bVar10 * -8 + 4) = afStack_614[(uint)bVar10 * -2];
      *pfVar6 = afStack_614[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pfVar6[(uint)bVar10 * -2 + 1] =
           (afStack_614 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_1c,&CStack_658,0.15,_DAT_01ed36f4,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_90[2],&CStack_794);
    pCVar13 = &(this_ptr->base).base.model;
    CStack_534.w = CStack_794.w;
    pfVar6 = (float *)((int)&CStack_534 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_534 + (uint)bVar10 * -8 + 4) = afStack_784[(uint)bVar10 * -2 + -3];
    *pfVar6 = afStack_784[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (afStack_784 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1];
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_534,(float)local_2428,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCStack_243c = (CQuaternion4f *)(afStack_614 + 4);
    CStack_604.w = fStack_514;
    pfVar6 = (float *)((int)&CStack_604 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4);
    *(float *)((int)&CStack_604 + (uint)bVar10 * -8 + 4) = local_510[(uint)bVar10 * -2];
    *pfVar6 = local_510[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_510 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    this_ptr_02 = local_18;
    local_244c = local_2428;
    blend_callback = _DAT_01ed36ec;
  }
  else if (local_20 == 4.76441e-44) {
    local_2450 = (CDeformableModel_MotionBlendWeightFunc *)
                 ((this_ptr->base).base.model.base.current_frame_number * (float)_DAT_005cd357);
    if (1.0 < (float)local_2450) {
      local_2450 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
    }
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_4c = (float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    CStack_674.w = fStack_554;
    pfVar6 = (float *)((int)&CStack_674 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_674 + (uint)bVar10 * -8 + 4) = local_550[(uint)bVar10 * -2];
    *pfVar6 = local_550[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_550 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_18 = &(this_ptr->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x51d81e;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_18,&CStack_674,(float)local_2450,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar13 = local_18;
    pCStack_243c = &CStack_674;
    CStack_674.w = fStack_4e4;
    pfVar6 = (float *)((int)&CStack_674 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_674 + (uint)bVar10 * -8 + 4) = local_4e0[(uint)bVar10 * -2];
    *pfVar6 = local_4e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_4e0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_244c = local_2450;
    blend_callback = _DAT_01ed36e8;
  }
  else if (local_20 == 4.90454e-44) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(this_ptr->base).base.model,(int)_DAT_01ed36ec,&CStack_304);
    fStack_208 = CStack_304.x;
    local_204[(uint)bVar10 * -2] = *(float *)((int)&CStack_304 + (uint)bVar10 * -8 + 4);
    local_204[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&CStack_304 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_38 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
               (this_ptr->carry_object_bbox).min.y;
    pCVar5 = (this_ptr->base).object_to_pick_up;
    if (pCVar5 != (CDemonActor *)0x0) {
      _DAT_01ed3784 =
           (CDeformableModelInstance *)
           core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(pCVar5);
      local_18 = _DAT_01ed3784;
    }
    local_38 = local_38 - (float)_DAT_01ed3784;
    fVar11 = atan2
                       ((float10)local_204[0] - (float10)local_38,(float10)_DAT_005e352c);
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0
              ((float)fVar11,(CQuaternion4f *)(auStack_714 + 0xc));
    auStack_804._12_4_ = auStack_714._12_4_;
    auStack_7f4[(uint)bVar10 * -2] = auStack_704[(uint)bVar10 * -2];
    auStack_7f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         auStack_704[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (auStack_7f4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (auStack_704 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_1c = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,(CQuaternion4f *)(auStack_804 + 0xc),(float)pCStack_243c,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,(CQuaternion4f *)(auStack_804 + 0xc),(float)pCStack_243c,(int)_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_4c = (float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_4c);
    CStack_7d8.w = CStack_6a4.z;
    puVar7 = (uint *)((int)&CStack_7d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_7d8 + (uint)bVar10 * -8 + 4) = auStack_694[(uint)bVar10 * -2];
    *puVar7 = auStack_694[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar7[(uint)bVar10 * -2 + 1] =
         (auStack_694 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,&CStack_7d8,(float)pCStack_243c,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_4c);
    this_ptr_02 = local_1c;
    CStack_7d8.w = CStack_794.z;
    pfVar6 = (float *)((int)&CStack_7d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_7d8 + (uint)bVar10 * -8 + 4) = afStack_784[(uint)bVar10 * -2];
    *pfVar6 = afStack_784[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (afStack_784 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    pCVar13 = (CDeformableModelInstance *)&CStack_7d8;
    local_244c = _DAT_01ed36e8;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
  }
  else if (local_20 == 5.04467e-44) {
    local_2410 = (CDeformableModel_MotionBlendWeightFunc *)
                 (1.0 - ((this_ptr->base).base.model.base.current_frame_number +
                        (float)_DAT_005cd34f) * (float)_DAT_005cd357);
    if ((float)local_2410 < 0.0) {
      local_2410 = (CDeformableModel_MotionBlendWeightFunc *)0x0;
    }
    if (1.0 < (float)local_2410) {
      local_2410 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
    }
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_34 = (float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCVar13 = &(this_ptr->base).base.model;
    CStack_684.w = fStack_8c4;
    pfVar6 = (float *)((int)&CStack_684 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_684 + (uint)bVar10 * -8 + 4) = local_8c0[(uint)bVar10 * -2];
    *pfVar6 = local_8c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_8c0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x51db83;
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_684,(float)local_2410,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10();
    pCStack_243c = &CStack_684;
    CStack_684.w = fStack_7e4;
    puVar7 = (uint *)((int)&CStack_684 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(CMotionList **)((int)&CStack_684 + (uint)bVar10 * -8 + 4) = local_7e0[(uint)bVar10 * -2];
    *puVar7 = local_7e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar7[(uint)bVar10 * -2 + 1] =
         (local_7e0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    pCVar13 = local_18;
    local_244c = local_2410;
    blend_callback = _DAT_01ed36e8;
  }
  else {
    if (local_20 != 5.1848e-44) goto LAB_0051cae3;
    local_18 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (local_18,(int)_DAT_01ed36ec,&local_334);
    local_2b0 = local_334.x;
    local_2ac[(uint)bVar10 * -2] = *(float *)((int)&local_334 + (uint)bVar10 * -8 + 4);
    local_2ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&local_334 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fVar11 = atan2
                       ((float10)local_2ac[0] - (float10)(this_ptr->carry_object_world_center).y,
                        (float10)_DAT_005e352c);
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0((float)fVar11,&CStack_778);
    pCVar13 = local_1c;
    CStack_7a8.w = CStack_778.w;
    puVar8 = (uint *)((int)&CStack_7a8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_778 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_7a8 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_778 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_7a8,(float)local_2420,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,&CStack_7a8,(float)local_2420,(int)_DAT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x / (float10)_DAT_005e352c,
                             (float10)1);
    local_30 = (CQuaternion4f *)(float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_30);
    auStack_584._12_4_ = CStack_744.z;
    afStack_574[(uint)bVar10 * -2] = afStack_734[(uint)bVar10 * -2];
    afStack_574[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_734[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (afStack_574 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_734 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,(CQuaternion4f *)(auStack_584 + 0xc),(float)local_2420,(int)_DAT_01ed36ec,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-(float)local_30);
    this_ptr_02 = local_1c;
    auStack_584._12_4_ = fStack_648;
    afStack_574[(uint)bVar10 * -2] = afStack_644[(uint)bVar10 * -2];
    afStack_574[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_644[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (afStack_574 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_644 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    pCVar13 = (CDeformableModelInstance *)(auStack_584 + 0xc);
    pCStack_243c = local_2420;
    local_244c = _DAT_01ed36e8;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
            (this_ptr_02,(CQuaternion4f *)pCVar13,(float)pCStack_243c,(int)local_244c,blend_callback
            );
LAB_0051cae3:
  if (g_CGamePtr->goggles_active != 0) {
    local_2b8 = 0.0;
    local_2b4 = 0.0;
    local_2d0.max.z = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_2d0.max.z = (this_ptr->right_arm_aim).target_pitch;
    }
    pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
    fVar15 = 1.0;
    iVar17 = _DAT_01ed36dc;
    core_xform_cpp_eulerToQuaternion_FUN_005860b0(&local_2d0.max.z);
    CStack_6b4.w = fStack_5e4;
    pfVar6 = (float *)((int)&CStack_6b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_6b4 + (uint)bVar10 * -8 + 4) = local_5e0[(uint)bVar10 * -2];
    *pfVar6 = local_5e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar6[(uint)bVar10 * -2 + 1] =
         (local_5e0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (&(this_ptr->base).base.model,&CStack_6b4,fVar15,iVar17,pcVar16);
  }
  if (0.0 < this_ptr->interact_blend) {
    iVar17 = 1;
    motion_name = "?draw_holsters2aimPistols" + 1;
    pCVar13 = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar13);
    iVar17 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                       (&this_ptr_01->motion_list,motion_name,iVar17);
    pCStack_54 = (CDeformableModelInstance *)
                 core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20
                           (&pCVar13->base,iVar17,1.0);
    local_18 = pCStack_54;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar13,iVar17,(float)pCStack_54,this_ptr->interact_blend,_DAT_01ed371c,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007e1a50);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->weapon == (CWeapon *)0x0)) {
    fStack_5c = core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0(this_ptr);
    local_18 = (CDeformableModelInstance *)fStack_5c;
    local_18 = (CDeformableModelInstance *)
               core_prye_cpp_CPrye_getFlashlightMaxAngle_FUN_0051c0f0(this_ptr);
    _DAT_01ed36d8 =
         (1.0 - (this_ptr->aim_pitch - fStack_5c) / ((float)local_18 - fStack_5c)) *
         (float)_DAT_005cd3bf;
    this_ptr->frame_cleared = 1.0;
    if (1.0 < _DAT_01ed36d8) {
      _DAT_01ed36d8 = 1.0;
    }
    pcVar16 = core_prye_cpp_FUN_00517c90;
    fVar15 = this_ptr->frame_cleared;
    iVar17 = _DAT_01ed36e0;
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(this_ptr->aim_pitch,&CStack_544);
    pCVar14 = &CStack_864;
    CStack_864.w = CStack_544.w;
    puVar8 = (uint *)((int)&CStack_864 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_544 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_864 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_544 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(0x3fc90fdb);
    CStack_854.w = fStack_464;
    puVar7 = (uint *)((int)&CStack_854 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(CMotionController_vtable **)((int)&CStack_854 + (uint)bVar10 * -8 + 4) =
         local_460[(uint)bVar10 * -2];
    *puVar7 = local_460[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar7[(uint)bVar10 * -2 + 1] =
         (local_460 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_854,pCVar14,&CStack_4d4);
    auStack_5d4._0_4_ = CStack_4d4.w;
    puVar7 = (uint *)((int)&CStack_4d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)(auStack_5d4 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_4d4 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_5d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) = *puVar7;
    *(uint *)
     ((int)(auStack_5d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4)
         = puVar7[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (&(this_ptr->base).base.model,(CQuaternion4f *)auStack_5d4,fVar15,iVar17,pcVar16);
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(1.5707964,&CStack_5a4);
    pCVar14 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
    CStack_824.w = CStack_5a4.w;
    puVar8 = (uint *)((int)&CStack_824 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_5a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_824 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_5a4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    local_18 = (CDeformableModelInstance *)pCVar14;
    core_xform_cpp_multiplyQuaternion_FUN_00585990(pCVar14 + _DAT_01ed372c,&CStack_824,&CStack_884);
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed372c].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = CStack_884.w;
    pfVar6 = (float *)((int)&CStack_884 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar9 = *(float *)((int)&CStack_884 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] = *pfVar6;
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(3.1415927,&CStack_6a4);
    pCVar2 = &local_18->base;
    CStack_764.w = CStack_6a4.w;
    puVar7 = (uint *)((int)&CStack_764 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_764 + (uint)bVar10 * -8 + 4) = auStack_694[(uint)bVar10 * -2 + -3];
    *puVar7 = auStack_694[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2];
    puVar7[(uint)bVar10 * -2 + 1] =
         (auStack_694 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              ((CQuaternion4f *)(pCVar2->current_motion_name + _DAT_01ed3730 * 0x10 + -0x30),
               &CStack_764,&CStack_914);
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3730].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = CStack_914.w;
    pfVar6 = (float *)((int)&CStack_914 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar9 = *(float *)((int)&CStack_914 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] = *pfVar6;
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&this_ptr->weapon->base,g_CBurncrossClassInfo.name_hash);
  local_30 = (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations;
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar14 = local_30 + _DAT_01ed3734;
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-1.5707964,&CStack_6f4);
    CStack_8b4.w = CStack_6f4.w;
    puVar8 = (uint *)((int)&CStack_8b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_6f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_8b4 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_6f4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_8b4,pCVar14,(CQuaternion4f *)auStack_804)
    ;
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3734].w;
    pCVar14 = local_30 + _DAT_01ed3738;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = (float)auStack_804._0_4_;
    *pfVar9 = *(float *)(auStack_804 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] =
         *(float *)(auStack_804 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         *(float *)((int)(auStack_804 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
                   ((uint)bVar10 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-3.1415927,&CStack_524);
    CStack_5b4.w = CStack_524.w;
    puVar8 = (uint *)((int)&CStack_5b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_524 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_5b4 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_524 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_5b4,pCVar14,&CStack_484);
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3738].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = CStack_484.w;
    pfVar6 = (float *)((int)&CStack_484 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar9 = *(float *)((int)&CStack_484 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] = *pfVar6;
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
    return;
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&this_ptr->weapon->base,g_CExorcismClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar14 = local_30 + _DAT_01ed3734;
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-0.7853982,&CStack_8a4);
    CStack_904.w = CStack_8a4.w;
    puVar8 = (uint *)((int)&CStack_904 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_8a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_904 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_8a4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_904,pCVar14,&CStack_6c4);
    iVar17 = _DAT_01ed3738;
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3734].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = CStack_6c4.w;
    pfVar6 = (float *)((int)&CStack_6c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar9 = *(float *)((int)&CStack_6c4 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] = *pfVar6;
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
    pCVar14 = local_30 + iVar17;
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-1.5707964,&CStack_8d4);
    CStack_874.w = CStack_8d4.w;
    puVar8 = (uint *)((int)&CStack_874 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_8d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_874 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_8d4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_874,pCVar14,&CStack_744);
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3738].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = CStack_744.w;
    *pfVar9 = afStack_734[(uint)bVar10 * -2 + -3];
    pfVar9[(uint)bVar10 * -2 + 1] = afStack_734[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2];
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_734 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1];
    return;
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&this_ptr->weapon->base,g_CStormClassInfo.name_hash);
  if (pCVar5 == (CDemonActor *)0x0) {
    return;
  }
  pCVar14 = local_30 + _DAT_01ed3734;
  core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-1.0471976,&CStack_494);
  CStack_564.w = CStack_494.w;
  puVar8 = (uint *)((int)&CStack_564 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar7 = (uint *)((int)&CStack_494 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&CStack_564 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&CStack_494 + (uint)bVar10 * -8 + 4);
  *puVar8 = *puVar7;
  puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_564,pCVar14,&CStack_4f4);
  pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3734].w;
  pCVar14 = local_30 + _DAT_01ed3738;
  pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
  *pfVar6 = CStack_4f4.w;
  pfVar6 = (float *)((int)&CStack_4f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *pfVar9 = *(float *)((int)&CStack_4f4 + (uint)bVar10 * -8 + 4);
  pfVar9[(uint)bVar10 * -2 + 1] = *pfVar6;
  (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
  core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-2.0943952,&CStack_504);
  CStack_6e4.w = CStack_504.w;
  puVar8 = (uint *)((int)&CStack_6e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar7 = (uint *)((int)&CStack_504 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&CStack_6e4 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&CStack_504 + (uint)bVar10 * -8 + 4);
  *puVar8 = *puVar7;
  puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_6e4,pCVar14,&CStack_594);
  pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations[_DAT_01ed3738].w;
  pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
  *pfVar6 = CStack_594.w;
  *pfVar9 = *(float *)(auStack_584 + (uint)bVar10 * -8 + -0xc);
  pfVar9[(uint)bVar10 * -2 + 1] =
       *(float *)(auStack_584 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
  (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
       *(float *)((int)(auStack_584 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
                 ((uint)bVar10 * -2 + 1) * 4);
  return;
}
