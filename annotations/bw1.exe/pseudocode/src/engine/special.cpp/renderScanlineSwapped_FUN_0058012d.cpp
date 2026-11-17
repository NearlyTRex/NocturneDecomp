// Name: engine_special.cpp_renderScanlineSwapped_FUN_0058012d
// Address: 0058012d
// Address Range: [[0058012d, 00580172]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0058012d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0058012d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  g_INT_00623df4 = in_EAX;
  g_INT_00623df8 = unaff_EBX;
  g_INT_00623dfc = in_ECX;
  g_INT_00623e00 = in_EDX;
  (*(code *)g_ScanlineRenderFunc)();
  return;
}
