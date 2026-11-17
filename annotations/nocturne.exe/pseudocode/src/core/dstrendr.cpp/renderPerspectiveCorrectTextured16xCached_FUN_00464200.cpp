// Name: core_dstrendr.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200
// Address: 00464200
// Address Range: [[00464200, 004649dc]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

{
  uint uVar1;
  uint uVar2;
  byte uVar6;
  int iVar3;
  int iVar4;
  int iVar5;
  byte uVar9;
  int iVar7;
  int iVar8;
  uint *puVar10;
  int iVar11;
  SSoftwareEdge *pSVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  
  uVar1 = (right_edge->base).x_current;
  uVar14 = (left_edge->base).x_current;
  uVar2 = uVar1;
  pSVar12 = right_edge;
  if (uVar14 < uVar1) {
    uVar2 = uVar14;
    uVar14 = uVar1;
    pSVar12 = left_edge;
    left_edge = right_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar14 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar14 >> 0x10) {
    g_PTR_005b06e0 = (byte *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 4);
    g_UINT_PTR_005b06e8 = g_ZBufferScanlineArray[scanline_y] + uVar2;
    CVector3f_005b0678.z = (float)(pSVar12->base).u_current;
    g_UINT_005b0698 = (left_edge->base).u_current;
    g_INT_005b06a4 =
         (int)((ulonglong)
               ((longlong)(int)(g_UINT_005b0698 - (int)CVector3f_005b0678.z) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    g_UINT_005b0684 = (pSVar12->base).v_current;
    g_UINT_005b069c = (left_edge->base).v_current;
    g_INT_005b06a8 =
         (int)((ulonglong)
               ((longlong)(int)(g_UINT_005b069c - g_UINT_005b0684) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    uVar1 = (pSVar12->base).depth_current;
    g_UINT_005b06a0 = (left_edge->base).depth_current;
    g_INT_005b06ac =
         (int)((ulonglong)
               ((longlong)(int)(g_UINT_005b06a0 - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    g_UINT_005b06b0 =
         (uint)(CONCAT44(((int)CVector3f_005b0678.z >> 0x1f) << 0x18 |
                         (uint)CVector3f_005b0678.z >> 8,(int)CVector3f_005b0678.z << 0x18) /
               (longlong)(int)uVar1);
    g_UINT_005b06b4 =
         (uint)(CONCAT44(((int)g_UINT_005b0684 >> 0x1f) << 0x18 | g_UINT_005b0684 >> 8,
                         g_UINT_005b0684 << 0x18) / (longlong)(int)uVar1);
    puVar15 = g_UINT_ARRAY_005b06ec;
    g_UINT_005b0688 = uVar1;
    g_INT_005b06e4 = iVar3;
    while (uVar6 = (byte)(g_UINT_005b06b0 >> 0x10),
          uVar9 = (byte)(g_UINT_005b06b4 >> 0x10), -1 < iVar3 + -0x10) {
      g_UINT_005b068c = (int)CVector3f_005b0678.z + g_INT_005b06a4;
      g_UINT_005b0690 = g_UINT_005b0684 + g_INT_005b06a8;
      g_UINT_005b0694 = g_UINT_005b0688 + g_INT_005b06ac;
      g_UINT_005b06b8 =
           (uint)(CONCAT44(((int)g_UINT_005b068c >> 0x1f) << 0x18 | g_UINT_005b068c >> 8,
                           g_UINT_005b068c * 0x1000000) / (longlong)(int)g_UINT_005b0694);
      g_UINT_005b06bc =
           (uint)(CONCAT44(((int)g_UINT_005b0690 >> 0x1f) << 0x18 | g_UINT_005b0690 >> 8,
                           g_UINT_005b0690 * 0x1000000) / (longlong)(int)g_UINT_005b0694);
      iVar13 = (int)(g_UINT_005b06b8 - g_UINT_005b06b0) >> 0xc;
      iVar11 = (int)(g_UINT_005b06bc - g_UINT_005b06b4) >> 0xc;
      iVar4 = ((int)g_UINT_005b06b0 >> 8) + iVar13;
      iVar7 = ((int)g_UINT_005b06b4 >> 8) + iVar11;
      *puVar15 = g_Hardware32BitPalette[g_CurrentTextureData[CONCAT11(uVar9,uVar6)]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[1] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[2] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[3] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[4] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[5] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[6] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[7] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[8] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[9] = g_Hardware32BitPalette
                   [g_CurrentTextureData
                    [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[10] = g_Hardware32BitPalette
                    [g_CurrentTextureData
                     [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[0xb] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[0xc] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[0xd] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8))]];
      puVar15[0xe] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8))]];
      puVar15[0xf] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)(iVar8 + iVar11) >> 8),
                                (char)((uint)(iVar5 + iVar13) >> 8))]];
      puVar15 = puVar15 + 0x10;
      CVector3f_005b0678.z = (float)g_UINT_005b068c;
      g_UINT_005b0684 = g_UINT_005b0690;
      g_UINT_005b0688 = g_UINT_005b0694;
      g_UINT_005b06b0 = g_UINT_005b06b8;
      g_UINT_005b06b4 = g_UINT_005b06bc;
      iVar3 = iVar3 + -0x10;
    }
    if (-1 < iVar3) {
      g_UINT_005b06b8 =
           (uint)(CONCAT44(((int)g_UINT_005b0698 >> 0x1f) << 0x18 | g_UINT_005b0698 >> 8,
                           g_UINT_005b0698 << 0x18) / (longlong)(int)g_UINT_005b06a0);
      g_UINT_005b06bc =
           (uint)(CONCAT44(((int)g_UINT_005b069c >> 0x1f) << 0x18 | g_UINT_005b069c >> 8,
                           g_UINT_005b069c << 0x18) / (longlong)(int)g_UINT_005b06a0);
      iVar4 = (int)((longlong)(int)(g_UINT_005b06bc - g_UINT_005b06b4) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1] >> 0x28);
      uVar14 = (uint)((longlong)(int)(g_UINT_005b06b8 - g_UINT_005b06b0) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1] >> 0x28) & 0xffff |
               iVar3 << 0x10;
      iVar3 = ((int)g_UINT_005b06b0 >> 8) + uVar14;
      iVar5 = ((int)g_UINT_005b06b4 >> 8) + iVar4;
      *puVar15 = g_Hardware32BitPalette[g_CurrentTextureData[CONCAT11(uVar9,uVar6)]];
      if (-1 < (int)(uVar14 - 0x10000)) {
        iVar7 = iVar3 + (uVar14 - 0x10000);
        iVar8 = iVar5 + iVar4;
        puVar15[1] = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8))]];
        if (-1 < (int)(uVar14 - 0x20000)) {
          iVar3 = iVar7 + (uVar14 - 0x20000);
          iVar5 = iVar8 + iVar4;
          puVar15[2] = g_Hardware32BitPalette
                       [g_CurrentTextureData
                        [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar7 >> 8))]];
          if (-1 < (int)(uVar14 - 0x30000)) {
            iVar7 = iVar3 + (uVar14 - 0x30000);
            iVar8 = iVar5 + iVar4;
            puVar15[3] = g_Hardware32BitPalette
                         [g_CurrentTextureData
                          [CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8))]];
            if (-1 < (int)(uVar14 - 0x40000)) {
              iVar3 = iVar7 + (uVar14 - 0x40000);
              iVar5 = iVar8 + iVar4;
              puVar15[4] = g_Hardware32BitPalette
                           [g_CurrentTextureData
                            [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar7 >> 8))]];
              if (-1 < (int)(uVar14 - 0x50000)) {
                iVar7 = iVar3 + (uVar14 - 0x50000);
                iVar8 = iVar5 + iVar4;
                puVar15[5] = g_Hardware32BitPalette
                             [g_CurrentTextureData
                              [CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8))]];
                if (-1 < (int)(uVar14 - 0x60000)) {
                  iVar3 = iVar7 + (uVar14 - 0x60000);
                  iVar5 = iVar8 + iVar4;
                  puVar15[6] = g_Hardware32BitPalette
                               [g_CurrentTextureData
                                [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar7 >> 8))]];
                  if (-1 < (int)(uVar14 - 0x70000)) {
                    iVar7 = iVar3 + (uVar14 - 0x70000);
                    iVar8 = iVar5 + iVar4;
                    puVar15[7] = g_Hardware32BitPalette
                                 [g_CurrentTextureData
                                  [CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8))]];
                    if (-1 < (int)(uVar14 - 0x80000)) {
                      iVar3 = iVar7 + (uVar14 - 0x80000);
                      iVar5 = iVar8 + iVar4;
                      puVar15[8] = g_Hardware32BitPalette
                                   [g_CurrentTextureData
                                    [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar7 >> 8))]];
                      if (-1 < (int)(uVar14 - 0x90000)) {
                        iVar7 = iVar3 + (uVar14 - 0x90000);
                        iVar8 = iVar5 + iVar4;
                        puVar15[9] = g_Hardware32BitPalette
                                     [g_CurrentTextureData
                                      [CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8))]]
                        ;
                        if (-1 < (int)(uVar14 - 0xa0000)) {
                          iVar3 = iVar7 + (uVar14 - 0xa0000);
                          iVar5 = iVar8 + iVar4;
                          puVar15[10] = g_Hardware32BitPalette
                                        [g_CurrentTextureData
                                         [CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar7 >> 8)
                                                  )]];
                          if (-1 < (int)(uVar14 - 0xb0000)) {
                            iVar7 = iVar3 + (uVar14 - 0xb0000);
                            iVar8 = iVar5 + iVar4;
                            puVar15[0xb] = g_Hardware32BitPalette
                                           [g_CurrentTextureData
                                            [CONCAT11((char)((uint)iVar5 >> 8),
                                                      (char)((uint)iVar3 >> 8))]];
                            if (-1 < (int)(uVar14 - 0xc0000)) {
                              iVar3 = iVar7 + (uVar14 - 0xc0000);
                              iVar5 = iVar8 + iVar4;
                              puVar15[0xc] = g_Hardware32BitPalette
                                             [g_CurrentTextureData
                                              [CONCAT11((char)((uint)iVar8 >> 8),
                                                        (char)((uint)iVar7 >> 8))]];
                              if (-1 < (int)(uVar14 - 0xd0000)) {
                                iVar7 = iVar3 + (uVar14 - 0xd0000);
                                iVar8 = iVar5 + iVar4;
                                puVar15[0xd] = g_Hardware32BitPalette
                                               [g_CurrentTextureData
                                                [CONCAT11((char)((uint)iVar5 >> 8),
                                                          (char)((uint)iVar3 >> 8))]];
                                if (-1 < (int)(uVar14 - 0xe0000)) {
                                  puVar15[0xe] = g_Hardware32BitPalette
                                                 [g_CurrentTextureData
                                                  [CONCAT11((char)((uint)iVar8 >> 8),
                                                            (char)((uint)iVar7 >> 8))]];
                                  if (-1 < (int)(uVar14 - 0xf0000)) {
                                    puVar15[0xf] = g_Hardware32BitPalette
                                                   [g_CurrentTextureData
                                                    [CONCAT11((char)((uint)(iVar8 + iVar4) >> 8),
                                                              (char)(iVar7 + (uVar14 - 0xe0000) >> 8
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
    puVar10 = g_UINT_ARRAY_005b06ec;
    iVar4 = g_INT_005b06ac >> 8;
    uVar14 = (int)uVar1 >> 4;
    iVar3 = g_INT_005b06e4;
    puVar15 = g_UINT_PTR_005b06e8;
    puVar16 = (uint *)g_PTR_005b06e0;
    g_UINT_005b0688 = uVar1;
    while (-1 < iVar3 + -4) {
      if ((int)*puVar15 <= (int)uVar14) {
        uVar1 = *puVar10;
        *puVar15 = uVar14;
        *puVar16 = uVar1;
      }
      uVar14 = uVar14 + iVar4;
      if ((int)puVar15[1] <= (int)uVar14) {
        uVar1 = puVar10[1];
        puVar15[1] = uVar14;
        puVar16[1] = uVar1;
      }
      uVar14 = uVar14 + iVar4;
      if ((int)puVar15[2] <= (int)uVar14) {
        uVar1 = puVar10[2];
        puVar15[2] = uVar14;
        puVar16[2] = uVar1;
      }
      uVar14 = uVar14 + iVar4;
      if ((int)puVar15[3] <= (int)uVar14) {
        uVar1 = puVar10[3];
        puVar15[3] = uVar14;
        puVar16[3] = uVar1;
      }
      uVar14 = uVar14 + iVar4;
      puVar10 = puVar10 + 4;
      puVar16 = puVar16 + 4;
      puVar15 = puVar15 + 4;
      iVar3 = iVar3 + -4;
    }
    if (-1 < iVar3) {
      if ((int)*puVar15 <= (int)uVar14) {
        uVar1 = *puVar10;
        *puVar15 = uVar14;
        *puVar16 = uVar1;
      }
      uVar14 = uVar14 + iVar4;
      if (-1 < iVar3 + -1) {
        if ((int)puVar15[1] <= (int)uVar14) {
          uVar1 = puVar10[1];
          puVar15[1] = uVar14;
          puVar16[1] = uVar1;
        }
        uVar14 = uVar14 + iVar4;
        if (-1 < iVar3 + -2) {
          if ((int)puVar15[2] <= (int)uVar14) {
            uVar1 = puVar10[2];
            puVar15[2] = uVar14;
            puVar16[2] = uVar1;
          }
          if ((-1 < iVar3 + -3) && ((int)puVar15[3] <= (int)(uVar14 + iVar4))) {
            uVar1 = puVar10[3];
            puVar15[3] = uVar14 + iVar4;
            puVar16[3] = uVar1;
          }
        }
      }
    }
  }
  return;
}
