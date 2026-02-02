// Name: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
// Address Range: [[005e7e80, 005e86cc]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)

{
  COrientation *pCVar1;
  COrientation *pCVar2;
  float fVar3;
  float fVar4;
  CDemonActor_vtable *pCVar5;
  CCharacter *this_ptr_00;
  CHero *pCVar6;
  CVector3f *pCVar7;
  CVehicle *pCVar8;
  CDemonActor *pCVar9;
  int iVar10;
  uint uVar11;
  CMobster *this_ptr_01;
  CMobster *this_ptr_02;
  CTommyGun *this_ptr_03;
  int iVar12;
  int iVar13;
  char *model_name;
  byte auStack_f4 [84];
  CBoundingBox3D local_a0;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  byte local_58 [8];
  float local_50;
  CVector3f local_4c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
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
  pCVar7 = (CVector3f *)(this_ptr->unk1 + 0x76c);
  if (delta_time <= 0.0) {
    if (pCVar7 != &g_ZeroVector) {
      pCVar7->x = g_ZeroVector.x;
      *(float *)(this_ptr->unk1 + 0x770) = g_ZeroVector.y;
      *(float *)(this_ptr->unk1 + 0x774) = g_ZeroVector.z;
    }
  }
  else {
    local_50 = 1.0 / delta_time;
    local_58._0_4_ = local_88 * local_50;
    local_58._4_4_ = local_84 * local_50;
    local_50 = local_80 * local_50;
    if (pCVar7 != (CVector3f *)local_58) {
      pCVar7->x = (float)local_58._0_4_;
      *(uint *)(this_ptr->unk1 + 0x770) = local_58._4_4_;
      *(float *)(this_ptr->unk1 + 0x774) = local_50;
    }
    local_24 = SQRT(*(float *)(this_ptr->unk1 + 0x774) * *(float *)(this_ptr->unk1 + 0x774) +
                    *(float *)(this_ptr->unk1 + 0x76c) * *(float *)(this_ptr->unk1 + 0x76c) +
                    *(float *)(this_ptr->unk1 + 0x770) * *(float *)(this_ptr->unk1 + 0x770));
  }
  local_34 = *(float *)(this_ptr->unk1 + 0x76c) * 2.0f;
  local_30 = *(float *)(this_ptr->unk1 + 0x770) * 2.0f;
  local_2c = 2.0f * *(float *)(this_ptr->unk1 + 0x774);
  if ((float *)(this_ptr->unk3 + 0x2c) != &local_34) {
    *(float *)(this_ptr->unk3 + 0x2c) = local_34;
    *(float *)(this_ptr->unk3 + 0x30) = local_30;
    *(float *)(this_ptr->unk3 + 0x34) = local_2c;
  }
  pCVar7 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_4c,(CVector3f *)(this_ptr->unk1 + 0x76c));
  if ((CVector3f *)(this_ptr->unk1 + 0x778) != pCVar7) {
    ((CVector3f *)(this_ptr->unk1 + 0x778))->x = pCVar7->x;
    *(float *)(this_ptr->unk1 + 0x77c) = pCVar7->y;
    *(float *)(this_ptr->unk1 + 0x780) = pCVar7->z;
  }
  iVar12 = 0;
  pCVar8 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar12 = iVar12 + 1;
      *(float *)(pCVar8->unk2 + 400) =
           *(float *)(pCVar8->unk2 + 0xc) * local_24 + *(float *)(pCVar8->unk2 + 400);
      pCVar8 = (CVehicle *)(pCVar8->unk1 + 0x5c);
    } while (iVar12 < this_ptr->tire_count);
  }
  fVar3 = (this_ptr->base).location.position.y;
  fVar4 = (this_ptr->base).orient.bank;
  (this_ptr->base).orient.pitch = 0.0;
  pCVar5 = (this_ptr->base).vtable._ub;
  fVar4 = fVar4 + 1.570796f;
  (this_ptr->base).location.position.y = fVar3 + 3.7f;
  (this_ptr->base).orient.bank = fVar4;
  (*pCVar5->getBoundingBox)(&this_ptr->base,&local_a0);
  iVar12 = 0;
  for (iVar13 = 0; iVar13 < g_CDemonSetPtr->damage_listener_count; iVar13 = iVar13 + 1) {
    this_ptr_00 = *(CCharacter **)(g_CDemonSetPtr->unk4 + iVar12 + -4);
    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (&this_ptr_00->base,g_CMobsterClassInfo.name_hash);
    if ((pCVar9 == (CDemonActor *)0x0) ||
       (this_ptr != *(CVehicle **)(pCVar9[0x8e].actor_name + 0x10))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_f4 + 0x34));
      iVar10 = (*((this_ptr_00->base).vtable._ub)->hasCollision)
                         (&this_ptr_00->base,(SCollisionInfo *)(auStack_f4 + 0x34));
      if ((iVar10 == 2) &&
         (((((this_ptr_00->base).location.position.y <=
             (this_ptr->base).location.position.y + local_80 &&
            ((this_ptr->base).location.position.y + local_a0.max.z <=
             (this_ptr_00->base).location.position.y + local_a0.min.x)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (&this_ptr->base,(CVector3f *)(local_58 + 4),
                       &(this_ptr_00->base).location.position),
           local_a0.max.y <= (float)local_58._4_4_ + local_a0.min.y)) &&
          (((float)local_58._4_4_ - local_a0.min.y <= local_84 &&
           (local_88 <= local_4c.x + local_a0.min.y)))))) {
        if (local_4c.x - local_a0.min.y <= local_7c) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_f4);
          auStack_f4._48_4_ = 4;
          auStack_f4._4_4_ = 999.0;
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                    (this_ptr_00,(SDamageInfo *)auStack_f4);
        }
        else if ((local_4c.x - local_a0.min.y < local_7c + (float)30) &&
                (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(this_ptr->unk3 + 0x20)), iVar10 == 0)) {
          uVar11 = core_vehicle_cpp_FUN_005e8b50();
          *(uint *)(this_ptr->unk3 + 0x20) = uVar11;
        }
      }
    }
    iVar12 = iVar12 + 4;
  }
  if (*(int *)(this_ptr->unk3 + 0x38) != 0) goto LAB_005e82f4;
  pCVar6 = g_HeroActors[g_LocalHeroIndex];
  fStack_38 = (this_ptr->base).location.position.x - (pCVar6->base).base.location.position.x;
  local_34 = (this_ptr->base).location.position.y - (pCVar6->base).base.location.position.y;
  local_30 = (this_ptr->base).location.position.z - (pCVar6->base).base.location.position.z;
  if ((SQRT(local_30 * local_30 + fStack_38 * fStack_38 + local_34 * local_34) <=
       (float)200) || (0x671 < (int)g_CDemonSetPtr->actor_list_ptr)) goto LAB_005e82f4;
  iVar12 = 0;
  iStack_18 = 0;
  local_14 = 0;
  for (iVar13 = 0; iVar13 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar13 = iVar13 + 1) {
    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar12 + 8000),
                        g_CMobsterClassInfo.name_hash);
    if ((pCVar9 != (CDemonActor *)0x0) &&
       (pCVar8 = *(CVehicle **)(pCVar9[0x8e].actor_name + 0x10), this_ptr == pCVar8)) {
      if (*(int *)(pCVar9[0x8e].actor_name + 0x14) == 0) {
        *(CDemonActor **)(pCVar8->unk3 + 0x3c) = pCVar9;
        local_14 = 1;
      }
      else {
        *(CDemonActor **)(pCVar8->unk3 + 0x40) = pCVar9;
        iStack_18 = 1;
      }
    }
    iVar12 = iVar12 + 4;
  }
  if ((local_14 != 0) && (iStack_18 != 0)) goto LAB_005e82f4;
  if (local_14 == 0) {
    if (*(int *)(this_ptr->unk3 + 0x3c) != 0) {
      iVar12 = (**(code **)(*(int *)(*(int *)(this_ptr->unk3 + 0x3c) + 0x154) + 0x120))();
joined_r0x005e8664:
      if (iVar12 == 0) goto LAB_005e82f4;
    }
  }
  else if ((iStack_18 == 0) && (*(int *)(this_ptr->unk3 + 0x40) != 0)) {
    iVar12 = (**(code **)(*(int *)(*(int *)(this_ptr->unk3 + 0x40) + 0x154) + 0x120))();
    goto joined_r0x005e8664;
  }
  this_ptr_01 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf94,"..\\core\\vehicle.cpp",0x15d);
  this_ptr_02 = (CMobster *)0x0;
  if (this_ptr_01 != (CMobster *)0x0) {
    this_ptr_02 = core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr_01);
  }
  this_ptr_03 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\vehicle.cpp",0x15e);
  iVar12 = 0;
  if (this_ptr_03 != (CTommyGun *)0x0) {
    iVar12 = core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr_03);
  }
  if ((this_ptr_02 == (CMobster *)0x0) || (iVar12 == 0)) {
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
            (&(this_ptr_02->base).base.model,model_name);
  this_ptr_02->vehicle = &this_ptr->base;
  if (local_14 == 0) {
    this_ptr_02->side_of_car = 0;
    *(CMobster **)(this_ptr->unk3 + 0x3c) = this_ptr_02;
  }
  else {
    this_ptr_02->side_of_car = 1;
    *(CMobster **)(this_ptr->unk3 + 0x40) = this_ptr_02;
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (this_ptr_02->base).base.base.location.position.x = (this_ptr->base).location.position.x;
  (this_ptr_02->base).base.base.location.position.y = (this_ptr->base).location.position.y;
  (this_ptr_02->base).base.base.location.position.z = (this_ptr->base).location.position.z;
  (this_ptr_02->base).base.base.location.area_id = (this_ptr->base).location.area_id;
  pCVar1 = &(this_ptr_02->base).base.base.orient;
  pCVar2 = &(this_ptr->base).orient;
  if (pCVar1 != pCVar2) {
    pCVar1->pitch = pCVar2->pitch;
    (this_ptr_02->base).base.base.orient.bank = (this_ptr->base).orient.bank;
    (this_ptr_02->base).base.base.orient.heading = (this_ptr->base).orient.heading;
  }
  *(float *)(iVar12 + 0x20) = (this_ptr->base).location.position.x;
  *(float *)(iVar12 + 0x24) = (this_ptr->base).location.position.y;
  *(float *)(iVar12 + 0x28) = (this_ptr->base).location.position.z;
  *(int *)(iVar12 + 0x2c) = (this_ptr->base).location.area_id;
  pCVar1 = &(this_ptr->base).orient;
  if ((COrientation *)(iVar12 + 0x30) != pCVar1) {
    *(float *)(iVar12 + 0x30) = pCVar1->pitch;
    *(float *)(iVar12 + 0x34) = (this_ptr->base).orient.bank;
    *(float *)(iVar12 + 0x38) = (this_ptr->base).orient.heading;
  }
  (*((this_ptr_02->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr_02);
  (*(code *)**(uint **)(iVar12 + 0x154))();
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr_02);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
LAB_005e82f4:
  iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x24));
  if (iVar12 == 0) {
    uVar11 = core_vehicle_cpp_FUN_005e8b50();
    *(uint *)(this_ptr->unk3 + 0x24) = uVar11;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(*(uint *)(this_ptr->unk3 + 0x24),1.0);
  if (((float)0.20000000000000001 < ABS(*(float *)(this_ptr->unk1 + 0x778))) &&
     (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x28)),
     iVar12 == 0)) {
    uVar11 = core_vehicle_cpp_FUN_005e8b50();
    *(uint *)(this_ptr->unk3 + 0x28) = uVar11;
    return;
  }
  return;
}
