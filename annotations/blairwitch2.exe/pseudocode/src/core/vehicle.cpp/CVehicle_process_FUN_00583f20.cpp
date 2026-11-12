// Name: core_vehicle.cpp_CVehicle_process_FUN_00583f20
// Address: 00583f20
// Address Range: [[00583f20, 0058485b]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_00583f20(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  CCharacter *pCVar8;
  CDemonActor *pCVar9;
  ECollisionType EVar10;
  uint uVar11;
  CMobster *this_ptr_00;
  CMobster *actor;
  CTommyGun *this_ptr_01;
  CTommyGun *actor_00;
  EDeathState EVar12;
  int iVar13;
  CVehicle *pCVar14;
  float *pfVar15;
  CCharacter *unaff_EDI;
  CDeformableModelInstance **ppCVar16;
  int iVar17;
  byte bVar18;
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
  CVector3f CStack_80;
  float afStack_74 [4];
  float fStack_64;
  float fStack_60;
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
  
  bVar18 = 0;
  iStack_18 = (this_ptr->course).len;
  fStack_38 = (this_ptr->cur_time / this_ptr->total_time) * (float)iStack_18;
  core_course_cpp_CCourse_evaluate_FUN_00438c40(&this_ptr->course,fStack_38,&CStack_80,&CStack_a4);
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
  fStack_bc = (out_pos->position).x - CStack_80.x;
  fStack_b8 = (this_ptr->base).location.position.y - CStack_80.y;
  fStack_b4 = (this_ptr->base).location.position.z - CStack_80.z;
  pCVar3 = &this_ptr->world_velocity;
  fStack_98 = fStack_bc;
  afStack_90[(uint)bVar18 * -2 + -1] = afStack_dc[(uint)bVar18 * -2 + 9];
  afStack_90[(uint)bVar18 * -2 + (uint)bVar18 * -2] =
       afStack_dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
  if (delta_time <= 0.0) {
    if (pCVar3 != (CVector3f *)&DAT_0265370c) {
      pCVar3->x = _DAT_0265370c;
      (this_ptr->world_velocity).y = _DAT_02653710;
      (this_ptr->world_velocity).z = _DAT_02653714;
    }
  }
  else {
    fVar4 = 1.0 / delta_time;
    afStack_dc[2] = fStack_98 * fVar4;
    afStack_dc[3] = fStack_94 * fVar4;
    fStack_cc = afStack_90[0] * fVar4;
    fStack_50 = fStack_98 * fVar4;
    afStack_4c[(uint)bVar18 * -2] = afStack_dc[(uint)bVar18 * -2 + 3];
    afStack_4c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
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
  fStack_c8 = (this_ptr->world_velocity).x * _DAT_005edd0f;
  fStack_c4 = (this_ptr->world_velocity).y * _DAT_005edd0f;
  fStack_c0 = (this_ptr->world_velocity).z * _DAT_005edd0f;
  afStack_74[3] = fStack_c8;
  afStack_74[(uint)bVar18 * -2 + 4] = afStack_dc[(uint)bVar18 * -2 + 6];
  afStack_74[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
       afStack_dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
  if (&this_ptr->sound_velocity != (CVector3f *)(afStack_74 + 3)) {
    (this_ptr->sound_velocity).x = afStack_74[3];
    (this_ptr->sound_velocity).y = fStack_64;
    (this_ptr->sound_velocity).z = fStack_60;
  }
  core_actor_cpp_FUN_00408d30(this_ptr,&this_ptr->world_velocity);
  fStack_e0 = afStack_74[0];
  afStack_dc[(uint)bVar18 * -2] = afStack_74[(uint)bVar18 * -2 + 1];
  afStack_dc[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
       afStack_74[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
  if (&this_ptr->local_velocity != (CVector3f *)&fStack_e0) {
    (this_ptr->local_velocity).x = fStack_e0;
    (this_ptr->local_velocity).y = afStack_dc[0];
    (this_ptr->local_velocity).z = afStack_dc[1];
  }
  iVar13 = 0;
  pCVar14 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar13 = iVar13 + 1;
      pCVar14->tires[0].spin_angle.x =
           pCVar14->tires[0].radius * fStack_30 + pCVar14->tires[0].spin_angle.x;
      pCVar14 = (CVehicle *)&(pCVar14->base).particle_systems[1].next_particle;
    } while (iVar13 < this_ptr->tire_count);
  }
  fVar4 = (this_ptr->base).location.position.y;
  fVar5 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.x = 0.0;
  pCVar7 = (this_ptr->base).vtable._ub;
  fVar5 = fVar5 + _DAT_005edd17;
  (this_ptr->base).location.position.y = fVar4 + _DAT_005edd13;
  (this_ptr->base).orient.vec.y = fVar5;
  (*pCVar7->getBoundingBox)(&this_ptr->base,in_stack_fffffe88);
  iStack_18 = 0;
  iStack_1c = 0;
  pfVar15 = &fStack_f0;
  ppCVar16 = &pCStack_110;
  for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
    *ppCVar16 = (CDeformableModelInstance *)*pfVar15;
    pfVar15 = pfVar15 + (uint)bVar18 * -2 + 1;
    ppCVar16 = ppCVar16 + (uint)bVar18 * -2 + 1;
  }
  for (; iStack_18 < g_CDemonSetPtr->character_count; iStack_18 = iStack_18 + 1) {
    pCStack_14 = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iStack_1c);
    pCVar9 = (CMobster *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCStack_14,g_CMobsterClassInfo.name_hash);
    if ((pCVar9 == (CDemonActor *)0x0) ||
       (this_ptr != (CVehicle *)pCVar9[0x62].particle_systems[3].owner)) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)(auStack_164 + 0x34));
      EVar10 = (*((pCStack_14->vtable)._ub)->getCollisionType)
                         (pCStack_14,(SCollisionInfo *)(auStack_164 + 0x34));
      if ((EVar10 == COLLISION_TYPE_CYLINDER) &&
         (((unaff_EDI->base).location.position.y <= (this_ptr->base).location.position.y + fStack_f0
          && ((this_ptr->base).location.position.y + fStack_fc <=
              (unaff_EDI->base).location.position.y + (float)pCStack_110)))) {
        core_actor_cpp_FUN_00408de0(this_ptr,&(unaff_EDI->base).location);
        afStack_4c[0] = CStack_80.y;
        afStack_4c[(uint)bVar18 * -2 + 1] = afStack_74[(uint)bVar18 * -2 + -1];
        afStack_4c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
             afStack_74[(uint)bVar18 * -2 + (uint)bVar18 * -2];
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
          else if ((fStack_168 < fStack_ec + (float)_DAT_005edd2f) &&
                  (iVar13 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar13 == 0))
          {
            uVar11 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90
                               (this_ptr,"?model-t-horn?.wav" + 1);
            this_ptr->sfx_handles[0] = uVar11;
          }
        }
      }
    }
    iStack_1c = iStack_1c + 4;
  }
  if (this_ptr->is_visible != 0) goto LAB_00584476;
  iVar13 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fStack_a8 = (this_ptr->base).location.position.x - *(float *)(iVar13 + 0x20);
  CStack_a4.x = (this_ptr->base).location.position.y - *(float *)(iVar13 + 0x24);
  CStack_a4.y = (this_ptr->base).location.position.z - *(float *)(iVar13 + 0x28);
  fStack_3c = fStack_a8;
  afStack_4c[(uint)bVar18 * -2 + 5] = *(float *)((int)&CStack_a4 + ((uint)bVar18 * -2 + -1) * 4 + 4)
  ;
  afStack_4c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 6] =
       *(float *)((int)&CStack_a4 + ((uint)bVar18 * -2 + (uint)bVar18 * -2) * 4 + 4);
  if ((SQRT(fStack_34 * fStack_34 + fStack_3c * fStack_3c + fStack_38 * fStack_38) <=
       (float)_DAT_005edd1f) || (0x671 < g_CDemonSetPtr->actor_count)) goto LAB_00584476;
  iVar13 = 0;
  iStack_24 = 0;
  iStack_20 = 0;
  for (iVar17 = 0; iVar17 < g_CDemonSetPtr->enemy_count; iVar17 = iVar17 + 1) {
    pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar13),
                        g_CMobsterClassInfo.name_hash);
    if ((pCVar9 != (CDemonActor *)0x0) &&
       (pCVar14 = (CVehicle *)pCVar9[0x62].particle_systems[3].owner, this_ptr == pCVar14)) {
      if (pCVar9[0x62].particle_systems[3].max_particles == 0) {
        pCVar14->last_mobster_left = pCVar9;
        iStack_20 = 1;
      }
      else {
        pCVar14->last_mobster_right = pCVar9;
        iStack_24 = 1;
      }
    }
    iVar13 = iVar13 + 4;
  }
  if ((iStack_20 != 0) && (iStack_24 != 0)) goto LAB_00584476;
  if (iStack_20 == 0) {
    pCVar8 = (CCharacter *)this_ptr->last_mobster_left;
    if (pCVar8 != (CCharacter *)0x0) {
      EVar12 = (*(((pCVar8->base).vtable._uc)->_uc).getDeathState)(pCVar8);
joined_r0x005847f3:
      if (EVar12 == DEATH_STATE_ALIVE) goto LAB_00584476;
    }
  }
  else if ((iStack_24 == 0) &&
          (pCVar8 = (CCharacter *)this_ptr->last_mobster_right, pCVar8 != (CCharacter *)0x0)) {
    EVar12 = (*(((pCVar8->base).vtable._uc)->_uc).getDeathState)(pCVar8);
    goto joined_r0x005847f3;
  }
  this_ptr_00 = (CMobster *)operator_new(0x10bd0);
  actor = (CMobster *)0x0;
  if (this_ptr_00 != (CMobster *)0x0) {
    actor = core_mobster_cpp_CMobster_ctor_FUN_004fd810(this_ptr_00);
  }
  this_ptr_01 = (CTommyGun *)operator_new(0x6e0);
  actor_00 = (CTommyGun *)0x0;
  if (this_ptr_01 != (CTommyGun *)0x0) {
    actor_00 = core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(this_ptr_01);
  }
  if ((actor == (CMobster *)0x0) || (actor_00 == (CTommyGun *)0x0)) {
    _DAT_01d046a0 = "..\\core\\vehicle.cpp";
    _DAT_01d046a4 = 0x161;
    core_main_c_FUN_004e4500("CMobster::process - Out of memory!");
  }
  iVar13 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
  if (iVar13 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(&(actor->base).base.model,model_name)
  ;
  actor->vehicle = &this_ptr->base;
  if (iStack_20 == 0) {
    actor->side_of_car = 0;
    this_ptr->last_mobster_left = (CDemonActor *)actor;
  }
  else {
    actor->side_of_car = 1;
    this_ptr->last_mobster_right = (CDemonActor *)actor;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
            (0x01D182F0,(CDemonActor *)actor_00);
  (actor->base).base.base.location.position.x = (this_ptr->base).location.position.x;
  (actor->base).base.base.location.position.y = (this_ptr->base).location.position.y;
  (actor->base).base.base.location.position.z = (this_ptr->base).location.position.z;
  (actor->base).base.base.location.area_id = (this_ptr->base).location.area_id;
  pUVar1 = &(actor->base).base.base.orient;
  pUVar2 = &(this_ptr->base).orient;
  if (pUVar1 != pUVar2) {
    (pUVar1->vec).x = (pUVar2->vec).x;
    (actor->base).base.base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (actor->base).base.base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (actor_00->base).base.location.position.x = (this_ptr->base).location.position.x;
  (actor_00->base).base.location.position.y = (this_ptr->base).location.position.y;
  (actor_00->base).base.location.position.z = (this_ptr->base).location.position.z;
  (actor_00->base).base.location.area_id = (this_ptr->base).location.area_id;
  pUVar1 = &(actor_00->base).base.orient;
  pUVar2 = &(this_ptr->base).orient;
  if (pUVar1 != pUVar2) {
    (pUVar1->vec).x = (pUVar2->vec).x;
    (actor_00->base).base.orient.vec.y = (this_ptr->base).orient.vec.y;
    (actor_00->base).base.orient.vec.z = (this_ptr->base).orient.vec.z;
  }
  (*((actor->base).base.base.vtable._ub)->setup)((CDemonActor *)actor);
  (*((actor_00->base).base.vtable._ub)->setup)((CDemonActor *)actor_00);
  core_charactr_cpp_FUN_00428b10(actor,1,actor_00,0,0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,(CDemonActor *)actor_00);
LAB_00584476:
  iVar13 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
  if (iVar13 == 0) {
    uVar11 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90
                       (this_ptr,"ext-modelt-fast_??.wav");
    this_ptr->sfx_handles[1] = uVar11;
  }
  sound_sndmain_cpp_FUN_00550f50(this_ptr->sfx_handles[1],1.0);
  if (((float)_DAT_005edd27 < ABS((this_ptr->local_velocity).x)) &&
     (iVar13 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar13 == 0)) {
    uVar11 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90(this_ptr,"skid_??.wav");
    this_ptr->sfx_handles[2] = uVar11;
    return;
  }
  return;
}
