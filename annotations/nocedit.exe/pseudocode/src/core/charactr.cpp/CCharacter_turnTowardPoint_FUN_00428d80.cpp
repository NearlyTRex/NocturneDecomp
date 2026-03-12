// Name: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00428d80
// Address: 00428d80
// Address Range: [[00428d80, 00428e29]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00428d80(CCharacter *this_ptr,CVector3f *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00428d80(CCharacter *this_ptr,CVector3f *target)

{
  float fVar1;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float fVar2;
  float fVar3;
  CVector3f local_30;
  CVector3f local_24;
  float local_10;
  float local_c;
  
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&local_24,target);
  pCVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_30,pCVar1);
  fVar1 = this_ptr->turn_speed;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar2->y);
  fVar3 = -fVar1;
  if ((-fVar1 <= fVar2) && (fVar3 = fVar1, fVar2 <= fVar1)) {
    this_ptr->turn_angle_accumulator = fVar2;
    return;
  }
  this_ptr->turn_angle_accumulator = fVar3;
  return;
}
