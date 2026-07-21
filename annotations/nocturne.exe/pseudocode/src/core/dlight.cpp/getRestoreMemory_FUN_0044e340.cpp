// Name: core_dlight.cpp_getRestoreMemory_FUN_0044e340
// Address: 0044e340
// Address Range: [[0044e340, 0044e3a7]]
// Convention: __cdecl
// Signature: uint __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int param_1)

{
  int iVar1;
  
  if (0x300060U - param_1 < _DAT_01ab99ec) {
    _DAT_01cc4800 = "@..\\core\\dlight.cpp" + 1;
    _DAT_01cc4804 = 0xa3;
    FUN_004c8440("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01ab99ec * 2;
  _DAT_01ab99ec = _DAT_01ab99ec + param_1 + 8;
  return iVar1 + 0x14b9934U & 0xfffffff0;
}
