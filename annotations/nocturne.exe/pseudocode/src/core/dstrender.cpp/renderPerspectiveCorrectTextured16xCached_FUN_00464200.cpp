// Name: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200
// Address: 00464200
// Address Range: [[00464200, 004649dc]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte uVar8;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte uVar11;
  int iVar9;
  int iVar10;
  uint *puVar12;
  int iVar13;
  SSoftwareEdge *pSVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  
  uVar16 = (right_edge->base).x_current;
  uVar4 = (left_edge->base).x_current;
  uVar3 = uVar16;
  pSVar14 = right_edge;
  if (uVar4 < uVar16) {
    uVar3 = uVar4;
    uVar4 = uVar16;
    pSVar14 = left_edge;
    left_edge = right_edge;
  }
  uVar3 = uVar3 >> 0x10;
  iVar5 = (uVar4 >> 0x10) - uVar3;
  if (iVar5 != 0 && uVar3 <= uVar4 >> 0x10) {
    DAT_005b06e0 = (uint *)((int)g_ScreenBufferArray[scanline_y] + uVar3 * 4);
    DAT_005b06e8 = g_ZBufferScanlineArray[scanline_y] + uVar3;
    DAT_005b0680 = (pSVar14->base).u_current;
    DAT_005b0698 = (left_edge->base).u_current;
    _DAT_005b06a4 =
         (int)((ulonglong)
               ((longlong)(int)(DAT_005b0698 - DAT_005b0680) *
               (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20) << 4;
    DAT_005b0684 = (pSVar14->base).v_current;
    DAT_005b069c = (left_edge->base).v_current;
    _DAT_005b06a8 =
         (int)((ulonglong)
               ((longlong)(int)(DAT_005b069c - DAT_005b0684) *
               (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20) << 4;
    iVar1 = (pSVar14->base).depth_current;
    DAT_005b06a0 = (left_edge->base).depth_current;
    DAT_005b06ac = (int)((ulonglong)
                         ((longlong)(DAT_005b06a0 - iVar1) *
                         (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1]) >> 0x20) << 4;
    DAT_005b06b0 = (int)(CONCAT44(((int)DAT_005b0680 >> 0x1f) << 0x18 | DAT_005b0680 >> 8,
                                  DAT_005b0680 << 0x18) / (longlong)iVar1);
    DAT_005b06b4 = (int)(CONCAT44(((int)DAT_005b0684 >> 0x1f) << 0x18 | DAT_005b0684 >> 8,
                                  DAT_005b0684 << 0x18) / (longlong)iVar1);
    puVar17 = &DAT_005b06ec;
    DAT_005b0688 = iVar1;
    DAT_005b06e4 = iVar5;
    while (uVar8 = (byte)((uint)DAT_005b06b0 >> 0x10),
          uVar11 = (byte)((uint)DAT_005b06b4 >> 0x10), -1 < iVar5 + -0x10) {
      DAT_005b068c = DAT_005b0680 + _DAT_005b06a4;
      DAT_005b0690 = DAT_005b0684 + _DAT_005b06a8;
      DAT_005b0694 = DAT_005b0688 + DAT_005b06ac;
      DAT_005b06b8 = (int)(CONCAT44(((int)DAT_005b068c >> 0x1f) << 0x18 | DAT_005b068c >> 8,
                                    DAT_005b068c * 0x1000000) / (longlong)DAT_005b0694);
      DAT_005b06bc = (int)(CONCAT44(((int)DAT_005b0690 >> 0x1f) << 0x18 | DAT_005b0690 >> 8,
                                    DAT_005b0690 * 0x1000000) / (longlong)DAT_005b0694);
      iVar15 = DAT_005b06b8 - DAT_005b06b0 >> 0xc;
      iVar13 = DAT_005b06bc - DAT_005b06b4 >> 0xc;
      iVar6 = (DAT_005b06b0 >> 8) + iVar15;
      iVar9 = (DAT_005b06b4 >> 8) + iVar13;
      *puVar17 = g_Hardware32BitPalette[g_CurrentTextureData[CONCAT11(uVar11,uVar8)]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[1] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      iVar6 = iVar7 + iVar15;
      iVar9 = iVar10 + iVar13;
      puVar17[2] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[3] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      iVar6 = iVar7 + iVar15;
      iVar9 = iVar10 + iVar13;
      puVar17[4] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[5] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      iVar6 = iVar7 + iVar15;
      iVar9 = iVar10 + iVar13;
      puVar17[6] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[7] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      iVar6 = iVar7 + iVar15;
      iVar9 = iVar10 + iVar13;
      puVar17[8] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[9] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      iVar6 = iVar7 + iVar15;
      iVar9 = iVar10 + iVar13;
      puVar17[10] = g_Hardware32BitPalette
                    [g_CurrentTextureData
                     [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[0xb] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      iVar6 = iVar7 + iVar15;
      iVar9 = iVar10 + iVar13;
      puVar17[0xc] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      iVar7 = iVar6 + iVar15;
      iVar10 = iVar9 + iVar13;
      puVar17[0xd] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8))]];
      puVar17[0xe] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar7 >> 8))]];
      puVar17[0xf] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)(iVar10 + iVar13) >> 8),
                                (char)((uint)(iVar7 + iVar15) >> 8))]];
      puVar17 = puVar17 + 0x10;
      DAT_005b0680 = DAT_005b068c;
      DAT_005b0684 = DAT_005b0690;
      DAT_005b0688 = DAT_005b0694;
      DAT_005b06b0 = DAT_005b06b8;
      DAT_005b06b4 = DAT_005b06bc;
      iVar5 = iVar5 + -0x10;
    }
    if (-1 < iVar5) {
      DAT_005b06b8 = (int)(CONCAT44(((int)DAT_005b0698 >> 0x1f) << 0x18 | DAT_005b0698 >> 8,
                                    DAT_005b0698 << 0x18) / (longlong)DAT_005b06a0);
      DAT_005b06bc = (int)(CONCAT44(((int)DAT_005b069c >> 0x1f) << 0x18 | DAT_005b069c >> 8,
                                    DAT_005b069c << 0x18) / (longlong)DAT_005b06a0);
      iVar6 = (int)((longlong)(DAT_005b06bc - DAT_005b06b4) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1] >> 0x28);
      uVar16 = (uint)((longlong)(DAT_005b06b8 - DAT_005b06b0) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar5 + 1] >> 0x28) & 0xffff |
               iVar5 << 0x10;
      iVar5 = (DAT_005b06b0 >> 8) + uVar16;
      iVar7 = (DAT_005b06b4 >> 8) + iVar6;
      *puVar17 = g_Hardware32BitPalette[g_CurrentTextureData[CONCAT11(uVar11,uVar8)]];
      if (-1 < (int)(uVar16 - 0x10000)) {
        iVar9 = iVar5 + (uVar16 - 0x10000);
        iVar10 = iVar7 + iVar6;
        puVar17[1] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar5 >> 8))]];
        if (-1 < (int)(uVar16 - 0x20000)) {
          iVar5 = iVar9 + (uVar16 - 0x20000);
          iVar7 = iVar10 + iVar6;
          puVar17[2] = g_Hardware32BitPalette
                       [g_CurrentTextureData
                        [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar9 >> 8))]];
          if (-1 < (int)(uVar16 - 0x30000)) {
            iVar9 = iVar5 + (uVar16 - 0x30000);
            iVar10 = iVar7 + iVar6;
            puVar17[3] = g_Hardware32BitPalette
                         [g_CurrentTextureData
                          [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar5 >> 8))]];
            if (-1 < (int)(uVar16 - 0x40000)) {
              iVar5 = iVar9 + (uVar16 - 0x40000);
              iVar7 = iVar10 + iVar6;
              puVar17[4] = g_Hardware32BitPalette
                           [g_CurrentTextureData
                            [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar9 >> 8))]];
              if (-1 < (int)(uVar16 - 0x50000)) {
                iVar9 = iVar5 + (uVar16 - 0x50000);
                iVar10 = iVar7 + iVar6;
                puVar17[5] = g_Hardware32BitPalette
                             [g_CurrentTextureData
                              [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar5 >> 8))]];
                if (-1 < (int)(uVar16 - 0x60000)) {
                  iVar5 = iVar9 + (uVar16 - 0x60000);
                  iVar7 = iVar10 + iVar6;
                  puVar17[6] = g_Hardware32BitPalette
                               [g_CurrentTextureData
                                [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar9 >> 8))]];
                  if (-1 < (int)(uVar16 - 0x70000)) {
                    iVar9 = iVar5 + (uVar16 - 0x70000);
                    iVar10 = iVar7 + iVar6;
                    puVar17[7] = g_Hardware32BitPalette
                                 [g_CurrentTextureData
                                  [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar5 >> 8))]];
                    if (-1 < (int)(uVar16 - 0x80000)) {
                      iVar5 = iVar9 + (uVar16 - 0x80000);
                      iVar7 = iVar10 + iVar6;
                      puVar17[8] = g_Hardware32BitPalette
                                   [g_CurrentTextureData
                                    [CONCAT11((char)((uint)iVar10 >> 8),(char)((uint)iVar9 >> 8))]];
                      if (-1 < (int)(uVar16 - 0x90000)) {
                        iVar9 = iVar5 + (uVar16 - 0x90000);
                        iVar10 = iVar7 + iVar6;
                        puVar17[9] = g_Hardware32BitPalette
                                     [g_CurrentTextureData
                                      [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar5 >> 8))]]
                        ;
                        if (-1 < (int)(uVar16 - 0xa0000)) {
                          iVar5 = iVar9 + (uVar16 - 0xa0000);
                          iVar7 = iVar10 + iVar6;
                          puVar17[10] = g_Hardware32BitPalette
                                        [g_CurrentTextureData
                                         [CONCAT11((char)((uint)iVar10 >> 8),
                                                   (char)((uint)iVar9 >> 8))]];
                          if (-1 < (int)(uVar16 - 0xb0000)) {
                            iVar9 = iVar5 + (uVar16 - 0xb0000);
                            iVar10 = iVar7 + iVar6;
                            puVar17[0xb] = g_Hardware32BitPalette
                                           [g_CurrentTextureData
                                            [CONCAT11((char)((uint)iVar7 >> 8),
                                                      (char)((uint)iVar5 >> 8))]];
                            if (-1 < (int)(uVar16 - 0xc0000)) {
                              iVar5 = iVar9 + (uVar16 - 0xc0000);
                              iVar7 = iVar10 + iVar6;
                              puVar17[0xc] = g_Hardware32BitPalette
                                             [g_CurrentTextureData
                                              [CONCAT11((char)((uint)iVar10 >> 8),
                                                        (char)((uint)iVar9 >> 8))]];
                              if (-1 < (int)(uVar16 - 0xd0000)) {
                                iVar9 = iVar5 + (uVar16 - 0xd0000);
                                iVar10 = iVar7 + iVar6;
                                puVar17[0xd] = g_Hardware32BitPalette
                                               [g_CurrentTextureData
                                                [CONCAT11((char)((uint)iVar7 >> 8),
                                                          (char)((uint)iVar5 >> 8))]];
                                if (-1 < (int)(uVar16 - 0xe0000)) {
                                  puVar17[0xe] = g_Hardware32BitPalette
                                                 [g_CurrentTextureData
                                                  [CONCAT11((char)((uint)iVar10 >> 8),
                                                            (char)((uint)iVar9 >> 8))]];
                                  if (-1 < (int)(uVar16 - 0xf0000)) {
                                    puVar17[0xf] = g_Hardware32BitPalette
                                                   [g_CurrentTextureData
                                                    [CONCAT11((char)((uint)(iVar10 + iVar6) >> 8),
                                                              (char)(iVar9 + (uVar16 - 0xe0000) >> 8
                                                                    ))]];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar12 = &DAT_005b06ec;
    iVar6 = DAT_005b06ac >> 8;
    uVar16 = iVar1 >> 4;
    iVar5 = DAT_005b06e4;
    puVar17 = DAT_005b06e8;
    puVar18 = DAT_005b06e0;
    DAT_005b0688 = iVar1;
    while (-1 < iVar5 + -4) {
      if ((int)*puVar17 <= (int)uVar16) {
        uVar2 = *puVar12;
        *puVar17 = uVar16;
        *puVar18 = uVar2;
      }
      uVar16 = uVar16 + iVar6;
      if ((int)puVar17[1] <= (int)uVar16) {
        uVar2 = puVar12[1];
        puVar17[1] = uVar16;
        puVar18[1] = uVar2;
      }
      uVar16 = uVar16 + iVar6;
      if ((int)puVar17[2] <= (int)uVar16) {
        uVar2 = puVar12[2];
        puVar17[2] = uVar16;
        puVar18[2] = uVar2;
      }
      uVar16 = uVar16 + iVar6;
      if ((int)puVar17[3] <= (int)uVar16) {
        uVar2 = puVar12[3];
        puVar17[3] = uVar16;
        puVar18[3] = uVar2;
      }
      uVar16 = uVar16 + iVar6;
      puVar12 = puVar12 + 4;
      puVar18 = puVar18 + 4;
      puVar17 = puVar17 + 4;
      iVar5 = iVar5 + -4;
    }
    if (-1 < iVar5) {
      if ((int)*puVar17 <= (int)uVar16) {
        uVar2 = *puVar12;
        *puVar17 = uVar16;
        *puVar18 = uVar2;
      }
      uVar16 = uVar16 + iVar6;
      if (-1 < iVar5 + -1) {
        if ((int)puVar17[1] <= (int)uVar16) {
          uVar2 = puVar12[1];
          puVar17[1] = uVar16;
          puVar18[1] = uVar2;
        }
        uVar16 = uVar16 + iVar6;
        if (-1 < iVar5 + -2) {
          if ((int)puVar17[2] <= (int)uVar16) {
            uVar2 = puVar12[2];
            puVar17[2] = uVar16;
            puVar18[2] = uVar2;
          }
          if ((-1 < iVar5 + -3) && ((int)puVar17[3] <= (int)(uVar16 + iVar6))) {
            uVar2 = puVar12[3];
            puVar17[3] = uVar16 + iVar6;
            puVar18[3] = uVar2;
          }
        }
      }
    }
  }
  return;
}
