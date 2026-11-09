// Name: core_bugs.cpp_FUN_00423bc0
// Address: 00423bc0
// Address Range: [[00423bc0, 00423cc1]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00423bc0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_FUN_00423bc0(CBugs *this_ptr)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *point;
  int iVar7;
  
  puVar1 = &this_ptr->field_0xd064;
  if (&this_ptr->field_0x1be68 != puVar1) {
    *(uint *)&this_ptr->field_0x1be68 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x1be6c = *(uint *)&this_ptr->field_0xd068;
    *(uint *)&this_ptr->field_0x1be70 = *(uint *)&this_ptr->field_0xd06c;
  }
  if (&this_ptr->field_0x1be74 != puVar1) {
    *(uint *)&this_ptr->field_0x1be74 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x1be78 = *(uint *)&this_ptr->field_0xd068;
    *(uint *)&this_ptr->field_0x1be7c = *(uint *)&this_ptr->field_0xd06c;
  }
  iVar7 = 1;
  if (1 < *(int *)&this_ptr->field_0xd058) {
    point = (CVector3f *)&this_ptr->field_0xd0a4;
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840
                ((CBoundingBox3D *)&this_ptr->field_0x1be68,point);
      point = (CVector3f *)&point[5].field_0x4;
    } while (iVar7 < *(int *)&this_ptr->field_0xd058);
  }
  fVar2 = *(float *)&this_ptr->field_0x1be68 + _DAT_005b78a9;
  fVar3 = *(float *)&this_ptr->field_0x1be70 + _DAT_005b78a9;
  fVar4 = *(float *)&this_ptr->field_0x1be74 + _DAT_005b78ad;
  fVar5 = *(float *)&this_ptr->field_0x1be78 + _DAT_005b78ad;
  fVar6 = *(float *)&this_ptr->field_0x1be7c + _DAT_005b78ad;
  *(float *)&this_ptr->field_0x1be6c = *(float *)&this_ptr->field_0x1be6c + _DAT_005b78a9;
  *(float *)&this_ptr->field_0x1be70 = fVar3;
  *(float *)&this_ptr->field_0x1be74 = fVar4;
  *(float *)&this_ptr->field_0x1be78 = fVar5;
  *(float *)&this_ptr->field_0x1be7c = fVar6;
  *(float *)&this_ptr->field_0x1be68 = fVar2;
  return;
}
