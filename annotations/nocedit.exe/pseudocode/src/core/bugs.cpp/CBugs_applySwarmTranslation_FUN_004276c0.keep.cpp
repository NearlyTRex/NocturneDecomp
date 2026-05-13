// Name: core_bugs.cpp_CBugs_applySwarmTranslation_FUN_004276c0
// Address: 004276c0
// MANUAL RECONSTRUCTION
// Address Range: [[004276c0, 004277db]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(CBugs *this_ptr,CVector3f *new_position)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(CBugs *this_ptr,CVector3f *new_position)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar8;
  int iVar10;
  int j;

  pCVar1 = &(this_ptr->base).base.base.location;
  fVar4 = new_position->x - (pCVar1->position).x;
  fVar5 = new_position->y - (this_ptr->base).base.base.location.position.y;
  fVar6 = new_position->z - (this_ptr->base).base.base.location.position.z;
  pCVar1->position = *new_position;
  iVar10 = 0;
  if (0 < this_ptr->count) {
    pCVar8 = &this_ptr->bugs[0].position;
    do {
      pCVar8->x = pCVar8->x - fVar4;
      pCVar8->y = pCVar8->y - fVar5;
      fVar2 = pCVar8[2].x;
      pCVar8->z = pCVar8->z - fVar6;
      pCVar8[2].x = fVar2 - fVar4;
      pCVar8[2].y = pCVar8[2].y - fVar5;
      iVar10 = iVar10 + 1;
      pCVar8[2].z = pCVar8[2].z - fVar6;
      pCVar8 = (CVector3f *)((int)(pCVar8 + 5) + 4);
    } while (iVar10 < this_ptr->count);
  }
  fVar2 = (this_ptr->bounds).min.y;
  (this_ptr->bounds).min.x = (this_ptr->bounds).min.x - fVar4;
  fVar3 = (this_ptr->bounds).min.z;
  (this_ptr->bounds).min.y = fVar2 - fVar5;
  (this_ptr->bounds).min.z = fVar3 - fVar6;
  pCVar8 = &(this_ptr->bounds).max;
  iVar10 = 0;
  fVar2 = (this_ptr->bounds).max.y;
  pCVar8->x = pCVar8->x - fVar4;
  fVar4 = (this_ptr->bounds).max.z;
  (this_ptr->bounds).max.y = fVar2 - fVar5;
  (this_ptr->bounds).max.z = fVar4 - fVar6;
  do {
    for (j = 0; j < 12; j = j + 1) {
      this_ptr->ground_heights[iVar10][j] = this_ptr->ground_heights[iVar10][j] - fVar5;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xc);
  return;
}
