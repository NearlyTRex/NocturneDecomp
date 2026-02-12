// Name: core_bugs.cpp_CBugs_FUN_004276c0
// Address: 004276c0
// Address Range: [[004276c0, 004277db]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_004276c0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_FUN_004276c0(CBugs *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char *pcVar7;
  CVector3f *pCVar8;
  char *pcVar9;
  int iVar10;
  CBugs *pCVar11;
  float *in_stack_00000008;
  
  pCVar1 = &(this_ptr->base).base.base.location;
  fVar4 = *in_stack_00000008 - (pCVar1->position).x;
  fVar5 = in_stack_00000008[1] - (this_ptr->base).base.base.location.position.y;
  fVar6 = in_stack_00000008[2] - (this_ptr->base).base.base.location.position.z;
  (pCVar1->position).x = *in_stack_00000008;
  (this_ptr->base).base.base.location.position.y = in_stack_00000008[1];
  (this_ptr->base).base.base.location.position.z = in_stack_00000008[2];
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
  pCVar11 = this_ptr;
  do {
    pCVar11 = (CBugs *)&(pCVar11->base).base.base.orient;
    pcVar9 = (this_ptr->base).base.base.actor_name + iVar10 * 0x30;
    do {
      pcVar7 = pcVar9 + 4;
      *(float *)((int)pcVar9 + 0x128b8) = *(float *)((int)pcVar9 + 0x128b8) - fVar5;
      pcVar9 = pcVar7;
    } while ((CBugs *)pcVar7 != pCVar11);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xc);
  return;
}
