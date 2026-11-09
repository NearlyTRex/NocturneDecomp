// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_0043fb20
// Address: 0043fb20
// Address Range: [[0043fb20, 0043fcdc]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0043fb20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0043fb20(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)

{
  byte bVar1;
  byte uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  uint uVar7;
  SSoftwareEdge *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_18;
  uint *puStack_14;
  
  uVar7 = scanline_y - _DAT_01c35e4c;
  if (((_DAT_01308800 != 1) || ((uVar7 & 1) == 0)) && ((_DAT_01308800 != 2 || ((uVar7 & 3) == 0))))
  {
    iVar10 = (*(int *)(right + 8) >> 0x10) - _DAT_01c35e48;
    iStack_18 = (*(int *)(left + 8) >> 0x10) - _DAT_01c35e48;
    pSVar8 = left;
    iVar11 = iVar10;
    if (iStack_18 < iVar10) {
      pSVar8 = right;
      right = left;
      iVar11 = iStack_18;
      iStack_18 = iVar10;
    }
    iVar10 = *(int *)(right + 0x28);
    puStack_14 = (uint *)(*(int *)(&DAT_01c2b64c + uVar7 * 4) + iVar11 * 4);
    iStack_18 = iStack_18 >> (DAT_01308800 & 0x1f);
    iVar11 = iVar11 >> (DAT_01308800 & 0x1f);
    iVar3 = (*(int *)(pSVar8 + 0x28) - iVar10) / ((iStack_18 - iVar11) + 1);
    uVar2 = (byte)
            ((_DAT_0150f450 + (_DAT_0150f450 >> 0x1f) * -0x100) -
             (uint)((_DAT_0150f450 >> 0x1f) << 7 < 0) >> 8);
    iVar4 = ((int)uVar7 >> (DAT_01308800 & 0x1f)) * 0x140;
    if (_DAT_01465928 < 2) {
      puVar6 = &DAT_01326d20 + iVar11 + iVar4;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if (*puStack_14 < (uint)(iVar10 >> 8)) {
          *puVar6 = uVar2;
        }
        iVar10 = iVar10 + iVar3;
        puVar6 = puVar6 + 1;
        puStack_14 = puStack_14 + (1 << (DAT_01308800 & 0x1f));
      }
    }
    else {
      bVar1 = DAT_01308800 & 0x1f;
      for (; iVar11 < iStack_18; iVar11 = iVar11 + 1) {
        if ((*puStack_14 < (uint)(iVar10 >> 8)) && (iVar9 = 0, 0 < _DAT_01465928)) {
          iVar5 = iVar4 + iVar11;
          do {
            iVar9 = iVar9 + 1;
            *(byte *)(iVar5 + 0x1339920) = uVar2;
            iVar5 = iVar5 + 0x12c00;
          } while (iVar9 < _DAT_01465928);
        }
        puStack_14 = puStack_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}
