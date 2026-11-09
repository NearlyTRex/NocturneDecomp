// Name: core_dlight.cpp_getRestoreMemory_FUN_004626f0
// Address: 004626f0
// Address Range: [[004626f0, 00462757]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < _DAT_01b2d370) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xa3;
    core_main_c_FUN_005030e0("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01b2d370 * 2;
  _DAT_01b2d370 = _DAT_01b2d370 + pixel_count + 8;
  return (void *)(iVar1 + 0x152d2b8U & 0xfffffff0);
}
