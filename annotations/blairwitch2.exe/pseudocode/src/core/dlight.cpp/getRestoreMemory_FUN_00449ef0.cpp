// Name: core_dlight.cpp_getRestoreMemory_FUN_00449ef0
// Address: 00449ef0
// Address Range: [[00449ef0, 00449f57]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_00449ef0(int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_00449ef0(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < _DAT_01b11db0) {
    _DAT_01d046a0 = "..\\core\\dlight.cpp";
    _DAT_01d046a4 = 0xa4;
    core_main_c_FUN_004e4500("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01b11db0 * 2;
  _DAT_01b11db0 = _DAT_01b11db0 + pixel_count + 8;
  return (void *)(iVar1 + 0x1511cf8U & 0xfffffff0);
}
