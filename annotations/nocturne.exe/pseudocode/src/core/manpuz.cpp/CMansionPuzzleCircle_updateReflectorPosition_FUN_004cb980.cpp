// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980
// Address: 004cb980
// Address Range: [[004cb980, 004cba37]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(CMansionPuzzleCircle *this_ptr,int reflector_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(CMansionPuzzleCircle *this_ptr,int reflector_index)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  SReflector *pSVar9;
  float local_1c [7];
  
  pSVar9 = this_ptr->reflectors + reflector_index;
  pfVar1 = &pSVar9->interp_factor;
  fVar2 = (pSVar9->target_position).y;
  fVar3 = *pfVar1;
  fVar4 = (pSVar9->target_position).z;
  fVar5 = *pfVar1;
  fVar8 = 1.0 - pSVar9->interp_factor;
  fVar6 = (pSVar9->start_position).y;
  fVar7 = (pSVar9->start_position).z;
  if (&pSVar9->position == (CVector3f *)local_1c) {
    return;
  }
  (pSVar9->position).x = (pSVar9->start_position).x * fVar8 + (pSVar9->target_position).x * *pfVar1;
  (pSVar9->position).y = fVar6 * fVar8 + fVar2 * fVar3;
  (pSVar9->position).z = fVar7 * fVar8 + fVar4 * fVar5;
  return;
}
