// Name: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0
// Address: 004272f0
// MANUAL RECONSTRUCTION
// Address Range: [[004272f0, 004273f1]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(CBugs *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar7;
  int iVar8;
  
  pCVar7 = &this_ptr->bugs[0].position;
  if (&this_ptr->bounds != (CBoundingBox3D *)pCVar7) {
    (this_ptr->bounds).min = *pCVar7;
  }
  pCVar1 = &(this_ptr->bounds).max;
  if (pCVar1 != pCVar7) {
    *pCVar1 = *pCVar7;
  }
  iVar8 = 1;
  if (1 < this_ptr->count) {
    do {
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&this_ptr->bounds,&this_ptr->bugs[iVar8].position);
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->count);
  }
  fVar2 = (this_ptr->bounds).min.x + -0.3333333f;
  fVar3 = (this_ptr->bounds).min.z + -0.3333333f;
  fVar4 = (this_ptr->bounds).max.x + 0.3333333f;
  fVar5 = (this_ptr->bounds).max.y + 0.3333333f;
  fVar6 = (this_ptr->bounds).max.z + 0.3333333f;
  (this_ptr->bounds).min.y = (this_ptr->bounds).min.y + -0.3333333f;
  (this_ptr->bounds).min.z = fVar3;
  (this_ptr->bounds).max.x = fVar4;
  (this_ptr->bounds).max.y = fVar5;
  (this_ptr->bounds).max.z = fVar6;
  (this_ptr->bounds).min.x = fVar2;
  return;
}
