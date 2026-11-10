// Name: core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
// Address: 004244b0
// Address Range: [[004244b0, 004246d6]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CScript *this_ptr_00;
  float fVar2;
  int iVar3;
  CCharacter *pCVar4;
  
  fVar2 = this_ptr->sound_cooldown - delta_time;
  this_ptr->sound_cooldown = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->sound_cooldown = 0.0;
  }
  core_charactr_cpp_CCharacter_processFire_FUN_00425fb0(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_advanceGesture_FUN_00429320(this_ptr,delta_time);
  fVar2 = this_ptr->stagger_amount - delta_time;
  this_ptr->stagger_amount = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->stagger_amount = 0.0;
  }
  if ((0.0 < *(float *)&this_ptr->field_0x2820) &&
     (fVar2 = *(float *)&this_ptr->field_0x2820 - delta_time,
     *(float *)&this_ptr->field_0x2820 = fVar2, this_ptr_00 = g_CScriptPtr, fVar2 < 0.0)) {
    *(uint *)&this_ptr->field_0x2820 = 0;
    core_script_cpp_CScript_setSpeaker_FUN_00529990(this_ptr_00,&this_ptr->base);
  }
  if (this_ptr->health_bar_mode == HEALTH_BAR_ALWAYS) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,2.0);
  }
  if (*(int *)&this_ptr->field_0x2568 == 0) {
    if (this_ptr->closest_distance_threshold == _DAT_005f4084) {
      iVar3 = 0;
      pCVar4 = this_ptr;
      do {
        if (*(int *)&pCVar4->field_0x2620 != 0) {
          core_charactr_cpp_FUN_00428bd0(this_ptr,iVar3,0,0);
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CCharacter *)&(pCVar4->base).field_0x78;
      } while (iVar3 < 2);
    }
    fVar2 = *(float *)&(this_ptr->base).field_0xe4;
    *(uint *)&(this_ptr->base).field_0xe4 = 0;
    fVar1 = this_ptr->closest_distance_threshold;
    *(float *)&(this_ptr->base).field_0x24 = fVar2 + *(float *)&(this_ptr->base).field_0x24;
    if ((fVar1 == _DAT_005f4084) || (*(int *)&(this_ptr->base).field_0xdc != 0)) {
      fVar2 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                        (&this_ptr->base,*(float *)&this_ptr->field_0x3430,(CVector3f *)0x0);
      this_ptr->closest_distance_threshold = fVar2;
    }
    this_ptr->is_on_ground =
         (uint)(*(float *)&(this_ptr->base).field_0x24 <
               this_ptr->closest_distance_threshold + (float)_DAT_005ccc9e);
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
    iVar3 = *(int *)&(this_ptr->base).field_0xdc;
    *(uint *)&this_ptr->field_0x2578 = 0;
    if (((iVar3 == 0) && (this_ptr->walk_to_target == (CDemonActor *)0x0)) &&
       (iVar3 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004ce180
                          (&(this_ptr->base).field_0x20,*(uint *)&this_ptr->field_0x343c,
                           *(uint *)&this_ptr->field_0x3438), iVar3 == 0)) {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
      return 0;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
