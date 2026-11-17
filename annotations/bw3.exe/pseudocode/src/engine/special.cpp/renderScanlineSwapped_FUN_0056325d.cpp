// Name: engine_special.cpp_renderScanlineSwapped_FUN_0056325d
// Address: 0056325d
// Address Range: [[0056325d, 005632a2]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0056325d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

#include "nocturne.h"

void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_0056325d(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  g_INT_00604d34 = in_EAX;
  g_INT_00604d38 = unaff_EBX;
  g_INT_00604d3c = in_ECX;
  g_INT_00604d40 = in_EDX;
  (*(code *)g_PTR_01c6b5cc)();
  return;
}
