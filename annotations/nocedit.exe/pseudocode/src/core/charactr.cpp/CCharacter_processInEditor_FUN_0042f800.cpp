// Name: core_charactr.cpp_CCharacter_processInEditor_FUN_0042f800
// Address: 0042f800
// Address Range: [[0042f800, 0042f893]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  CCharacter *pCVar3;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  if (*(float *)(this_ptr->unk1 + 8) == 9999.0f) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    do {
      if (pCVar3->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
        core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CCharacter *)&(pCVar3->base).orient_matrix.m[0].z;
    } while (iVar2 < 2);
    fVar1 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                      (&this_ptr->base,*(float *)(this_ptr->cloth_data + 0x344),(CVector3f *)0x0);
    *(float *)(this_ptr->unk1 + 8) = fVar1;
  }
  core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042d530(this_ptr);
  this_ptr->max_hit_points = this_ptr->hit_points;
  return;
}
