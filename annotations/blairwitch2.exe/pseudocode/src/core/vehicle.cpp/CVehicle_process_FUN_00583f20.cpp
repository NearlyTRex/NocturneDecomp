// Name: core_vehicle.cpp_CVehicle_process_FUN_00583f20
// Address: 00583f20
// Address Range: [[00583f20, 0058485b]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_00583f20(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_00583f20(CVehicle *this_ptr,float delta_time)

{
  CLocation *out_pos;
  UOrientationVector *pUVar1;
  UOrientationVector *pUVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CDemonActor_vtable *pCVar7;
  CHero *pCVar8;
  CCharacter *pCVar9;
  CDemonActor *pCVar10;
  ECollisionType EVar11;
  uint uVar12;
  CMobster *this_ptr_00;
  CMobster *this_ptr_01;
  CTommyGun *this_ptr_02;
  CTommyGun *actor;
  EDeathState EVar13;
  int iVar14;
  CVehicle *pCVar15;
  float *pfVar16;
  CCharacter *unaff_EDI;
  CDeformableModelInstance **ppCVar17;
  int iVar18;
  byte bVar19;
  float afStackY_10c8 [976];
  CBoundingBox3D *in_stack_fffffe88;
  char *model_name;
  float fStack_168;
  byte auStack_164 [84];
  CDeformableModelInstance *pCStack_110;
  float fStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  CVector3f CStack_a4;
  float fStack_98;
  float fStack_94;
  float afStack_90 [4];
  byte auStack_80 [8];
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float afStack_4c [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CDemonActor *pCStack_14;
  
  bVar19 = 0;
  iStack_18 = (this_ptr->course).len;
  fStack_38 = (this_ptr->cur_time / this_ptr->total_time) * (float)iStack_18;
  core_course_cpp_CCourse_evaluate_FUN_00438c40
            (&this_ptr->course,fStack_38,(CVector3f *)auStack_80,&CStack_a4);
  fVar4 = this_ptr->cur_time + delta_time;
  this_ptr->cur_time = fVar4;
  if (this_ptr->total_time < fVar4) {
    this_ptr->cur_time = this_ptr->cur_time - this_ptr->total_time;
  }
  iStack_18 = (this_ptr->course).len;
  out_pos = &(this_ptr->base).location;
  fStack_38 = (this_ptr->cur_time / this_ptr->total_time) * (float)iStack_18;
  core_course_cpp_CCourse_evaluate_FUN_00438c40
            (&this_ptr->course,fStack_38,&out_pos->position,&(this_ptr->base).orient.vec);
  fStack_30 = 0.0;
  fStack_bc = (out_pos->position).x - (float)auStack_80._0_4_;
  fStack_b8 = (this_ptr->base).location.position.y - (float)auStack_80._4_4_;
  fStack_b4 = (this_ptr->base).location.position.z - fStack_78;
  pCVar3 = &this_ptr->world_velocity;
  fStack_98 = fStack_bc;
  afStack_90[(uint)bVar19 * -2 + -1] = afStack_dc[(uint)bVar19 * -2 + 9];
  afStack_90[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
       afStack_dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10];
  if (delta_time <= 0.0) {
    if (pCVar3 != &g_ZeroVector) {
      pCVar3->x = g_ZeroVector.x;
      (this_ptr->world_velocity).y = g_ZeroVector.y;
      (this_ptr->world_velocity).z = g_ZeroVector.z;
    }
  }
  else {
    fVar4 = 1.0 / delta_time;
    afStack_dc[2] = fStack_98 * fVar4;
    afStack_dc[3] = fStack_94 * fVar4;
    fStack_cc = afStack_90[0] * fVar4;
    fStack_50 = fStack_98 * fVar4;
    afStack_4c[(uint)bVar19 * -2] = afStack_dc[(uint)bVar19 * -2 + 3];
    afStack_4c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
    if (pCVar3 != (CVector3f *)&fStack_50) {
      pCVar3->x = fStack_50;
      (this_ptr->world_velocity).y = afStack_4c[0];
      (this_ptr->world_velocity).z = afStack_4c[1];
    }
    fVar4 = (this_ptr->world_velocity).y;
    fVar5 = (this_ptr->world_velocity).x;
    fVar6 = (this_ptr->world_velocity).z;
    fStack_30 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  }
  fStack_c8 = (this_ptr->world_velocity).x * 2.0f;
  fStack_c4 = (this_ptr->world_velocity).y * 2.0f;
  fStack_c0 = (this_ptr->world_velocity).z * 2.0f;
  fStack_68 = fStack_c8;
  afStack_60[(uint)bVar19 * -2 + -1] = afStack_dc[(uint)bVar19 * -2 + 6];
  afStack_60[(uint)bVar19 * -2 + (uint)bVar19 * -2] =
       afStack_dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
  if (&this_ptr->sound_velocity != (CVector3f *)&fStack_68) {
    (this_ptr->sound_velocity).x = fStack_68;
    (this_ptr->sound_velocity).y = fStack_64;
    (this_ptr->sound_velocity).z = afStack_60[0];
  }
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
            (&this_ptr->base,&this_ptr->world_velocity,&CStack_74);
  fStack_e0 = CStack_74.x;
  afStack_dc[(uint)bVar19 * -2] = *(float *)((int)&CStack_74 + (uint)bVar19 * -8 + 4);
  afStack_dc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
       *(float *)((int)&CStack_74 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
  if (&this_ptr->local_velocity != (CVector3f *)&fStack_e0) {
    (this_ptr->local_velocity).x = fStack_e0;
    (this_ptr->local_velocity).y = afStack_dc[0];
    (this_ptr->local_velocity).z = afStack_dc[1];
  }
  iVar14 = 0;
  pCVar15 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar14 = iVar14 + 1;
      pCVar15->tires[0].spin_angle.x =
           pCVar15->tires[0].radius * fStack_30 + pCVar15->tires[0].spin_angle.x;
      pCVar15 = (CVehicle *)&(pCVar15->base).particle_systems[1].next_particle;
    } while (iVar14 < this_ptr->tire_count);
  }
  fVar4 = (this_ptr->base).location.position.y;
  fVar5 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.x = 0.0;
  pCVar7 = (this_ptr->base).vtable._ub;
  fVar5 = fVar5 + 1.570796f;
  (this_ptr->base).location.position.y = fVar4 + 3.7f;
  (this_ptr->base).orient.vec.y = fVar5;
  (*pCVar7->getBoundingBox)(&this_ptr->base,in_stack_fffffe88);
  iStack_18 = 0;
  iStack_1c = 0;
  pfVar16 = &fStack_f0;
  ppCVar17 = &pCStack_110;
  for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
    *ppCVar17 = (CDeformableModelInstance *)*pfVar16;
    pfVar16 = pfVar16 + (uint)bVar19 * -2 + 1;
    ppCVar17 = ppCVar17 + (uint)bVar19 * -2 + 1;
  }
  for (; iStack_18 < g_CDemonSetPtr->character_count; iStack_18 = iStack_18 + 1) {
    pCStack_14 = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iStack_1c);
    pCVar10 = (CMobster *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCStack_14,g_CMobsterClassInfo.name_hash);
    if ((pCVar10 == (CDemonActor *)0x0) ||
       (this_ptr != (CVehicle *)pCVar10[0x62].particle_systems[3].owner)) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)(auStack_164 + 0x34));
      EVar11 = (*((pCStack_14->vtable)._ub)->getCollisionType)
                         (pCStack_14,(SCollisionInfo *)(auStack_164 + 0x34));
      if ((EVar11 == COLLISION_TYPE_CYLINDER) &&
         (((unaff_EDI->base).location.position.y <= (this_ptr->base).location.position.y + fStack_f0
          && ((this_ptr->base).location.position.y + fStack_fc <=
              (unaff_EDI->base).location.position.y + (float)pCStack_110)))) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  (&this_ptr->base,&(unaff_EDI->base).location.position,
                   (CVector3f *)(auStack_80 + 4));
        afStack_4c[0] = (float)auStack_80._4_4_;
        afStack_4c[(uint)bVar19 * -2 + 1] = (&fStack_78)[(uint)bVar19 * -2];
        afStack_4c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2] =
             *(float *)((int)&CStack_74 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
        if ((fStack_100 <= afStack_4c[0] + fStack_10c) &&
           ((afStack_4c[0] - fStack_10c <= fStack_f4 && (fStack_f8 <= afStack_4c[2] + fStack_10c))))
        {
          fStack_168 = afStack_4c[2] - fStack_10c;
          if (fStack_168 <= fStack_ec) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_164);
            auStack_164._48_4_ = DAMAGE_TYPE_FALL_APART;
            auStack_164._4_4_ = 999.0;
            (*(((unaff_EDI->base).vtable._uc)->_uc).processDamage)
                      (unaff_EDI,(SDamageInfo *)auStack_164);
          }
          else if ((fStack_168 < fStack_ec + (float)30) &&
                  (iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]),
                  iVar14 == 0)) {
            uVar12 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90
                               (this_ptr,"model-t-horn?.wav");
            this_ptr->sfx_handles[0] = uVar12;
          }
        }
      }
    }
    iStack_1c = iStack_1c + 4;
  }
  if (this_ptr->is_visible != 0) goto LAB_00584476;
  pCVar8 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  fStack_a8 = (this_ptr->base).location.position.x - (pCVar8->base).base.location.position.x;
  CStack_a4.x = (this_ptr->base).location.position.y - (pCVar8->base).base.location.position.y;
  CStack_a4.y = (this_ptr->base).location.position.z - (pCVar8->base).base.location.position.z;
  fStack_3c = fStack_a8;
  afStack_4c[(uint)bVar19 * -2 + 5] = *(float *)((int)&CStack_a4 + ((uint)bVar19 * -2 + -1) * 4 + 4)
  ;
  afStack_4c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 6] =
       *(float *)((int)&CStack_a4 + ((uint)bVar19 * -2 + (uint)bVar19 * -2) * 4 + 4);
  if ((SQRT(fStack_34 * fStack_34 + fStack_3c * fStack_3c + fStack_38 * fStack_38) <=
       (float)200) || (0x671 < g_CDemonSetPtr->actor_count)) goto LAB_00584476;
  iVar14 = 0;
  iStack_24 = 0;
  iStack_20 = 0;
  for (iVar18 = 0; iVar18 < g_CDemonSetPtr->enemy_count; iVar18 = iVar18 + 1) {
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar14),
                         g_CMobsterClassInfo.name_hash);
    if ((pCVar10 != (CDemonActor *)0x0) &&
       (pCVar15 = (CVehicle *)pCVar10[0x62].particle_systems[3].owner, this_ptr == pCVar15)) {
      if (pCVar10[0x62].particle_systems[3].max_particles == 0) {
        pCVar15->last_mobster_left = pCVar10;
        iStack_20 = 1;
      }
      else {
        pCVar15->last_mobster_right = pCVar10;
        iStack_24 = 1;
      }
    }
    iVar14 = iVar14 + 4;
  }
  if ((iStack_20 != 0) && (iStack_24 != 0)) goto LAB_00584476;
  if (iStack_20 == 0) {
    pCVar9 = (CCharacter *)this_ptr->last_mobster_left;
    if (pCVar9 != (CCharacter *)0x0) {
      EVar13 = (*(((pCVar9->base).vtable._uc)->_uc).getDeathState)(pCVar9);
joined_r0x005847f3:
      if (EVar13 == DEATH_STATE_ALIVE) goto LAB_00584476;
    }
  }
  else if ((iStack_24 == 0) &&
          (pCVar9 = (CCharacter *)this_ptr->last_mobster_right, pCVar9 != (CCharacter *)0x0)) {
    EVar13 = (*(((pCVar9->base).vtable._uc)->_uc).getDeathState)(pCVar9);
    goto joined_r0x005847f3;
  }
  this_ptr_00 = operator_new(0x10bd0);
  this_ptr_01 = (CMobster *)0x0;
  if (this_ptr_00 != (CMobster *)0x0) {
    this_ptr_01 = core_mobster_cpp_CMobster_ctor_FUN_004fd810(this_ptr_00);
  }
  this_ptr_02 = operator_new(0x6e0);
  actor = (CTommyGun *)0x0;
  if (this_ptr_02 != (CTommyGun *)0x0) {
    actor = core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(this_ptr_02);
  }
  if ((this_ptr_01 == (CMobster *)0x0) || (actor == (CTommyGun *)0x0)) {
    g_CurrentFilename = "..\\core\\vehicle.cpp";
    g_CurrentLineNumber = 353;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CMobster::process - Out of memory!");
  }
  iVar14 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
  if (iVar14 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr_01->base).base.model,model_name);
  this_ptr_01->vehicle = &this_ptr->base;
  if (iStack_20 == 0) {
    this_ptr_01->side_of_car = 0;
    this_ptr->last_mobster_left = (CDemonActor *)this_ptr_01;
  }
  else {
    this_ptr_01->side_of_car = 1;
    this_ptr->last_mobster_right = (CDemonActor *)this_ptr_01;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
            (g_CDemonMission_PTR_00618170,(CDemonActor *)this_ptr_01);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
            (g_CDemonMission_PTR_00618170,(CDemonActor *)actor);
  (this_ptr_01->base).base.base.location.position.x = (this_ptr->base).location.position.x;
  (this_ptr_01->base).base.base.location.position.y = (this_ptr->base).location.position.y;
  (this_ptr_01->base).base.base.location.position.z = (this_ptr->base).location.position.z;
  (this_ptr_01->base).base.base.location.area_id = (this_ptr->base).location.area_id;
  pUVar1 = &(this_ptr_01->base).base.base.orient;
  pUVar2 = &(this_ptr->base).orient;
  if (pUVar1 != pUVar2) {
    (pUVar1->vec).x = (pUVar2->vec).x;
    (this_ptr_01->base).base.base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (this_ptr_01->base).base.base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (actor->base).base.location.position.x = (this_ptr->base).location.position.x;
  (actor->base).base.location.position.y = (this_ptr->base).location.position.y;
  (actor->base).base.location.position.z = (this_ptr->base).location.position.z;
  (actor->base).base.location.area_id = (this_ptr->base).location.area_id;
  pUVar1 = &(actor->base).base.orient;
  pUVar2 = &(this_ptr->base).orient;
  if (pUVar1 != pUVar2) {
    (pUVar1->vec).x = (pUVar2->vec).x;
    (actor->base).base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (actor->base).base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (*((this_ptr_01->base).base.base.vtable._ub)->setup)((CDemonActor *)this_ptr_01);
  (*((actor->base).base.vtable._ub)->setup)((CDemonActor *)actor);
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
            ((CCharacter *)this_ptr_01,1,(CDemonActor *)actor,0.0,(CMatrix3x4f *)0x0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
            (g_CDemonMission_PTR_00618170,(CDemonActor *)this_ptr_01);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
            (g_CDemonMission_PTR_00618170,(CDemonActor *)actor);
LAB_00584476:
  iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
  if (iVar14 == 0) {
    uVar12 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90
                       (this_ptr,"ext-modelt-fast_??.wav");
    this_ptr->sfx_handles[1] = uVar12;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(this_ptr->sfx_handles[1],1.0);
  if (((float)0.20000000000000001 < ABS((this_ptr->local_velocity).x)) &&
     (iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]), iVar14 == 0))
  {
    uVar12 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90(this_ptr,"skid_??.wav");
    this_ptr->sfx_handles[2] = uVar12;
    return;
  }
  return;
}
