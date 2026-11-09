// Name: core_charactr.cpp_CCharacter_setWalkTargetImmediate_FUN_004321a0
// Address: 004321a0
// Address Range: [[004321a0, 004321e1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_004321a0(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_004321a0(CCharacter *this_ptr,CDemonActor *target)

{
  *(uint *)&this_ptr->field_0x273c = 1;
  *(uint *)&this_ptr->field_0x2708 = 0xbf800000;
  *(CDemonActor **)&this_ptr->field_0x2704 = target;
  *(uint *)&this_ptr->field_0x270c = 0x7149f2ca;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x138))(this_ptr,0xbf800000);
  return;
}
