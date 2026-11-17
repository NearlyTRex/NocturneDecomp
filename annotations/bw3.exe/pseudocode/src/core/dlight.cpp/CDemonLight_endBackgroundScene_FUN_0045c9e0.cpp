// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0
// Address: 0045c9e0
// Address Range: [[0045c9e0, 0045ca2d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  byte **ppuVar3;
  byte **ppuVar4;
  
  g_INT_01b49be0 = g_INT_01b49be0 + -1;
  if (g_INT_01b49be0 != 0) {
    return;
  }
  g_INT_01b49be0 = 0;
  ppuVar3 = g_ARRAY_PTR_01b49be4;
  ppuVar4 = g_ARRAY_PTR_01c5faec;
  for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *ppuVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)ppuVar4 = *(byte *)ppuVar3;
    ppuVar3 = (byte **)((int)ppuVar3 + 1);
    ppuVar4 = (byte **)((int)ppuVar4 + 1);
  }
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(g_CDemonRenderer_PTR_005f2afc,0);
  return;
}
