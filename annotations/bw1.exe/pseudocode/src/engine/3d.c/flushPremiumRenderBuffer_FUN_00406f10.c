// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10
// Address: 00406f10
// Address Range: [[00406f10, 004070d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f10(void)

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
  if (DAT_00713af8 != 0) {
    if (0 < DAT_00713afc) {
      puVar5 = &DAT_00713b00;
      iVar3 = DAT_00713afc * 4;
      iVar2 = 0;
      do {
        *(byte **)(iVar2 + 0x7be960) = puVar5;
        iVar2 = iVar2 + 4;
        puVar5 = puVar5 + 0x118;
      } while (iVar2 < iVar3);
    }
    _qsort(0x7be960,DAT_00713afc,4,&UNK_00406ed0);
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
      }
      else {
        _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
      }
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d18 = 1;
    iStack_c = 0;
    _DAT_01c51d14 = 0x1e7;
    if (0 < DAT_00713afc) {
      iStack_10 = 0;
      do {
        piVar1 = *(int **)(iStack_10 + 0x7be960);
        iVar3 = 0;
        if (0 < *piVar1) {
          piVar6 = piVar1;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            piVar8 = &DAT_00629014 + iVar3 * 0xc;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            *(ushort *)(&DAT_00629040 + iVar3 * 0xc) =
                 *(ushort *)(&DAT_00629040 + iVar3 * 0xc) ^ 0xffff;
            *(int *)((int)&DAT_00713a98 + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_00597aa0(piVar1 + 0x31);
        _DAT_01c51d0c = piVar1[0x44];
        DAT_0061b4b8 = piVar1[0x43];
        engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*piVar1,&DAT_00713a98);
        iStack_10 = iStack_10 + 4;
        iStack_c = iStack_c + 1;
      } while (iStack_c < DAT_00713afc);
    }
    DAT_00713afc = 0;
    DAT_00713af8 = 0;
    engine_3d_c_setBlendMode_FUN_00406c20(0);
  }
  return;
}
