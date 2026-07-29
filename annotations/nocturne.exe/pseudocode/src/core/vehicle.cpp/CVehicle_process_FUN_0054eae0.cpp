// Name: core_vehicle.cpp_CVehicle_process_FUN_0054eae0
// Address: 0054eae0
// Address Range: [[0054eae0, 0054f318]]
// Convention: unknown
// Signature: uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(CVehicle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(CVehicle *param_1,float param_2)

{
  CLocation *out_pos;
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonActor_vtable *pCVar6;
  CCharacter *pCVar7;
  CVector3f *pCVar8;
  CVehicle *pCVar9;
  CDemonActor *pCVar10;
  ECollisionType EVar11;
  int iVar12;
  uint uVar13;
  CMobster *this_ptr;
  CMobster *this_ptr_00;
  CTommyGun *this_ptr_01;
  CTommyGun *actor;
  EDeathState EVar14;
  int iVar15;
  char *model_name;
  SDamageInfo SStack_104;
  SCollisionInfo SStack_c8;
  CBoundingBox3D local_a0;
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f CStack_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  local_14 = (param_1->course).len;
  local_28 = (param_1->cur_time / param_1->total_time) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_0043b800(&param_1->course,local_28,&local_70,&local_7c);
  fVar3 = param_1->cur_time + param_2;
  param_1->cur_time = fVar3;
  if (param_1->total_time < fVar3) {
    param_1->cur_time = param_1->cur_time - param_1->total_time;
  }
  local_14 = (param_1->course).len;
  out_pos = &(param_1->base).location;
  local_28 = (param_1->cur_time / param_1->total_time) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_0043b800
            (&param_1->course,local_28,&out_pos->position,&(param_1->base).orient.vec);
  local_88 = (out_pos->position).x - local_70.x;
  local_84 = (param_1->base).location.position.y - local_70.y;
  local_24 = 0.0;
  local_80 = (param_1->base).location.position.z - local_70.z;
  pCVar8 = &param_1->world_velocity;
  if (param_2 <= 0.0) {
    if (pCVar8 != (CVector3f *)&DAT_02dd1184) {
      pCVar8->x = _DAT_02dd1184;
      (param_1->world_velocity).y = _DAT_02dd1188;
      (param_1->world_velocity).z = _DAT_02dd118c;
    }
  }
  else {
    local_50 = 1.0 / param_2;
    local_58 = local_88 * local_50;
    local_54 = local_84 * local_50;
    local_50 = local_80 * local_50;
    if (pCVar8 != (CVector3f *)&local_58) {
      pCVar8->x = local_58;
      (param_1->world_velocity).y = local_54;
      (param_1->world_velocity).z = local_50;
    }
    fVar3 = (param_1->world_velocity).y;
    fVar4 = (param_1->world_velocity).x;
    fVar5 = (param_1->world_velocity).z;
    local_24 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  }
  local_34 = (param_1->world_velocity).x * 2.0f;
  local_30 = (param_1->world_velocity).y * 2.0f;
  local_2c = 2.0f * (param_1->world_velocity).z;
  if (&param_1->sound_velocity != (CVector3f *)&local_34) {
    (param_1->sound_velocity).x = local_34;
    (param_1->sound_velocity).y = local_30;
    (param_1->sound_velocity).z = local_2c;
  }
  pCVar8 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                     (&param_1->base,&local_4c,&param_1->world_velocity);
  if (&param_1->local_velocity != pCVar8) {
    (param_1->local_velocity).x = pCVar8->x;
    (param_1->local_velocity).y = pCVar8->y;
    (param_1->local_velocity).z = pCVar8->z;
  }
  iVar15 = 0;
  pCVar9 = param_1;
  if (0 < param_1->tire_count) {
    do {
      iVar15 = iVar15 + 1;
      pCVar9->tires[0].spin_angle.x =
           pCVar9->tires[0].radius * local_24 + pCVar9->tires[0].spin_angle.x;
      pCVar9 = (CVehicle *)((pCVar9->model).part_visibility_flags + 0x19);
    } while (iVar15 < param_1->tire_count);
  }
  fVar3 = (param_1->base).location.position.y;
  fVar4 = (param_1->base).orient.vec.y;
  (param_1->base).orient.vec.x = 0.0;
  pCVar6 = (param_1->base).vtable._ub;
  fVar4 = fVar4 + 1.570796f;
  (param_1->base).location.position.y = fVar3 + 3.7f;
  (param_1->base).orient.vec.y = fVar4;
  (*pCVar6->getBoundingBox)(&param_1->base,&local_a0);
  iStack_18 = 0;
  for (iVar15 = 0; iVar15 < *(int *)(0x01E57284 + 0x14ecb0); iVar15 = iVar15 + 1) {
    pCVar7 = *(CCharacter **)(0x01E57284 + iStack_18 + 0x14ecb4);
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (&pCVar7->base,g_CMobsterActorType_01ccdbd8.name_hash);
    if ((pCVar10 == (CDemonActor *)0x0) ||
       (param_1 != (CVehicle *)pCVar10[0x90].orient_matrix.m[1].x)) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_c8);
      EVar11 = (*((pCVar7->base).vtable._ub)->getCollisionType)(&pCVar7->base,&SStack_c8);
      if ((EVar11 == COLLISION_TYPE_CYLINDER) &&
         (((((pCVar7->base).location.position.y <=
             (param_1->base).location.position.y + local_a0.max.y &&
            ((param_1->base).location.position.y + local_a0.min.y <=
             (pCVar7->base).location.position.y + SStack_c8.cylinder_top_y)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                      (&param_1->base,&CStack_64,&(pCVar7->base).location.position),
           local_a0.min.x <= CStack_64.x + SStack_c8.cylinder_radius)) &&
          ((CStack_64.x - SStack_c8.cylinder_radius <= local_a0.max.x &&
           (local_a0.min.z <= CStack_64.z + SStack_c8.cylinder_radius)))))) {
        if (CStack_64.z - SStack_c8.cylinder_radius <= local_a0.max.z) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_104);
          SStack_104.damage_type = DAMAGE_TYPE_SHATTER;
          SStack_104.damage_amount = 999.0;
          (*(((pCVar7->base).vtable._uc)->_uc).processDamage)(pCVar7,&SStack_104);
        }
        else if ((CStack_64.z - SStack_c8.cylinder_radius < local_a0.max.z + (float)30)
                && (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[0]),
                   iVar12 == 0)) {
          uVar13 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0
                             (param_1,"model-t-horn?.wav");
          param_1->sfx_handles[0] = uVar13;
        }
      }
    }
    iStack_18 = iStack_18 + 4;
  }
  if (param_1->is_visible != 0) goto LAB_0054ef54;
  iVar15 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fStack_40 = (param_1->base).location.position.x - *(float *)(iVar15 + 0x20);
  fStack_3c = (param_1->base).location.position.y - *(float *)(iVar15 + 0x24);
  fStack_38 = (param_1->base).location.position.z - *(float *)(iVar15 + 0x28);
  if ((SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <=
       (float)200) || (0x671 < *(int *)(0x01E57284 + 0x14cd6c))) goto LAB_0054ef54;
  iVar15 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  for (iVar12 = 0; iVar12 < *(int *)(0x01E57284 + 0x150bf4); iVar12 = iVar12 + 1) {
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(CDemonActor **)(iVar15 + 0x150bf8 + 0x01E57284),
                         g_CMobsterActorType_01ccdbd8.name_hash);
    if ((pCVar10 != (CDemonActor *)0x0) &&
       (pCVar9 = (CVehicle *)pCVar10[0x90].orient_matrix.m[1].x, param_1 == pCVar9)) {
      if (pCVar10[0x90].orient_matrix.m[1].y == 0.0) {
        pCVar9->last_mobster_left = pCVar10;
        iStack_1c = 1;
      }
      else {
        pCVar9->last_mobster_right = pCVar10;
        iStack_20 = 1;
      }
    }
    iVar15 = iVar15 + 4;
  }
  if ((iStack_1c != 0) && (iStack_20 != 0)) goto LAB_0054ef54;
  if (iStack_1c == 0) {
    pCVar7 = (CCharacter *)param_1->last_mobster_left;
    if (pCVar7 != (CCharacter *)0x0) {
      EVar14 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7);
joined_r0x0054f2b0:
      if (EVar14 == DEATH_STATE_ALIVE) goto LAB_0054ef54;
    }
  }
  else if ((iStack_20 == 0) &&
          (pCVar7 = (CCharacter *)param_1->last_mobster_right, pCVar7 != (CCharacter *)0x0)) {
    EVar14 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7);
    goto joined_r0x0054f2b0;
  }
  this_ptr = (CMobster *)FUN_0056497c(0xbdfc);
  this_ptr_00 = (CMobster *)0x0;
  if (this_ptr != (CMobster *)0x0) {
    this_ptr_00 = core_mobster_cpp_CMobster_ctor_FUN_004da150(this_ptr);
  }
  this_ptr_01 = (CTommyGun *)FUN_0056497c(0x57c);
  actor = (CTommyGun *)0x0;
  if (this_ptr_01 != (CTommyGun *)0x0) {
    actor = core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(this_ptr_01);
  }
  if ((this_ptr_00 == (CMobster *)0x0) || (actor == (CTommyGun *)0x0)) {
    PTR_01cc4800 = "..\\core\\vehicle.cpp";
    INT_01cc4804 = 0x161;
    core_main_c_FUN_004c8440("CMobster::process - Out of memory!");
  }
  iVar15 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
  if (iVar15 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(this_ptr_00->base).base.model,model_name);
  this_ptr_00->vehicle = &param_1->base;
  if (iStack_1c == 0) {
    this_ptr_00->side_of_car = 0;
    param_1->last_mobster_left = (CDemonActor *)this_ptr_00;
  }
  else {
    this_ptr_00->side_of_car = 1;
    param_1->last_mobster_right = (CDemonActor *)this_ptr_00;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
            (0x01CC9450,(CDemonActor *)this_ptr_00);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,(CDemonActor *)actor);
  (this_ptr_00->base).base.base.location.position.x = (param_1->base).location.position.x;
  (this_ptr_00->base).base.base.location.position.y = (param_1->base).location.position.y;
  (this_ptr_00->base).base.base.location.position.z = (param_1->base).location.position.z;
  (this_ptr_00->base).base.base.location.area_id = (param_1->base).location.area_id;
  pUVar2 = &(this_ptr_00->base).base.base.orient;
  pUVar1 = &(param_1->base).orient;
  if (pUVar2 != pUVar1) {
    (pUVar2->vec).x = (pUVar1->vec).x;
    (this_ptr_00->base).base.base.orient.vec.y = (param_1->base).orient.vec.y;
    (this_ptr_00->base).base.base.orient.vec.z = (param_1->base).orient.vec.z;
  }
  (actor->base).base.location.position.x = (param_1->base).location.position.x;
  (actor->base).base.location.position.y = (param_1->base).location.position.y;
  (actor->base).base.location.position.z = (param_1->base).location.position.z;
  (actor->base).base.location.area_id = (param_1->base).location.area_id;
  pUVar2 = &(actor->base).base.orient;
  pUVar1 = &(param_1->base).orient;
  if (pUVar2 != pUVar1) {
    (pUVar2->vec).x = (pUVar1->vec).x;
    (actor->base).base.orient.vec.y = (param_1->base).orient.vec.y;
    (actor->base).base.orient.vec.z = (param_1->base).orient.vec.z;
  }
  (*((this_ptr_00->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr_00);
  (*((actor->base).base.vtable._ub)->setup)((CDemonActor *)actor);
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
            ((CCharacter *)this_ptr_00,1,(CDemonActor *)actor,0.0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
            (0x01CC9450,(CDemonActor *)this_ptr_00);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,(CDemonActor *)actor);
LAB_0054ef54:
  iVar15 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
  if (iVar15 == 0) {
    uVar13 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0
                       (param_1,"ext-modelt-fast_??.wav");
    param_1->sfx_handles[1] = uVar13;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(param_1->sfx_handles[1],1.0);
  fVar3 = ABS((param_1->local_velocity).x);
  fVar4 = (float)0.20000000000000001;
  uVar13 = (uint)(ushort)((ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
  if ((fVar3 >= fVar4 && (fVar3 == fVar4) == 0) &&
     (uVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[2]), uVar13 == 0)) {
    uVar13 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(param_1,"skid_??.wav");
    param_1->sfx_handles[2] = uVar13;
    return uVar13;
  }
  return uVar13;
}
