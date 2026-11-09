// Name: core_stranger.cpp_FUN_0058a010
// Address: 0058a010
// Address Range: [[0058a010, 0058a31b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0058a010(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_0058a010(CStranger *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_2c;
  
  *(uint *)&this_ptr->field_0x20054 = 0;
  *(uint *)&this_ptr->field_0x20050 = *(uint *)&this_ptr->field_0x20054;
  *(uint *)&this_ptr->field_0x2004c = *(uint *)&this_ptr->field_0x20050;
  fVar4 = (float)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0);
  if ((fVar4 <= 0.0) || (1.0 <= *(float *)&this_ptr->field_0x20028)) {
    *(uint *)&this_ptr->field_0x20024 = 0;
    *(uint *)&this_ptr->field_0x20058 = 0xffffffff;
    *(uint *)&this_ptr->field_0x2002c = 0;
    *(uint *)&this_ptr->field_0x20030 = 0;
    *(uint *)&this_ptr->field_0x20028 = 0;
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * delta_time * (float)_DAT_005f6ae1;
    if (fVar4 <= ABS(*(float *)&this_ptr->field_0x20024)) {
      if (0.0 <= *(float *)&this_ptr->field_0x20024) {
        *(float *)&this_ptr->field_0x20024 = *(float *)&this_ptr->field_0x20024 - fVar4;
      }
      else {
        *(float *)&this_ptr->field_0x20024 = *(float *)&this_ptr->field_0x20024 + fVar4;
      }
    }
    else {
      *(uint *)&this_ptr->field_0x20024 = 0;
    }
  }
  iVar1 = *(int *)&this_ptr->field_0x20058;
  *(uint *)&this_ptr->field_0x20058 = _DAT_02c83650;
  if (*(float *)&this_ptr->field_0x20024 < 0.0) {
    *(uint *)&this_ptr->field_0x20058 = _DAT_02c83654;
  }
  if (*(float *)&this_ptr->field_0x20028 <= (float)_DAT_005f6ae9) {
    *(uint *)&this_ptr->field_0x20030 = 0;
  }
  else {
    *(float *)&this_ptr->field_0x20030 = *(float *)&this_ptr->field_0x20030 + delta_time;
  }
  if ((*(float *)&this_ptr->field_0x2002c <= 0.0) &&
     (((float)_DAT_005f6af1 <= *(float *)&this_ptr->field_0x20028 ||
      (1.0 < *(float *)&this_ptr->field_0x20030)))) {
    *(float *)&this_ptr->field_0x2002c = (1.0 - *(float *)&this_ptr->field_0x20028) * 1.6;
  }
  if (*(float *)&this_ptr->field_0x2002c <= 0.0) {
    local_2c = ABS(*(float *)&this_ptr->field_0x20024 * _DAT_005f6af9);
    if (iVar1 != *(int *)&this_ptr->field_0x20058) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar4 = (local_2c - *(float *)&this_ptr->field_0x20028) + *(float *)&this_ptr->field_0x20028;
    *(float *)&this_ptr->field_0x20028 = fVar4;
    if ((float)_DAT_005f6b01 < fVar4) {
      *(int *)&this_ptr->field_0x20058 = iVar1;
      return;
    }
  }
  else {
    fVar4 = *(float *)&this_ptr->field_0x2002c;
    fVar2 = fVar4 - delta_time;
    *(float *)&this_ptr->field_0x2002c = fVar2;
    if (0.0 < fVar2) {
      fVar4 = delta_time / fVar4;
    }
    else {
      fVar4 = 1.0 - *(float *)&this_ptr->field_0x20028;
      *(uint *)&this_ptr->field_0x2002c = 0;
    }
    fVar2 = *(float *)&this_ptr->field_0x20028;
    fVar3 = fVar2 + fVar4;
    *(float *)&this_ptr->field_0x20028 = fVar3;
    if (fVar3 < 1.0) {
      *(float *)&this_ptr->field_0x20024 =
           *(float *)&this_ptr->field_0x20024 -
           (*(float *)&this_ptr->field_0x20024 * fVar4) / (1.0 - fVar2);
      return;
    }
    *(uint *)&this_ptr->field_0x20024 = 0;
    *(uint *)&this_ptr->field_0x2002c = 0;
    *(uint *)&this_ptr->field_0x20030 = 0;
    *(uint *)&this_ptr->field_0x20028 = 0x3f800000;
  }
  return;
}
