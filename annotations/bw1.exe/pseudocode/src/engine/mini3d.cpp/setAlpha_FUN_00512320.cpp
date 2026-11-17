// Name: engine_mini3d.cpp_setAlpha_FUN_00512320
// Address: 00512320
// Address Range: [[00512320, 005123a3]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAlpha_FUN_00512320(float alpha)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setAlpha_FUN_00512320(float alpha)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  g_FLOAT_01d224c0 = alpha;
  if ((g_PTR_02c83448 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83448)(g_FLOAT_01d22548,g_INT_01d2254c,g_INT_01d22550,alpha);
  }
  iVar2 = g_INT_01d25f44;
  fVar1 = alpha * 255.0f;
  dVar3 = round((double)(alpha * (float)255));
  dVar4 = round((double)fVar1);
  g_CurrentAlphaValue = (int)ROUND(dVar4);
  g_INT_01d25f44 = iVar2 & 0xffffffU | (int)ROUND(dVar3) << 0x18;
  return;
}
