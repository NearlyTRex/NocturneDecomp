// Name: core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00427e00
// Address: 00427e00
// Address Range: [[00427e00, 00427f4f]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00427e00(CBugs *this_ptr,CVector3f *new_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00427e00(CBugs *this_ptr,CVector3f *new_position)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  CVector3f *pCVar9;
  char *pcVar10;
  int iVar11;
  CBugs *pCVar12;
  
  pCVar1 = &(this_ptr->base).base.base.location;
  fVar5 = new_position->x - (pCVar1->position).x;
  fVar6 = new_position->y - (this_ptr->base).base.base.location.position.y;
  fVar7 = new_position->z - (this_ptr->base).base.base.location.position.z;
  (pCVar1->position).x = new_position->x;
  (this_ptr->base).base.base.location.position.y = new_position->y;
  (this_ptr->base).base.base.location.position.z = new_position->z;
  iVar11 = 0;
  if (0 < this_ptr->count) {
    pCVar9 = &this_ptr->bugs[0].position;
    do {
      fVar2 = pCVar9[2].x;
      fVar3 = pCVar9[2].y;
      fVar4 = pCVar9[2].z;
      iVar11 = iVar11 + 1;
      pCVar9->x = pCVar9->x - fVar5;
      pCVar9->y = pCVar9->y - fVar6;
      pCVar9->z = pCVar9->z - fVar7;
      pCVar9[2].x = fVar2 - fVar5;
      pCVar9[2].y = fVar3 - fVar6;
      pCVar9[2].z = fVar4 - fVar7;
      pCVar9 = (CVector3f *)((int)(pCVar9 + 5) + 4);
    } while (iVar11 < this_ptr->count);
  }
  fVar2 = (this_ptr->bounds).min.y;
  fVar3 = (this_ptr->bounds).min.z;
  (this_ptr->bounds).min.x = (this_ptr->bounds).min.x - fVar5;
  (this_ptr->bounds).min.y = fVar2 - fVar6;
  (this_ptr->bounds).min.z = fVar3 - fVar7;
  pCVar9 = &(this_ptr->bounds).max;
  iVar11 = 0;
  fVar2 = (this_ptr->bounds).max.y;
  fVar3 = (this_ptr->bounds).max.z;
  pCVar9->x = pCVar9->x - fVar5;
  (this_ptr->bounds).max.y = fVar2 - fVar6;
  (this_ptr->bounds).max.z = fVar3 - fVar7;
  pCVar12 = this_ptr;
  do {
    pCVar12 = (CBugs *)&(pCVar12->base).base.base.orient;
    pcVar10 = (this_ptr->base).base.base.actor_name + iVar11 * 0x30;
    do {
      pcVar8 = pcVar10 + 4;
      *(float *)((int)pcVar10 + 0x12c64) = *(float *)((int)pcVar10 + 0x12c64) - fVar6;
      pcVar10 = pcVar8;
    } while ((CBugs *)pcVar8 != pCVar12);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0xc);
  return;
}
