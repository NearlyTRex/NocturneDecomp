// Name: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
// Address Range: [[005e7e80, 005e86cc]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

{
  CLocation *out_pos_00;
  UOrientationVector *pUVar3;
  CVector3f *pCVar4;
  float fVar6;
  float fVar7;
  CCharacter *pCVar12;
  CVehicle *pCVar13;
  float fVar14;
  CVector3f *pCVar9;
  CVehicle *pCVar10;
  CMobster *pCVar11;
  ECollisionType EVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  CMobster *this_ptr_00;
  CMobster *this_ptr_01;
  CTommyGun *this_ptr_02;
  CTommyGun *actor;
  CMobster *pCVar16;
  EDeathState EVar15;
  int iVar16;
  int iVar17;
  int iVar18;
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
  CCharacter *pCVar7;
  CDemonActor_vtable *pCVar6;
  CHero *pCVar8;
  float fVar3;
  CLocation *out_pos;
  float fVar5;
  UOrientationVector *pUVar2;
  float fVar4;
  char *model_name;
  UOrientationVector *pUVar1;
  
  local_14 = (this_ptr->course).len;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_00442710(&this_ptr->course,local_28,&local_70,&local_7c);
  fVar6 = this_ptr->cur_time + delta_time;
  this_ptr->cur_time = fVar6;
  if (this_ptr->total_time < fVar6) {
    this_ptr->cur_time = this_ptr->cur_time - this_ptr->total_time;
  }
  local_14 = (this_ptr->course).len;
  out_pos_00 = &(this_ptr->base).location;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_00442710
            (&this_ptr->course,local_28,&out_pos_00->position,&(this_ptr->base).orient.vec);
  local_24 = 0.0;
  pCVar4 = &this_ptr->world_velocity;
  if (delta_time <= 0.0) {
    if ((UVector3 *)pCVar4 != &g_ZeroVector) {
      pCVar4->x = g_ZeroVector.f.x;
      (this_ptr->world_velocity).y = g_ZeroVector.f.y;
      (this_ptr->world_velocity).z = g_ZeroVector.f.z;
    }
  }
  else {
    fVar6 = 1.0 / delta_time;
    local_58 = ((out_pos_00->position).x - local_70.x) * fVar6;
    local_54 = ((this_ptr->base).location.position.y - local_70.y) * fVar6;
    local_50 = ((this_ptr->base).location.position.z - local_70.z) * fVar6;
    if (pCVar4 != (CVector3f *)&local_58) {
      pCVar4->x = local_58;
      (this_ptr->world_velocity).y = local_54;
      (this_ptr->world_velocity).z = local_50;
    }
    fVar3 = (this_ptr->world_velocity).y;
    fVar4 = (this_ptr->world_velocity).x;
    fVar5 = (this_ptr->world_velocity).z;
    local_24 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  }
  local_34 = (this_ptr->world_velocity).x * 2.0f;
  local_30 = (this_ptr->world_velocity).y * 2.0f;
  local_2c = 2.0f * (this_ptr->world_velocity).z;
  if (&this_ptr->sound_velocity != (CVector3f *)&local_34) {
    (this_ptr->sound_velocity).x = local_34;
    (this_ptr->sound_velocity).y = local_30;
    (this_ptr->sound_velocity).z = local_2c;
  }
  pCVar9 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_4c,&this_ptr->world_velocity);
  if (&this_ptr->local_velocity != pCVar9) {
    (this_ptr->local_velocity).x = pCVar9->x;
    (this_ptr->local_velocity).y = pCVar9->y;
    (this_ptr->local_velocity).z = pCVar9->z;
  }
  iVar16 = 0;
  pCVar10 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar16 = iVar16 + 1;
      pCVar10->tires[0].spin_angle.x =
           pCVar10->tires[0].radius * local_24 + pCVar10->tires[0].spin_angle.x;
      pCVar10 = (CVehicle *)((pCVar10->model).part_visibility_flags + 0x17);
    } while (iVar16 < this_ptr->tire_count);
  }
  fVar6 = (this_ptr->base).location.position.y;
  fVar7 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.x = 0.0;
  pCVar6 = (this_ptr->base).vtable._ub;
  fVar7 = fVar7 + 1.570796f;
  (this_ptr->base).location.position.y = fVar6 + 3.7f;
  (this_ptr->base).orient.vec.y = fVar7;
  (*pCVar6->getBoundingBox)(&this_ptr->base,&local_a0);
  iStack_18 = 0;
  for (iVar17 = 0; iVar17 < g_CDemonSetPtr->character_count; iVar17 = iVar17 + 1) {
    pCVar12 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_18);
    pCVar11 = (CMobster *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        (&pCVar12->base,g_CMobsterClassInfo.name_hash);
    if ((pCVar11 == (CMobster *)0x0) || (this_ptr != (CVehicle *)pCVar11->vehicle)) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_c8);
      EVar12 = (*((pCVar12->base).vtable._ub)->getCollisionType)(&pCVar12->base,&SStack_c8);
      if ((EVar12 == COLLISION_TYPE_CYLINDER) &&
         (((((pCVar12->base).location.position.y <=
             (this_ptr->base).location.position.y + local_a0.max.y &&
            ((this_ptr->base).location.position.y + local_a0.min.y <=
             (pCVar12->base).location.position.y + SStack_c8.cylinder_top_y)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (&this_ptr->base,&CStack_64,&(pCVar12->base).location.position),
           local_a0.min.x <= CStack_64.x + SStack_c8.cylinder_radius)) &&
          ((CStack_64.x - SStack_c8.cylinder_radius <= local_a0.max.x &&
           (local_a0.min.z <= CStack_64.z + SStack_c8.cylinder_radius)))))) {
        if (CStack_64.z - SStack_c8.cylinder_radius <= local_a0.max.z) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_104);
          SStack_104.damage_type = DAMAGE_TYPE_SHATTER;
          SStack_104.damage_amount = 999.0;
          (*(((pCVar12->base).vtable._uc)->_uc).processDamage)(pCVar12,&SStack_104);
        }
        else if ((CStack_64.z - SStack_c8.cylinder_radius < local_a0.max.z + (float)30)
                && (iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
                   iVar13 == 0)) {
          uVar14 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005e8b50
                             (this_ptr,"model-t-horn?.wav");
          this_ptr->sfx_handles[0] = uVar14;
        }
      }
    }
    iStack_18 = iStack_18 + 4;
  }
  if (((this_ptr->is_visible != 0) ||
      (pCVar8 = g_HeroActors[g_LocalHeroIndex],
      fVar6 = (this_ptr->base).location.position.x - (pCVar8->base).base.location.position.x,
      fVar7 = (this_ptr->base).location.position.y - (pCVar8->base).base.location.position.y,
      fVar14 = (this_ptr->base).location.position.z - (pCVar8->base).base.location.position.z,
      SQRT(fVar14 * fVar14 + fVar6 * fVar6 + fVar7 * fVar7) <= (float)200)) ||
     (0x671 < g_CDemonSetPtr->actor_count)) goto LAB_005e82f4;
  iVar17 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  for (iVar18 = 0; iVar18 < g_CDemonSetPtr->enemy_count; iVar18 = iVar18 + 1) {
    pCVar16 = (CMobster *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar17),
                         g_CMobsterClassInfo.name_hash);
    if ((pCVar16 != (CMobster *)0x0) &&
       (pCVar13 = (CVehicle *)pCVar16->vehicle, this_ptr == pCVar13)) {
      if (pCVar16->side_of_car == 0) {
        pCVar13->last_mobster_left = (CDemonActor *)pCVar16;
        iStack_1c = 1;
      }
      else {
        pCVar13->last_mobster_right = (CDemonActor *)pCVar16;
        iStack_20 = 1;
      }
    }
    iVar17 = iVar17 + 4;
  }
  if ((iStack_1c != 0) && (iStack_20 != 0)) goto LAB_005e82f4;
  if (iStack_1c == 0) {
    pCVar12 = (CCharacter *)this_ptr->last_mobster_left;
    if (pCVar12 != (CCharacter *)0x0) {
      EVar15 = (*(((pCVar12->base).vtable._uc)->_uc).getDeathState)(pCVar12);
joined_r0x005e8664:
      if (EVar15 == DEATH_STATE_ALIVE) goto LAB_005e82f4;
    }
  }
  else if ((iStack_20 == 0) &&
          (pCVar12 = (CCharacter *)this_ptr->last_mobster_right, pCVar12 != (CCharacter *)0x0)) {
    EVar15 = (*(((pCVar12->base).vtable._uc)->_uc).getDeathState)(pCVar12);
    goto joined_r0x005e8664;
  }
  this_ptr_00 = (CMobster *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0
                          (0xbf94,"..\\core\\vehicle.cpp",0x15d);
  this_ptr_01 = (CMobster *)0x0;
  if (this_ptr_00 != (CMobster *)0x0) {
    this_ptr_01 = core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr_00);
  }
  this_ptr_02 = (CTommyGun *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0
                          (0x584,"..\\core\\vehicle.cpp",0x15e);
  actor = (CTommyGun *)0x0;
  if (this_ptr_02 != (CTommyGun *)0x0) {
    actor = core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr_02);
  }
  if ((this_ptr_01 == (CMobster *)0x0) || (actor == (CTommyGun *)0x0)) {
    g_CurrentFilename = "..\\core\\vehicle.cpp";
    g_CurrentLineNumber = 0x161;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::process - Out of memory!");
  }
  iVar17 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  if (iVar17 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr_01->base).base.model,model_name);
  this_ptr_01->vehicle = &this_ptr->base;
  if (iStack_1c == 0) {
    this_ptr_01->side_of_car = 0;
    this_ptr->last_mobster_left = (CDemonActor *)this_ptr_01;
  }
  else {
    this_ptr_01->side_of_car = 1;
    this_ptr->last_mobster_right = (CDemonActor *)this_ptr_01;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
            (g_CDemonMissionPtr,(CDemonActor *)this_ptr_01);
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
            (g_CDemonMissionPtr,(CDemonActor *)actor);
  (this_ptr_01->base).base.base.location.position.x = (this_ptr->base).location.position.x;
  (this_ptr_01->base).base.base.location.position.y = (this_ptr->base).location.position.y;
  (this_ptr_01->base).base.base.location.position.z = (this_ptr->base).location.position.z;
  (this_ptr_01->base).base.base.location.area_id = (this_ptr->base).location.area_id;
  pUVar3 = &(this_ptr_01->base).base.base.orient;
  pUVar1 = &(this_ptr->base).orient;
  if (pUVar3 != pUVar1) {
    (pUVar3->vec).x = (pUVar1->vec).x;
    (this_ptr_01->base).base.base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (this_ptr_01->base).base.base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (actor->base).base.location.position.x = (this_ptr->base).location.position.x;
  (actor->base).base.location.position.y = (this_ptr->base).location.position.y;
  (actor->base).base.location.position.z = (this_ptr->base).location.position.z;
  (actor->base).base.location.area_id = (this_ptr->base).location.area_id;
  pUVar2 = &(actor->base).base.orient;
  pUVar3 = &(this_ptr->base).orient;
  if (pUVar2 != pUVar3) {
    (pUVar2->vec).x = (pUVar3->vec).x;
    (actor->base).base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (actor->base).base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (*((this_ptr_01->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr_01);
  (*((actor->base).base.vtable._ub)->setup)((CDemonActor *)actor);
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
            ((CCharacter *)this_ptr_01,1,(CDemonActor *)actor,0.0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
            (g_CDemonMissionPtr,(CDemonActor *)this_ptr_01);
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
            (g_CDemonMissionPtr,(CDemonActor *)actor);
LAB_005e82f4:
  iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
  if (iVar17 == 0) {
    uVar15 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005e8b50
                       (this_ptr,"ext-modelt-fast_??.wav");
    this_ptr->sfx_handles[1] = uVar15;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(this_ptr->sfx_handles[1],1.0);
  if (((float)0.20000000000000001 < ABS((this_ptr->local_velocity).x)) &&
     (iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]), iVar17 == 0))
  {
    uVar15 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005e8b50(this_ptr,"skid_??.wav");
    this_ptr->sfx_handles[2] = uVar15;
    return;
  }
  return;
}
