// Name: core_charactr.cpp_CCharacter_FUN_00428d80
// Address: 00428d80
// Address Range: [[00428d80, 00428e29]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428d80(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428d80(CCharacter *this_ptr)

{
  float angle_radians;
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000008;
  CVector3f local_24 [2];
  uint local_8;
  
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base_actor,local_24,in_stack_00000008);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)&stack0xffffffd4,pCVar1);
  angle_radians = pCVar1->y;
  local_8 = *(uint *)(this_ptr->field2_0x240c + 0x2c);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(angle_radians);
  fVar3 = -angle_radians;
  if ((-angle_radians <= fVar2) && (fVar3 = angle_radians, fVar2 <= angle_radians)) {
    *(float *)(this_ptr->field2_0x240c + 0xc) = fVar2;
    return;
  }
  *(float *)(this_ptr->field2_0x240c + 0xc) = fVar3;
  return;
}
