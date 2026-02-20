// Name: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
// Address Range: [[005e7e80, 005e86cc]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

{
  CLocation *out_pos;
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonActor_vtable *pCVar6;
  CCharacter *pCVar7;
  CHero *pCVar8;
  CVector3f *pCVar9;
  CVehicle *pCVar10;
  CDemonActor *pCVar11;
  int iVar12;
  uint uVar13;
  CMobster *this_ptr_00;
  CMobster *this_ptr_01;
  CTommyGun *this_ptr_02;
  CTommyGun *actor;
  int iVar14;
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
  
  local_14 = (this_ptr->course).len;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_00442710(&this_ptr->course,local_28,&local_70,&local_7c);
  fVar3 = this_ptr->cur_time + delta_time;
  this_ptr->cur_time = fVar3;
  if (this_ptr->total_time < fVar3) {
    this_ptr->cur_time = this_ptr->cur_time - this_ptr->total_time;
  }
  local_14 = (this_ptr->course).len;
  out_pos = &(this_ptr->base).location;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_00442710
            (&this_ptr->course,local_28,&out_pos->position,&(this_ptr->base).orient.vec);
  local_88 = (out_pos->position).x - local_70.x;
  local_84 = (this_ptr->base).location.position.y - local_70.y;
  local_24 = 0.0;
  local_80 = (this_ptr->base).location.position.z - local_70.z;
  pCVar9 = &this_ptr->world_velocity;
  if (delta_time <= 0.0) {
    if (pCVar9 != &g_ZeroVector) {
      pCVar9->x = g_ZeroVector.x;
      (this_ptr->world_velocity).y = g_ZeroVector.y;
      (this_ptr->world_velocity).z = g_ZeroVector.z;
    }
  }
  else {
    local_50 = 1.0 / delta_time;
    local_58 = local_88 * local_50;
    local_54 = local_84 * local_50;
    local_50 = local_80 * local_50;
    if (pCVar9 != (CVector3f *)&local_58) {
      pCVar9->x = local_58;
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
  iVar14 = 0;
  pCVar10 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar14 = iVar14 + 1;
      pCVar10->tires[0].spin_angle.x =
           pCVar10->tires[0].radius * local_24 + pCVar10->tires[0].spin_angle.x;
      pCVar10 = (CVehicle *)((pCVar10->model).part_visibility_flags + 0x17);
    } while (iVar14 < this_ptr->tire_count);
  }
  fVar3 = (this_ptr->base).location.position.y;
  fVar4 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.x = 0.0;
  pCVar6 = (this_ptr->base).vtable._ub;
  fVar4 = fVar4 + 1.570796f;
  (this_ptr->base).location.position.y = fVar3 + 3.7f;
  (this_ptr->base).orient.vec.y = fVar4;
  (*pCVar6->getBoundingBox)(&this_ptr->base,&local_a0);
  iStack_18 = 0;
  for (iVar14 = 0; iVar14 < g_CDemonSetPtr->character_count; iVar14 = iVar14 + 1) {
    pCVar7 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_18);
    pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (&pCVar7->base,g_CMobsterClassInfo.name_hash);
    if ((pCVar11 == (CDemonActor *)0x0) ||
       (this_ptr != *(CVehicle **)(pCVar11[0x8e].actor_name + 0x10))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_c8);
      iVar12 = (*((pCVar7->base).vtable._ub)->hasCollision)(&pCVar7->base,&SStack_c8);
      if ((iVar12 == 2) &&
         (((((pCVar7->base).location.position.y <=
             (this_ptr->base).location.position.y + local_a0.max.y &&
            ((this_ptr->base).location.position.y + local_a0.min.y <=
             (pCVar7->base).location.position.y + SStack_c8.cylinder_top_y)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (&this_ptr->base,&CStack_64,&(pCVar7->base).location.position),
           local_a0.min.x <= CStack_64.x + SStack_c8.cylinder_radius)) &&
          ((CStack_64.x - SStack_c8.cylinder_radius <= local_a0.max.x &&
           (local_a0.min.z <= CStack_64.z + SStack_c8.cylinder_radius)))))) {
        if (CStack_64.z - SStack_c8.cylinder_radius <= local_a0.max.z) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_104);
          SStack_104.damage_type = 4;
          SStack_104.damage_amount = 999.0;
          (*(((pCVar7->base).vtable._uc)->_uc).processDamage)(pCVar7,&SStack_104);
        }
        else if ((CStack_64.z - SStack_c8.cylinder_radius < local_a0.max.z + (float)30)
                && (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_horn_handle),
                   iVar12 == 0)) {
          uVar13 = core_vehicle_cpp_CVehicle_FUN_005e8b50(this_ptr);
          this_ptr->sfx_horn_handle = uVar13;
        }
      }
    }
    iStack_18 = iStack_18 + 4;
  }
  if (this_ptr->is_visible != 0) goto LAB_005e82f4;
  pCVar8 = g_HeroActors[g_LocalHeroIndex];
  fStack_40 = (this_ptr->base).location.position.x - (pCVar8->base).base.location.position.x;
  fStack_3c = (this_ptr->base).location.position.y - (pCVar8->base).base.location.position.y;
  fStack_38 = (this_ptr->base).location.position.z - (pCVar8->base).base.location.position.z;
  if ((SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <=
       (float)200) || (0x671 < g_CDemonSetPtr->actor_count)) goto LAB_005e82f4;
  iVar14 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  for (iVar12 = 0; iVar12 < g_CDemonSetPtr->enemy_count; iVar12 = iVar12 + 1) {
    pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar14),
                         g_CMobsterClassInfo.name_hash);
    if ((pCVar11 != (CDemonActor *)0x0) &&
       (pCVar10 = *(CVehicle **)(pCVar11[0x8e].actor_name + 0x10), this_ptr == pCVar10)) {
      if (*(int *)(pCVar11[0x8e].actor_name + 0x14) == 0) {
        pCVar10->last_mobster_left = pCVar11;
        iStack_1c = 1;
      }
      else {
        pCVar10->last_mobster_right = pCVar11;
        iStack_20 = 1;
      }
    }
    iVar14 = iVar14 + 4;
  }
  if ((iStack_1c != 0) && (iStack_20 != 0)) goto LAB_005e82f4;
  if (iStack_1c == 0) {
    pCVar7 = (CCharacter *)this_ptr->last_mobster_left;
    if (pCVar7 != (CCharacter *)0x0) {
      iVar14 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7);
joined_r0x005e8664:
      if (iVar14 == 0) goto LAB_005e82f4;
    }
  }
  else if ((iStack_20 == 0) &&
          (pCVar7 = (CCharacter *)this_ptr->last_mobster_right, pCVar7 != (CCharacter *)0x0)) {
    iVar14 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7);
    goto joined_r0x005e8664;
  }
  this_ptr_00 = (CMobster *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf94,"..\\core\\vehicle.cpp",0x15d);
  this_ptr_01 = (CMobster *)0x0;
  if (this_ptr_00 != (CMobster *)0x0) {
    this_ptr_01 = core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr_00);
  }
  this_ptr_02 = (CTommyGun *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\vehicle.cpp",0x15e);
  actor = (CTommyGun *)0x0;
  if (this_ptr_02 != (CTommyGun *)0x0) {
    actor = core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr_02);
  }
  if ((this_ptr_01 == (CMobster *)0x0) || (actor == (CTommyGun *)0x0)) {
    g_CurrentFilename = "..\\core\\vehicle.cpp";
    g_CurrentLineNumber = 0x161;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::process - Out of memory!");
  }
  iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  if (iVar14 == 0) {
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
  pUVar2 = &(this_ptr_01->base).base.base.orient;
  pUVar1 = &(this_ptr->base).orient;
  if (pUVar2 != pUVar1) {
    (pUVar2->vec).x = (pUVar1->vec).x;
    (this_ptr_01->base).base.base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (this_ptr_01->base).base.base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (actor->base).base.location.position.x = (this_ptr->base).location.position.x;
  (actor->base).base.location.position.y = (this_ptr->base).location.position.y;
  (actor->base).base.location.position.z = (this_ptr->base).location.position.z;
  (actor->base).base.location.area_id = (this_ptr->base).location.area_id;
  pUVar2 = &(actor->base).base.orient;
  pUVar1 = &(this_ptr->base).orient;
  if (pUVar2 != pUVar1) {
    (pUVar2->vec).x = (pUVar1->vec).x;
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
  iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_engine_handle);
  if (iVar14 == 0) {
    uVar13 = core_vehicle_cpp_CVehicle_FUN_005e8b50(this_ptr);
    this_ptr->sfx_engine_handle = uVar13;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(this_ptr->sfx_engine_handle,1.0);
  if (((float)0.20000000000000001 < ABS((this_ptr->local_velocity).x)) &&
     (iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_screech_handle),
     iVar14 == 0)) {
    uVar13 = core_vehicle_cpp_CVehicle_FUN_005e8b50(this_ptr);
    this_ptr->sfx_screech_handle = uVar13;
    return;
  }
  return;
}
