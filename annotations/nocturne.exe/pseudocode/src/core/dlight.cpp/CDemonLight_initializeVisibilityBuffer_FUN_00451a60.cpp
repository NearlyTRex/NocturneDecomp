// Name: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60
// Address: 00451a60
// Address Range: [[00451a60, 00451a90]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(int param_1)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar2 = iVar1 >> 0x1f;
  _memset((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
