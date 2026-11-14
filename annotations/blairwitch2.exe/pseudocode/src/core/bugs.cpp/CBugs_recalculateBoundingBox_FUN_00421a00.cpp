// Name: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00421a00
// Address: 00421a00
// Address Range: [[00421a00, 00421b01]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00421a00(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00421a00(CBugs *this_ptr)

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
    (this_ptr->bounds).min.x = pCVar7->x;
    (this_ptr->bounds).min.y = this_ptr->bugs[0].position.y;
    (this_ptr->bounds).min.z = this_ptr->bugs[0].position.z;
  }
  pCVar1 = &(this_ptr->bounds).max;
  if (pCVar1 != pCVar7) {
    pCVar1->x = pCVar7->x;
    (this_ptr->bounds).max.y = this_ptr->bugs[0].position.y;
    (this_ptr->bounds).max.z = this_ptr->bugs[0].position.z;
  }
  iVar8 = 1;
  if (1 < this_ptr->count) {
    pCVar7 = &this_ptr->bugs[1].position;
    do {
      iVar8 = iVar8 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(&this_ptr->bounds,pCVar7);
      pCVar7 = (CVector3f *)&pCVar7[5].y;
    } while (iVar8 < this_ptr->count);
  }
  fVar2 = (this_ptr->bounds).min.x + _DAT_005cca81;
  fVar3 = (this_ptr->bounds).min.z + _DAT_005cca81;
  fVar4 = (this_ptr->bounds).max.x + _DAT_005cca85;
  fVar5 = (this_ptr->bounds).max.y + _DAT_005cca85;
  fVar6 = (this_ptr->bounds).max.z + _DAT_005cca85;
  (this_ptr->bounds).min.y = (this_ptr->bounds).min.y + _DAT_005cca81;
  (this_ptr->bounds).min.z = fVar3;
  (this_ptr->bounds).max.x = fVar4;
  (this_ptr->bounds).max.y = fVar5;
  (this_ptr->bounds).max.z = fVar6;
  (this_ptr->bounds).min.x = fVar2;
  return;
}
