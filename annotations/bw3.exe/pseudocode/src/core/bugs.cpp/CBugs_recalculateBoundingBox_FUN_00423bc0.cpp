// Name: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0
// Address: 00423bc0
// Address Range: [[00423bc0, 00423cc1]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(CBugs *this_ptr)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar7;
  int iVar8;
  
  puVar1 = &this_ptr->bugs[0].field_0x8;
  if (&this_ptr->bounds != (CBoundingBox3D *)puVar1) {
    (this_ptr->bounds).min.x = *(float *)puVar1;
    (this_ptr->bounds).min.y = *(float *)&this_ptr->bugs[0].field_0xc;
    (this_ptr->bounds).min.z = *(float *)&this_ptr->bugs[0].field_0x10;
  }
  pCVar7 = &(this_ptr->bounds).max;
  if (pCVar7 != (CVector3f *)puVar1) {
    pCVar7->x = *(float *)puVar1;
    (this_ptr->bounds).max.y = *(float *)&this_ptr->bugs[0].field_0xc;
    (this_ptr->bounds).max.z = *(float *)&this_ptr->bugs[0].field_0x10;
  }
  iVar8 = 1;
  if (1 < this_ptr->count) {
    pCVar7 = (CVector3f *)&this_ptr->bugs[1].field_0x8;
    do {
      iVar8 = iVar8 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(&this_ptr->bounds,pCVar7);
      pCVar7 = (CVector3f *)&pCVar7[5].y;
    } while (iVar8 < this_ptr->count);
  }
  fVar2 = (this_ptr->bounds).min.x + _DAT_005b78a9;
  fVar3 = (this_ptr->bounds).min.z + _DAT_005b78a9;
  fVar4 = (this_ptr->bounds).max.x + _DAT_005b78ad;
  fVar5 = (this_ptr->bounds).max.y + _DAT_005b78ad;
  fVar6 = (this_ptr->bounds).max.z + _DAT_005b78ad;
  (this_ptr->bounds).min.y = (this_ptr->bounds).min.y + _DAT_005b78a9;
  (this_ptr->bounds).min.z = fVar3;
  (this_ptr->bounds).max.x = fVar4;
  (this_ptr->bounds).max.y = fVar5;
  (this_ptr->bounds).max.z = fVar6;
  (this_ptr->bounds).min.x = fVar2;
  return;
}
