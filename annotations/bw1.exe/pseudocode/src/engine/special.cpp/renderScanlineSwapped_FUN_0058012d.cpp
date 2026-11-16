// Name: engine_special.cpp_renderScanlineSwapped_FUN_0058012d
// Address: 0058012d
// Address Range: [[0058012d, 00580172]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0058012d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0058012d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_00623df4 = in_EAX;
  _DAT_00623df8 = unaff_EBX;
  _DAT_00623dfc = in_ECX;
  _DAT_00623e00 = in_EDX;
  (*_DAT_01c4f02c)();
  return;
}
