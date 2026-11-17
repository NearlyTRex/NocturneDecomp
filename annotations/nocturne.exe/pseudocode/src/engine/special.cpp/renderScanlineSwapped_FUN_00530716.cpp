// Name: engine_special.cpp_renderScanlineSwapped_FUN_00530716
// Address: 00530716
// Address Range: [[00530716, 0053075b]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_00530716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_00530716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  g_INT_005bf4a4 = in_EAX;
  g_INT_005bf4a8 = unaff_EBX;
  g_INT_005bf4ac = in_ECX;
  g_INT_005bf4b0 = in_EDX;
  (*g_ScanlineRenderFunc)((SSoftwareEdge *)left,(SSoftwareEdge *)right,scanline_y);
  return;
}
