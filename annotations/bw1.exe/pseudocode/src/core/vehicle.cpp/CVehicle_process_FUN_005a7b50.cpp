// Name: core_vehicle.cpp_CVehicle_process_FUN_005a7b50
// Address: 005a7b50
// Address Range: [[005a7b50, 005a8489]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005a7b50(CVehicle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005a7b50(CVehicle *this_ptr,float delta_time)

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
  uint uVar9;
  CMobster *this_ptr_00;
  CMobster *actor;
  CTommyGun *this_ptr_01;
  CTommyGun *actor_00;
  CDemonActor *pCVar10;
  EDeathState EVar11;
  int iVar12;
  CVehicle *pCVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  byte bVar17;
  float afStackY_10c8 [976];
  CBoundingBox3D *in_stack_fffffe88;
  char *model_name;
  uint uStack_168;
  uint uStack_13c;
  byte auStack_130 [28];
  float fStack_114;
  uint auStack_110 [2];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint auStack_f0 [4];
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
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_54;
  float afStack_50 [5];
  float fStack_3c;
  float afStack_38 [5];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar17 = 0;
  iStack_18 = (this_ptr->course).len;
  afStack_38[0] = (this_ptr->cur_time / this_ptr->total_time) * (float)iStack_18;
  core_course_cpp_CCourse_evaluate_FUN_00447f00
            (&this_ptr->course,afStack_38[0],&CStack_80,&CStack_a4);
  fVar4 = this_ptr->cur_time + delta_time;
  this_ptr->cur_time = fVar4;
  if (this_ptr->total_time < fVar4) {
    this_ptr->cur_time = this_ptr->cur_time - this_ptr->total_time;
  }
  iStack_18 = (this_ptr->course).len;
  out_pos = &(this_ptr->base).location;
  afStack_38[0] = (this_ptr->cur_time / this_ptr->total_time) * (float)iStack_18;
  core_course_cpp_CCourse_evaluate_FUN_00447f00
            (&this_ptr->course,afStack_38[0],&out_pos->position,&(this_ptr->base).orient.vec);
  afStack_38[2] = 0.0;
  fStack_bc = (out_pos->position).x - CStack_80.x;
  fStack_b8 = (this_ptr->base).location.position.y - CStack_80.y;
  fStack_b4 = (this_ptr->base).location.position.z - CStack_80.z;
  pCVar3 = &this_ptr->world_velocity;
  fStack_98 = fStack_bc;
  afStack_90[(uint)bVar17 * -2 + -1] = afStack_dc[(uint)bVar17 * -2 + 9];
  afStack_90[(uint)bVar17 * -2 + (uint)bVar17 * -2] =
       afStack_dc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
  if (delta_time <= 0.0) {
    if (pCVar3 != (CVector3f *)&DAT_02c8af28) {
      pCVar3->x = _DAT_02c8af28;
      (this_ptr->world_velocity).y = _DAT_02c8af2c;
      (this_ptr->world_velocity).z = _DAT_02c8af30;
    }
  }
  else {
    fVar4 = 1.0 / delta_time;
    afStack_dc[2] = fStack_98 * fVar4;
    afStack_dc[3] = fStack_94 * fVar4;
    fStack_cc = afStack_90[0] * fVar4;
    afStack_50[0] = fStack_98 * fVar4;
    afStack_50[(uint)bVar17 * -2 + 1] = afStack_dc[(uint)bVar17 * -2 + 3];
    afStack_50[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2] =
         afStack_dc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    if (pCVar3 != (CVector3f *)afStack_50) {
      pCVar3->x = afStack_50[0];
      (this_ptr->world_velocity).y = afStack_50[1];
      (this_ptr->world_velocity).z = afStack_50[2];
    }
    fVar4 = (this_ptr->world_velocity).y;
    fVar5 = (this_ptr->world_velocity).x;
    fVar6 = (this_ptr->world_velocity).z;
    afStack_38[2] = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  }
  fStack_c8 = (this_ptr->world_velocity).x * _DAT_005f906b;
  fStack_c4 = (this_ptr->world_velocity).y * _DAT_005f906b;
  fStack_c0 = (this_ptr->world_velocity).z * _DAT_005f906b;
  afStack_70[2] = fStack_c8;
  afStack_70[(uint)bVar17 * -2 + 3] = afStack_dc[(uint)bVar17 * -2 + 6];
  afStack_70[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
       afStack_dc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
  if (&this_ptr->sound_velocity != (CVector3f *)(afStack_70 + 2)) {
    (this_ptr->sound_velocity).x = afStack_70[2];
    (this_ptr->sound_velocity).y = afStack_70[3];
    (this_ptr->sound_velocity).z = fStack_60;
  }
  core_actor_cpp_FUN_00408b00(this_ptr,&this_ptr->world_velocity);
  fStack_e0 = fStack_74;
  afStack_dc[(uint)bVar17 * -2] = afStack_70[(uint)bVar17 * -2];
  afStack_dc[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
       afStack_70[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
  if (&this_ptr->local_velocity != (CVector3f *)&fStack_e0) {
    (this_ptr->local_velocity).x = fStack_e0;
    (this_ptr->local_velocity).y = afStack_dc[0];
    (this_ptr->local_velocity).z = afStack_dc[1];
  }
  iVar12 = 0;
  pCVar13 = this_ptr;
  if (0 < this_ptr->tire_count) {
    do {
      iVar12 = iVar12 + 1;
      pCVar13->tires[0].spin_angle.x =
           pCVar13->tires[0].radius * afStack_38[2] + pCVar13->tires[0].spin_angle.x;
      pCVar13 = (CVehicle *)((pCVar13->model).part_visibility_flags + 0x17);
    } while (iVar12 < this_ptr->tire_count);
  }
  fVar4 = (this_ptr->base).location.position.y;
  fVar5 = (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.x = 0.0;
  pCVar7 = (this_ptr->base).vtable._ub;
  fVar5 = fVar5 + _DAT_005f9073;
  (this_ptr->base).location.position.y = fVar4 + _DAT_005f906f;
  (this_ptr->base).orient.vec.y = fVar5;
  (*pCVar7->getBoundingBox)(&this_ptr->base,in_stack_fffffe88);
  iStack_18 = 0;
  iStack_1c = 0;
  puVar14 = auStack_f0;
  puVar15 = auStack_110;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
    puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
  }
  for (; iStack_18 < g_CDemonSetPtr->character_count; iStack_18 = iStack_18 + 1) {
    iStack_14 = *(int *)((int)g_CDemonSetPtr->characters + iStack_1c);
    iVar12 = (CMobster *)core_actor_cpp_castToClassHash_FUN_0040c600(iStack_14,g_CMobsterClassInfo.name_hash);
    if ((iVar12 == 0) || (this_ptr != *(CVehicle **)(iVar12 + 0xc28c))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)auStack_130);
      iVar12 = (**(code **)(*(int *)(iStack_14 + 0x154) + 0x3c))(iStack_14,auStack_130);
      if ((iVar12 == 2) &&
         ((*(float *)(iStack_14 + 0x24) <= (this_ptr->base).location.position.y + fStack_f8 &&
          ((this_ptr->base).location.position.y + fStack_104 <=
           *(float *)(iStack_14 + 0x24) + (float)auStack_130._24_4_)))) {
        core_actor_cpp_FUN_00408bb0(this_ptr,iStack_14 + 0x20);
        fStack_54 = afStack_90[3];
        afStack_50[(uint)bVar17 * -2] = *(float *)((int)&CStack_80 + (uint)bVar17 * -8);
        afStack_50[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_80 + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4 + 4);
        if ((fStack_108 <= fStack_54 + fStack_114) &&
           ((fStack_54 - fStack_114 <= fStack_fc && (fStack_100 <= afStack_50[1] + fStack_114)))) {
          if (afStack_50[1] - fStack_114 <= fStack_f4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffe94);
            uStack_13c = 4;
            uStack_168 = 0x4479c000;
            (**(code **)(*(int *)(iStack_14 + 0x154) + 0x108))(iStack_14,&stack0xfffffe94);
          }
          else if ((afStack_50[1] - fStack_114 < fStack_f4 + (float)_DAT_005f908b) &&
                  (iVar12 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]), iVar12 == 0))
          {
            uVar9 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0
                              (this_ptr,"?model-t-horn?.wav" + 1);
            this_ptr->sfx_handles[0] = uVar9;
          }
        }
      }
    }
    iStack_1c = iStack_1c + 4;
  }
  if (this_ptr->is_visible != 0) goto LAB_005a80a6;
  iVar12 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  fStack_a8 = (this_ptr->base).location.position.x - *(float *)(iVar12 + 0x20);
  CStack_a4.x = (this_ptr->base).location.position.y - *(float *)(iVar12 + 0x24);
  CStack_a4.y = (this_ptr->base).location.position.z - *(float *)(iVar12 + 0x28);
  fStack_3c = fStack_a8;
  afStack_38[(uint)bVar17 * -2] = *(float *)((int)&CStack_a4 + ((uint)bVar17 * -2 + -1) * 4 + 4);
  afStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
       *(float *)((int)&CStack_a4 + ((uint)bVar17 * -2 + (uint)bVar17 * -2) * 4 + 4);
  if ((SQRT(afStack_38[1] * afStack_38[1] + fStack_3c * fStack_3c + afStack_38[0] * afStack_38[0])
       <= (float)_DAT_005f907b) || (0x671 < g_CDemonSetPtr->actor_count)) goto LAB_005a80a6;
  iVar12 = 0;
  iStack_24 = 0;
  iStack_20 = 0;
  for (iVar16 = 0; iVar16 < g_CDemonSetPtr->enemy_count; iVar16 = iVar16 + 1) {
    pCVar10 = (CDemonActor *)
              core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)((int)g_CDemonSetPtr->enemies + iVar12),
                         g_CMobsterClassInfo.name_hash);
    if ((pCVar10 != (CDemonActor *)0x0) &&
       (pCVar13 = (CVehicle *)pCVar10[0x90].scale.y, this_ptr == pCVar13)) {
      if (pCVar10[0x90].scale.z == 0) {
        pCVar13->last_mobster_left = pCVar10;
        iStack_20 = 1;
      }
      else {
        pCVar13->last_mobster_right = pCVar10;
        iStack_24 = 1;
      }
    }
    iVar12 = iVar12 + 4;
  }
  if ((iStack_20 != 0) && (iStack_24 != 0)) goto LAB_005a80a6;
  if (iStack_20 == 0) {
    pCVar8 = (CCharacter *)this_ptr->last_mobster_left;
    if (pCVar8 != (CCharacter *)0x0) {
      EVar11 = (*(((pCVar8->base).vtable._uc)->_uc).getDeathState)(pCVar8);
joined_r0x005a8421:
      if (EVar11 == DEATH_STATE_ALIVE) goto LAB_005a80a6;
    }
  }
  else if ((iStack_24 == 0) &&
          (pCVar8 = (CCharacter *)this_ptr->last_mobster_right, pCVar8 != (CCharacter *)0x0)) {
    EVar11 = (*(((pCVar8->base).vtable._uc)->_uc).getDeathState)(pCVar8);
    goto joined_r0x005a8421;
  }
  this_ptr_00 = (CMobster *)debugAllocTracked1(0xc340);
  actor = (CMobster *)0x0;
  if (this_ptr_00 != (CMobster *)0x0) {
    actor = core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(this_ptr_00);
  }
  this_ptr_01 = (CTommyGun *)debugAllocTracked1(0x584);
  actor_00 = (CTommyGun *)0x0;
  if (this_ptr_01 != (CTommyGun *)0x0) {
    actor_00 = core_tommygun_cpp_CTommyGun_ctor_FUN_00598380(this_ptr_01);
  }
  if ((actor == (CMobster *)0x0) || (actor_00 == (CTommyGun *)0x0)) {
    _DAT_01d1d400 = "..\\core\\vehicle.cpp";
    _DAT_01d1d404 = 0x161;
    core_main_c_FUN_005030e0("CMobster::process - Out of memory!");
  }
  iVar12 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
  if (iVar12 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(&(actor->base).base.model,model_name)
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
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
            (0x01D2C900,(CDemonActor *)actor_00);
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
  core_charactr_cpp_FUN_004325b0(actor,1,actor_00,0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,(CDemonActor *)actor_00);
LAB_005a80a6:
  iVar12 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
  if (iVar12 == 0) {
    uVar9 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0
                      (this_ptr,"ext-modelt-fast_??.wav");
    this_ptr->sfx_handles[1] = uVar9;
  }
  sound_sndmain_cpp_FUN_00573980(this_ptr->sfx_handles[1],1.0);
  if (((float)_DAT_005f9083 < ABS((this_ptr->local_velocity).x)) &&
     (iVar12 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar12 == 0)) {
    uVar9 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0(this_ptr,"skid_??.wav");
    this_ptr->sfx_handles[2] = uVar9;
    return;
  }
  return;
}
