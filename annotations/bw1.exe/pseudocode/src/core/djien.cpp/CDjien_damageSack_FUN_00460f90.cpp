// Name: core_djien.cpp_CDjien_damageSack_FUN_00460f90
// Address: 00460f90
// Address Range: [[00460f90, 00461089]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_damageSack_FUN_00460f90(CDjien *this_ptr,SDamageInfo *damage)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_damageSack_FUN_00460f90(CDjien *this_ptr,SDamageInfo *damage)

{
  float fVar1;
  CEventList *this_ptr_00;
  int iVar2;
  CBodyPart *body_part;
  
  iVar2 = (*(((this_ptr->base).base.base.vtable._uh)->_uh).reset)((CHero *)this_ptr);
  if (iVar2 == -1) {
    damage->damage_amount = 0.0;
    damage->gore_multiplier = 0.0;
  }
  else {
    fVar1 = (float)_DAT_00612270;
    this_ptr->sack_damage[iVar2] = damage->damage_amount + this_ptr->sack_damage[iVar2];
    if (fVar1 < this_ptr->sack_damage[iVar2]) {
      this_ptr->num_sacks_blown = this_ptr->num_sacks_blown + 1;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,&damage->impact_point,
                             (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      body_part->dont_pick_me_up = 1;
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,damage->hit_part_index,0);
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
                ((CCharacter *)this_ptr,"limb.wav");
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"djien-heart?.wav @ 6");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      this_ptr_00 = 0x01C51D80;
      damage->gore_multiplier = damage->gore_multiplier * (float)_DAT_005d8e60;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr_00,"DjienSackBlown");
      return;
    }
  }
  return;
}
