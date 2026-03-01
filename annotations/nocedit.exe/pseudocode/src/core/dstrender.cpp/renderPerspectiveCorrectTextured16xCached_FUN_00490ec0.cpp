// Name: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0
// Address: 00490ec0
// Address Range: [[00490ec0, 0049169c]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

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
  
  uVar1 = (left_edge->base).x_current;
  uVar14 = (right_edge->base).x_current;
  uVar2 = uVar1;
  pSVar12 = left_edge;
  if (uVar14 < uVar1) {
    uVar2 = uVar14;
    uVar14 = uVar1;
    pSVar12 = right_edge;
    right_edge = left_edge;
  }
  uVar2 = uVar2 >> 0x10;
  iVar3 = (uVar14 >> 0x10) - uVar2;
  if (iVar3 != 0 && uVar2 <= uVar14 >> 0x10) {
    g_PerspectiveScanlineColorPtr = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar2 * 4);
    g_PerspectiveScanlineZPtr = g_ZBufferScanlineArray[scanline_y] + uVar2;
    g_PerspectiveLeftU = (pSVar12->base).u_current;
    g_PerspectiveRightU = (right_edge->base).u_current;
    g_PerspectiveSubdivDeltaU =
         (int)((ulonglong)
               ((longlong)(int)(g_PerspectiveRightU - g_PerspectiveLeftU) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    g_PerspectiveLeftV = (pSVar12->base).v_current;
    g_PerspectiveRightV = (right_edge->base).v_current;
    g_PerspectiveSubdivDeltaV =
         (int)((ulonglong)
               ((longlong)(int)(g_PerspectiveRightV - g_PerspectiveLeftV) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    uVar1 = (pSVar12->base).w_current;
    g_PerspectiveRightZ = (right_edge->base).w_current;
    g_PerspectiveSubdivDeltaZ =
         (int)((ulonglong)
               ((longlong)(int)(g_PerspectiveRightZ - uVar1) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    g_PerspectiveCurrentU =
         (uint)(CONCAT44(((int)g_PerspectiveLeftU >> 0x1f) << 0x18 | g_PerspectiveLeftU >> 8,
                         g_PerspectiveLeftU << 0x18) / (longlong)(int)uVar1);
    g_PerspectiveCurrentV =
         (uint)(CONCAT44(((int)g_PerspectiveLeftV >> 0x1f) << 0x18 | g_PerspectiveLeftV >> 8,
                         g_PerspectiveLeftV << 0x18) / (longlong)(int)uVar1);
    puVar15 = g_PerspectiveColorCache;
    g_PerspectiveLeftZ = uVar1;
    g_PerspectiveScanlinePixelCount = iVar3;
    while (uVar6 = (byte)(g_PerspectiveCurrentU >> 0x10),
          uVar9 = (byte)(g_PerspectiveCurrentV >> 0x10), -1 < iVar3 + -0x10) {
      g_PerspectiveLeftW = g_PerspectiveLeftU + g_PerspectiveSubdivDeltaU;
      g_PerspectiveInterpolatedW = g_PerspectiveLeftV + g_PerspectiveSubdivDeltaV;
      g_PerspectiveRightW = g_PerspectiveLeftZ + g_PerspectiveSubdivDeltaZ;
      g_PerspectiveNextU =
           (uint)(CONCAT44(((int)g_PerspectiveLeftW >> 0x1f) << 0x18 | g_PerspectiveLeftW >> 8,
                           g_PerspectiveLeftW * 0x1000000) / (longlong)(int)g_PerspectiveRightW);
      g_PerspectiveNextV =
           (uint)(CONCAT44(((int)g_PerspectiveInterpolatedW >> 0x1f) << 0x18 |
                           g_PerspectiveInterpolatedW >> 8,g_PerspectiveInterpolatedW * 0x1000000) /
                 (longlong)(int)g_PerspectiveRightW);
      iVar13 = (int)(g_PerspectiveNextU - g_PerspectiveCurrentU) >> 0xc;
      iVar11 = (int)(g_PerspectiveNextV - g_PerspectiveCurrentV) >> 0xc;
      iVar4 = ((int)g_PerspectiveCurrentU >> 8) + iVar13;
      iVar7 = ((int)g_PerspectiveCurrentV >> 8) + iVar11;
      *puVar15 = g_Hardware32BitPalette
                 [*(byte *)((uint)CONCAT11(uVar9,uVar6) + (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[1] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[2] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[3] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[4] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[5] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[6] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[7] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[8] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[9] = g_Hardware32BitPalette
                   [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                             (int)g_CurrentTextureData)];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[10] = g_Hardware32BitPalette
                    [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                              (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[0xb] = g_Hardware32BitPalette
                     [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                               (int)g_CurrentTextureData)];
      iVar4 = iVar5 + iVar13;
      iVar7 = iVar8 + iVar11;
      puVar15[0xc] = g_Hardware32BitPalette
                     [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                               (int)g_CurrentTextureData)];
      iVar5 = iVar4 + iVar13;
      iVar8 = iVar7 + iVar11;
      puVar15[0xd] = g_Hardware32BitPalette
                     [*(byte *)((uint)CONCAT11((char)((uint)iVar7 >> 8),(char)((uint)iVar4 >> 8)) +
                               (int)g_CurrentTextureData)];
      puVar15[0xe] = g_Hardware32BitPalette
                     [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)) +
                               (int)g_CurrentTextureData)];
      puVar15[0xf] = g_Hardware32BitPalette
                     [*(byte *)((uint)CONCAT11((char)((uint)(iVar8 + iVar11) >> 8),
                                               (char)((uint)(iVar5 + iVar13) >> 8)) +
                               (int)g_CurrentTextureData)];
      puVar15 = puVar15 + 0x10;
      g_PerspectiveLeftU = g_PerspectiveLeftW;
      g_PerspectiveLeftV = g_PerspectiveInterpolatedW;
      g_PerspectiveLeftZ = g_PerspectiveRightW;
      g_PerspectiveCurrentU = g_PerspectiveNextU;
      g_PerspectiveCurrentV = g_PerspectiveNextV;
      iVar3 = iVar3 + -0x10;
    }
    if (-1 < iVar3) {
      g_PerspectiveNextU =
           (uint)(CONCAT44(((int)g_PerspectiveRightU >> 0x1f) << 0x18 | g_PerspectiveRightU >> 8,
                           g_PerspectiveRightU << 0x18) / (longlong)(int)g_PerspectiveRightZ);
      g_PerspectiveNextV =
           (uint)(CONCAT44(((int)g_PerspectiveRightV >> 0x1f) << 0x18 | g_PerspectiveRightV >> 8,
                           g_PerspectiveRightV << 0x18) / (longlong)(int)g_PerspectiveRightZ);
      iVar4 = (int)((longlong)(int)(g_PerspectiveNextV - g_PerspectiveCurrentV) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1] >> 0x28);
      uVar14 = (uint)((longlong)(int)(g_PerspectiveNextU - g_PerspectiveCurrentU) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1] >> 0x28) & 0xffff |
               iVar3 << 0x10;
      iVar3 = ((int)g_PerspectiveCurrentU >> 8) + uVar14;
      iVar5 = ((int)g_PerspectiveCurrentV >> 8) + iVar4;
      *puVar15 = g_Hardware32BitPalette
                 [*(byte *)((uint)CONCAT11(uVar9,uVar6) + (int)g_CurrentTextureData)];
      if (-1 < (int)(uVar14 - 0x10000)) {
        iVar7 = iVar3 + (uVar14 - 0x10000);
        iVar8 = iVar5 + iVar4;
        puVar15[1] = g_Hardware32BitPalette
                     [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8)) +
                               (int)g_CurrentTextureData)];
        if (-1 < (int)(uVar14 - 0x20000)) {
          iVar3 = iVar7 + (uVar14 - 0x20000);
          iVar5 = iVar8 + iVar4;
          puVar15[2] = g_Hardware32BitPalette
                       [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar7 >> 8))
                                 + (int)g_CurrentTextureData)];
          if (-1 < (int)(uVar14 - 0x30000)) {
            iVar7 = iVar3 + (uVar14 - 0x30000);
            iVar8 = iVar5 + iVar4;
            puVar15[3] = g_Hardware32BitPalette
                         [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),(char)((uint)iVar3 >> 8)
                                                  ) + (int)g_CurrentTextureData)];
            if (-1 < (int)(uVar14 - 0x40000)) {
              iVar3 = iVar7 + (uVar14 - 0x40000);
              iVar5 = iVar8 + iVar4;
              puVar15[4] = g_Hardware32BitPalette
                           [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                     (char)((uint)iVar7 >> 8)) +
                                     (int)g_CurrentTextureData)];
              if (-1 < (int)(uVar14 - 0x50000)) {
                iVar7 = iVar3 + (uVar14 - 0x50000);
                iVar8 = iVar5 + iVar4;
                puVar15[5] = g_Hardware32BitPalette
                             [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),
                                                       (char)((uint)iVar3 >> 8)) +
                                       (int)g_CurrentTextureData)];
                if (-1 < (int)(uVar14 - 0x60000)) {
                  iVar3 = iVar7 + (uVar14 - 0x60000);
                  iVar5 = iVar8 + iVar4;
                  puVar15[6] = g_Hardware32BitPalette
                               [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                         (char)((uint)iVar7 >> 8)) +
                                         (int)g_CurrentTextureData)];
                  if (-1 < (int)(uVar14 - 0x70000)) {
                    iVar7 = iVar3 + (uVar14 - 0x70000);
                    iVar8 = iVar5 + iVar4;
                    puVar15[7] = g_Hardware32BitPalette
                                 [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),
                                                           (char)((uint)iVar3 >> 8)) +
                                           (int)g_CurrentTextureData)];
                    if (-1 < (int)(uVar14 - 0x80000)) {
                      iVar3 = iVar7 + (uVar14 - 0x80000);
                      iVar5 = iVar8 + iVar4;
                      puVar15[8] = g_Hardware32BitPalette
                                   [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                             (char)((uint)iVar7 >> 8)) +
                                             (int)g_CurrentTextureData)];
                      if (-1 < (int)(uVar14 - 0x90000)) {
                        iVar7 = iVar3 + (uVar14 - 0x90000);
                        iVar8 = iVar5 + iVar4;
                        puVar15[9] = g_Hardware32BitPalette
                                     [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),
                                                               (char)((uint)iVar3 >> 8)) +
                                               (int)g_CurrentTextureData)];
                        if (-1 < (int)(uVar14 - 0xa0000)) {
                          iVar3 = iVar7 + (uVar14 - 0xa0000);
                          iVar5 = iVar8 + iVar4;
                          puVar15[10] = g_Hardware32BitPalette
                                        [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                                  (char)((uint)iVar7 >> 8)) +
                                                  (int)g_CurrentTextureData)];
                          if (-1 < (int)(uVar14 - 0xb0000)) {
                            iVar7 = iVar3 + (uVar14 - 0xb0000);
                            iVar8 = iVar5 + iVar4;
                            puVar15[0xb] = g_Hardware32BitPalette
                                           [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),
                                                                     (char)((uint)iVar3 >> 8)) +
                                                     (int)g_CurrentTextureData)];
                            if (-1 < (int)(uVar14 - 0xc0000)) {
                              iVar3 = iVar7 + (uVar14 - 0xc0000);
                              iVar5 = iVar8 + iVar4;
                              puVar15[0xc] = g_Hardware32BitPalette
                                             [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                                       (char)((uint)iVar7 >> 8)) +
                                                       (int)g_CurrentTextureData)];
                              if (-1 < (int)(uVar14 - 0xd0000)) {
                                iVar7 = iVar3 + (uVar14 - 0xd0000);
                                iVar8 = iVar5 + iVar4;
                                puVar15[0xd] = g_Hardware32BitPalette
                                               [*(byte *)((uint)CONCAT11((char)((uint)iVar5 >> 8),
                                                                         (char)((uint)iVar3 >> 8)) +
                                                         (int)g_CurrentTextureData)];
                                if (-1 < (int)(uVar14 - 0xe0000)) {
                                  puVar15[0xe] = g_Hardware32BitPalette
                                                 [*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                                           (char)((uint)iVar7 >> 8))
                                                           + (int)g_CurrentTextureData)];
                                  if (-1 < (int)(uVar14 - 0xf0000)) {
                                    puVar15[0xf] = g_Hardware32BitPalette
                                                   [*(byte *)((uint)CONCAT11((char)((uint)(iVar8 + 
                                                  iVar4) >> 8),
                                                  (char)(iVar7 + (uVar14 - 0xe0000) >> 8)) +
                                                  (int)g_CurrentTextureData)];
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
    puVar10 = g_PerspectiveColorCache;
    iVar4 = g_PerspectiveSubdivDeltaZ >> 8;
    uVar14 = (int)uVar1 >> 4;
    iVar3 = g_PerspectiveScanlinePixelCount;
    puVar15 = g_PerspectiveScanlineZPtr;
    puVar16 = g_PerspectiveScanlineColorPtr;
    g_PerspectiveLeftZ = uVar1;
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
