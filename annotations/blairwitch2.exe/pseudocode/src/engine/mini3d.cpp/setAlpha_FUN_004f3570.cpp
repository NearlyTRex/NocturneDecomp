// Name: engine_mini3d.cpp_setAlpha_FUN_004f3570
// Address: 004f3570
// Address Range: [[004f3570, 004f35f3]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAlpha_FUN_004f3570(float alpha)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setAlpha_FUN_004f3570(float alpha)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  g_FLOAT_01d09860 = alpha;
  if ((g_PTR_0264bc78 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_PTR_0264bc78)(g_FLOAT_01d098e4,g_INT_01d098e8,g_INT_01d098ec,alpha);
  }
  iVar2 = g_INT_01d0d2e4;
  fVar1 = alpha * 255.0f;
  dVar3 = round((double)(alpha * (float)255));
  dVar4 = round((double)fVar1);
  g_INT_006141d8 = (int)ROUND(dVar4);
  g_INT_01d0d2e4 = iVar2 & 0xffffffU | (int)ROUND(dVar3) << 0x18;
  return;
}
