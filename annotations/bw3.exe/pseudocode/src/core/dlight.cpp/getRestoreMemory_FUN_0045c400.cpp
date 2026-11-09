// Name: core_dlight.cpp_getRestoreMemory_FUN_0045c400
// Address: 0045c400
// Address Range: [[0045c400, 0045c467]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0045c400(int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0045c400(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < _DAT_01b49bdc) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0xa3;
    core_main_c_FUN_004e4330("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01b49bdc * 2;
  _DAT_01b49bdc = _DAT_01b49bdc + pixel_count + 8;
  return (void *)(iVar1 + 0x1549b24U & 0xfffffff0);
}
