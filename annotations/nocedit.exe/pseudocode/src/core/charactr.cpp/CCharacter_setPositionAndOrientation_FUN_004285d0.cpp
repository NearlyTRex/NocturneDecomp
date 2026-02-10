// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
// Address: 004285d0
// Address Range: [[004285d0, 0042861d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0 (CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0
          (CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  float fVar1;
  CVector3f *in_stack_00000010;
  
  (*(((this_ptr->base).vtable._uc)->_uc).releaseVictim)(this_ptr);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
            (&this_ptr->base,new_orientation,in_stack_00000010);
  fVar1 = 9999.0f;
  (this_ptr->field7_0x2428).z = 0.0;
  (this_ptr->field7_0x2428).y = (this_ptr->field7_0x2428).z;
  (this_ptr->field7_0x2428).x = (this_ptr->field7_0x2428).y;
  this_ptr->closest_distance_threshold = fVar1;
  return;
}
