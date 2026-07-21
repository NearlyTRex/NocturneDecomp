// Name: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
// Address: 004f3fc0
// Address Range: [[004f3fc0, 004f3fdc]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(int param_1,uint param_2)

{
  _strncpy(param_1,param_2,0x13);
  *(byte *)(param_1 + 0x13) = 0;
  return;
}
