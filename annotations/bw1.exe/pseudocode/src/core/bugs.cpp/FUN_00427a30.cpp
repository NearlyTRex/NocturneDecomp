// Name: core_bugs.cpp_FUN_00427a30
// Address: 00427a30
// Address Range: [[00427a30, 00427b31]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00427a30(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_FUN_00427a30(CBugs *this_ptr)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *point;
  int iVar7;
  
  puVar1 = &this_ptr->field_0xc278;
  if (&this_ptr->field_0x19d78 != puVar1) {
    *(uint *)&this_ptr->field_0x19d78 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x19d7c = *(uint *)&this_ptr->field_0xc27c;
    *(uint *)&this_ptr->field_0x19d80 = *(uint *)&this_ptr->field_0xc280;
  }
  if (&this_ptr->field_0x19d84 != puVar1) {
    *(uint *)&this_ptr->field_0x19d84 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x19d88 = *(uint *)&this_ptr->field_0xc27c;
    *(uint *)&this_ptr->field_0x19d8c = *(uint *)&this_ptr->field_0xc280;
  }
  iVar7 = 1;
  if (1 < *(int *)&this_ptr->field_0xc26c) {
    point = (CVector3f *)&this_ptr->field_0xc2b8;
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420500
                ((CBoundingBox3D *)&this_ptr->field_0x19d78,point);
      point = (CVector3f *)&point[5].field_0x4;
    } while (iVar7 < *(int *)&this_ptr->field_0xc26c);
  }
  fVar2 = *(float *)&this_ptr->field_0x19d78 + _DAT_005d5170;
  fVar3 = *(float *)&this_ptr->field_0x19d80 + _DAT_005d5170;
  fVar4 = *(float *)&this_ptr->field_0x19d84 + _DAT_005d5174;
  fVar5 = *(float *)&this_ptr->field_0x19d88 + _DAT_005d5174;
  fVar6 = *(float *)&this_ptr->field_0x19d8c + _DAT_005d5174;
  *(float *)&this_ptr->field_0x19d7c = *(float *)&this_ptr->field_0x19d7c + _DAT_005d5170;
  *(float *)&this_ptr->field_0x19d80 = fVar3;
  *(float *)&this_ptr->field_0x19d84 = fVar4;
  *(float *)&this_ptr->field_0x19d88 = fVar5;
  *(float *)&this_ptr->field_0x19d8c = fVar6;
  *(float *)&this_ptr->field_0x19d78 = fVar2;
  return;
}
