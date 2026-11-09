// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30
// Address: 00406f30
// Address Range: [[00406f30, 004070f0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)

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
  if (DAT_00730478 != 0) {
    if (0 < DAT_0073047c) {
      puVar5 = &DAT_00730480;
      iVar3 = DAT_0073047c * 4;
      iVar2 = 0;
      do {
        *(byte **)(iVar2 + 0x7db2e0) = puVar5;
        iVar2 = iVar2 + 4;
        puVar5 = puVar5 + 0x118;
      } while (iVar2 < iVar3);
    }
    _qsort(0x7db2e0,DAT_0073047c,4,&UNK_00406ef0);
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b8 = 1;
    iStack_c = 0;
    _DAT_01c6e2b4 = 0x1e7;
    if (0 < DAT_0073047c) {
      iStack_10 = 0;
      do {
        piVar1 = *(int **)(iStack_10 + 0x7db2e0);
        iVar3 = 0;
        if (0 < *piVar1) {
          piVar6 = piVar1;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            piVar8 = &DAT_0060b014 + iVar3 * 0xc;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            *(ushort *)(&DAT_0060b040 + iVar3 * 0xc) =
                 *(ushort *)(&DAT_0060b040 + iVar3 * 0xc) ^ 0xffff;
            *(int *)((int)&DAT_00730418 + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_0056aa90(piVar1 + 0x31);
        _DAT_01c6e2ac = piVar1[0x44];
        DAT_005fba38 = piVar1[0x43];
        engine_clipper_c_clipAndRasterize_FUN_0043a840(*piVar1,&DAT_00730418);
        iStack_10 = iStack_10 + 4;
        iStack_c = iStack_c + 1;
      } while (iStack_c < DAT_0073047c);
    }
    DAT_0073047c = 0;
    DAT_00730478 = 0;
    engine_3d_c_FUN_00406c40(0);
  }
  return;
}
