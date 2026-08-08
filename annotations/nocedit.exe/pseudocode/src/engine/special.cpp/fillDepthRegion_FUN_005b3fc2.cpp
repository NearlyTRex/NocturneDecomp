// Name: engine_special.cpp_fillDepthRegion_FUN_005b3fc2
// Address: 005b3fc2
// Address Range: [[005b3fc2, 005b4030]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_fillDepthRegion_FUN_005b3fc2(int left,int right,int top,int bottom)

#include "nocturne.h"

void __cdecl engine_special_cpp_fillDepthRegion_FUN_005b3fc2(int left,int right,int top,int bottom)

{
  bool bVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  
  dVar2 = g_BufferFillZeroQword;
  if (g_UseExternalRenderer != 0) {
    engine_special_cpp_clearZBox_FUN_005b7c00(left,right,top,bottom);
    return;
  }
  do {
    pdVar4 = (double *)((uint)(g_ZBufferScanlineArray[top] + left) & 0xfffffff8);
    uVar3 = (right - left) + 1U >> 1;
    do {
      *pdVar4 = dVar2;
      pdVar4 = pdVar4 + 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    top = top + 1;
  } while ((uint)top <= (uint)bottom);
  g_BufferFillFpuPopST0 = dVar2;
  return;
}
