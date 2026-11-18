// Name: engine_mini3d.cpp_setAlpha_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edb73]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAlpha_FUN_004edaf0(float alpha)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setAlpha_FUN_004edaf0(float alpha)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  g_FLOAT_01d76c40 = alpha;
  if ((g_APIDLL_setLightConstants != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_APIDLL_setLightConstants)(g_FLOAT_01d76cc8,g_INT_01d76ccc,g_INT_01d76cd0,alpha);
  }
  iVar2 = g_INT_01d7a6c4;
  fVar1 = alpha * 255.0f;
  dVar3 = round((double)(alpha * (float)255));
  dVar4 = round((double)fVar1);
  g_INT_005fba38 = (int)ROUND(dVar4);
  g_INT_01d7a6c4 = iVar2 & 0xffffffU | (int)ROUND(dVar3) << 0x18;
  return;
}
