// Name: core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800
// Address: 0042f800
// Address Range: [[0042f800, 0042f893]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800(CCharacter *this_ptr)

{
  float fVar1;
  int hand_index;
  CCharacter *pCVar2;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  if (this_ptr->closest_distance_threshold == 9999.0f) {
    hand_index = 0;
    pCVar2 = this_ptr;
    do {
      if (pCVar2->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
        core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr,hand_index,0.0);
      }
      hand_index = hand_index + 1;
      pCVar2 = (CCharacter *)&(pCVar2->base).orient_matrix.m[0].z;
    } while (hand_index < 2);
    fVar1 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                      (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = fVar1;
  }
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(this_ptr,0.0);
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530(this_ptr);
  this_ptr->max_hit_points = this_ptr->hit_points;
  return;
}
