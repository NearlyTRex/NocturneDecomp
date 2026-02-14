// Name: core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
// Address: 0044bfb0
// Address Range: [[0044bfb0, 0044c02e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid *fog_ptr,int time_major,int time_minor)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid *fog_ptr,int time_major,int time_minor)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = (longlong)(time_major * 0x10000 + time_minor) * 0x100;
  uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)(int)uVar3 * (longlong)(fog_ptr->scroll_vector).x;
  uVar4 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  iVar1 = (fog_ptr->scroll_vector).y;
  (fog_ptr->sampling_offset).x = uVar4;
  (fog_ptr->sampling_offset).x = -uVar4;
  lVar2 = (longlong)(int)uVar3 * (longlong)iVar1;
  uVar4 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  iVar1 = (fog_ptr->scroll_vector).z;
  (fog_ptr->sampling_offset).y = uVar4;
  (fog_ptr->sampling_offset).y = -uVar4;
  lVar2 = (longlong)(int)uVar3 * (longlong)iVar1;
  uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  (fog_ptr->sampling_offset).z = uVar3;
  (fog_ptr->sampling_offset).z = -uVar3;
  return;
}
