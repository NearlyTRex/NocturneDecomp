// Name: engine_mini3d.cpp_clear_FUN_00511180
// Address: 00511180
// Address Range: [[00511180, 00511194]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_clear_FUN_00511180(void)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_clear_FUN_00511180(void)

{
  int extraout_EAX;
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    engine_special_cpp_clearScreen_FUN_0057dc40();
    return extraout_EAX;
  }
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_clear)();
  return iVar1;
}
