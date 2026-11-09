// Name: core_bugs.cpp_FUN_00421a00
// Address: 00421a00
// Address Range: [[00421a00, 00421b01]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00421a00(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_FUN_00421a00(CBugs *this_ptr)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *point;
  int iVar7;
  
  puVar1 = &this_ptr->field_0x10b08;
  if (&this_ptr->field_0x1e608 != puVar1) {
    *(uint *)&this_ptr->field_0x1e608 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x1e60c = *(uint *)&this_ptr->field_0x10b0c;
    *(uint *)&this_ptr->field_0x1e610 = *(uint *)&this_ptr->field_0x10b10;
  }
  if (&this_ptr->field_0x1e614 != puVar1) {
    *(uint *)&this_ptr->field_0x1e614 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x1e618 = *(uint *)&this_ptr->field_0x10b0c;
    *(uint *)&this_ptr->field_0x1e61c = *(uint *)&this_ptr->field_0x10b10;
  }
  iVar7 = 1;
  if (1 < *(int *)&this_ptr->field_0x10afc) {
    point = (CVector3f *)&this_ptr->field_0x10b48;
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041a590
                ((CBoundingBox3D *)&this_ptr->field_0x1e608,point);
      point = (CVector3f *)&point[5].field_0x4;
    } while (iVar7 < *(int *)&this_ptr->field_0x10afc);
  }
  fVar2 = *(float *)&this_ptr->field_0x1e608 + _DAT_005cca81;
  fVar3 = *(float *)&this_ptr->field_0x1e610 + _DAT_005cca81;
  fVar4 = *(float *)&this_ptr->field_0x1e614 + _DAT_005cca85;
  fVar5 = *(float *)&this_ptr->field_0x1e618 + _DAT_005cca85;
  fVar6 = *(float *)&this_ptr->field_0x1e61c + _DAT_005cca85;
  *(float *)&this_ptr->field_0x1e60c = *(float *)&this_ptr->field_0x1e60c + _DAT_005cca81;
  *(float *)&this_ptr->field_0x1e610 = fVar3;
  *(float *)&this_ptr->field_0x1e614 = fVar4;
  *(float *)&this_ptr->field_0x1e618 = fVar5;
  *(float *)&this_ptr->field_0x1e61c = fVar6;
  *(float *)&this_ptr->field_0x1e608 = fVar2;
  return;
}
