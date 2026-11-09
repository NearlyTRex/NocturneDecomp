// Name: core_stranger.cpp_FUN_00567530
// Address: 00567530
// Address Range: [[00567530, 0056783b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00567530(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00567530(CStranger *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_2c;
  
  *(uint *)&this_ptr->field_0x256ec = 0;
  *(uint *)&this_ptr->field_0x256e8 = *(uint *)&this_ptr->field_0x256ec;
  *(uint *)&this_ptr->field_0x256e4 = *(uint *)&this_ptr->field_0x256e8;
  fVar4 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,0);
  if ((fVar4 <= 0.0) || (1.0 <= *(float *)&this_ptr->field_0x256c0)) {
    *(uint *)&this_ptr->field_0x256bc = 0;
    *(uint *)&this_ptr->field_0x256f0 = 0xffffffff;
    *(uint *)&this_ptr->field_0x256c4 = 0;
    *(uint *)&this_ptr->field_0x256c8 = 0;
    *(uint *)&this_ptr->field_0x256c0 = 0;
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * delta_time * (float)_DAT_005eb86d;
    if (fVar4 <= ABS(*(float *)&this_ptr->field_0x256bc)) {
      if (0.0 <= *(float *)&this_ptr->field_0x256bc) {
        *(float *)&this_ptr->field_0x256bc = *(float *)&this_ptr->field_0x256bc - fVar4;
      }
      else {
        *(float *)&this_ptr->field_0x256bc = *(float *)&this_ptr->field_0x256bc + fVar4;
      }
    }
    else {
      *(uint *)&this_ptr->field_0x256bc = 0;
    }
  }
  iVar1 = *(int *)&this_ptr->field_0x256f0;
  *(uint *)&this_ptr->field_0x256f0 = _DAT_0264be80;
  if (*(float *)&this_ptr->field_0x256bc < 0.0) {
    *(uint *)&this_ptr->field_0x256f0 = _DAT_0264be84;
  }
  if (*(float *)&this_ptr->field_0x256c0 <= (float)_DAT_005eb875) {
    *(uint *)&this_ptr->field_0x256c8 = 0;
  }
  else {
    *(float *)&this_ptr->field_0x256c8 = *(float *)&this_ptr->field_0x256c8 + delta_time;
  }
  if ((*(float *)&this_ptr->field_0x256c4 <= 0.0) &&
     (((float)_DAT_005eb87d <= *(float *)&this_ptr->field_0x256c0 ||
      (1.0 < *(float *)&this_ptr->field_0x256c8)))) {
    *(float *)&this_ptr->field_0x256c4 = (1.0 - *(float *)&this_ptr->field_0x256c0) * 1.6;
  }
  if (*(float *)&this_ptr->field_0x256c4 <= 0.0) {
    local_2c = ABS(*(float *)&this_ptr->field_0x256bc * _DAT_005eb885);
    if (iVar1 != *(int *)&this_ptr->field_0x256f0) {
      local_2c = 0.0;
    }
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
    fVar4 = (local_2c - *(float *)&this_ptr->field_0x256c0) + *(float *)&this_ptr->field_0x256c0;
    *(float *)&this_ptr->field_0x256c0 = fVar4;
    if ((float)_DAT_005eb88d < fVar4) {
      *(int *)&this_ptr->field_0x256f0 = iVar1;
      return;
    }
  }
  else {
    fVar4 = *(float *)&this_ptr->field_0x256c4;
    fVar2 = fVar4 - delta_time;
    *(float *)&this_ptr->field_0x256c4 = fVar2;
    if (0.0 < fVar2) {
      fVar4 = delta_time / fVar4;
    }
    else {
      fVar4 = 1.0 - *(float *)&this_ptr->field_0x256c0;
      *(uint *)&this_ptr->field_0x256c4 = 0;
    }
    fVar2 = *(float *)&this_ptr->field_0x256c0;
    fVar3 = fVar2 + fVar4;
    *(float *)&this_ptr->field_0x256c0 = fVar3;
    if (fVar3 < 1.0) {
      *(float *)&this_ptr->field_0x256bc =
           *(float *)&this_ptr->field_0x256bc -
           (*(float *)&this_ptr->field_0x256bc * fVar4) / (1.0 - fVar2);
      return;
    }
    *(uint *)&this_ptr->field_0x256bc = 0;
    *(uint *)&this_ptr->field_0x256c4 = 0;
    *(uint *)&this_ptr->field_0x256c8 = 0;
    *(uint *)&this_ptr->field_0x256c0 = 0x3f800000;
  }
  return;
}
