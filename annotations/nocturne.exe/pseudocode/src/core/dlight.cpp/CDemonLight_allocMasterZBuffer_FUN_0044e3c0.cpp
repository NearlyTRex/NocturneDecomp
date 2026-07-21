// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0
// Address: 0044e3c0
// Address Range: [[0044e3c0, 0044e437]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    _DAT_01cc4800 = "..\\core\\dlight.cpp";
    _DAT_01cc4804 = 0xcd;
    FUN_004c8440("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  uVar1 = core_dlight_cpp_getRestoreMemory_FUN_0044e340
                    (*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4));
  *(uint *)(param_1 + 0x2f9c) = uVar1;
  _memcpy(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  return;
}
