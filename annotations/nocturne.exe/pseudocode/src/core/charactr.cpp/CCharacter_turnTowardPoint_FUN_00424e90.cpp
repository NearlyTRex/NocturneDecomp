// Name: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00424e90
// Address: 00424e90
// Address Range: [[00424e90, 00424f39]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00424e90(CCharacter *this_ptr,CVector3f *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00424e90(CCharacter *this_ptr,CVector3f *target)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  CVector3f local_30;
  CVector3f local_24;
  float local_10;
  float local_c;
  
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                     (&this_ptr->base,&local_24,target);
  pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_30,pCVar1);
  local_c = pCVar1->y;
  local_10 = this_ptr->turn_speed;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_c);
  fVar3 = -local_10;
  if ((-local_10 <= fVar2) && (fVar3 = local_10, fVar2 <= local_10)) {
    this_ptr->turn_angle_accumulator = fVar2;
    return;
  }
  this_ptr->turn_angle_accumulator = fVar3;
  return;
}
