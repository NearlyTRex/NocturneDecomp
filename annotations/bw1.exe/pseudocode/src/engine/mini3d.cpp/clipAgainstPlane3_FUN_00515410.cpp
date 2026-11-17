// Name: engine_mini3d.cpp_clipAgainstPlane3_FUN_00515410
// Address: 00515410
// Address Range: [[00515410, 00515528]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_00515410(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_00515410(void)

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
  if (0 < g_INT_01d227f4) {
    from = (float *)&DAT_01d23ffc;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == g_INT_01d227f4) {
        uVar2 = uVar2 ^ g_INT_01d227f4;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = from[1] <= -from[2];
      if (*(float *)(&DAT_01d24000 + iVar3) <= -*(float *)(&DAT_01d24004 + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = g_INT_01d227f8 * 0x10;
        g_INT_01d227f8 = g_INT_01d227f8 + 1;
        pfVar6 = from;
        pfVar7 = &g_FLOAT_01d247fc + iVar3;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane3_FUN_00514fa0
                  ((float *)(&DAT_01d23ffc + iVar3),from,&g_FLOAT_01d247fc + g_INT_01d227f8 * 0x10);
        g_INT_01d227f8 = g_INT_01d227f8 + 1;
        break;
      case 2:
        iVar4 = g_INT_01d227f8 * 0x10;
        g_INT_01d227f8 = g_INT_01d227f8 + 1;
        pfVar6 = from;
        pfVar7 = &g_FLOAT_01d247fc + iVar4;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane3_FUN_00514fa0
                  (from,(float *)(&DAT_01d23ffc + iVar3),&g_FLOAT_01d247fc + g_INT_01d227f8 * 0x10);
        g_INT_01d227f8 = g_INT_01d227f8 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < g_INT_01d227f4);
  }
  return;
}
