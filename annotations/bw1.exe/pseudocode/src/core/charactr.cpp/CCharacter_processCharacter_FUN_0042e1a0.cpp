// Name: core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
// Address: 0042e1a0
// Address Range: [[0042e1a0, 0042e40b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  CPlatform *pCVar3;
  CScript *this_ptr_00;
  int iVar4;
  CCharacter *pCVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStack_44 [6];
  uint auStack_2c [6];
  float fStack_14;
  
  bVar8 = 0;
  fVar1 = this_ptr->sound_cooldown - delta_time;
  this_ptr->sound_cooldown = fVar1;
  if (fVar1 < 0.0) {
    this_ptr->sound_cooldown = 0.0;
  }
  core_charactr_cpp_CCharacter_processFire_FUN_0042f8e0(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432e00(this_ptr,delta_time);
  fVar1 = this_ptr->stagger_amount - delta_time;
  this_ptr->stagger_amount = fVar1;
  if (fVar1 < 0.0) {
    this_ptr->stagger_amount = 0.0;
  }
  if ((0.0 < *(float *)&this_ptr->field_0x27b4) &&
     (fVar1 = *(float *)&this_ptr->field_0x27b4 - delta_time,
     *(float *)&this_ptr->field_0x27b4 = fVar1, this_ptr_00 = g_CScriptPtr, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0x27b4 = 0;
    core_script_cpp_CScript_setSpeaker_FUN_0054aca0(this_ptr_00,&this_ptr->base);
  }
  if (this_ptr->health_bar_mode == HEALTH_BAR_ALWAYS) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004d6340
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,2.0);
  }
  if (this_ptr->render_active == 0) {
    if (this_ptr->closest_distance_threshold == _DAT_005fd614) {
      iVar4 = 0;
      pCVar5 = this_ptr;
      do {
        if ((*(int *)&pCVar5->field_0x25b0 != 0) && (*(int *)&pCVar5->field_0x25ec == 0)) {
          core_charactr_cpp_FUN_00432690(this_ptr,iVar4,0,0);
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CCharacter *)(pCVar5->base).create_event;
      } while (iVar4 < 2);
    }
    fVar1 = (this_ptr->base).platform_position_delta.y;
    (this_ptr->base).platform_position_delta.y = 0.0;
    fVar2 = this_ptr->closest_distance_threshold;
    (this_ptr->base).location.position.y = fVar1 + (this_ptr->base).location.position.y;
    if ((fVar2 == _DAT_005fd614) || ((this_ptr->base).standing_platform != (CPlatform *)0x0)) {
      fStack_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                            (&this_ptr->base,*(float *)&this_ptr->field_0x2fec,(CVector3f *)0x0);
      this_ptr->closest_distance_threshold = fStack_14;
    }
    this_ptr->is_on_ground =
         (uint)((this_ptr->base).location.position.y <
               this_ptr->closest_distance_threshold + (float)_DAT_005d592f);
    (this_ptr->position_delta).z = 0.0;
    (this_ptr->position_delta).y = (this_ptr->position_delta).z;
    (this_ptr->position_delta).x = (this_ptr->position_delta).y;
    pCVar3 = (this_ptr->base).standing_platform;
    this_ptr->turn_angle_accumulator = 0.0;
    if (((pCVar3 == (CPlatform *)0x0) && (this_ptr->walk_to_target == (CDemonActor *)0x0)) &&
       (iVar4 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004ea770
                          (&(this_ptr->base).location.position,*(float *)&this_ptr->field_0x2ff8,
                           *(float *)&this_ptr->field_0x2ff4), iVar4 == 0)) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar6 = auStack_2c;
      puVar7 = auStack_44;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = core_box_cpp_FUN_004207b0(auStack_44);
      if (iVar4 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
        return 0;
      }
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}
