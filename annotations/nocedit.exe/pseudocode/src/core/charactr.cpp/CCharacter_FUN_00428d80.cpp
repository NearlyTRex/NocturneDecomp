// Name: core_charactr.cpp_CCharacter_FUN_00428d80
// Address: 00428d80
// Address Range: [[00428d80, 00428e29]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_00428d80(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428d80(CCharacter *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  CVector3f *in_stack_00000008;
  CVector3f local_30;
  CVector3f local_24;
  float local_10;
  float local_c;
  
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&local_24,in_stack_00000008);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_30,pCVar1);
  local_c = pCVar1->y;
  local_10 = *(float *)(this_ptr->unk1 + 0x2c);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_c);
  fVar3 = -local_10;
  if ((-local_10 <= fVar2) && (fVar3 = local_10, fVar2 <= local_10)) {
    *(float *)(this_ptr->unk1 + 0xc) = fVar2;
    return;
  }
  *(float *)(this_ptr->unk1 + 0xc) = fVar3;
  return;
}
