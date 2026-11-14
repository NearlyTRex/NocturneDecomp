// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0
// Address: 004406d0
// Address Range: [[004406d0, 0044075f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_004406d0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_004406d0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b65f98 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset((void *)0xaf5218,_DAT_00b65f98 & 0xff,0x12c00);
  if (1 < _DAT_01465928) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00442710(this_ptr,_DAT_01465920,_DAT_01465924);
    return;
  }
  if (_DAT_013083cc == 0) {
    return;
  }
  _memcpy(&DAT_01326d20,(void *)0x1339920,0x12c00);
  _DAT_013083cc = 0;
  return;
}
