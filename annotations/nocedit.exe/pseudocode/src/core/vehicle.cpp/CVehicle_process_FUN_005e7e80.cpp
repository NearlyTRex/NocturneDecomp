// Name: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
// Address Range: [[005e7e80, 005e86cc]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  float fVar4;
  CDemonActor_vtable *pCVar5;
  CCharacter *pCVar6;
  CHero *pCVar7;
  CVector3f *pCVar8;
  CVehicle *pCVar9;
  CDemonActor *pCVar10;
  int iVar11;
  uint uVar12;
  CMobster *this_ptr_00;
  CMobster *this_ptr_01;
  CTommyGun *this_ptr_02;
  CTommyGun *actor;
  int iVar13;
  char *model_name;
  SDamageInfo SStack_104;
  SCollisionInfo SStack_c8;
  CBoundingBox3D local_a0;
  float local_88;
  float local_84;
  float local_80;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f CStack_64;
  CVector3f local_58;
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
  
  local_14 = ((CCourse *)(this_ptr->unk2 + 0x6e4))->len;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(this_ptr->unk2 + 0x6e4));
  fVar3 = this_ptr->cur_time + delta_time;
  this_ptr->cur_time = fVar3;
  if (this_ptr->total_time < fVar3) {
    this_ptr->cur_time = this_ptr->cur_time - this_ptr->total_time;
  }
  local_14 = ((CCourse *)(this_ptr->unk2 + 0x6e4))->len;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(this_ptr->unk2 + 0x6e4));
  local_88 = (this_ptr->base).location.position.x - local_70;
  local_84 = (this_ptr->base).location.position.y - local_6c;
  local_24 = 0.0;
  local_80 = (this_ptr->base).location.position.z - local_68;
  pCVar8 = (CVector3f *)(this_ptr->unk1 + 0x5f0);
  if (delta_time <= 0.0) {
    if (pCVar8 != &g_ZeroVector) {
      pCVar8->x = g_ZeroVector.x;
      *(float *)(this_ptr->unk1 + 0x5f4) = g_ZeroVector.y;
      *(float *)(this_ptr->unk1 + 0x5f8) = g_ZeroVector.z;
    }
  }
  else {
    local_58.z = 1.0 / delta_time;
    local_58.x = local_88 * local_58.z;
    local_58.y = local_84 * local_58.z;
    local_58.z = local_80 * local_58.z;
    if (pCVar8 != &local_58) {
      pCVar8->x = local_58.x;
      *(float *)(this_ptr->unk1 + 0x5f4) = local_58.y;
      *(float *)(this_ptr->unk1 + 0x5f8) = local_58.z;
    }
    local_24 = SQRT(*(float *)(this_ptr->unk1 + 0x5f8) * *(float *)(this_ptr->unk1 + 0x5f8) +
                    *(float *)(this_ptr->unk1 + 0x5f0) * *(float *)(this_ptr->unk1 + 0x5f0) +
                    *(float *)(this_ptr->unk1 + 0x5f4) * *(float *)(this_ptr->unk1 + 0x5f4));
  }
  local_34 = *(float *)(this_ptr->unk1 + 0x5f0) * 2.0f;
  local_30 = *(float *)(this_ptr->unk1 + 0x5f4) * 2.0f;
  local_2c = 2.0f * *(float *)(this_ptr->unk1 + 0x5f8);
  if ((float *)(this_ptr->unk3 + 0xc) != &local_34) {
    *(float *)(this_ptr->unk3 + 0xc) = local_34;
    *(float *)(this_ptr->unk3 + 0x10) = local_30;
    *(float *)(this_ptr->unk3 + 0x14) = local_2c;
  }
  pCVar8 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_4c,(CVector3f *)(this_ptr->unk1 + 0x5f0));
  if ((CVector3f *)(this_ptr->unk1 + 0x5fc) != pCVar8) {
    ((CVector3f *)(this_ptr->unk1 + 0x5fc))->x = pCVar8->x;
    *(float *)(this_ptr->unk1 + 0x600) = pCVar8->y;
    *(float *)(this_ptr->unk1 + 0x604) = pCVar8->z;
  }
  iVar13 = 0;
  pCVar9 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar13 = iVar13 + 1;
      *(float *)(pCVar9->unk2 + 400) =
           *(float *)(pCVar9->unk2 + 0xc) * local_24 + *(float *)(pCVar9->unk2 + 400);
      pCVar9 = (CVehicle *)((pCVar9->model).part_visibility_flags + 0x17);
    } while (iVar13 < this_ptr->tire_count);
  }
  fVar3 = (this_ptr->base).location.position.y;
  fVar4 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.x = 0.0;
  pCVar5 = (this_ptr->base).vtable._ub;
  fVar4 = fVar4 + 1.570796f;
  (this_ptr->base).location.position.y = fVar3 + 3.7f;
  (this_ptr->base).orient.vec.y = fVar4;
  (*pCVar5->getBoundingBox)(&this_ptr->base,&local_a0);
  iStack_18 = 0;
  for (iVar13 = 0; iVar13 < g_CDemonSetPtr->character_count; iVar13 = iVar13 + 1) {
    pCVar6 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_18);
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (&pCVar6->base,g_CMobsterClassInfo.name_hash);
    if ((pCVar10 == (CDemonActor *)0x0) ||
       (this_ptr != *(CVehicle **)(pCVar10[0x8e].actor_name + 0x10))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_c8);
      iVar11 = (*((pCVar6->base).vtable._ub)->hasCollision)(&pCVar6->base,&SStack_c8);
      if ((iVar11 == 2) &&
         (((((pCVar6->base).location.position.y <=
             (this_ptr->base).location.position.y + local_a0.max.y &&
            ((this_ptr->base).location.position.y + local_a0.min.y <=
             (pCVar6->base).location.position.y + SStack_c8.cylinder_top_y)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (&this_ptr->base,&CStack_64,&(pCVar6->base).location.position),
           local_a0.min.x <= CStack_64.x + SStack_c8.cylinder_radius)) &&
          ((CStack_64.x - SStack_c8.cylinder_radius <= local_a0.max.x &&
           (local_a0.min.z <= CStack_64.z + SStack_c8.cylinder_radius)))))) {
        if (CStack_64.z - SStack_c8.cylinder_radius <= local_a0.max.z) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_104);
          SStack_104.gore_multiplier = 5.60519e-45;
          SStack_104.damage_amount = 999.0;
          (*(((pCVar6->base).vtable._uc)->_uc).processDamage)(pCVar6,&SStack_104);
        }
        else if ((CStack_64.z - SStack_c8.cylinder_radius < local_a0.max.z + (float)30)
                && (iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk3),
                   iVar11 == 0)) {
          uVar12 = core_vehicle_cpp_CVehicle_FUN_005e8b50(this_ptr);
          *(uint *)this_ptr->unk3 = uVar12;
        }
      }
    }
    iStack_18 = iStack_18 + 4;
  }
  if (*(int *)(this_ptr->unk3 + 0x18) != 0) goto LAB_005e82f4;
  pCVar7 = g_HeroActors[g_LocalHeroIndex];
  fStack_40 = (this_ptr->base).location.position.x - (pCVar7->base).base.location.position.x;
  fStack_3c = (this_ptr->base).location.position.y - (pCVar7->base).base.location.position.y;
  fStack_38 = (this_ptr->base).location.position.z - (pCVar7->base).base.location.position.z;
  if ((SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <=
       (float)200) || (0x671 < g_CDemonSetPtr->actor_count)) goto LAB_005e82f4;
  iVar13 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  for (iVar11 = 0; iVar11 < g_CDemonSetPtr->enemy_count; iVar11 = iVar11 + 1) {
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar13),
                         g_CMobsterClassInfo.name_hash);
    if ((pCVar10 != (CDemonActor *)0x0) &&
       (pCVar9 = *(CVehicle **)(pCVar10[0x8e].actor_name + 0x10), this_ptr == pCVar9)) {
      if (*(int *)(pCVar10[0x8e].actor_name + 0x14) == 0) {
        pCVar9->last_mobster_left = pCVar10;
        iStack_1c = 1;
      }
      else {
        pCVar9->unk4 = (int)pCVar10;
        iStack_20 = 1;
      }
    }
    iVar13 = iVar13 + 4;
  }
  if ((iStack_1c != 0) && (iStack_20 != 0)) goto LAB_005e82f4;
  if (iStack_1c == 0) {
    pCVar6 = (CCharacter *)this_ptr->last_mobster_left;
    if (pCVar6 != (CCharacter *)0x0) {
      iVar13 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6);
joined_r0x005e8664:
      if (iVar13 == 0) goto LAB_005e82f4;
    }
  }
  else if ((iStack_20 == 0) && (iVar13 = this_ptr->unk4, iVar13 != 0)) {
    iVar13 = (**(code **)(*(int *)(iVar13 + 0x154) + 0x120))(iVar13);
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
  iVar13 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  if (iVar13 == 0) {
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
    this_ptr->unk4 = (int)this_ptr_01;
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
  iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 4));
  if (iVar13 == 0) {
    uVar12 = core_vehicle_cpp_CVehicle_FUN_005e8b50(this_ptr);
    *(uint *)(this_ptr->unk3 + 4) = uVar12;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(*(uint *)(this_ptr->unk3 + 4),1.0);
  if (((float)0.20000000000000001 < ABS(*(float *)(this_ptr->unk1 + 0x5fc))) &&
     (iVar13 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 8)),
     iVar13 == 0)) {
    uVar12 = core_vehicle_cpp_CVehicle_FUN_005e8b50(this_ptr);
    *(uint *)(this_ptr->unk3 + 8) = uVar12;
    return;
  }
  return;
}
