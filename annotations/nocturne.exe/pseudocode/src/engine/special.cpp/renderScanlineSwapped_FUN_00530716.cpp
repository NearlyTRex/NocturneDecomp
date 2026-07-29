// Name: engine_special.cpp_renderScanlineSwapped_FUN_00530716
// Address: 00530716
// Address Range: [[00530716, 0053075b]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_00530716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_00530716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  uint in_EAX;
  uint in_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  _DAT_005bf4a4 = in_EAX;
  _DAT_005bf4a8 = unaff_EBX;
  _DAT_005bf4ac = in_ECX;
  _DAT_005bf4b0 = in_EDX;
  (*_DAT_01c00c7c)();
  return;
}
