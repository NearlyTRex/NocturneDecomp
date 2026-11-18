// Name: engine_mini3d.cpp_clipAgainstPlane3_FUN_004f6690
// Address: 004f6690
// Address Range: [[004f6690, 004f67a8]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_004f6690(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_004f6690(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *from;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  int local_18;
  
  bVar8 = 0;
  local_18 = 0;
  if (0 < g_INT_01d09b90) {
    from = (float *)&DAT_01d0b398;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == g_INT_01d09b90) {
        uVar2 = uVar2 ^ g_INT_01d09b90;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = from[1] <= -from[2];
      if (*(float *)(&DAT_01d0b39c + iVar3) <= -*(float *)(&DAT_01d0b3a0 + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = g_INT_01d09b94 * 0x10;
        g_INT_01d09b94 = g_INT_01d09b94 + 1;
        pfVar6 = from;
        pfVar7 = &g_FLOAT_01d0bb98 + iVar3;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane3_FUN_004f6220
                  ((float *)(&DAT_01d0b398 + iVar3),from,&g_FLOAT_01d0bb98 + g_INT_01d09b94 * 0x10);
        g_INT_01d09b94 = g_INT_01d09b94 + 1;
        break;
      case 2:
        iVar4 = g_INT_01d09b94 * 0x10;
        g_INT_01d09b94 = g_INT_01d09b94 + 1;
        pfVar6 = from;
        pfVar7 = &g_FLOAT_01d0bb98 + iVar4;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane3_FUN_004f6220
                  (from,(float *)(&DAT_01d0b398 + iVar3),&g_FLOAT_01d0bb98 + g_INT_01d09b94 * 0x10);
        g_INT_01d09b94 = g_INT_01d09b94 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < g_INT_01d09b90);
  }
  return;
}
