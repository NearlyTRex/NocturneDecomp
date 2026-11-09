// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_004070e0
// Address: 004070e0
// Address Range: [[004070e0, 004072a0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  byte bVar9;
  int iStack_10;
  int iStack_c;
  
  bVar9 = 0;
  if (DAT_0070caf8 != 0) {
    if (0 < DAT_0070cafc) {
      puVar5 = &DAT_0070cb00;
      iVar3 = DAT_0070cafc * 4;
      iVar2 = 0;
      do {
        *(byte **)(iVar2 + 0x7b7960) = puVar5;
        iVar2 = iVar2 + 4;
        puVar5 = puVar5 + 0x118;
      } while (iVar2 < iVar3);
    }
    _qsort(0x7b7960,DAT_0070cafc,4,&UNK_004070a0);
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    _DAT_01c38b58 = 1;
    iStack_c = 0;
    _DAT_01c38b54 = 0x1e7;
    if (0 < DAT_0070cafc) {
      iStack_10 = 0;
      do {
        piVar1 = *(int **)(iStack_10 + 0x7b7960);
        iVar3 = 0;
        if (0 < *piVar1) {
          piVar6 = piVar1;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            piVar8 = &DAT_00622014 + iVar3 * 0xc;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            *(ushort *)(&DAT_00622040 + iVar3 * 0xc) =
                 *(ushort *)(&DAT_00622040 + iVar3 * 0xc) ^ 0xffff;
            *(int *)((int)&DAT_0070ca98 + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_00574e80(piVar1 + 0x31);
        _DAT_01c38b4c = piVar1[0x44];
        DAT_006141d8 = piVar1[0x43];
        engine_clipper_c_clipAndRasterize_FUN_00431d90(*piVar1,&DAT_0070ca98);
        iStack_10 = iStack_10 + 4;
        iStack_c = iStack_c + 1;
      } while (iStack_c < DAT_0070cafc);
    }
    DAT_0070cafc = 0;
    DAT_0070caf8 = 0;
    engine_3d_c_FUN_00406df0(0);
  }
  return;
}
