// Name: engine_special.cpp_setColorTable16_FUN_005822e0
// Address: 005822e0
// Address Range: [[005822e0, 0058230e]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setColorTable16_FUN_005822e0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_setColorTable16_FUN_005822e0(void)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833fc)(g_UCHAR_ARRAY_01c4e9f8,g_USHORT_ARRAY_01c4dad0);
  if (iVar1 != 0) {
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
  }
  return iVar1;
}
