// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
// Address: 004285d0
// Address Range: [[004285d0, 0042861d]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0(CCharacter * this_ptr, CVector3f * new_position, CVector3f * new_orientation)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
          (CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  float fVar1;
  
  (*(((this_ptr->base_actor).vtable._uc)->_uc).cfunc9)();
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
            (&this_ptr->base_actor,new_position,new_orientation);
  fVar1 = 9999.0f;
  this_ptr->field2_0x240c[0x24] = '\0';
  this_ptr->field2_0x240c[0x25] = '\0';
  this_ptr->field2_0x240c[0x26] = '\0';
  this_ptr->field2_0x240c[0x27] = '\0';
  *(uint *)(this_ptr->field2_0x240c + 0x20) = *(uint *)(this_ptr->field2_0x240c + 0x24);
  *(uint *)(this_ptr->field2_0x240c + 0x1c) = *(uint *)(this_ptr->field2_0x240c + 0x20);
  *(float *)(this_ptr->field2_0x240c + 8) = fVar1;
  return;
}
