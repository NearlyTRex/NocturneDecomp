// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_0044ded0
// Address: 0044ded0
// Address Range: [[0044ded0, 0044df5f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b9dd48 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset((void *)0xb2cfc8,_DAT_00b9dd48 & 0xff,0x12c00);
  if (1 < _DAT_0149d6d8) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_0044ff10(this_ptr,_DAT_0149d6d0,_DAT_0149d6d4);
    return;
  }
  if (_DAT_0134017c == 0) {
    return;
  }
  _memcpy(&DAT_0135ead0,(void *)0x13716d0,0x12c00);
  _DAT_0134017c = 0;
  return;
}
