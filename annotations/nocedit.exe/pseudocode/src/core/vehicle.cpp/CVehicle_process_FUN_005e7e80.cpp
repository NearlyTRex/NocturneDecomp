// Name: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// Address: 005e7e80
// Address Range: [[005e7e80, 005e86cc]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_process_FUN_005e7e80(CVehicle * this_ptr)
// Globals:
//   TerminatedCString s_model_t_horn_wav_00656e26
//   TerminatedCString s_core_vehicle_cpp_00656e38
//   TerminatedCString s_core_vehicle_cpp_00656e4c
//   TerminatedCString s_core_vehicle_cpp_00656e60
//   TerminatedCString s_CMobster_process_Out_of__00656e74
//   TerminatedCString s_mobster3_dfm_00656e97
//   TerminatedCString s_mobster4_dfm_00656ea4
//   TerminatedCString s_ext_modelt_fast_wav_00656eb1
//   TerminatedCString s_skid_wav_00656ec8
//   float FLOAT_00656ed6 = 2
//   float FLOAT_00656eda = 3.700000
//   float FLOAT_00656ede = 1.570796
//   double DOUBLE_00656ee6 = 200
//   double DOUBLE_00656eee = 0.200000000000000
//   double DOUBLE_00656ef6 = 30
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   undefined4 g_CMobsterClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_course.cpp_CCourse_FUN_00442710
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_mobster.cpp_CMobster_ctor_FUN_00525200
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
//   core_vehicle.cpp_FUN_005e8b50
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40

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
  undefined4 uVar10;
  CMobster *this_ptr_00;
  CTommyGun *this_ptr_01;
  CDemonActor *pCVar11;
  BADSPACEBASE *in_ESP;
  int iVar12;
  int iVar13;
  float in_stack_00000008;
  char *model_name;
  float fVar14;
  undefined1 auStack_f4 [84];
  CBoundingBox3D local_a0;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_58 [8];
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
      *(undefined4 *)(this_ptr->field1_0x158 + 0x770) = local_58._4_4_;
      *(float *)(this_ptr->field1_0x158 + 0x774) = local_50;
    }
    local_24 = SQRT(*(float *)(this_ptr->field1_0x158 + 0x774) *
                    *(float *)(this_ptr->field1_0x158 + 0x774) +
                    *(float *)(this_ptr->field1_0x158 + 0x76c) *
                    *(float *)(this_ptr->field1_0x158 + 0x76c) +
                    *(float *)(this_ptr->field1_0x158 + 0x770) *
                    *(float *)(this_ptr->field1_0x158 + 0x770));
  }
  local_34 = *(float *)(this_ptr->field1_0x158 + 0x76c) * FLOAT_00656ed6;
  local_30 = *(float *)(this_ptr->field1_0x158 + 0x770) * FLOAT_00656ed6;
  local_2c = FLOAT_00656ed6 * *(float *)(this_ptr->field1_0x158 + 0x774);
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
  fVar3 = fVar3 + FLOAT_00656ede;
  (this_ptr->base_actor).location.position.y = fVar14 + FLOAT_00656eda;
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
        else if ((fVar14 < local_7c + (float)DOUBLE_00656ef6) &&
                (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                   (*(uint *)(this_ptr->field6_0x1034 + 0x20)), iVar9 == 0)) {
          uVar10 = core_vehicle_cpp_FUN_005e8b50();
          *(undefined4 *)(this_ptr->field6_0x1034 + 0x20) = uVar10;
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
       (float)DOUBLE_00656ee6) || (0x671 < (int)g_CDemonSetPtr->actor_list_ptr)) goto LAB_005e82f4;
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
  this_ptr_00 = (CMobster *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf94,"..\\core\\vehicle.cpp",0x15d);
  if (this_ptr_00 != (CMobster *)0x0) {
    this_ptr_00 = core_mobster_cpp_CMobster_ctor_FUN_00525200(this_ptr_00);
  }
  this_ptr_01 = (CTommyGun *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x584,"..\\core\\vehicle.cpp",0x15e);
  if (this_ptr_01 != (CTommyGun *)0x0) {
    this_ptr_01 = (CTommyGun *)core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(this_ptr_01);
  }
  if ((this_ptr_00 == (CMobster *)0x0) || (this_ptr_01 == (CTommyGun *)0x0)) {
    g_CurrentFilename = "..\\core\\vehicle.cpp";
    g_CurrentLineNumber = 0x161;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMobster::process - Out of memory!");
  }
  iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
  if (iVar12 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr_00->base_enemy).base_character.model,model_name);
  *(CVehicle **)(this_ptr_00->field3_0xbedc + 4) = this_ptr;
  if (local_14 == 0) {
    this_ptr_00->side_of_car = 0;
    *(CMobster **)(this_ptr->field6_0x1034 + 0x3c) = this_ptr_00;
  }
  else {
    this_ptr_00->side_of_car = 1;
    *(CMobster **)(this_ptr->field6_0x1034 + 0x40) = this_ptr_00;
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (this_ptr_00->base_enemy).base_character.base_actor.location.position.x =
       (this_ptr->base_actor).location.position.x;
  (this_ptr_00->base_enemy).base_character.base_actor.location.position.y =
       (this_ptr->base_actor).location.position.y;
  (this_ptr_00->base_enemy).base_character.base_actor.location.position.z =
       (this_ptr->base_actor).location.position.z;
  (this_ptr_00->base_enemy).base_character.base_actor.location.area_id =
       (this_ptr->base_actor).location.area_id;
  pCVar1 = &(this_ptr_00->base_enemy).base_character.base_actor.orient;
  pCVar2 = &(this_ptr->base_actor).orient;
  if (pCVar1 != pCVar2) {
    pCVar1->pitch = pCVar2->pitch;
    (this_ptr_00->base_enemy).base_character.base_actor.orient.bank =
         (this_ptr->base_actor).orient.bank;
    (this_ptr_00->base_enemy).base_character.base_actor.orient.heading =
         (this_ptr->base_actor).orient.heading;
  }
  (this_ptr_01->base_weapon).base_actor.location.position.x =
       (this_ptr->base_actor).location.position.x;
  (this_ptr_01->base_weapon).base_actor.location.position.y =
       (this_ptr->base_actor).location.position.y;
  (this_ptr_01->base_weapon).base_actor.location.position.z =
       (this_ptr->base_actor).location.position.z;
  (this_ptr_01->base_weapon).base_actor.location.area_id = (this_ptr->base_actor).location.area_id;
  pCVar1 = &(this_ptr_01->base_weapon).base_actor.orient;
  pCVar2 = &(this_ptr->base_actor).orient;
  if (pCVar1 != pCVar2) {
    pCVar1->pitch = pCVar2->pitch;
    (this_ptr_01->base_weapon).base_actor.orient.bank = (this_ptr->base_actor).orient.bank;
    (this_ptr_01->base_weapon).base_actor.orient.heading = (this_ptr->base_actor).orient.heading;
  }
  (*((this_ptr_00->base_enemy).base_character.base_actor.vtable)->setup)((CDemonActor *)this_ptr_00)
  ;
  (*((this_ptr_01->base_weapon).base_actor.vtable)->setup)((CDemonActor *)this_ptr_01);
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr_00);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
LAB_005e82f4:
  iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->field6_0x1034 + 0x24));
  if (iVar12 == 0) {
    uVar10 = core_vehicle_cpp_FUN_005e8b50();
    *(undefined4 *)(this_ptr->field6_0x1034 + 0x24) = uVar10;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(*(uint *)(this_ptr->field6_0x1034 + 0x24),1.0);
  if (((float)DOUBLE_00656eee < ABS(*(float *)(this_ptr->field1_0x158 + 0x778))) &&
     (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                         (*(uint *)(this_ptr->field6_0x1034 + 0x28)), iVar12 == 0)) {
    uVar10 = core_vehicle_cpp_FUN_005e8b50();
    *(undefined4 *)(this_ptr->field6_0x1034 + 0x28) = uVar10;
    return;
  }
  return;
}


// Assembly code:
// 005e7e80: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
// 005e7e81: PUSH ESI
// 005e7e82: PUSH EDI
// 005e7e83: PUSH EBP
// 005e7e84: MOV EBP,ESP
// 005e7e86: SUB ESP,0xf8
// 005e7e8c: AND ESP,0xfffffff8
// 005e7e8f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e7e92: LEA EAX,[EBX + 0x1020]
// 005e7e98: MOV EDX,dword ptr [EAX]
// 005e7e9a: FLD float ptr [EBX + 0x102c]
// 005e7ea0: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005e7ea7: LEA EDX,[ESP + 0x8c]
//   XREF to: Stack[-0x7c] (DATA)
// 005e7eae: FILD dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 005e7eb5: PUSH EDX
// 005e7eb6: LEA EDX,[ESP + 0x9c]
//   XREF to: Stack[-0x70] (DATA)
// 005e7ebd: FXCH
// 005e7ebf: FDIV float ptr [EBX + 0x1030]
// 005e7ec5: FMULP
// 005e7ec7: PUSH EDX
// 005e7ec8: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (WRITE)
// 005e7ecf: PUSH dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 005e7ed6: PUSH EAX
// 005e7ed7: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 005e7edc: ADD ESP,0x10
// 005e7edf: FLD float ptr [EBX + 0x102c]
// 005e7ee5: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e7ee8: FST float ptr [EBX + 0x102c]
// 005e7eee: FCOMP float ptr [EBX + 0x1030]
// 005e7ef4: FNSTSW AX
// 005e7ef6: SAHF
// 005e7ef7: JBE 0x005e7f0b
//   XREF to: 005e7f0b (CONDITIONAL_JUMP)
// 005e7ef9: FLD float ptr [EBX + 0x1030]
// 005e7eff: FSUBR float ptr [EBX + 0x102c]
// 005e7f05: FSTP float ptr [EBX + 0x102c]
// 005e7f0b: LEA EAX,[EBX + 0x1020]
//   Label: LAB_005e7f0b
// 005e7f11: MOV EDX,dword ptr [EAX]
// 005e7f13: FLD float ptr [EBX + 0x102c]
// 005e7f19: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005e7f20: LEA EDX,[EBX + 0x30]
// 005e7f23: FILD dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x14] (READ)
// 005e7f2a: PUSH EDX
// 005e7f2b: LEA ESI,[EBX + 0x20]
// 005e7f2e: FXCH
// 005e7f30: FDIV float ptr [EBX + 0x1030]
// 005e7f36: FMULP
// 005e7f38: PUSH ESI
// 005e7f39: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (WRITE)
// 005e7f40: PUSH dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 005e7f47: PUSH EAX
// 005e7f48: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 005e7f4d: FLD float ptr [ESI]
// 005e7f4f: ADD ESP,0x10
// 005e7f52: XOR EDX,EDX
// 005e7f54: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e7f57: FXCH
// 005e7f59: FSUB float ptr [ESP + 0x98]
//   XREF to: Stack[-0x70] (READ)
// 005e7f60: FLDZ
// 005e7f62: FXCH
// 005e7f64: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x88] (WRITE)
// 005e7f6b: FLD float ptr [ESI + 0x4]
// 005e7f6e: FSUB float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x6c] (READ)
// 005e7f75: MOV dword ptr [ESP + 0xe4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005e7f7c: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x84] (WRITE)
// 005e7f83: FLD float ptr [ESI + 0x8]
// 005e7f86: FSUB float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x68] (READ)
// 005e7f8d: LEA EDX,[EBX + 0x8c4]
// 005e7f93: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x80] (WRITE)
// 005e7f9a: FCOMPP
// 005e7f9c: FNSTSW AX
// 005e7f9e: SAHF
// 005e7f9f: JNC 0x005e8181
//   XREF to: 005e8181 (CONDITIONAL_JUMP)
// 005e7fa5: FLD1
// 005e7fa7: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x88] (READ)
// 005e7fae: FXCH
// 005e7fb0: FDIV float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e7fb3: FXCH
// 005e7fb5: FMUL ST1
// 005e7fb7: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0x84] (READ)
// 005e7fbe: FMUL ST2
// 005e7fc0: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x80] (READ)
// 005e7fc7: FMULP ST3
// 005e7fc9: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x58] (DATA)
// 005e7fd0: FXCH
// 005e7fd2: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x58] (WRITE)
// 005e7fd9: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x54] (WRITE)
// 005e7fe0: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x50] (WRITE)
// 005e7fe7: CMP EDX,EAX
// 005e7fe9: JZ 0x005e8008
//   XREF to: 005e8008 (CONDITIONAL_JUMP)
// 005e7feb: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x58] (DATA)
// 005e7ff2: MOV dword ptr [EDX],EAX
// 005e7ff4: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x54] (READ)
// 005e7ffb: MOV dword ptr [EDX + 0x4],EAX
// 005e7ffe: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x50] (READ)
// 005e8005: MOV dword ptr [EDX + 0x8],EAX
// 005e8008: LEA EAX,[EBX + 0x8c4]
//   Label: LAB_005e8008
// 005e800e: FLD float ptr [EAX + 0x4]
// 005e8011: FMUL ST0
// 005e8013: FLD float ptr [EAX]
// 005e8015: FMUL ST0
// 005e8017: FADDP
// 005e8019: FLD float ptr [EAX + 0x8]
// 005e801c: FMUL ST0
// 005e801e: FADDP
// 005e8020: FSQRT
// 005e8022: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x24] (WRITE)
// 005e8029: LEA EAX,[EBX + 0x8c4]
//   Label: LAB_005e8029
// 005e802f: FLD float ptr [0x00656ed6]
//   XREF to: 00656ed6 (READ)
// 005e8035: FLD float ptr [EAX]
// 005e8037: FMUL ST1
// 005e8039: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x34] (WRITE)
// 005e8040: FLD float ptr [EAX + 0x4]
// 005e8043: FMUL ST1
// 005e8045: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x30] (WRITE)
// 005e804c: FMUL float ptr [EAX + 0x8]
// 005e804f: LEA EDX,[EBX + 0x1060]
// 005e8055: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x34] (DATA)
// 005e805c: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x2c] (WRITE)
// 005e8063: CMP EDX,EAX
// 005e8065: JZ 0x005e8084
//   XREF to: 005e8084 (CONDITIONAL_JUMP)
// 005e8067: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x34] (DATA)
// 005e806e: MOV dword ptr [EDX],EAX
// 005e8070: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x30] (READ)
// 005e8077: MOV dword ptr [EDX + 0x4],EAX
// 005e807a: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x2c] (READ)
// 005e8081: MOV dword ptr [EDX + 0x8],EAX
// 005e8084: LEA EAX,[EBX + 0x8c4]
//   Label: LAB_005e8084
// 005e808a: PUSH EAX
// 005e808b: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x4c] (DATA)
// 005e8092: PUSH EAX
// 005e8093: PUSH EBX
// 005e8094: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005e8099: LEA EDX,[EBX + 0x8d0]
// 005e809f: ADD ESP,0xc
// 005e80a2: CMP EDX,EAX
// 005e80a4: JZ 0x005e80b6
//   XREF to: 005e80b6 (CONDITIONAL_JUMP)
// 005e80a6: MOV ECX,dword ptr [EAX]
// 005e80a8: MOV dword ptr [EDX],ECX
// 005e80aa: MOV ECX,dword ptr [EAX + 0x4]
// 005e80ad: MOV dword ptr [EDX + 0x4],ECX
// 005e80b0: MOV ECX,dword ptr [EAX + 0x8]
// 005e80b3: MOV dword ptr [EDX + 0x8],ECX
// 005e80b6: MOV ECX,dword ptr [EBX + 0x938]
//   Label: LAB_005e80b6
// 005e80bc: XOR ESI,ESI
// 005e80be: TEST ECX,ECX
// 005e80c0: JLE 0x005e80f1
//   XREF to: 005e80f1 (CONDITIONAL_JUMP)
// 005e80c2: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x24] (READ)
// 005e80c9: MOV EAX,EBX
// 005e80cb: FLD float ptr [EAX + 0x948]
//   Label: LAB_005e80cb
// 005e80d1: FMUL ST1
// 005e80d3: FADD float ptr [EAX + 0xacc]
// 005e80d9: INC ESI
// 005e80da: FSTP float ptr [EAX + 0xacc]
// 005e80e0: MOV EDI,dword ptr [EBX + 0x938]
// 005e80e6: ADD EAX,0x1b4
// 005e80eb: CMP ESI,EDI
// 005e80ed: JL 0x005e80cb
//   XREF to: 005e80cb (CONDITIONAL_JUMP)
// 005e80ef: FSTP ST0
// 005e80f1: FLD float ptr [EBX + 0x24]
//   Label: LAB_005e80f1
// 005e80f4: FLD float ptr [EBX + 0x34]
// 005e80f7: MOV dword ptr [EBX + 0x30],0x0
// 005e80fe: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0xa0] (DATA)
// 005e8102: MOV EDX,dword ptr [EBX + 0x154]
// 005e8108: XOR EDI,EDI
// 005e810a: PUSH EAX
// 005e810b: FXCH
// 005e810d: FADD float ptr [0x00656eda]
//   XREF to: 00656eda (READ)
// 005e8113: FXCH
// 005e8115: FADD float ptr [0x00656ede]
//   XREF to: 00656ede (READ)
// 005e811b: FXCH
// 005e811d: FSTP float ptr [EBX + 0x24]
// 005e8120: PUSH EBX
// 005e8121: FSTP float ptr [EBX + 0x34]
// 005e8124: CALL dword ptr [EDX + 0x14]
// 005e8127: ADD ESP,0x8
// 005e812a: MOV dword ptr [ESP + 0xf0],EDI
// 005e8131: MOV ESI,dword ptr [0x006810c8]
//   Label: LAB_005e8131
//   XREF to: 006810c8 (READ)
// 005e8137: CMP EDI,dword ptr [ESI + 0x14f098]
//   XREF to: 03263310 (READ)
// 005e813d: JGE 0x005e82ea
//   XREF to: 005e82ea (CONDITIONAL_JUMP)
// 005e8143: MOV ECX,dword ptr [ESP + 0xf0]
// 005e814a: MOV EAX,[0x02f37f30]
//   XREF to: 02f37f30 (READ)
// 005e814f: ADD ESI,ECX
// 005e8151: PUSH EAX
// 005e8152: MOV ESI,dword ptr [ESI + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 005e8158: PUSH ESI
// 005e8159: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e815e: ADD ESP,0x8
// 005e8161: TEST EAX,EAX
// 005e8163: JZ 0x005e81a9
//   XREF to: 005e81a9 (CONDITIONAL_JUMP)
// 005e8165: CMP EBX,dword ptr [EAX + 0xbee0]
// 005e816b: JNZ 0x005e81a9
//   XREF to: 005e81a9 (CONDITIONAL_JUMP)
// 005e816d: MOV ECX,dword ptr [ESP + 0xf0]
//   Label: LAB_005e816d
// 005e8174: ADD ECX,0x4
// 005e8177: INC EDI
// 005e8178: MOV dword ptr [ESP + 0xf0],ECX
// 005e817f: JMP 0x005e8131
//   XREF to: 005e8131 (UNCONDITIONAL_JUMP)
// 005e8181: CMP EDX,0x3f87558
//   Label: LAB_005e8181
//   XREF to: 03f87558 (DATA)
// 005e8187: JZ 0x005e8029
//   XREF to: 005e8029 (CONDITIONAL_JUMP)
// 005e818d: MOV EAX,[0x03f87558]
//   XREF to: 03f87558 (READ)
// 005e8192: MOV dword ptr [EDX],EAX
// 005e8194: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 005e8199: MOV dword ptr [EDX + 0x4],EAX
// 005e819c: MOV EAX,[0x03f87560]
//   XREF to: 03f87560 (READ)
// 005e81a1: MOV dword ptr [EDX + 0x8],EAX
// 005e81a4: JMP 0x005e8029
//   XREF to: 005e8029 (UNCONDITIONAL_JUMP)
// 005e81a9: LEA EAX,[ESP + 0x40]
//   Label: LAB_005e81a9
// 005e81ad: PUSH EAX
// 005e81ae: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005e81b3: ADD ESP,0x4
// 005e81b6: LEA EDX,[ESP + 0x40]
// 005e81ba: PUSH EDX
// 005e81bb: MOV EAX,dword ptr [ESI + 0x154]
// 005e81c1: PUSH ESI
// 005e81c2: CALL dword ptr [EAX + 0x34]
// 005e81c5: ADD ESP,0x8
// 005e81c8: CMP EAX,0x2
// 005e81cb: JNZ 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e81cd: FLD float ptr [EBX + 0x24]
// 005e81d0: FADD float ptr [ESP + 0x78]
// 005e81d4: FCOMP float ptr [ESI + 0x24]
// 005e81d7: FNSTSW AX
// 005e81d9: SAHF
// 005e81da: JC 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e81dc: FLD float ptr [ESI + 0x24]
// 005e81df: FADD float ptr [ESP + 0x58]
// 005e81e3: FLD float ptr [EBX + 0x24]
// 005e81e6: FADD float ptr [ESP + 0x6c]
// 005e81ea: FCOMPP
// 005e81ec: FNSTSW AX
// 005e81ee: SAHF
// 005e81ef: JA 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e81f5: LEA EAX,[ESI + 0x20]
// 005e81f8: PUSH EAX
// 005e81f9: LEA EAX,[ESP + 0xa8]
// 005e8200: PUSH EAX
// 005e8201: PUSH EBX
// 005e8202: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005e8207: ADD ESP,0xc
// 005e820a: FLD float ptr [ESP + 0xa4]
// 005e8211: FADD float ptr [ESP + 0x5c]
// 005e8215: FCOMP float ptr [ESP + 0x68]
// 005e8219: FNSTSW AX
// 005e821b: SAHF
// 005e821c: JC 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e8222: FLD float ptr [ESP + 0xa4]
// 005e8229: FSUB float ptr [ESP + 0x5c]
// 005e822d: FCOMP float ptr [ESP + 0x74]
// 005e8231: FNSTSW AX
// 005e8233: SAHF
// 005e8234: JA 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e823a: FLD float ptr [ESP + 0xac]
// 005e8241: FADD float ptr [ESP + 0x5c]
// 005e8245: FCOMP float ptr [ESP + 0x70]
// 005e8249: FNSTSW AX
// 005e824b: SAHF
// 005e824c: JC 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e8252: FLD float ptr [ESP + 0xac]
// 005e8259: FSUB float ptr [ESP + 0x5c]
// 005e825d: FST float ptr [ESP]
// 005e8260: FCOMP float ptr [ESP + 0x7c]
// 005e8264: FNSTSW AX
// 005e8266: SAHF
// 005e8267: JBE 0x005e82b1
//   XREF to: 005e82b1 (CONDITIONAL_JUMP)
// 005e8269: FLD float ptr [ESP]
// 005e826c: FLD float ptr [ESP + 0x7c]
// 005e8270: FADD double ptr [0x00656ef6]
//   XREF to: 00656ef6 (READ)
// 005e8276: FCOMPP
// 005e8278: FNSTSW AX
// 005e827a: SAHF
// 005e827b: JBE 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e8281: MOV EDX,dword ptr [EBX + 0x1054]
// 005e8287: PUSH EDX
// 005e8288: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005e828d: ADD ESP,0x4
// 005e8290: TEST EAX,EAX
// 005e8292: JNZ 0x005e816d
//   XREF to: 005e816d (CONDITIONAL_JUMP)
// 005e8298: PUSH 0x656e26
//   XREF to: 00656e26 (DATA)
// 005e829d: PUSH EBX
// 005e829e: CALL core_vehicle.cpp_FUN_005e8b50
//   XREF to: 005e8b50 (UNCONDITIONAL_CALL)
// 005e82a3: ADD ESP,0x8
// 005e82a6: MOV dword ptr [EBX + 0x1054],EAX
// 005e82ac: JMP 0x005e816d
//   XREF to: 005e816d (UNCONDITIONAL_JUMP)
// 005e82b1: LEA EAX,[ESP + 0x4]
//   Label: LAB_005e82b1
// 005e82b5: PUSH EAX
// 005e82b6: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005e82bb: MOV ECX,0x4
// 005e82c0: ADD ESP,0x4
// 005e82c3: LEA EDX,[ESP + 0x4]
// 005e82c7: MOV EAX,0x4479c000
// 005e82cc: PUSH EDX
// 005e82cd: MOV dword ptr [ESP + 0x38],ECX
// 005e82d1: MOV dword ptr [ESP + 0xc],EAX
// 005e82d5: PUSH ESI
// 005e82d6: MOV EAX,dword ptr [ESI + 0x154]
// 005e82dc: CALL dword ptr [EAX + 0x11c]
// 005e82e2: ADD ESP,0x8
// 005e82e5: JMP 0x005e816d
//   XREF to: 005e816d (UNCONDITIONAL_JUMP)
// 005e82ea: MOV ECX,dword ptr [EBX + 0x106c]
//   Label: LAB_005e82ea
// 005e82f0: TEST ECX,ECX
// 005e82f2: JZ 0x005e8351
//   XREF to: 005e8351 (CONDITIONAL_JUMP)
// 005e82f4: MOV ECX,dword ptr [EBX + 0x1058]
//   Label: LAB_005e82f4
// 005e82fa: PUSH ECX
// 005e82fb: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005e8300: ADD ESP,0x4
// 005e8303: TEST EAX,EAX
// 005e8305: JNZ 0x005e831b
//   XREF to: 005e831b (CONDITIONAL_JUMP)
// 005e8307: PUSH 0x656eb1
//   XREF to: 00656eb1 (DATA)
// 005e830c: PUSH EBX
// 005e830d: CALL core_vehicle.cpp_FUN_005e8b50
//   XREF to: 005e8b50 (UNCONDITIONAL_CALL)
// 005e8312: ADD ESP,0x8
// 005e8315: MOV dword ptr [EBX + 0x1058],EAX
// 005e831b: MOV ESI,dword ptr [EBX + 0x1058]
//   Label: LAB_005e831b
// 005e8321: PUSH 0x3f800000
// 005e8326: PUSH ESI
// 005e8327: CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
//   XREF to: 005a9b40 (UNCONDITIONAL_CALL)
// 005e832c: FLD float ptr [EBX + 0x8d0]
// 005e8332: FABS
// 005e8334: ADD ESP,0x8
// 005e8337: FCOMP double ptr [0x00656eee]
//   XREF to: 00656eee (READ)
// 005e833d: FNSTSW AX
// 005e833f: SAHF
// 005e8340: JA 0x005e869b
//   XREF to: 005e869b (CONDITIONAL_JUMP)
// 005e8346: MOV ESP,EBP
//   Label: LAB_005e8346
// 005e8348: POP EBP
// 005e8349: POP EDI
// 005e834a: POP ESI
// 005e834b: POP EBX
// 005e834c: LEA EAX,[EAX]
// 005e8350: RET
// 005e8351: MOV EAX,[0x02db87d0]
//   Label: LAB_005e8351
//   XREF to: 02db87d0 (READ)
// 005e8356: LEA EDX,[EBX + 0x20]
// 005e8359: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e8360: FLD float ptr [EDX]
// 005e8362: FSUB float ptr [EAX + 0x20]
// 005e8365: FSTP float ptr [ESP + 0xc8]
// 005e836c: FLD float ptr [EDX + 0x4]
// 005e836f: FSUB float ptr [EAX + 0x24]
// 005e8372: FST float ptr [ESP + 0xcc]
// 005e8379: FMUL float ptr [ESP + 0xcc]
// 005e8380: FLD float ptr [ESP + 0xc8]
// 005e8387: FMUL ST0
// 005e8389: FLD float ptr [EDX + 0x8]
// 005e838c: FSUB float ptr [EAX + 0x28]
// 005e838f: FXCH
// 005e8391: FADDP ST2,ST0
// 005e8393: FST float ptr [ESP + 0xd0]
// 005e839a: FMUL float ptr [ESP + 0xd0]
// 005e83a1: FADDP
// 005e83a3: FSQRT
// 005e83a5: FCOMP double ptr [0x00656ee6]
//   XREF to: 00656ee6 (READ)
// 005e83ab: FNSTSW AX
// 005e83ad: SAHF
// 005e83ae: JBE 0x005e82f4
//   XREF to: 005e82f4 (CONDITIONAL_JUMP)
// 005e83b4: CMP dword ptr [ESI + 0x14d154],0x672
//   XREF to: 032613cc (READ)
// 005e83be: JGE 0x005e82f4
//   XREF to: 005e82f4 (CONDITIONAL_JUMP)
// 005e83c4: MOV dword ptr [ESP + 0xe8],ECX
// 005e83cb: MOV dword ptr [ESP + 0xec],ECX
// 005e83d2: XOR EDI,EDI
// 005e83d4: XOR ESI,ESI
// 005e83d6: MOV EAX,[0x006810c8]
//   Label: LAB_005e83d6
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e83db: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 005e83e1: JL 0x005e85a9
//   XREF to: 005e85a9 (CONDITIONAL_JUMP)
// 005e83e7: CMP dword ptr [ESP + 0xec],0x0
// 005e83ef: JNZ 0x005e8604
//   XREF to: 005e8604 (CONDITIONAL_JUMP)
// 005e83f5: CMP dword ptr [ESP + 0xec],0x0
//   Label: LAB_005e83f5
// 005e83fd: JNZ 0x005e8634
//   XREF to: 005e8634 (CONDITIONAL_JUMP)
// 005e8403: MOV ECX,dword ptr [EBX + 0x1070]
// 005e8409: TEST ECX,ECX
// 005e840b: JNZ 0x005e8617
//   XREF to: 005e8617 (CONDITIONAL_JUMP)
// 005e8411: PUSH 0x15d
//   Label: LAB_005e8411
// 005e8416: PUSH 0x656e38
//   XREF to: 00656e38 (DATA)
// 005e841b: PUSH 0xbf94
// 005e8420: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e8425: ADD ESP,0xc
// 005e8428: TEST EAX,EAX
// 005e842a: JZ 0x005e8435
//   XREF to: 005e8435 (CONDITIONAL_JUMP)
// 005e842c: PUSH EAX
// 005e842d: CALL core_mobster.cpp_CMobster_ctor_FUN_00525200
//   XREF to: 00525200 (UNCONDITIONAL_CALL)
// 005e8432: ADD ESP,0x4
// 005e8435: PUSH 0x15e
//   Label: LAB_005e8435
// 005e843a: PUSH 0x656e4c
//   XREF to: 00656e4c (DATA)
// 005e843f: PUSH 0x584
// 005e8444: MOV ESI,EAX
// 005e8446: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005e844b: ADD ESP,0xc
// 005e844e: TEST EAX,EAX
// 005e8450: JZ 0x005e845b
//   XREF to: 005e845b (CONDITIONAL_JUMP)
// 005e8452: PUSH EAX
// 005e8453: CALL core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
//   XREF to: 005dda90 (UNCONDITIONAL_CALL)
// 005e8458: ADD ESP,0x4
// 005e845b: MOV EDI,EAX
//   Label: LAB_005e845b
// 005e845d: TEST ESI,ESI
// 005e845f: JNZ 0x005e866f
//   XREF to: 005e866f (CONDITIONAL_JUMP)
// 005e8465: MOV EAX,0x656e60
//   Label: LAB_005e8465
//   XREF to: 00656e60 (PARAM)
// 005e846a: MOV EDX,0x161
// 005e846f: PUSH 0x656e74
//   XREF to: 00656e74 (DATA)
// 005e8474: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005e8479: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005e847f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e8484: ADD ESP,0x4
// 005e8487: PUSH 0x3f000000
//   Label: LAB_005e8487
// 005e848c: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005e8491: MOV EDX,EAX
// 005e8493: ADD ESP,0x4
// 005e8496: LEA EAX,[ESI + 0x158]
// 005e849c: TEST EDX,EDX
// 005e849e: JZ 0x005e867c
//   XREF to: 005e867c (CONDITIONAL_JUMP)
// 005e84a4: PUSH 0x656e97
//   XREF to: 00656e97 (DATA)
// 005e84a9: PUSH EAX
//   Label: LAB_005e84a9
// 005e84aa: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005e84af: ADD ESP,0x8
// 005e84b2: MOV ECX,dword ptr [ESP + 0xec]
// 005e84b9: MOV dword ptr [ESI + 0xbee0],EBX
// 005e84bf: TEST ECX,ECX
// 005e84c1: JNZ 0x005e8686
//   XREF to: 005e8686 (CONDITIONAL_JUMP)
// 005e84c7: MOV dword ptr [ESI + 0xbee4],ECX
// 005e84cd: MOV dword ptr [EBX + 0x1070],ESI
// 005e84d3: PUSH ESI
//   Label: LAB_005e84d3
// 005e84d4: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005e84d9: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 005e84da: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 005e84df: ADD ESP,0x8
// 005e84e2: PUSH EDI
// 005e84e3: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005e84e9: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 005e84ea: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 005e84ef: LEA EAX,[EBX + 0x20]
// 005e84f2: LEA EDX,[ESI + 0x20]
// 005e84f5: MOV ECX,dword ptr [EAX]
// 005e84f7: MOV dword ptr [EDX],ECX
// 005e84f9: MOV ECX,dword ptr [EAX + 0x4]
// 005e84fc: MOV dword ptr [EDX + 0x4],ECX
// 005e84ff: MOV ECX,dword ptr [EAX + 0x8]
// 005e8502: MOV dword ptr [EDX + 0x8],ECX
// 005e8505: MOV EAX,dword ptr [EAX + 0xc]
// 005e8508: MOV dword ptr [EDX + 0xc],EAX
// 005e850b: LEA EAX,[ESI + 0x30]
// 005e850e: LEA EDX,[EBX + 0x30]
// 005e8511: ADD ESP,0x8
// 005e8514: CMP EAX,EDX
// 005e8516: JZ 0x005e8528
//   XREF to: 005e8528 (CONDITIONAL_JUMP)
// 005e8518: MOV ECX,dword ptr [EDX]
// 005e851a: MOV dword ptr [EAX],ECX
// 005e851c: MOV ECX,dword ptr [EDX + 0x4]
// 005e851f: MOV dword ptr [EAX + 0x4],ECX
// 005e8522: MOV ECX,dword ptr [EDX + 0x8]
// 005e8525: MOV dword ptr [EAX + 0x8],ECX
// 005e8528: LEA EAX,[EBX + 0x20]
//   Label: LAB_005e8528
// 005e852b: LEA EDX,[EDI + 0x20]
// 005e852e: MOV ECX,dword ptr [EAX]
// 005e8530: MOV dword ptr [EDX],ECX
// 005e8532: MOV ECX,dword ptr [EAX + 0x4]
// 005e8535: MOV dword ptr [EDX + 0x4],ECX
// 005e8538: MOV ECX,dword ptr [EAX + 0x8]
// 005e853b: MOV dword ptr [EDX + 0x8],ECX
// 005e853e: MOV EAX,dword ptr [EAX + 0xc]
// 005e8541: MOV dword ptr [EDX + 0xc],EAX
// 005e8544: LEA EAX,[EDI + 0x30]
// 005e8547: LEA EDX,[EBX + 0x30]
// 005e854a: CMP EAX,EDX
// 005e854c: JZ 0x005e855e
//   XREF to: 005e855e (CONDITIONAL_JUMP)
// 005e854e: MOV ECX,dword ptr [EDX]
// 005e8550: MOV dword ptr [EAX],ECX
// 005e8552: MOV ECX,dword ptr [EDX + 0x4]
// 005e8555: MOV dword ptr [EAX + 0x4],ECX
// 005e8558: MOV ECX,dword ptr [EDX + 0x8]
// 005e855b: MOV dword ptr [EAX + 0x8],ECX
// 005e855e: PUSH ESI
//   Label: LAB_005e855e
// 005e855f: MOV EAX,dword ptr [ESI + 0x154]
// 005e8565: CALL dword ptr [EAX]
// 005e8567: ADD ESP,0x4
// 005e856a: MOV EAX,dword ptr [EDI + 0x154]
// 005e8570: PUSH EDI
// 005e8571: CALL dword ptr [EAX]
// 005e8573: ADD ESP,0x4
// 005e8576: PUSH 0x0
// 005e8578: PUSH EDI
// 005e8579: PUSH 0x1
// 005e857b: PUSH ESI
// 005e857c: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 005e8581: ADD ESP,0x10
// 005e8584: PUSH ESI
// 005e8585: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005e858b: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 005e858c: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 005e8591: ADD ESP,0x8
// 005e8594: PUSH EDI
// 005e8595: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005e859b: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 005e859c: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 005e85a1: ADD ESP,0x8
// 005e85a4: JMP 0x005e82f4
//   XREF to: 005e82f4 (UNCONDITIONAL_JUMP)
// 005e85a9: MOV EDX,dword ptr [0x02f37f30]
//   Label: LAB_005e85a9
//   XREF to: 02f37f30 (READ)
// 005e85af: PUSH EDX
// 005e85b0: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
// 005e85b7: PUSH ECX
// 005e85b8: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005e85bd: ADD ESP,0x8
// 005e85c0: TEST EAX,EAX
// 005e85c2: JZ 0x005e85fb
//   XREF to: 005e85fb (CONDITIONAL_JUMP)
// 005e85c4: MOV EDX,dword ptr [EAX + 0xbee0]
// 005e85ca: CMP EBX,EDX
// 005e85cc: JNZ 0x005e85fb
//   XREF to: 005e85fb (CONDITIONAL_JUMP)
// 005e85ce: CMP dword ptr [EAX + 0xbee4],0x0
// 005e85d5: JNZ 0x005e85ea
//   XREF to: 005e85ea (CONDITIONAL_JUMP)
// 005e85d7: MOV dword ptr [EDX + 0x1070],EAX
// 005e85dd: MOV dword ptr [ESP + 0xec],0x1
// 005e85e8: JMP 0x005e85fb
//   XREF to: 005e85fb (UNCONDITIONAL_JUMP)
// 005e85ea: MOV dword ptr [EDX + 0x1074],EAX
//   Label: LAB_005e85ea
// 005e85f0: MOV dword ptr [ESP + 0xe8],0x1
// 005e85fb: INC EDI
//   Label: LAB_005e85fb
// 005e85fc: ADD ESI,0x4
// 005e85ff: JMP 0x005e83d6
//   XREF to: 005e83d6 (UNCONDITIONAL_JUMP)
// 005e8604: CMP dword ptr [ESP + 0xe8],0x0
//   Label: LAB_005e8604
// 005e860c: JZ 0x005e83f5
//   XREF to: 005e83f5 (CONDITIONAL_JUMP)
// 005e8612: JMP 0x005e82f4
//   XREF to: 005e82f4 (UNCONDITIONAL_JUMP)
// 005e8617: PUSH ECX
//   Label: LAB_005e8617
// 005e8618: MOV EDX,dword ptr [ECX + 0x154]
// 005e861e: CALL dword ptr [EDX + 0x120]
// 005e8624: ADD ESP,0x4
// 005e8627: TEST EAX,EAX
// 005e8629: JZ 0x005e82f4
//   XREF to: 005e82f4 (CONDITIONAL_JUMP)
// 005e862f: JMP 0x005e8411
//   XREF to: 005e8411 (UNCONDITIONAL_JUMP)
// 005e8634: CMP dword ptr [ESP + 0xe8],0x0
//   Label: LAB_005e8634
// 005e863c: JNZ 0x005e8411
//   XREF to: 005e8411 (CONDITIONAL_JUMP)
// 005e8642: MOV EDX,dword ptr [EBX + 0x1074]
// 005e8648: TEST EDX,EDX
// 005e864a: JZ 0x005e8411
//   XREF to: 005e8411 (CONDITIONAL_JUMP)
// 005e8650: MOV EAX,EDX
// 005e8652: PUSH EAX
// 005e8653: MOV EDX,dword ptr [EDX + 0x154]
// 005e8659: CALL dword ptr [EDX + 0x120]
// 005e865f: ADD ESP,0x4
// 005e8662: TEST EAX,EAX
// 005e8664: JZ 0x005e82f4
//   XREF to: 005e82f4 (CONDITIONAL_JUMP)
// 005e866a: JMP 0x005e8411
//   XREF to: 005e8411 (UNCONDITIONAL_JUMP)
// 005e866f: TEST EAX,EAX
//   Label: LAB_005e866f
// 005e8671: JZ 0x005e8465
//   XREF to: 005e8465 (CONDITIONAL_JUMP)
// 005e8677: JMP 0x005e8487
//   XREF to: 005e8487 (UNCONDITIONAL_JUMP)
// 005e867c: PUSH 0x656ea4
//   Label: LAB_005e867c
//   XREF to: 00656ea4 (DATA)
// 005e8681: JMP 0x005e84a9
//   XREF to: 005e84a9 (UNCONDITIONAL_JUMP)
// 005e8686: MOV dword ptr [ESI + 0xbee4],0x1
//   Label: LAB_005e8686
// 005e8690: MOV dword ptr [EBX + 0x1074],ESI
// 005e8696: JMP 0x005e84d3
//   XREF to: 005e84d3 (UNCONDITIONAL_JUMP)
// 005e869b: MOV EDI,dword ptr [EBX + 0x105c]
//   Label: LAB_005e869b
// 005e86a1: PUSH EDI
// 005e86a2: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005e86a7: ADD ESP,0x4
// 005e86aa: TEST EAX,EAX
// 005e86ac: JNZ 0x005e8346
//   XREF to: 005e8346 (CONDITIONAL_JUMP)
// 005e86b2: PUSH 0x656ec8
//   XREF to: 00656ec8 (DATA)
// 005e86b7: PUSH EBX
// 005e86b8: CALL core_vehicle.cpp_FUN_005e8b50
//   XREF to: 005e8b50 (UNCONDITIONAL_CALL)
// 005e86bd: ADD ESP,0x8
// 005e86c0: MOV dword ptr [EBX + 0x105c],EAX
// 005e86c6: MOV ESP,EBP
// 005e86c8: POP EBP
// 005e86c9: POP EDI
// 005e86ca: POP ESI
// 005e86cb: POP EBX
// 005e86cc: RET
