// Name: core_box.cpp_CBox_setupCorners_FUN_0041ae00
// Address: 0041ae00
// Address Range: [[0041ae00, 0041b02d]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041ae00(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041ae00(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((CVector3f *)(this_ptr + 0xa4) != extents) {
    *(uint *)(this_ptr + 0xa4) = *(uint *)extents;
    *(uint *)(this_ptr + 0xa8) = *(uint *)&extents->field_0x4;
    *(uint *)(this_ptr + 0xac) = *(uint *)&extents->field_0x8;
  }
  fVar1 = (float)_DAT_005b7331;
  fVar2 = (float)_DAT_005b7331;
  fVar3 = (float)_DAT_005b7331;
  fVar4 = (float)_DAT_005b7331;
  fVar5 = (float)_DAT_005b7331;
  fVar6 = (float)_DAT_005b7331;
  *(uint *)(this_ptr + 0xb0) = 8;
  fVar7 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0xb4) = *(float *)(this_ptr + 0xa4) * fVar1;
  fVar1 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0xb8) = -*(float *)(this_ptr + 0xa8) * fVar7;
  fVar7 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0xbc) = *(float *)(this_ptr + 0xac) * fVar2;
  fVar2 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0xe8) = -*(float *)(this_ptr + 0xa4) * fVar7;
  fVar7 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0xec) = -*(float *)(this_ptr + 0xa8) * fVar2;
  fVar2 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0xf0) = *(float *)(this_ptr + 0xac) * fVar3;
  fVar3 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x11c) = -*(float *)(this_ptr + 0xa4) * fVar2;
  fVar2 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x120) = -*(float *)(this_ptr + 0xa8) * fVar3;
  fVar3 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x150) = *(float *)(this_ptr + 0xa4) * fVar4;
  fVar4 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x184) = *(float *)(this_ptr + 0xa4) * fVar5;
  fVar5 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x188) = *(float *)(this_ptr + 0xa8) * fVar6;
  fVar6 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x18c) = *(float *)(this_ptr + 0xac) * fVar1;
  fVar1 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x1bc) = *(float *)(this_ptr + 0xa8) * fVar7;
  fVar7 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x1c0) = *(float *)(this_ptr + 0xac) * fVar5;
  fVar5 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x1f0) = *(float *)(this_ptr + 0xa8) * fVar6;
  *(float *)(this_ptr + 0x124) = -*(float *)(this_ptr + 0xac) * fVar2;
  *(float *)(this_ptr + 0x154) = -*(float *)(this_ptr + 0xa8) * fVar3;
  *(float *)(this_ptr + 0x158) = -*(float *)(this_ptr + 0xac) * fVar4;
  *(float *)(this_ptr + 0x1b8) = -*(float *)(this_ptr + 0xa4) * fVar1;
  *(float *)(this_ptr + 0x1ec) = -*(float *)(this_ptr + 0xa4) * fVar7;
  *(float *)(this_ptr + 500) = -*(float *)(this_ptr + 0xac) * fVar5;
  fVar1 = (float)_DAT_005b7331;
  *(float *)(this_ptr + 0x220) = *(float *)(this_ptr + 0xa4) * fVar1;
  *(float *)(this_ptr + 0x224) = *(float *)(this_ptr + 0xa8) * fVar1;
  *(float *)(this_ptr + 0x228) = -*(float *)(this_ptr + 0xac) * fVar1;
  core_box_cpp_FUN_0041b1d0(this_ptr,position,orientation,volume);
  return;
}
