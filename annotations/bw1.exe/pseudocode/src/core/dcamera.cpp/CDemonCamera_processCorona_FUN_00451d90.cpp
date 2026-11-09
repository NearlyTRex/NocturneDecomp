// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451d90
// Address: 00451d90
// Address Range: [[00451d90, 00451e1f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451d90(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451d90(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&this_ptr->field_0x11e8 >> 0x1f;
  iVar1 = (*(int *)&this_ptr->field_0x11e8 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b81498 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset(0x12c00);
  if (1 < _DAT_01480e28) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453dc0(this_ptr,_DAT_01480e20,_DAT_01480e24);
    return;
  }
  if (_DAT_013238cc == 0) {
    return;
  }
  _memcpy(0x12c00);
  _DAT_013238cc = 0;
  return;
}
