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
  
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x14c))(this_ptr,*(uint *)damage);
  if (iVar2 == -1) {
    *(uint *)(damage + 4) = 0;
    *(uint *)(damage + 8) = 0;
  }
  else {
    fVar1 = (float)_DAT_00612270;
    *(float *)(&this_ptr->field_0xc2d8 + iVar2 * 4) =
         *(float *)(damage + 4) + *(float *)(&this_ptr->field_0xc2d8 + iVar2 * 4);
    if (fVar1 < *(float *)(&this_ptr->field_0xc2d8 + iVar2 * 4)) {
      *(int *)&this_ptr->field_0xc2d0 = *(int *)&this_ptr->field_0xc2d0 + 1;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,(CVector3f *)(damage + 0xc)
                             ,(CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      body_part->dont_pick_me_up = 1;
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,*(int *)damage,0);
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
                ((CCharacter *)this_ptr,"limb.wav");
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"djien-heart?.wav @ 6");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      this_ptr_00 = 0x01C51D80;
      *(float *)(damage + 8) = *(float *)(damage + 8) * (float)_DAT_005d8e60;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr_00,"DjienSackBlown");
      return;
    }
  }
  return;
}
