// Name: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
// Address Range: [[005e7e80, 005e86cc]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_process_FUN_005e7e80(CVehicle * this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr)

{
  COrientation *pCVar1;
  COrientation *pCVar2;
  float fVar3;
  CDemonActor_vtable *pCVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  CVehicle *pCVar7;
  CDemonActor *pCVar8;
  int iVar9;
  uint uVar10;
  CMobster *this_ptr_00;
  CMobster *this_ptr_01;
  CTommyGun *this_ptr_02;
  CDemonActor *pCVar11;
  BADSPACEBASE *in_ESP;
  int iVar12;
  int iVar13;
  float in_stack_00000008;
  char *model_name;
  float fVar14;
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
  
  local_14 = ((CCourse *)(this_ptr->field3_0x93c + 0x6e4))->len;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(this_ptr->field3_0x93c + 0x6e4));
  fVar14 = this_ptr->cur_time + in_stack_00000008;
  this_ptr->cur_time = fVar14;
  if (this_ptr->total_time < fVar14) {
    this_ptr->cur_time = this_ptr->cur_time - this_ptr->total_time;
  }
  local_14 = ((CCourse *)(this_ptr->field3_0x93c + 0x6e4))->len;
  local_28 = (this_ptr->cur_time / this_ptr->total_time) * (float)local_14;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(this_ptr->field3_0x93c + 0x6e4));
  local_88 = (this_ptr->base_actor).location.position.x - local_70;
  local_84 = (this_ptr->base_actor).location.position.y - local_6c;
  local_24 = 0.0;
  local_80 = (this_ptr->base_actor).location.position.z - local_68;
  pCVar6 = (CVector3f *)(this_ptr->field1_0x158 + 0x76c);
  if (in_stack_00000008 <= 0.0) {
    if (pCVar6 != &g_ZeroVector) {
      pCVar6->x = g_ZeroVector.x;
      *(float *)(this_ptr->field1_0x158 + 0x770) = g_ZeroVector.y;
      *(float *)(this_ptr->field1_0x158 + 0x774) = g_ZeroVector.z;
    }
  }
  else {
    local_50 = 1.0 / in_stack_00000008;
    local_58._0_4_ = local_88 * local_50;
    local_58._4_4_ = local_84 * local_50;
    local_50 = local_80 * local_50;
    if (pCVar6 != (CVector3f *)local_58) {
      pCVar6->x = (float)local_58._0_4_;
      *(uint *)(this_ptr->field1_0x158 + 0x770) = local_58._4_4_;
      *(float *)(this_ptr->field1_0x158 + 0x774) = local_50;
    }
    local_24 = SQRT(*(float *)(this_ptr->field1_0x158 + 0x774) *
                    *(float *)(this_ptr->field1_0x158 + 0x774) +
                    *(float *)(this_ptr->field1_0x158 + 0x76c) *
                    *(float *)(this_ptr->field1_0x158 + 0x76c) +
                    *(float *)(this_ptr->field1_0x158 + 0x770) *
                    *(float *)(this_ptr->field1_0x158 + 0x770));
  }
  local_34 = *(float *)(this_ptr->field1_0x158 + 0x76c) * 2f;
  local_30 = *(float *)(this_ptr->field1_0x158 + 0x770) * 2f;
  local_2c = 2f * *(float *)(this_ptr->field1_0x158 + 0x774);
  if ((float *)(this_ptr->field6_0x1034 + 0x2c) != &local_34) {
    *(float *)(this_ptr->field6_0x1034 + 0x2c) = local_34;
    *(float *)(this_ptr->field6_0x1034 + 0x30) = local_30;
    *(float *)(this_ptr->field6_0x1034 + 0x34) = local_2c;
  }
  pCVar6 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base_actor,&local_4c,(CVector3f *)(this_ptr->field1_0x158 + 0x76c))
  ;
  if ((CVector3f *)(this_ptr->field1_0x158 + 0x778) != pCVar6) {
    ((CVector3f *)(this_ptr->field1_0x158 + 0x778))->x = pCVar6->x;
    *(float *)(this_ptr->field1_0x158 + 0x77c) = pCVar6->y;
    *(float *)(this_ptr->field1_0x158 + 0x780) = pCVar6->z;
  }
  iVar12 = 0;
  pCVar7 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar12 = iVar12 + 1;
      *(float *)(pCVar7->field3_0x93c + 400) =
           *(float *)(pCVar7->field3_0x93c + 0xc) * local_24 +
           *(float *)(pCVar7->field3_0x93c + 400);
      pCVar7 = (CVehicle *)(pCVar7->field1_0x158 + 0x5c);
    } while (iVar12 < this_ptr->tire_count);
  }
  fVar14 = (this_ptr->base_actor).location.position.y;
  fVar3 = (this_ptr->base_actor).orient.bank;
  (this_ptr->base_actor).orient.pitch = 0.0;
  pCVar4 = (this_ptr->base_actor).vtable;
  fVar3 = fVar3 + 1.570796f;
  (this_ptr->base_actor).location.position.y = fVar14 + 3.7f;
  (this_ptr->base_actor).orient.bank = fVar3;
  (*pCVar4->getBoundingBox)(&this_ptr->base_actor,&local_a0);
  iVar12 = 0;
  for (iVar13 = 0; iVar13 < g_CDemonSetPtr->damage_listener_count; iVar13 = iVar13 + 1) {
    pCVar11 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar12 + -4);
    pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar11,g_CMobsterClassInfo.name_hash);
    if ((pCVar8 == (CDemonActor *)0x0) ||
       (this_ptr != *(CVehicle **)(pCVar8[0x8e].actor_name + 0x10))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_f4 + 0x34));
      iVar9 = (*pCVar11->vtable->hasCollision)(pCVar11,(SCollisionInfo *)(auStack_f4 + 0x34));
      if ((iVar9 == 2) &&
         (((((pCVar11->location).position.y <= (this_ptr->base_actor).location.position.y + local_80
            && ((this_ptr->base_actor).location.position.y + local_a0.max.z <=
                (pCVar11->location).position.y + local_a0.min.x)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (&this_ptr->base_actor,(CVector3f *)(local_58 + 4),
                       &(pCVar11->location).position),
           local_a0.max.y <= (float)local_58._4_4_ + local_a0.min.y)) &&
          (((float)local_58._4_4_ - local_a0.min.y <= local_84 &&
           (local_88 <= local_4c.x + local_a0.min.y)))))) {
        fVar14 = local_4c.x - local_a0.min.y;
        if (fVar14 <= local_7c) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_f4);
          auStack_f4._48_4_ = 4;
          auStack_f4._4_4_ = 999.0;
          (*pCVar11->vtable[1].playAmbientSoundWithVolume)(pCVar11,auStack_f4,fVar14);
        }
        else if ((fVar14 < local_7c + (float)30) &&
                (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                   (*(uint *)(this_ptr->field6_0x1034 + 0x20)), iVar9 == 0)) {
          uVar10 = core_vehicle_cpp_FUN_005e8b50();
          *(uint *)(this_ptr->field6_0x1034 + 0x20) = uVar10;
        }
      }
    }
    iVar12 = iVar12 + 4;
  }
  if (*(int *)(this_ptr->field6_0x1034 + 0x38) != 0) goto LAB_005e82f4;
  pCVar5 = g_HeroActors[g_LocalHeroIndex];
  fStack_38 = (this_ptr->base_actor).location.position.x -
              (pCVar5->base_character).base_actor.location.position.x;
  local_34 = (this_ptr->base_actor).location.position.y -
             (pCVar5->base_character).base_actor.location.position.y;
  local_30 = (this_ptr->base_actor).location.position.z -
             (pCVar5->base_character).base_actor.location.position.z;
  if ((SQRT(local_30 * local_30 + fStack_38 * fStack_38 + local_34 * local_34) <=
       (float)200) || (0x671 < (int)g_CDemonSetPtr->actor_list_ptr)) goto LAB_005e82f4;
  iVar12 = 0;
  iStack_18 = 0;
  local_14 = 0;
  for (iVar13 = 0; iVar13 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c); iVar13 = iVar13 + 1
      ) {
    pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar12 + 8000),
                         g_CMobsterClassInfo.name_hash);
    if ((pCVar11 != (CDemonActor *)0x0) &&
       (pCVar7 = *(CVehicle **)(pCVar11[0x8e].actor_name + 0x10), this_ptr == pCVar7)) {
      if (*(int *)(pCVar11[0x8e].actor_name + 0x14) == 0) {
        *(CDemonActor **)(pCVar7->field6_0x1034 + 0x3c) = pCVar11;
        local_14 = 1;
      }
      else {
        *(CDemonActor **)(pCVar7->field6_0x1034 + 0x40) = pCVar11;
        iStack_18 = 1;
      }
    }
    iVar12 = iVar12 + 4;
  }
  if ((local_14 != 0) && (iStack_18 != 0)) goto LAB_005e82f4;
  if (local_14 == 0) {
    if (*(int *)(this_ptr->field6_0x1034 + 0x3c) != 0) {
      iVar12 = (**(code **)(*(int *)(*(int *)(this_ptr->field6_0x1034 + 0x3c) + 0x154) + 0x120))();
joined_r0x005e8664:
      if (iVar12 == 0) goto LAB_005e82f4;
    }
  }
  else if ((iStack_18 == 0) && (*(int *)(this_ptr->field6_0x1034 + 0x40) != 0)) {
    iVar12 = (**(code **)(*(int *)(*(int *)(this_ptr->field6_0x1034 + 0x40) + 0x154) + 0x120))();
    goto joined_r0x005e8664;
  }
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf94,"..\\core\\vehicle.cpp",0x15d);
  this_ptr_01 = (CMobster *)0x0;
  if (this_ptr_00 != (CMobster *)0x0) {
    this_ptr_01 = core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr_00);
  }
  this_ptr_02 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\vehicle.cpp",0x15e);
  iVar12 = 0;
  if (this_ptr_02 != (CTommyGun *)0x0) {
    iVar12 = core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr_02);
  }
  if ((this_ptr_01 == (CMobster *)0x0) || (iVar12 == 0)) {
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
            (&(this_ptr_01->base_enemy).base_character.model,model_name);
  *(CVehicle **)(this_ptr_01->field3_0xbedc + 4) = this_ptr;
  if (local_14 == 0) {
    this_ptr_01->side_of_car = 0;
    *(CMobster **)(this_ptr->field6_0x1034 + 0x3c) = this_ptr_01;
  }
  else {
    this_ptr_01->side_of_car = 1;
    *(CMobster **)(this_ptr->field6_0x1034 + 0x40) = this_ptr_01;
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (this_ptr_01->base_enemy).base_character.base_actor.location.position.x =
       (this_ptr->base_actor).location.position.x;
  (this_ptr_01->base_enemy).base_character.base_actor.location.position.y =
       (this_ptr->base_actor).location.position.y;
  (this_ptr_01->base_enemy).base_character.base_actor.location.position.z =
       (this_ptr->base_actor).location.position.z;
  (this_ptr_01->base_enemy).base_character.base_actor.location.area_id =
       (this_ptr->base_actor).location.area_id;
  pCVar1 = &(this_ptr_01->base_enemy).base_character.base_actor.orient;
  pCVar2 = &(this_ptr->base_actor).orient;
  if (pCVar1 != pCVar2) {
    pCVar1->pitch = pCVar2->pitch;
    (this_ptr_01->base_enemy).base_character.base_actor.orient.bank =
         (this_ptr->base_actor).orient.bank;
    (this_ptr_01->base_enemy).base_character.base_actor.orient.heading =
         (this_ptr->base_actor).orient.heading;
  }
  *(float *)(iVar12 + 0x20) = (this_ptr->base_actor).location.position.x;
  *(float *)(iVar12 + 0x24) = (this_ptr->base_actor).location.position.y;
  *(float *)(iVar12 + 0x28) = (this_ptr->base_actor).location.position.z;
  *(int *)(iVar12 + 0x2c) = (this_ptr->base_actor).location.area_id;
  pCVar1 = &(this_ptr->base_actor).orient;
  if ((COrientation *)(iVar12 + 0x30) != pCVar1) {
    *(float *)(iVar12 + 0x30) = pCVar1->pitch;
    *(float *)(iVar12 + 0x34) = (this_ptr->base_actor).orient.bank;
    *(float *)(iVar12 + 0x38) = (this_ptr->base_actor).orient.heading;
  }
  (*((this_ptr_01->base_enemy).base_character.base_actor.vtable)->setup)((CDemonActor *)this_ptr_01)
  ;
  (*(code *)**(uint **)(iVar12 + 0x154))();
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr_01);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
LAB_005e82f4:
  iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->field6_0x1034 + 0x24));
  if (iVar12 == 0) {
    uVar10 = core_vehicle_cpp_FUN_005e8b50();
    *(uint *)(this_ptr->field6_0x1034 + 0x24) = uVar10;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(*(uint *)(this_ptr->field6_0x1034 + 0x24),1.0);
  if (((float)0.20000000000000001 < ABS(*(float *)(this_ptr->field1_0x158 + 0x778))) &&
     (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                         (*(uint *)(this_ptr->field6_0x1034 + 0x28)), iVar12 == 0)) {
    uVar10 = core_vehicle_cpp_FUN_005e8b50();
    *(uint *)(this_ptr->field6_0x1034 + 0x28) = uVar10;
    return;
  }
  return;
}
