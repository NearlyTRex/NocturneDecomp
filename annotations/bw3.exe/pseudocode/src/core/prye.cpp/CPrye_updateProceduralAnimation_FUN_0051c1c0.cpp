// Name: core_prye.cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0
// Address: 0051c1c0
// Address Range: [[0051c1c0, 0051e277]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_updateProceduralAnimation_FUN_0051c1c0(CPrye *this_ptr)

#include "nocturne.h"

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
  float local_2450;
  float local_244c;
  float local_2448;
  CQuaternion4f *pCStack_243c;
  float local_2428;
  CQuaternion4f *local_2420;
  float local_2418;
  float local_2410;
  byte local_2404 [6856];
  float afStack_93c [6];
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  CQuaternion4f CStack_914;
  CQuaternion4f CStack_904;
  CQuaternion4f CStack_8f4;
  CQuaternion4f CStack_8e4;
  CQuaternion4f CStack_8d4;
  CQuaternion4f CStack_8c4;
  CQuaternion4f CStack_8b4;
  CQuaternion4f CStack_8a4;
  CQuaternion4f CStack_894;
  CQuaternion4f CStack_884;
  CQuaternion4f CStack_874;
  CQuaternion4f CStack_864;
  CQuaternion4f CStack_854;
  CQuaternion4f CStack_844;
  CQuaternion4f CStack_834;
  CQuaternion4f CStack_824;
  CQuaternion4f CStack_814;
  byte auStack_804 [16];
  uint auStack_7f4 [4];
  byte auStack_7e4 [16];
  float afStack_7d4 [4];
  byte auStack_7c4 [16];
  float afStack_7b4 [3];
  CQuaternion4f CStack_7a8;
  byte auStack_794 [16];
  float afStack_784 [3];
  CQuaternion4f CStack_778;
  CQuaternion4f CStack_764;
  CQuaternion4f CStack_754;
  byte auStack_744 [16];
  uint auStack_734 [4];
  CQuaternion4f CStack_724;
  byte auStack_714 [16];
  uint auStack_704 [4];
  CQuaternion4f CStack_6f4;
  CQuaternion4f CStack_6e4;
  CQuaternion4f CStack_6d4;
  CQuaternion4f CStack_6c4;
  CQuaternion4f CStack_6b4;
  byte auStack_6a4 [16];
  float afStack_694 [4];
  CQuaternion4f CStack_684;
  CQuaternion4f CStack_674;
  byte auStack_664 [16];
  CMotionList *apCStack_654 [3];
  CQuaternion4f CStack_648;
  CQuaternion4f CStack_634;
  byte auStack_624 [16];
  uint auStack_614 [4];
  CQuaternion4f CStack_604;
  CQuaternion4f CStack_5f4;
  CQuaternion4f CStack_5e4;
  byte auStack_5d4 [16];
  float afStack_5c4 [4];
  CQuaternion4f CStack_5b4;
  CQuaternion4f CStack_5a4;
  CQuaternion4f CStack_594;
  byte auStack_584 [16];
  uint auStack_574 [4];
  CQuaternion4f CStack_564;
  CQuaternion4f CStack_554;
  CQuaternion4f CStack_544;
  CQuaternion4f CStack_534;
  CQuaternion4f CStack_524;
  CQuaternion4f CStack_514;
  CQuaternion4f CStack_504;
  CQuaternion4f CStack_4f4;
  CQuaternion4f CStack_4e4;
  CQuaternion4f CStack_4d4;
  CQuaternion4f CStack_4c4;
  CQuaternion4f CStack_4b4;
  CQuaternion4f CStack_4a4;
  CQuaternion4f CStack_494;
  CQuaternion4f CStack_484;
  CQuaternion4f CStack_474;
  CQuaternion4f CStack_464;
  CVector3f CStack_454;
  CVector3f CStack_448;
  float fStack_43c;
  float local_438 [4];
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float fStack_404;
  float afStack_400 [4];
  byte local_3f0 [12];
  float local_3e4 [2];
  CVector3f CStack_3dc;
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
  byte local_354 [12];
  float local_348 [4];
  float local_338;
  CVector3f local_334;
  float fStack_328;
  float local_324 [2];
  CVector3f local_31c;
  CVector3f CStack_310;
  CVector3f CStack_304;
  CVector3f CStack_2f8;
  float fStack_2ec;
  float local_2e8;
  float local_2e4 [4];
  float fStack_2d4;
  byte local_2d0 [24];
  uint local_2b8;
  uint local_2b4;
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
  float fStack_234;
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
  CVector3f CStack_1b4;
  float fStack_1a8;
  float local_1a4 [4];
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
  CVector3f local_f4;
  float fStack_e0;
  float afStack_dc [4];
  byte local_cc [12];
  float afStack_c0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f local_9c;
  float local_90 [5];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_5c;
  CDeformableModelInstance *pCStack_54;
  float local_4c;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  CQuaternion4f *local_30;
  CVector3f *local_24;
  int local_20;
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
    local_2420 = (CQuaternion4f *)
                 ((this_ptr->turn_blend_weight / 0.15f) * (float)local_14);
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
    pCVar1 = (this_ptr->base).door_to_open;
    if (pCVar1 == (CDoor *)0x0) {
      core_door_cpp_CDoor_getHandlePosition_FUN_00464c10
                (g_CDoor_PTR_01ed36a8,(CVector3f *)local_354);
      local_378._0_4_ = local_354._0_4_;
      *(uint *)(local_378 + (uint)bVar10 * -8 + 4) =
           *(uint *)(local_354 + (uint)bVar10 * -8 + 4);
      local_36c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1] =
           (CMotionController_vtable *)local_348[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,(CVector3f *)local_378,&local_360);
      local_12c = (CMotionController_vtable *)local_360.x;
      local_144[(uint)bVar10 * -2 + 7] = *(float *)(local_354 + (uint)bVar10 * -8 + -8);
      *(uint *)((int)&local_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           *(uint *)(local_354 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -4);
      if ((CVector3f *)(local_144 + 6) != local_24) {
        local_24->x = (float)local_12c;
        local_24->y = local_128;
        local_24->z = local_124.x;
      }
    }
    else {
      core_door_cpp_CDoor_getHandlePosition_FUN_00464c10(pCVar1,(CVector3f *)local_cc);
      local_2a0.x = (float)local_cc._0_4_;
      *(uint *)((int)&local_2a0 + (uint)bVar10 * -8 + 4) =
           *(uint *)(local_cc + (uint)bVar10 * -8 + 4);
      *(float *)((int)&local_2a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
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
      g_CDoor_PTR_01ed36a8 = (this_ptr->base).door_to_open;
    }
    pCVar13 = &(this_ptr->base).base.model;
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    local_104[2] = (this_ptr->carry_object_world_center).x;
    local_14 = (CQuaternion4f *)pCVar13;
    local_104[(uint)bVar10 * -2 + 3] = *pfVar6;
    *(float *)((int)&local_f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,g_INT_01ed36e8,(CVector3f *)local_150);
    fVar15 = local_104[2];
    local_290[2] = (float)local_150._0_4_;
    local_290[(uint)bVar10 * -2 + 3] = *(float *)(local_150 + (uint)bVar10 * -8 + 4);
    (&local_280)[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         (CMotionController_vtable *)local_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
    fVar15 = fVar15 - local_290[2];
    local_348[3] = fVar15;
    local_338 = local_104[3] - local_290[3];
    local_334.x = local_f4.x - (float)local_280;
    local_294 = fVar15;
    local_290[(uint)bVar10 * -2] = (&local_338)[(uint)bVar10 * -2];
    local_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&local_334 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_27c = fVar15;
    local_278 = local_338;
    local_274.x = local_334.x;
    this_ptr_03 = (CBoundingBox3D *)local_2d0;
    local_2d0._0_4_ = fVar15;
    *(float *)(local_2d0 + (uint)bVar10 * -8 + 4) = (&local_278)[(uint)bVar10 * -2];
    *(uint *)(local_2d0 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + -1) * 4 + 0xc) =
         *(uint *)((int)&local_274 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
              ((CVector3f *)this_ptr_03,(CVector3f *)local_3f0);
    local_144[3] = (float)local_3f0._0_4_;
    local_144[(uint)bVar10 * -2 + 4] = *(float *)(local_3f0 + (uint)bVar10 * -8 + 4);
    local_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         local_3e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
    local_38 = SQRT(local_290[1] * local_290[1] +
                    local_294 * local_294 + local_290[0] * local_290[0]);
    fStack_2454 = (float)((ulonglong)dVar12 >> 0x20);
    if (local_38 < 2.7f) {
      this_ptr_03 = (CBoundingBox3D *)0x51c4f9;
      dVar12 = acos((double)(local_38 / 2.7f));
      local_44 = (float)dVar12;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_44,(CQuaternion4f *)auStack_664);
      pCVar13 = &(this_ptr->base).base.model;
      auStack_624._0_4_ = auStack_664._0_4_;
      *(uint *)(auStack_624 + (uint)bVar10 * -8 + 4) =
           *(uint *)(auStack_664 + (uint)bVar10 * -8 + 4);
      *(uint *)(auStack_624 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)(auStack_664 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)
       ((int)(auStack_624 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4
       ) = *(uint *)
            ((int)(auStack_664 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
            ((uint)bVar10 * -2 + 1) * 4);
      local_18 = pCVar13;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar13,(CQuaternion4f *)auStack_624,fStack_2454,g_INT_01ed36e8,
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_44,&CStack_754);
      CStack_474.w = CStack_754.w;
      puVar7 = (uint *)((int)&CStack_474 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      *(uint *)((int)&CStack_474 + (uint)bVar10 * -8 + 4) =
           *(uint *)(auStack_744 + (uint)bVar10 * -8 + -0xc);
      *puVar7 = *(uint *)(auStack_744 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
      puVar7[(uint)bVar10 * -2 + 1] =
           *(uint *)
            ((int)(auStack_744 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
            ((uint)bVar10 * -2 + 1) * 4);
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_18,&CStack_474,fStack_2454,g_StrangerIndices[1],
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_144[2],(CQuaternion4f *)auStack_7c4);
    pCVar13 = &(this_ptr->base).base.model;
    auStack_584._0_4_ = auStack_7c4._0_4_;
    *(uint *)(auStack_584 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_7c4 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_584 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)(auStack_7c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)
     ((int)(auStack_584 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4)
         = *(uint *)
            ((int)(auStack_7c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
            ((uint)bVar10 * -2 + 1) * 4);
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,(CQuaternion4f *)auStack_584,fStack_2454,g_INT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_144[3],&CStack_844);
    CStack_894.w = CStack_844.w;
    puVar8 = (uint *)((int)&CStack_894 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_844 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_894 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_844 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_18,&CStack_894,fStack_2454,g_INT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    pCVar1 = (this_ptr->base).door_to_open;
    if (pCVar1 != (CDoor *)0x0) {
      pfVar6 = (float *)((int)pCVar1 + (uint)bVar10 * -8 + 0x9c0);
      local_39c[2] = (pCVar1->open_position).x;
      local_39c[(uint)bVar10 * -2 + 3] = *pfVar6;
      local_39c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] = pfVar6[(uint)bVar10 * -2 + 1];
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                (&pCVar1->base,&(this_ptr->base).base.base.location.position,
                 (CVector3f *)(local_3f0 + 8));
      local_1ec[2] = (float)local_3f0._8_4_;
      local_1ec[(uint)bVar10 * -2 + 3] = local_3e4[(uint)bVar10 * -2];
      local_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           local_3e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
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
          local_1a4[(uint)bVar10 * -2 + 6] = *(float *)((int)&CStack_b8 + (uint)bVar10 * -8 + 4);
          local_1a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
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
          fStack_1a8 = CStack_1fc.x;
          local_1a4[(uint)bVar10 * -2] = *(float *)((int)&CStack_1fc + (uint)bVar10 * -8 + 4);
          local_1a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               *(float *)((int)&CStack_1fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          local_39c[2] = local_39c[2] + fStack_1a8;
          local_39c[3] = local_39c[3] + local_1a4[0];
          local_38c = local_38c + local_1a4[1];
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
      local_354._8_4_ = CStack_214.x;
      local_348[(uint)bVar10 * -2] = *(float *)((int)&CStack_214 + (uint)bVar10 * -8 + 4);
      local_348[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           *(float *)((int)&CStack_214 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                ((CVector3f *)(local_354 + 8),&CStack_310);
      local_388 = CStack_310.x;
      local_39c[(uint)bVar10 * -2 + 6] = *(float *)((int)&CStack_310 + (uint)bVar10 * -8 + 4);
      local_39c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           *(float *)((int)&CStack_310 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      this_ptr->door_align_yaw = (this_ptr->base).base.base.orient.vec.y + local_384;
    }
  }
  pCVar13 = &(this_ptr->base).base.model;
  local_1c = pCVar13;
  if (local_20 == 0x20) {
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    local_418 = (this_ptr->carry_object_world_center).x;
    local_438[(uint)bVar10 * -2 + 9] = *pfVar6;
    local_438[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,g_StrangerIndices[0],&CStack_7c);
    fVar15 = local_418;
    local_3c0[2] = CStack_7c.x;
    local_3c0[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_7c + (uint)bVar10 * -8 + 4);
    local_3c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)&CStack_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_424 = fVar15 - local_3c0[2];
    local_420 = local_414 - local_3c0[3];
    local_41c = local_410 - local_3b0;
    local_f4.x = fVar15 - local_3c0[2];
    *(float *)((int)&local_f4 + (uint)bVar10 * -8 + 4) = local_438[(uint)bVar10 * -2 + 6];
    *(float *)((int)&local_f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_438[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
              (&local_f4,(CVector3f *)(local_2d0 + 8));
    pCVar13 = local_1c;
    afStack_400[0] = (float)local_2d0._8_4_;
    afStack_400[(uint)bVar10 * -2 + 1] = *(float *)(local_2d0 + (uint)bVar10 * -8 + 0xc);
    afStack_400[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2] =
         *(float *)(local_2d0 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 0xc);
    local_244c = (pCVar13->base).current_frame_number;
    if ((float)13 <= local_244c) {
      local_244c = 1.0 - (local_244c + (float)-13) * (float)0.0769230769230769;
      if (local_244c < 0.0) {
        local_244c = 0.0;
      }
    }
    else {
      local_244c = local_244c * (float)0.0769230769230769;
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
              (pCVar13,&CStack_8f4,local_244c,g_StrangerIndices[0xd],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(afStack_400[1],&CStack_4b4);
    CStack_724.w = CStack_4b4.w;
    puVar7 = (uint *)((int)&CStack_4b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)(auStack_714 + (uint)bVar10 * -8 + -0xc) =
         *(uint *)((int)&CStack_4b4 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_714 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + -0xc) = *puVar7;
    *(uint *)
     ((int)(auStack_714 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + -0xc) +
     ((uint)bVar10 * -2 + 1) * 4) = puVar7[(uint)bVar10 * -2 + 1];
    pCStack_243c = (CQuaternion4f *)(auStack_734 + 4);
    pCVar13 = local_18;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_StrangerIndices[0];
  }
  else if (local_20 == 0x1e) {
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    local_1a4[2] = (this_ptr->carry_object_world_center).x;
    local_1a4[(uint)bVar10 * -2 + 3] = *pfVar6;
    local_1a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,g_StrangerIndices[0],&CStack_22c);
    fVar15 = local_1a4[2];
    fStack_1f0 = CStack_22c.x;
    local_1ec[(uint)bVar10 * -2] = *(float *)((int)&CStack_22c + (uint)bVar10 * -8 + 4);
    local_1ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&CStack_22c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fStack_3c4 = fVar15 - fStack_1f0;
    local_3c0[0] = local_1a4[3] - local_1ec[0];
    local_3c0[1] = local_194 - local_1ec[1];
    CStack_70.x = fVar15 - fStack_1f0;
    *(float *)((int)&CStack_70 + (uint)bVar10 * -8 + 4) = local_3c0[(uint)bVar10 * -2];
    *(float *)((int)&CStack_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_3c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_70,&local_31c);
    pCVar13 = local_1c;
    local_9c.z = local_31c.x;
    local_90[(uint)bVar10 * -2] = *(float *)((int)&local_31c + (uint)bVar10 * -8 + 4);
    local_90[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&local_31c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_2448 = (pCVar13->base).current_frame_number;
    if ((float)24 <= local_2448) {
      local_2448 = 1.0 - (local_2448 + (float)-24) * (float)0.10000000000000001;
      if (local_2448 < 0.0) {
        local_2448 = 0.0;
      }
    }
    else {
      local_2448 = local_2448 * (float)0.041666666666666699;
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
              (pCVar13,&CStack_814,local_2448,g_StrangerIndices[0],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_90[0],&CStack_8e4);
    pCStack_243c = &CStack_4a4;
    CStack_4a4.w = CStack_8e4.w;
    puVar8 = (uint *)((int)&CStack_4a4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4);
    puVar7 = (uint *)((int)&CStack_8e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_4a4 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_8e4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    pCVar13 = local_18;
    local_244c = local_2448;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_StrangerIndices[0];
  }
  else if (local_20 == 0x21) {
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              ((CMatrix3x3f *)(local_2404 + 0x1a98),&(this_ptr->base).target_orientation.vec);
    if ((g_BYTE_01ed36bc & 1) == 0) {
      g_BYTE_01ed36bc = g_BYTE_01ed36bc | 1;
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
      *(float *)(local_2d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
           afStack_400[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_e0 = local_2e4[3] * 0.5f;
      afStack_dc[0] = fStack_2d4 * 0.5f;
      afStack_dc[1] = (float)local_2d0._0_4_ * 0.5f;
      fStack_17c = local_2e4[3] * 0.5f;
      afStack_178[(uint)bVar10 * -2] = afStack_dc[(uint)bVar10 * -2];
      afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (&stack0x00000000 != g_ScriptSubtitleLines[0] + 0x20) {
        g_CVector3f_01ed36ac.x = fStack_17c;
        g_CVector3f_01ed36ac.y = afStack_178[0];
        g_CVector3f_01ed36ac.z = afStack_178[1];
      }
    }
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              ((CMatrix3x3f *)(local_2404 + 0x1a98),&g_CVector3f_01ed36ac,&CStack_3d0);
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
              (local_18,g_StrangerIndices[0],&CStack_2f8);
    fVar15 = local_244;
    afStack_178[0] = CStack_2f8.x;
    afStack_178[(uint)bVar10 * -2 + 1] = *(float *)((int)&CStack_2f8 + (uint)bVar10 * -8 + 4);
    afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2] =
         *(float *)((int)&CStack_2f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_25c = fVar15 - afStack_178[0];
    afStack_258[0] = fStack_240 - afStack_178[1];
    afStack_258[1] = fStack_23c - afStack_178[2];
    local_cc._8_4_ = fVar15 - afStack_178[0];
    afStack_c0[(uint)bVar10 * -2] = afStack_258[(uint)bVar10 * -2];
    afStack_c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
              ((CVector3f *)(local_cc + 8),&CStack_448);
    pCVar13 = local_18;
    fStack_238 = CStack_448.x;
    afStack_258[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_448 + (uint)bVar10 * -8 + 4);
    afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         *(float *)((int)&CStack_448 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_2418 = (pCVar13->base).current_frame_number;
    if ((float)21 <= local_2418) {
      local_2418 = 1.0 - (local_2418 + (float)-21) * (float)0.071428571428571397;
      if (local_2418 < 0.0) {
        local_2418 = 0.0;
      }
    }
    else {
      local_2418 = local_2418 * (float)0.047619047619047603;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fStack_238,&CStack_634);
    auStack_714._0_4_ = CStack_634.w;
    *(uint *)(auStack_714 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_624 + (uint)bVar10 * -8 + -0xc);
    *(uint *)(auStack_714 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)(auStack_624 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
    *(uint *)
     ((int)(auStack_714 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4)
         = *(uint *)
            ((int)(auStack_624 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
            ((uint)bVar10 * -2 + 1) * 4);
    pCVar13 = &(this_ptr->base).base.model;
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,(CQuaternion4f *)auStack_714,local_2418,g_StrangerIndices[0xd],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(fStack_234,&CStack_6d4);
    this_ptr_02 = local_18;
    pCStack_243c = &CStack_4c4;
    CStack_4c4.w = CStack_6d4.w;
    puVar8 = (uint *)((int)&CStack_4c4 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4);
    puVar7 = (uint *)((int)&CStack_6d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_4c4 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_6d4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    local_244c = local_2418;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_StrangerIndices[0];
  }
  else if (local_20 == 0x2c) {
    local_24 = &this_ptr->carry_object_world_center;
    this_ptr_00 = (this_ptr->base).lever_to_pull;
    if (this_ptr_00 == (CLever *)0x0) {
      core_lever_cpp_CLever_getHandlePosition_FUN_004e0770(g_CLever_PTR_01ed36b8,&local_274);
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
      g_CLever_PTR_01ed36b8 = (this_ptr->base).lever_to_pull;
    }
    pCVar13 = &(this_ptr->base).base.model;
    pfVar6 = (float *)((int)this_ptr + (uint)bVar10 * -8 + 0x20c90);
    fStack_43c = (this_ptr->carry_object_world_center).x;
    local_18 = pCVar13;
    local_438[(uint)bVar10 * -2] = *pfVar6;
    local_438[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (pCVar13,g_StrangerIndices[0],(CVector3f *)(local_378 + 8));
    fVar15 = fStack_43c;
    local_3ac = (float)local_378._8_4_;
    local_3c0[(uint)bVar10 * -2 + 6] = (float)local_36c[(uint)bVar10 * -2];
    local_3c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         (float)local_36c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fVar15 = fVar15 - local_3ac;
    fStack_2ec = fVar15;
    local_2e8 = local_438[0] - local_3a8;
    local_2e4[0] = local_438[1] - local_3a4;
    local_438[2] = fVar15;
    local_438[(uint)bVar10 * -2 + 3] = local_2e4[(uint)bVar10 * -2 + -1];
    local_438[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_2e4[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    afStack_258[2] = fVar15;
    afStack_258[3] = local_2e8;
    local_248 = local_2e4[0];
    CStack_3dc.x = fVar15;
    *(float *)((int)&CStack_3dc + (uint)bVar10 * -8 + 4) = afStack_258[(uint)bVar10 * -2 + 3];
    *(float *)((int)&CStack_3dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_258[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_3dc,&CStack_1b4);
    pCVar13 = local_18;
    local_90[2] = CStack_1b4.x;
    local_90[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_1b4 + (uint)bVar10 * -8 + 4);
    local_90[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         *(float *)((int)&CStack_1b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_2428 = (pCVar13->base).current_frame_number;
    if ((float)10 <= local_2428) {
      if (15 <= (double)local_2428) {
        local_2428 = 1.0 - (local_2428 + (float)-15) * (float)0.066666666666666693;
        if (local_2428 < 0.0) {
          local_2428 = 0.0;
        }
      }
      else {
        local_2428 = 1.0;
      }
    }
    else {
      local_2428 = local_2428 * (float)0.10000000000000001;
    }
    local_40 = SQRT(local_428 * local_428 +
                    local_438[2] * local_438[2] + local_438[3] * local_438[3]);
    if (local_40 < 2.7f) {
      dVar12 = acos((double)(local_40 / 2.7f));
      pCStack_54 = (CDeformableModelInstance *)(float)dVar12;
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                ((float)pCStack_54,(CQuaternion4f *)(auStack_7c4 + 0xc));
      pCVar13 = &(this_ptr->base).base.model;
      auStack_5d4._12_4_ = auStack_7c4._12_4_;
      afStack_5c4[(uint)bVar10 * -2] = afStack_7b4[(uint)bVar10 * -2];
      afStack_5c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_7b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (afStack_5c4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (afStack_7b4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      local_1c = pCVar13;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (pCVar13,(CQuaternion4f *)(auStack_5d4 + 0xc),0.15,g_StrangerIndices[0],
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10
                (-(float)pCStack_54,(CQuaternion4f *)(auStack_624 + 0xc));
      auStack_664._12_4_ = auStack_624._12_4_;
      apCStack_654[(uint)bVar10 * -2] = (CMotionList *)auStack_614[(uint)bVar10 * -2];
      apCStack_654[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           (CMotionList *)auStack_614[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      (apCStack_654 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (CMotionList *)
           (auStack_614 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
                (local_1c,(CQuaternion4f *)(auStack_664 + 0xc),0.15,g_StrangerIndices[2],
                 core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_90[2],(CQuaternion4f *)auStack_794);
    pCVar13 = &(this_ptr->base).base.model;
    CStack_534.w = (float)auStack_794._0_4_;
    puVar7 = (uint *)((int)&CStack_534 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_534 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_794 + (uint)bVar10 * -8 + 4);
    *puVar7 = *(uint *)(auStack_794 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(auStack_794 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
          ((uint)bVar10 * -2 + 1) * 4);
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_534,local_2428,g_StrangerIndices[0],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_90[3],&CStack_514);
    pCStack_243c = (CQuaternion4f *)(auStack_614 + 4);
    CStack_604.w = CStack_514.w;
    puVar8 = (uint *)((int)&CStack_604 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4 + 4);
    puVar7 = (uint *)((int)&CStack_514 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_604 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_514 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    this_ptr_02 = local_18;
    local_244c = local_2428;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_StrangerIndices[0];
  }
  else if (local_20 == 0x22) {
    local_2450 = (this_ptr->base).base.model.base.current_frame_number * (float)0.066666666666666693;
    if (1.0 < local_2450) {
      local_2450 = 1.0;
    }
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_4c = (float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_4c,&CStack_554);
    CStack_674.w = CStack_554.w;
    puVar7 = (uint *)((int)&CStack_554 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)(auStack_664 + (uint)bVar10 * -8 + -0xc) =
         *(uint *)((int)&CStack_554 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_664 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) = *puVar7;
    *(uint *)
     ((int)(auStack_664 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) + ((uint)bVar10 * -2 + 1) * 4)
         = puVar7[(uint)bVar10 * -2 + 1];
    local_18 = &(this_ptr->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x51d81e;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_18,&CStack_674,local_2450,g_StrangerIndices[0],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_4c,&CStack_4e4);
    pCVar13 = local_18;
    pCStack_243c = &CStack_674;
    CStack_674.w = CStack_4e4.w;
    puVar7 = (uint *)((int)&CStack_4e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)(auStack_664 + (uint)bVar10 * -8 + -0xc) =
         *(uint *)((int)&CStack_4e4 + (uint)bVar10 * -8 + 4);
    *(uint *)(auStack_664 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) = *puVar7;
    *(uint *)
     ((int)(auStack_664 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) + ((uint)bVar10 * -2 + 1) * 4)
         = puVar7[(uint)bVar10 * -2 + 1];
    local_244c = local_2450;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01ed36e8;
  }
  else if (local_20 == 0x23) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(this_ptr->base).base.model,g_StrangerIndices[0],&CStack_304);
    fStack_208 = CStack_304.x;
    local_204[(uint)bVar10 * -2] = *(float *)((int)&CStack_304 + (uint)bVar10 * -8 + 4);
    local_204[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&CStack_304 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    local_38 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
               (this_ptr->carry_object_bbox).min.y;
    pCVar5 = (this_ptr->base).object_to_pick_up;
    if (pCVar5 != (CDemonActor *)0x0) {
      g_FLOAT_01ed3784 = core_prye_cpp_getCarriedObjectVerticalOffset_FUN_00517e80(pCVar5);
      local_18 = (CDeformableModelInstance *)g_FLOAT_01ed3784;
    }
    local_38 = local_38 - g_FLOAT_01ed3784;
    fVar11 = atan2
                       ((float10)local_204[0] - (float10)local_38,(float10)2.7f);
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
              (local_1c,(CQuaternion4f *)(auStack_804 + 0xc),(float)pCStack_243c,
               g_StrangerIndices[0],core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,(CQuaternion4f *)(auStack_804 + 0xc),(float)pCStack_243c,g_INT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_4c = (float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_4c,(CQuaternion4f *)(auStack_6a4 + 0xc));
    auStack_7e4._12_4_ = auStack_6a4._12_4_;
    afStack_7d4[(uint)bVar10 * -2] = afStack_694[(uint)bVar10 * -2];
    afStack_7d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_694[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (afStack_7d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_694 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,(CQuaternion4f *)(auStack_7e4 + 0xc),(float)pCStack_243c,
               g_StrangerIndices[0],core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_4c,(CQuaternion4f *)(auStack_794 + 0xc))
    ;
    this_ptr_02 = local_1c;
    auStack_7e4._12_4_ = auStack_794._12_4_;
    afStack_7d4[(uint)bVar10 * -2] = afStack_784[(uint)bVar10 * -2];
    afStack_7d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_784[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (afStack_7d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_784 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    pCVar13 = (CDeformableModelInstance *)(auStack_7e4 + 0xc);
    local_244c = (float)g_INT_01ed36e8;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
  }
  else if (local_20 == 0x24) {
    local_2410 = 1.0 - ((this_ptr->base).base.model.base.current_frame_number +
                       (float)-15) * (float)0.066666666666666693;
    if (local_2410 < 0.0) {
      local_2410 = 0.0;
    }
    if (1.0 < local_2410) {
      local_2410 = 1.0;
    }
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_34 = (float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_34,&CStack_8c4);
    pCVar13 = &(this_ptr->base).base.model;
    CStack_684.w = CStack_8c4.w;
    puVar8 = (uint *)((int)&CStack_684 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_8c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_684 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_8c4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x51db83;
    local_18 = pCVar13;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (pCVar13,&CStack_684,local_2410,g_StrangerIndices[0],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-local_34,(CQuaternion4f *)auStack_7e4);
    pCStack_243c = &CStack_684;
    CStack_684.w = (float)auStack_7e4._0_4_;
    puVar7 = (uint *)((int)&CStack_684 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_684 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_7e4 + (uint)bVar10 * -8 + 4);
    *puVar7 = *(uint *)(auStack_7e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(auStack_7e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
          ((uint)bVar10 * -2 + 1) * 4);
    pCVar13 = local_18;
    local_244c = local_2410;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)g_INT_01ed36e8;
  }
  else {
    if (local_20 != 0x25) goto LAB_0051cae3;
    local_18 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (local_18,g_StrangerIndices[0],&local_334);
    local_2b0 = local_334.x;
    local_2ac[(uint)bVar10 * -2] = *(float *)((int)&local_334 + (uint)bVar10 * -8 + 4);
    local_2ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         *(float *)((int)&local_334 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fVar11 = atan2
                       ((float10)local_2ac[0] - (float10)(this_ptr->carry_object_world_center).y,
                        (float10)2.7f);
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
              (pCVar13,&CStack_7a8,(float)local_2420,g_StrangerIndices[0],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,&CStack_7a8,(float)local_2420,g_INT_01ed36e8,
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    fVar11 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                             (float10)2.7f,(float10)1);
    local_30 = (CQuaternion4f *)(float)fVar11;
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10
              ((float)local_30,(CQuaternion4f *)(auStack_744 + 0xc));
    auStack_584._12_4_ = auStack_744._12_4_;
    auStack_574[(uint)bVar10 * -2] = auStack_734[(uint)bVar10 * -2];
    auStack_574[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         auStack_734[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (auStack_574 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (auStack_734 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
              (local_1c,(CQuaternion4f *)(auStack_584 + 0xc),(float)local_2420,g_StrangerIndices[0],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(-(float)local_30,&CStack_648);
    this_ptr_02 = local_1c;
    auStack_584._12_4_ = CStack_648.w;
    puVar7 = (uint *)((int)&CStack_648 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    auStack_574[(uint)bVar10 * -2] = *(uint *)((int)&CStack_648 + (uint)bVar10 * -8 + 4);
    auStack_574[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = *puVar7;
    (auStack_574 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         puVar7[(uint)bVar10 * -2 + 1];
    pCVar13 = (CDeformableModelInstance *)(auStack_584 + 0xc);
    pCStack_243c = local_2420;
    local_244c = (float)g_INT_01ed36e8;
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
  }
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170
            (this_ptr_02,(CQuaternion4f *)pCVar13,(float)pCStack_243c,(int)local_244c,blend_callback
            );
LAB_0051cae3:
  if (g_CGamePtr->goggles_active != 0) {
    local_2b8 = 0;
    local_2b4 = 0;
    local_2d0._20_4_ = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_2d0._20_4_ = (this_ptr->right_arm_aim).target_pitch;
    }
    pcVar16 = core_skeleton_cpp_blendWeightCallback_FUN_0054bef0;
    fVar15 = 1.0;
    iVar17 = g_INT_01ed36dc;
    core_xform_cpp_eulerToQuaternion_FUN_005860b0((CVector3f *)(local_2d0 + 0x14),&CStack_5e4);
    CStack_6b4.w = CStack_5e4.w;
    *(uint *)(auStack_6a4 + (uint)bVar10 * -8 + -0xc) =
         *(uint *)(auStack_5d4 + (uint)bVar10 * -8 + -0xc);
    *(uint *)(auStack_6a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) =
         *(uint *)(auStack_5d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
    *(uint *)
     ((int)(auStack_6a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) + ((uint)bVar10 * -2 + 1) * 4)
         = *(uint *)
            ((int)(auStack_5d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
            ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
              (&(this_ptr->base).base.model,&CStack_6b4,fVar15,iVar17,pcVar16);
  }
  if (0.0 < this_ptr->interact_blend) {
    iVar17 = 1;
    motion_name = "draw_holsters2aimPistols";
    pCVar13 = &(this_ptr->base).base.model;
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar13);
    iVar17 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                       (&this_ptr_01->motion_list,motion_name,iVar17);
    pCStack_54 = (CDeformableModelInstance *)
                 core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004fca20
                           (&pCVar13->base,iVar17,1.0);
    local_18 = pCStack_54;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (pCVar13,iVar17,(float)pCStack_54,this_ptr->interact_blend,g_StrangerIndices[0xc],
               core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                     ((this_ptr->base).base.carry_hands[0].carry_actor,
                      g_CDemonActorType_007e1a18.name_hash);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->weapon == (CWeapon *)0x0)) {
    fStack_5c = core_prye_cpp_CPrye_getFlashlightMinAngle_FUN_0051c0a0(this_ptr);
    local_18 = (CDeformableModelInstance *)fStack_5c;
    local_18 = (CDeformableModelInstance *)
               core_prye_cpp_CPrye_getFlashlightMaxAngle_FUN_0051c0f0(this_ptr);
    g_FLOAT_01ed36d8 =
         (1.0 - (this_ptr->aim_pitch - fStack_5c) / ((float)local_18 - fStack_5c)) *
         (float)1.3;
    this_ptr->frame_cleared = 1.0;
    if (1.0 < g_FLOAT_01ed36d8) {
      g_FLOAT_01ed36d8 = 1.0;
    }
    pcVar16 = core_prye_cpp_aimBlendWeightCallback_FUN_00517c90;
    fVar15 = this_ptr->frame_cleared;
    iVar17 = g_INT_01ed36e0;
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(this_ptr->aim_pitch,&CStack_544);
    pCVar14 = &CStack_864;
    CStack_864.w = CStack_544.w;
    puVar8 = (uint *)((int)&CStack_864 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_544 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_864 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_544 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_00585d10(1.5707964,&CStack_464);
    CStack_854.w = CStack_464.w;
    puVar8 = (uint *)((int)&CStack_854 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_464 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_854 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_464 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
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
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              (pCVar14 + g_StrangerIndices[0x10],&CStack_824,&CStack_884);
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0x10]].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = CStack_884.w;
    pfVar6 = (float *)((int)&CStack_884 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *pfVar9 = *(float *)((int)&CStack_884 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] = *pfVar6;
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] = pfVar6[(uint)bVar10 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(3.1415927,(CQuaternion4f *)auStack_6a4);
    pCVar2 = &local_18->base;
    CStack_764.w = (float)auStack_6a4._0_4_;
    puVar7 = (uint *)((int)&CStack_764 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_764 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_6a4 + (uint)bVar10 * -8 + 4);
    *puVar7 = *(uint *)(auStack_6a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(auStack_6a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_00585990
              ((CQuaternion4f *)
               (pCVar2->current_motion_name + g_StrangerIndices[0x11] * 0x10 + -0x30),&CStack_764,
               &CStack_914);
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0x11]].w;
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
    pCVar14 = local_30 + g_StrangerIndices[0x12];
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
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0x12]].w;
    pCVar14 = local_30 + g_StrangerIndices[0x13];
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
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0x13]].w;
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
    pCVar14 = local_30 + g_StrangerIndices[0x12];
    core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-0.7853982,&CStack_8a4);
    CStack_904.w = CStack_8a4.w;
    puVar8 = (uint *)((int)&CStack_904 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_8a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_904 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_8a4 + (uint)bVar10 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_904,pCVar14,&CStack_6c4);
    iVar17 = g_StrangerIndices[0x13];
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0x12]].w;
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
    core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_874,pCVar14,(CQuaternion4f *)auStack_744)
    ;
    pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
              [g_StrangerIndices[0x13]].w;
    pfVar9 = pfVar6 + (uint)bVar10 * -2 + 1;
    *pfVar6 = (float)auStack_744._0_4_;
    *pfVar9 = *(float *)(auStack_744 + (uint)bVar10 * -8 + 4);
    pfVar9[(uint)bVar10 * -2 + 1] =
         *(float *)(auStack_744 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    (pfVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         *(float *)((int)(auStack_744 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) +
                   ((uint)bVar10 * -2 + 1) * 4);
    return;
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                     (&this_ptr->weapon->base,g_CStormClassInfo.name_hash);
  if (pCVar5 == (CDemonActor *)0x0) {
    return;
  }
  pCVar14 = local_30 + g_StrangerIndices[0x12];
  core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(-1.0471976,&CStack_494);
  CStack_564.w = CStack_494.w;
  puVar8 = (uint *)((int)&CStack_564 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  puVar7 = (uint *)((int)&CStack_494 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  *(uint *)((int)&CStack_564 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&CStack_494 + (uint)bVar10 * -8 + 4);
  *puVar8 = *puVar7;
  puVar8[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_564,pCVar14,&CStack_4f4);
  pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
            [g_StrangerIndices[0x12]].w;
  pCVar14 = local_30 + g_StrangerIndices[0x13];
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
  pfVar6 = &(this_ptr->base).base.model.bone_transform.pose_data.bone_rotations
            [g_StrangerIndices[0x13]].w;
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
