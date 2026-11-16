// Name: engine_special.cpp_renderScanlineSwapped_FUN_0056325d
// Address: 0056325d
// Address Range: [[0056325d, 005632a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0056325d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0056325d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_00604d34 = in_EAX;
  _DAT_00604d38 = unaff_EBX;
  _DAT_00604d3c = in_ECX;
  _DAT_00604d40 = in_EDX;
  (*_DAT_01c6b5cc)();
  return;
}
