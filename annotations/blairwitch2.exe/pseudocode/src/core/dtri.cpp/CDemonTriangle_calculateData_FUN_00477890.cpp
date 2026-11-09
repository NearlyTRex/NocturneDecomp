// Name: core_dtri.cpp_CDemonTriangle_calculateData_FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 004779db]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_00477890(CDemonTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_00477890(CDemonTriangle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_c;
  
  fVar2 = *(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4;
  fVar1 = *(float *)&this_ptr->field_0x20 - *(float *)&this_ptr->field_0x14;
  fVar4 = *(float *)&this_ptr->field_0x14 - *(float *)&this_ptr->field_0x8;
  fVar7 = *(float *)&this_ptr->field_0x18 - *(float *)&this_ptr->field_0xc;
  fVar6 = *(float *)&this_ptr->field_0xc - *(float *)this_ptr;
  fVar5 = *(float *)&this_ptr->field_0x1c - *(float *)&this_ptr->field_0x10;
  fVar3 = fVar2 * fVar1 - fVar5 * fVar4;
  fVar4 = fVar7 * fVar4 - fVar6 * fVar1;
  *(float *)&this_ptr->field_0x24 = fVar3;
  *(float *)&this_ptr->field_0x28 = fVar4;
  fVar1 = fVar6 * fVar5 - fVar7 * fVar2;
  *(float *)&this_ptr->field_0x2c = fVar1;
  local_c = SQRT(fVar1 * *(float *)&this_ptr->field_0x2c +
                 fVar4 * *(float *)&this_ptr->field_0x28 + fVar3 * *(float *)&this_ptr->field_0x24);
  if (ABS(local_c) == 0.0) {
    local_c = 1.0;
  }
  local_c = 1.0 / local_c;
  fVar2 = -*(float *)&this_ptr->field_0x28 * local_c;
  *(float *)&this_ptr->field_0x28 = fVar2;
  fVar1 = -*(float *)&this_ptr->field_0x24 * local_c;
  *(float *)&this_ptr->field_0x24 = fVar1;
  fVar1 = ABS(fVar1);
  *(float *)&this_ptr->field_0x2c = -*(float *)&this_ptr->field_0x2c * local_c;
  *(float *)&this_ptr->field_0x30 =
       (-(*(float *)this_ptr * *(float *)&this_ptr->field_0x24) -
       *(float *)&this_ptr->field_0x4 * *(float *)&this_ptr->field_0x28) -
       *(float *)&this_ptr->field_0x8 * *(float *)&this_ptr->field_0x2c;
  if ((ABS(fVar2) < fVar1) && (ABS(*(float *)&this_ptr->field_0x2c) < fVar1)) {
    *(uint *)&this_ptr->field_0x34 = 0;
    return;
  }
  if ((ABS(*(float *)&this_ptr->field_0x24) < ABS(*(float *)&this_ptr->field_0x28)) &&
     (ABS(*(float *)&this_ptr->field_0x2c) < ABS(*(float *)&this_ptr->field_0x28))) {
    *(uint *)&this_ptr->field_0x34 = 1;
    return;
  }
  *(uint *)&this_ptr->field_0x34 = 2;
  return;
}
