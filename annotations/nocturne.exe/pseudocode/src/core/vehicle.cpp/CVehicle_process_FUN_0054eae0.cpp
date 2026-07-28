// Name: core_vehicle.cpp_CVehicle_process_FUN_0054eae0
// Address: 0054eae0
// Address Range: [[0054eae0, 0054f318]]
// Convention: unknown
// Signature: uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(CVehicle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(CVehicle *param_1,float param_2)

{
  CLocation *out_pos;
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  CVector3f *pCVar3;
  float fVar4;
  CDemonActor_vtable *pCVar5;
  CCharacter *pCVar6;
  float *pfVar7;
  CVehicle *pCVar8;
  CDemonActor *pCVar9;
  ECollisionType EVar10;
  int iVar11;
  uint uVar12;
  CMobster *this_ptr;
  CMobster *this_ptr_00;
  int iVar13;
  char *pcVar14;
  float fVar15;
  byte auStack_f4 [52];
  byte auStack_c0 [36];
  CKeyFramedModelInstance *pCStack_9c;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_7c;
  CVector3f local_70 [2];
  float local_58;
  CVector3f local_54 [2];
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CPlatform *pCStack_18;
  float local_14;
  float fVar16;
  
  local_14 = (float)(param_1->course).len;
  local_28 = (param_1->cur_time / param_1->total_time) * (float)(int)local_14;
  core_course_cpp_CCourse_evaluate_FUN_0043b800(&param_1->course,local_28,local_70,&local_7c);
  fVar16 = param_1->cur_time + param_2;
  param_1->cur_time = fVar16;
  if (param_1->total_time < fVar16) {
    param_1->cur_time = param_1->cur_time - param_1->total_time;
  }
  local_14 = (float)(param_1->course).len;
  out_pos = &(param_1->base).location;
  local_28 = (param_1->cur_time / param_1->total_time) * (float)(int)local_14;
  core_course_cpp_CCourse_evaluate_FUN_0043b800
            (&param_1->course,local_28,&out_pos->position,&(param_1->base).orient.vec);
  local_88 = (out_pos->position).x - local_70[0].x;
  local_84 = (param_1->base).location.position.y - local_70[0].y;
  local_24 = 0.0;
  local_80 = (param_1->base).location.position.z - local_70[0].z;
  pCVar3 = &param_1->world_velocity;
  if (param_2 <= 0.0) {
    if (pCVar3 != (CVector3f *)&DAT_02dd1184) {
      pCVar3->x = _DAT_02dd1184;
      (param_1->world_velocity).y = _DAT_02dd1188;
      (param_1->world_velocity).z = _DAT_02dd118c;
    }
  }
  else {
    local_54[0].y = 1.0 / param_2;
    local_58 = local_88 * local_54[0].y;
    local_54[0].x = local_84 * local_54[0].y;
    local_54[0].y = local_80 * local_54[0].y;
    if (pCVar3 != (CVector3f *)&local_58) {
      pCVar3->x = local_58;
      (param_1->world_velocity).y = local_54[0].x;
      (param_1->world_velocity).z = local_54[0].y;
    }
    fVar16 = (param_1->world_velocity).y;
    fVar15 = (param_1->world_velocity).x;
    fVar4 = (param_1->world_velocity).z;
    local_24 = SQRT(fVar4 * fVar4 + fVar15 * fVar15 + fVar16 * fVar16);
  }
  local_34 = (param_1->world_velocity).x * 2.0f;
  local_30 = (param_1->world_velocity).y * 2.0f;
  local_2c = 2.0f * (param_1->world_velocity).z;
  if (&param_1->sound_velocity != (CVector3f *)&local_34) {
    (param_1->sound_velocity).x = local_34;
    (param_1->sound_velocity).y = local_30;
    (param_1->sound_velocity).z = local_2c;
  }
  pfVar7 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                              (param_1,&local_54[0].z,&param_1->world_velocity);
  if (&param_1->local_velocity != (CVector3f *)pfVar7) {
    (param_1->local_velocity).x = *pfVar7;
    (param_1->local_velocity).y = pfVar7[1];
    (param_1->local_velocity).z = pfVar7[2];
  }
  iVar13 = 0;
  pCVar8 = param_1;
  if (0 < param_1->tire_count) {
    do {
      iVar13 = iVar13 + 1;
      pCVar8->tires[0].spin_angle.x =
           pCVar8->tires[0].radius * local_24 + pCVar8->tires[0].spin_angle.x;
      pCVar8 = (CVehicle *)((pCVar8->model).part_visibility_flags + 0x19);
    } while (iVar13 < param_1->tire_count);
  }
  fVar16 = (param_1->base).location.position.y;
  fVar15 = (param_1->base).orient.vec.y;
  (param_1->base).orient.vec.x = 0.0;
  pCVar5 = (param_1->base).vtable._ub;
  fVar15 = fVar15 + 1.570796f;
  (param_1->base).location.position.y = fVar16 + 3.7f;
  (param_1->base).orient.vec.y = fVar15;
  (*pCVar5->getBoundingBox)(&param_1->base,(CBoundingBox3D *)(auStack_c0 + 0x20));
  fVar16 = 0.0;
  for (iVar13 = 0; iVar13 < *(int *)(0x01E57284 + 0x14ecb0); iVar13 = iVar13 + 1) {
    pCVar6 = *(CCharacter **)(0x01E57284 + (int)fVar16 + 0x14ecb4);
    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (&pCVar6->base,g_CMobsterActorType_01ccdbd8.name_hash);
    if ((pCVar9 == (CDemonActor *)0x0) || (param_1 != (CVehicle *)pCVar9[0x90].orient_matrix.m[1].x)
       ) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990((SCollisionInfo *)auStack_c0);
      EVar10 = (*((pCVar6->base).vtable._ub)->getCollisionType)
                         (&pCVar6->base,(SCollisionInfo *)auStack_c0);
      if ((EVar10 == COLLISION_TYPE_CYLINDER) &&
         (((((pCVar6->base).location.position.y <= (param_1->base).location.position.y + local_80 &&
            ((param_1->base).location.position.y + fStack_8c <=
             (pCVar6->base).location.position.y + (float)auStack_c0._32_4_)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                      (&param_1->base,local_54,&(pCVar6->base).location.position),
           fStack_90 <= local_54[0].x + (float)pCStack_9c)) &&
          ((local_54[0].x - (float)pCStack_9c <= local_84 &&
           (local_88 <= local_54[0].z + (float)pCStack_9c)))))) {
        fVar15 = local_54[0].z - (float)pCStack_9c;
        if (fVar15 <= local_7c.x) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_f4);
          auStack_f4._48_4_ = 5.60519e-45;
          auStack_f4._4_4_ = 999.0;
          (*(((pCVar6->base).vtable._uc)->_uc).getGrabbed)
                    (pCVar6,(CDemonActor *)auStack_f4,(int)fVar15);
        }
        else if ((fVar15 < local_7c.x + (float)30) &&
                (iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]),
                iVar11 == 0)) {
          uVar12 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0
                             (param_1,"model-t-horn?.wav");
          param_1->sfx_handles[0] = uVar12;
        }
      }
    }
    fVar16 = (float)((int)fVar16 + 4);
  }
  if (param_1->is_visible != 0) goto LAB_0054ef54;
  iVar13 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fStack_38 = (param_1->base).location.position.x - *(float *)(iVar13 + 0x20);
  local_34 = (param_1->base).location.position.y - *(float *)(iVar13 + 0x24);
  local_30 = (param_1->base).location.position.z - *(float *)(iVar13 + 0x28);
  if ((SQRT(local_30 * local_30 + fStack_38 * fStack_38 + local_34 * local_34) <=
       (float)200) || (0x671 < *(int *)(0x01E57284 + 0x14cd6c))) goto LAB_0054ef54;
  iVar13 = 0;
  pCStack_18 = (CPlatform *)0x0;
  local_14 = 0.0;
  for (iVar11 = 0; iVar11 < *(int *)(0x01E57284 + 0x150bf4); iVar11 = iVar11 + 1) {
    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)(iVar13 + 0x150bf8 + 0x01E57284),
                        g_CMobsterActorType_01ccdbd8.name_hash);
    if ((pCVar9 != (CDemonActor *)0x0) &&
       (pCVar8 = (CVehicle *)pCVar9[0x90].orient_matrix.m[1].x, param_1 == pCVar8)) {
      if (pCVar9[0x90].orient_matrix.m[1].y == 0.0) {
        pCVar8->last_mobster_left = pCVar9;
        local_14 = 1.4013e-45;
      }
      else {
        pCVar8->last_mobster_right = pCVar9;
        pCStack_18 = (CPlatform *)0x1;
      }
    }
    iVar13 = iVar13 + 4;
  }
  if ((local_14 != 0.0) && (pCStack_18 != (CPlatform *)0x0)) goto LAB_0054ef54;
  if (local_14 == 0.0) {
    pCVar6 = (CCharacter *)param_1->last_mobster_left;
    if (pCVar6 != (CCharacter *)0x0) {
      iVar13 = (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
joined_r0x0054f2b0:
      if (iVar13 == 0) goto LAB_0054ef54;
    }
  }
  else if ((pCStack_18 == (CPlatform *)0x0) &&
          (pCVar6 = (CCharacter *)param_1->last_mobster_right, pCVar6 != (CCharacter *)0x0)) {
    iVar13 = (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
    goto joined_r0x0054f2b0;
  }
  this_ptr = (CMobster *)FUN_0056497c(0xbdfc);
  this_ptr_00 = (CMobster *)0x0;
  if (this_ptr != (CMobster *)0x0) {
    this_ptr_00 = core_mobster_cpp_CMobster_ctor_FUN_004da150(this_ptr);
  }
  iVar13 = FUN_0056497c(0x57c);
  pCVar9 = (CDemonActor *)0x0;
  if (iVar13 != 0) {
    pCVar9 = (CDemonActor *)core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(iVar13);
  }
  if ((this_ptr_00 == (CMobster *)0x0) || (pCVar9 == (CDemonActor *)0x0)) {
    PTR_01cc4800 = "..\\core\\vehicle.cpp";
    INT_01cc4804 = 0x161;
    core_main_c_FUN_004c8440("CMobster::process - Out of memory!");
  }
  iVar13 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
  if (iVar13 == 0) {
    pcVar14 = "mobster4.dfm";
  }
  else {
    pcVar14 = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(this_ptr_00->base).base.model,pcVar14);
  this_ptr_00->vehicle = &param_1->base;
  if (local_14 == 0.0) {
    this_ptr_00->side_of_car = 0;
    param_1->last_mobster_left = (CDemonActor *)this_ptr_00;
  }
  else {
    this_ptr_00->side_of_car = 1;
    param_1->last_mobster_right = (CDemonActor *)this_ptr_00;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
            (0x01CC9450,(CDemonActor *)this_ptr_00);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,pCVar9);
  (this_ptr_00->base).base.base.location.position.x = (param_1->base).location.position.x;
  (this_ptr_00->base).base.base.location.position.y = (param_1->base).location.position.y;
  (this_ptr_00->base).base.base.location.position.z = (param_1->base).location.position.z;
  (this_ptr_00->base).base.base.location.area_id = (param_1->base).location.area_id;
  pUVar1 = &(this_ptr_00->base).base.base.orient;
  pUVar2 = &(param_1->base).orient;
  if (pUVar1 != pUVar2) {
    (pUVar1->vec).x = (pUVar2->vec).x;
    (this_ptr_00->base).base.base.orient.vec.y = (param_1->base).orient.vec.y;
    (this_ptr_00->base).base.base.orient.vec.z = (param_1->base).orient.vec.z;
  }
  (pCVar9->location).position.x = (param_1->base).location.position.x;
  (pCVar9->location).position.y = (param_1->base).location.position.y;
  (pCVar9->location).position.z = (param_1->base).location.position.z;
  (pCVar9->location).area_id = (param_1->base).location.area_id;
  pUVar1 = &(param_1->base).orient;
  if (&pCVar9->orient != pUVar1) {
    (pCVar9->orient).vec.x = (pUVar1->vec).x;
    (pCVar9->orient).vec.y = (param_1->base).orient.vec.y;
    (pCVar9->orient).vec.z = (param_1->base).orient.vec.z;
  }
  (*((this_ptr_00->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr_00);
  (*((pCVar9->vtable)._ub)->setup)(pCVar9);
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40((CCharacter *)this_ptr_00,1,pCVar9,0.0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
            (0x01CC9450,(CDemonActor *)this_ptr_00);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,pCVar9);
LAB_0054ef54:
  iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
  if (iVar13 == 0) {
    uVar12 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0
                       (param_1,"ext-modelt-fast_??.wav");
    param_1->sfx_handles[1] = uVar12;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(param_1->sfx_handles[1],1.0);
  fVar16 = ABS((param_1->local_velocity).x);
  fVar15 = (float)0.20000000000000001;
  uVar12 = (uint)(ushort)((ushort)(fVar16 < fVar15) << 8 |
                          (ushort)(NAN(fVar16) || NAN(fVar15)) << 10 |
                         (ushort)(fVar16 == fVar15) << 0xe);
  if ((fVar16 >= fVar15 && (fVar16 == fVar15) == 0) &&
     (uVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[2]), uVar12 == 0)) {
    uVar12 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(param_1,"skid_??.wav");
    param_1->sfx_handles[2] = uVar12;
    return uVar12;
  }
  return uVar12;
}
