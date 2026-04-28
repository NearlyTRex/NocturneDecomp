// Name: wincore_windll.cpp_renderScanlineSwapped_FUN_005b5716
// Address: 005b5716
// Address Range: [[005b5716, 005b575b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderScanlineSwapped_FUN_005b5716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_renderScanlineSwapped_FUN_005b5716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  (*g_ScanlineRenderFunc)((SSoftwareEdge *)left,(SSoftwareEdge *)right,scanline_y);
  return;
}
