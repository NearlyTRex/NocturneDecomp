// Name: engine_special.cpp_renderScanlineSwapped_FUN_0055d6dd
// Address: 0055d6dd
// Address Range: [[0055d6dd, 0055d722]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0055d6dd(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0055d6dd(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  g_INT_0061c7a4 = in_EAX;
  g_INT_0061c7a8 = unaff_EBX;
  g_INT_0061c7ac = in_ECX;
  g_INT_0061c7b0 = in_EDX;
  (*(code *)g_ScanlineRenderFunc)();
  return;
}
