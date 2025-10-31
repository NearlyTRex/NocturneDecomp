// Name: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0
// Address: 00490ec0
// Address Range: [[00490ec0, 0049169c]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (0048ac40) at 0048ad6b [DATA]
// Globals:
//   uint g_PerspectiveLeftU = 0x0
//   uint g_PerspectiveLeftV = 0x0
//   uint g_PerspectiveLeftZ = 0x0
//   uint g_PerspectiveLeftW = 0x0
//   uint g_PerspectiveInterpolatedW = 0x0
//   uint g_PerspectiveRightW = 0x0
//   uint g_PerspectiveRightU = 0x0
//   uint g_PerspectiveRightV = 0x0
//   uint g_PerspectiveRightZ = 0x0
//   int g_PerspectiveSubdivDeltaU = 0x0
//   int g_PerspectiveSubdivDeltaV = 0x0
//   int g_PerspectiveSubdivDeltaZ = 0x0
//   uint g_PerspectiveCurrentU = 0x0
//   uint g_PerspectiveCurrentV = 0x0
//   uint g_PerspectiveNextU = 0x0
//   uint g_PerspectiveNextV = 0x0
//   void* g_PerspectiveScanlineColorPtr = 00000000
//   int g_PerspectiveScanlinePixelCount = 0x0
//   uint* g_PerspectiveScanlineZPtr = 00000000
//   uint[16] g_PerspectiveColorCache
//   undefined4 g_PerspectiveColorCache[1]
//   undefined4 g_PerspectiveColorCache[2]
//   undefined4 g_PerspectiveColorCache[3]
//   undefined4 g_PerspectiveColorCache[4]
//   undefined4 g_PerspectiveColorCache[5]
//   undefined4 g_PerspectiveColorCache[6]
//   undefined4 g_PerspectiveColorCache[7]
//   undefined4 g_PerspectiveColorCache[8]
//   undefined4 g_PerspectiveColorCache[9]
//   undefined4 g_PerspectiveColorCache[10]
//   undefined4 g_PerspectiveColorCache[11]
//   undefined4 g_PerspectiveColorCache[12]
//   undefined4 g_PerspectiveColorCache[13]
//   undefined4 g_PerspectiveColorCache[14]
//   undefined4 g_PerspectiveColorCache[15]
//   undefined4 DAT_0067241c
//   undefined4 DAT_00672420
//   undefined4 DAT_00672424
//   undefined4 DAT_00672428
//   undefined4 DAT_0067242c
//   undefined4 DAT_00672430
//   undefined4 DAT_00672434
//   undefined4 DAT_00672438
//   undefined4 DAT_0067243c
//   undefined4 DAT_00672440
//   undefined4 DAT_00672444
//   undefined4 DAT_00672448
//   undefined4 DAT_0067244c
//   undefined4 DAT_00672450
//   undefined4 DAT_00672454
//   undefined4 DAT_00672458
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   uint[256] g_Hardware32BitPalette
//   undefined4 DAT_02d02584
//   void* g_CurrentTextureData

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar6;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar9;
  int iVar7;
  int iVar8;
  uint *puVar10;
  int iVar11;
  SEdgeData *pSVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  
  uVar1 = left_edge->x_current;
  uVar14 = right_edge->x_current;
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
    g_PerspectiveLeftU = pSVar12->u_current;
    g_PerspectiveRightU = right_edge->u_current;
    g_PerspectiveSubdivDeltaU =
         (int)((ulonglong)
               ((longlong)(int)(g_PerspectiveRightU - g_PerspectiveLeftU) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    g_PerspectiveLeftV = pSVar12->v_current;
    g_PerspectiveRightV = right_edge->v_current;
    g_PerspectiveSubdivDeltaV =
         (int)((ulonglong)
               ((longlong)(int)(g_PerspectiveRightV - g_PerspectiveLeftV) *
               (longlong)(int)g_ReciprocalLookupTable[iVar3 + 1]) >> 0x20) << 4;
    uVar1 = pSVar12->z_current;
    g_PerspectiveRightZ = right_edge->z_current;
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
    while (uVar6 = (undefined1)(g_PerspectiveCurrentU >> 0x10),
          uVar9 = (undefined1)(g_PerspectiveCurrentV >> 0x10), -1 < iVar3 + -0x10) {
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
    puVar16 = (uint *)g_PerspectiveScanlineColorPtr;
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


// Assembly code:
// 00490ec0: PUSH ESI
//   Label: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0
// 00490ec1: PUSH EDI
// 00490ec2: PUSH EBP
// 00490ec3: MOV EAX,dword ptr [ESI + 0x8]
// 00490ec6: MOV ECX,dword ptr [EDI + 0x8]
// 00490ec9: CMP EAX,ECX
// 00490ecb: JBE 0x00490ed0
//   XREF to: 00490ed0 (CONDITIONAL_JUMP)
// 00490ecd: XCHG EAX,ECX
// 00490ece: XCHG EDI,ESI
// 00490ed0: SHR EAX,0x10
//   Label: LAB_00490ed0
// 00490ed3: SHR ECX,0x10
// 00490ed6: MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00490edd: MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00490ee4: SUB ECX,EAX
// 00490ee6: JLE 0x00491699
//   XREF to: 00491699 (CONDITIONAL_JUMP)
// 00490eec: SHL EAX,0x2
// 00490eef: ADD EBX,EAX
// 00490ef1: ADD EBP,EAX
// 00490ef3: MOV dword ptr [0x006723d0],EBX
//   XREF to: 006723d0 (WRITE)
// 00490ef9: MOV dword ptr [0x006723d4],ECX
//   XREF to: 006723d4 (WRITE)
// 00490eff: MOV dword ptr [0x006723d8],EBP
//   XREF to: 006723d8 (WRITE)
// 00490f05: MOV EBX,dword ptr [ESI + 0x18]
// 00490f08: MOV EAX,dword ptr [EDI + 0x18]
// 00490f0b: MOV dword ptr [0x00672370],EBX
//   XREF to: 00672370 (WRITE)
// 00490f11: MOV [0x00672388],EAX
//   XREF to: 00672388 (WRITE)
// 00490f16: SUB EAX,EBX
// 00490f18: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00490f1f: SHL EDX,0x4
// 00490f22: MOV dword ptr [0x00672394],EDX
//   XREF to: 00672394 (WRITE)
// 00490f28: MOV EBX,dword ptr [ESI + 0x20]
// 00490f2b: MOV EAX,dword ptr [EDI + 0x20]
// 00490f2e: MOV dword ptr [0x00672374],EBX
//   XREF to: 00672374 (WRITE)
// 00490f34: MOV [0x0067238c],EAX
//   XREF to: 0067238c (WRITE)
// 00490f39: SUB EAX,EBX
// 00490f3b: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00490f42: SHL EDX,0x4
// 00490f45: MOV dword ptr [0x00672398],EDX
//   XREF to: 00672398 (WRITE)
// 00490f4b: MOV EBX,dword ptr [ESI + 0x28]
// 00490f4e: MOV EAX,dword ptr [EDI + 0x28]
// 00490f51: MOV dword ptr [0x00672378],EBX
//   XREF to: 00672378 (WRITE)
// 00490f57: MOV [0x00672390],EAX
//   XREF to: 00672390 (WRITE)
// 00490f5c: SUB EAX,EBX
// 00490f5e: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 00490f65: SHL EDX,0x4
// 00490f68: MOV dword ptr [0x0067239c],EDX
//   XREF to: 0067239c (WRITE)
// 00490f6e: MOV EAX,[0x00672370]
//   XREF to: 00672370 (READ)
// 00490f73: MOV EBX,dword ptr [0x00672378]
//   XREF to: 00672378 (READ)
// 00490f79: CDQ
// 00490f7a: SHLD EDX,EAX,0x18
// 00490f7e: SHL EAX,0x18
// 00490f81: IDIV EBX
// 00490f83: MOV [0x006723a0],EAX
//   XREF to: 006723a0 (WRITE)
// 00490f88: MOV EAX,[0x00672374]
//   XREF to: 00672374 (READ)
// 00490f8d: MOV EBX,dword ptr [0x00672378]
//   XREF to: 00672378 (READ)
// 00490f93: CDQ
// 00490f94: SHLD EDX,EAX,0x18
// 00490f98: SHL EAX,0x18
// 00490f9b: IDIV EBX
// 00490f9d: MOV [0x006723a4],EAX
//   XREF to: 006723a4 (WRITE)
// 00490fa2: PUSH dword ptr [0x00672378]
//   XREF to: 00672378 (READ)
// 00490fa8: MOV EDI,0x6723dc
//   XREF to: 006723dc (DATA)
// 00490fad: SUB ECX,0x10
//   Label: LAB_00490fad
// 00490fb0: JS 0x0049128f
//   XREF to: 0049128f (CONDITIONAL_JUMP)
// 00490fb6: MOV EAX,[0x00672370]
//   XREF to: 00672370 (READ)
// 00490fbb: MOV EBX,dword ptr [0x00672374]
//   XREF to: 00672374 (READ)
// 00490fc1: MOV EDX,dword ptr [0x00672378]
//   XREF to: 00672378 (READ)
// 00490fc7: ADD EAX,dword ptr [0x00672394]
//   XREF to: 00672394 (READ)
// 00490fcd: ADD EBX,dword ptr [0x00672398]
//   XREF to: 00672398 (READ)
// 00490fd3: ADD EDX,dword ptr [0x0067239c]
//   XREF to: 0067239c (READ)
// 00490fd9: MOV [0x0067237c],EAX
//   XREF to: 0067237c (WRITE)
// 00490fde: MOV dword ptr [0x00672380],EBX
//   XREF to: 00672380 (WRITE)
// 00490fe4: MOV dword ptr [0x00672384],EDX
//   XREF to: 00672384 (WRITE)
// 00490fea: MOV EAX,[0x0067237c]
//   XREF to: 0067237c (READ)
// 00490fef: MOV EBX,dword ptr [0x00672384]
//   XREF to: 00672384 (READ)
// 00490ff5: CDQ
// 00490ff6: SHLD EDX,EAX,0x18
// 00490ffa: SHL EAX,0x18
// 00490ffd: IDIV EBX
// 00490fff: MOV [0x006723a8],EAX
//   XREF to: 006723a8 (WRITE)
// 00491004: MOV EAX,[0x00672380]
//   XREF to: 00672380 (READ)
// 00491009: MOV EBX,dword ptr [0x00672384]
//   XREF to: 00672384 (READ)
// 0049100f: CDQ
// 00491010: SHLD EDX,EAX,0x18
// 00491014: SHL EAX,0x18
// 00491017: IDIV EBX
// 00491019: MOV [0x006723ac],EAX
//   XREF to: 006723ac (WRITE)
// 0049101e: PUSH ECX
// 0049101f: MOV EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491025: MOV ECX,dword ptr [0x006723a0]
//   XREF to: 006723a0 (READ)
// 0049102b: MOV EDX,dword ptr [0x006723a4]
//   XREF to: 006723a4 (READ)
// 00491031: MOV ESI,dword ptr [0x006723a8]
//   XREF to: 006723a8 (READ)
// 00491037: MOV EBP,dword ptr [0x006723ac]
//   XREF to: 006723ac (READ)
// 0049103d: SUB ESI,ECX
// 0049103f: SUB EBP,EDX
// 00491041: SAR ECX,0x8
// 00491044: SAR EDX,0x8
// 00491047: SAR ESI,0xc
// 0049104a: SAR EBP,0xc
// 0049104d: MOV EBX,0x0
// 00491052: MOV BL,CH
// 00491054: MOV BH,DH
// 00491056: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049105c: ADD ECX,ESI
// 0049105e: MOVZX EAX,byte ptr [EBX]
// 00491061: ADD EDX,EBP
// 00491063: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0049106a: MOV dword ptr [EDI],EAX
//   XREF to: 006723dc (WRITE)
// 0049106c: MOV EBX,0x0
// 00491071: MOV BL,CH
// 00491073: MOV BH,DH
// 00491075: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049107b: ADD ECX,ESI
// 0049107d: MOVZX EAX,byte ptr [EBX]
// 00491080: ADD EDX,EBP
// 00491082: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491089: MOV dword ptr [EDI + 0x4],EAX
//   XREF to: 006723e0 (WRITE)
// 0049108c: MOV EBX,0x0
// 00491091: MOV BL,CH
// 00491093: MOV BH,DH
// 00491095: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049109b: ADD ECX,ESI
// 0049109d: MOVZX EAX,byte ptr [EBX]
// 004910a0: ADD EDX,EBP
// 004910a2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004910a9: MOV dword ptr [EDI + 0x8],EAX
//   XREF to: 006723e4 (WRITE)
// 004910ac: MOV EBX,0x0
// 004910b1: MOV BL,CH
// 004910b3: MOV BH,DH
// 004910b5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004910bb: ADD ECX,ESI
// 004910bd: MOVZX EAX,byte ptr [EBX]
// 004910c0: ADD EDX,EBP
// 004910c2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004910c9: MOV dword ptr [EDI + 0xc],EAX
//   XREF to: 006723e8 (WRITE)
// 004910cc: MOV EBX,0x0
// 004910d1: MOV BL,CH
// 004910d3: MOV BH,DH
// 004910d5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004910db: ADD ECX,ESI
// 004910dd: MOVZX EAX,byte ptr [EBX]
// 004910e0: ADD EDX,EBP
// 004910e2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004910e9: MOV dword ptr [EDI + 0x10],EAX
//   XREF to: 006723ec (WRITE)
// 004910ec: MOV EBX,0x0
// 004910f1: MOV BL,CH
// 004910f3: MOV BH,DH
// 004910f5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004910fb: ADD ECX,ESI
// 004910fd: MOVZX EAX,byte ptr [EBX]
// 00491100: ADD EDX,EBP
// 00491102: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491109: MOV dword ptr [EDI + 0x14],EAX
//   XREF to: 006723f0 (WRITE)
// 0049110c: MOV EBX,0x0
// 00491111: MOV BL,CH
// 00491113: MOV BH,DH
// 00491115: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049111b: ADD ECX,ESI
// 0049111d: MOVZX EAX,byte ptr [EBX]
// 00491120: ADD EDX,EBP
// 00491122: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491129: MOV dword ptr [EDI + 0x18],EAX
//   XREF to: 006723f4 (WRITE)
// 0049112c: MOV EBX,0x0
// 00491131: MOV BL,CH
// 00491133: MOV BH,DH
// 00491135: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049113b: ADD ECX,ESI
// 0049113d: MOVZX EAX,byte ptr [EBX]
// 00491140: ADD EDX,EBP
// 00491142: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491149: MOV dword ptr [EDI + 0x1c],EAX
//   XREF to: 006723f8 (WRITE)
// 0049114c: MOV EBX,0x0
// 00491151: MOV BL,CH
// 00491153: MOV BH,DH
// 00491155: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049115b: ADD ECX,ESI
// 0049115d: MOVZX EAX,byte ptr [EBX]
// 00491160: ADD EDX,EBP
// 00491162: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491169: MOV dword ptr [EDI + 0x20],EAX
//   XREF to: 006723fc (WRITE)
// 0049116c: MOV EBX,0x0
// 00491171: MOV BL,CH
// 00491173: MOV BH,DH
// 00491175: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049117b: ADD ECX,ESI
// 0049117d: MOVZX EAX,byte ptr [EBX]
// 00491180: ADD EDX,EBP
// 00491182: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491189: MOV dword ptr [EDI + 0x24],EAX
//   XREF to: 00672400 (WRITE)
// 0049118c: MOV EBX,0x0
// 00491191: MOV BL,CH
// 00491193: MOV BH,DH
// 00491195: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049119b: ADD ECX,ESI
// 0049119d: MOVZX EAX,byte ptr [EBX]
// 004911a0: ADD EDX,EBP
// 004911a2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004911a9: MOV dword ptr [EDI + 0x28],EAX
//   XREF to: 00672404 (WRITE)
// 004911ac: MOV EBX,0x0
// 004911b1: MOV BL,CH
// 004911b3: MOV BH,DH
// 004911b5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004911bb: ADD ECX,ESI
// 004911bd: MOVZX EAX,byte ptr [EBX]
// 004911c0: ADD EDX,EBP
// 004911c2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004911c9: MOV dword ptr [EDI + 0x2c],EAX
//   XREF to: 00672408 (WRITE)
// 004911cc: MOV EBX,0x0
// 004911d1: MOV BL,CH
// 004911d3: MOV BH,DH
// 004911d5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004911db: ADD ECX,ESI
// 004911dd: MOVZX EAX,byte ptr [EBX]
// 004911e0: ADD EDX,EBP
// 004911e2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004911e9: MOV dword ptr [EDI + 0x30],EAX
//   XREF to: 0067240c (WRITE)
// 004911ec: MOV EBX,0x0
// 004911f1: MOV BL,CH
// 004911f3: MOV BH,DH
// 004911f5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004911fb: ADD ECX,ESI
// 004911fd: MOVZX EAX,byte ptr [EBX]
// 00491200: ADD EDX,EBP
// 00491202: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491209: MOV dword ptr [EDI + 0x34],EAX
//   XREF to: 00672410 (WRITE)
// 0049120c: MOV EBX,0x0
// 00491211: MOV BL,CH
// 00491213: MOV BH,DH
// 00491215: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049121b: ADD ECX,ESI
// 0049121d: MOVZX EAX,byte ptr [EBX]
// 00491220: ADD EDX,EBP
// 00491222: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491229: MOV dword ptr [EDI + 0x38],EAX
//   XREF to: 00672414 (WRITE)
// 0049122c: MOV EBX,0x0
// 00491231: MOV BL,CH
// 00491233: MOV BH,DH
// 00491235: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049123b: ADD ECX,ESI
// 0049123d: MOVZX EAX,byte ptr [EBX]
// 00491240: ADD EDX,EBP
// 00491242: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491249: MOV dword ptr [EDI + 0x3c],EAX
//   XREF to: 00672418 (WRITE)
// 0049124c: POP ECX
// 0049124d: ADD EDI,0x40
// 00491250: MOV EAX,[0x0067237c]
//   XREF to: 0067237c (READ)
// 00491255: MOV EBX,dword ptr [0x00672380]
//   XREF to: 00672380 (READ)
// 0049125b: MOV EDX,dword ptr [0x00672384]
//   XREF to: 00672384 (READ)
// 00491261: MOV ESI,dword ptr [0x006723a8]
//   XREF to: 006723a8 (READ)
// 00491267: MOV EBP,dword ptr [0x006723ac]
//   XREF to: 006723ac (READ)
// 0049126d: MOV [0x00672370],EAX
//   XREF to: 00672370 (WRITE)
// 00491272: MOV dword ptr [0x00672374],EBX
//   XREF to: 00672374 (WRITE)
// 00491278: MOV dword ptr [0x00672378],EDX
//   XREF to: 00672378 (WRITE)
// 0049127e: MOV dword ptr [0x006723a0],ESI
//   XREF to: 006723a0 (WRITE)
// 00491284: MOV dword ptr [0x006723a4],EBP
//   XREF to: 006723a4 (WRITE)
// 0049128a: JMP 0x00490fad
//   XREF to: 00490fad (UNCONDITIONAL_JUMP)
// 0049128f: ADD ECX,0x10
//   Label: LAB_0049128f
// 00491292: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491298: MOV EAX,[0x00672388]
//   XREF to: 00672388 (READ)
// 0049129d: MOV EBX,dword ptr [0x00672390]
//   XREF to: 00672390 (READ)
// 004912a3: CDQ
// 004912a4: SHLD EDX,EAX,0x18
// 004912a8: SHL EAX,0x18
// 004912ab: IDIV EBX
// 004912ad: MOV [0x006723a8],EAX
//   XREF to: 006723a8 (WRITE)
// 004912b2: MOV EAX,[0x0067238c]
//   XREF to: 0067238c (READ)
// 004912b7: MOV EBX,dword ptr [0x00672390]
//   XREF to: 00672390 (READ)
// 004912bd: CDQ
// 004912be: SHLD EDX,EAX,0x18
// 004912c2: SHL EAX,0x18
// 004912c5: IDIV EBX
// 004912c7: MOV [0x006723ac],EAX
//   XREF to: 006723ac (WRITE)
// 004912cc: MOV EAX,[0x006723a8]
//   XREF to: 006723a8 (READ)
// 004912d1: SUB EAX,dword ptr [0x006723a0]
//   XREF to: 006723a0 (READ)
// 004912d7: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 004912de: SAR EDX,0x8
// 004912e1: MOV ESI,EDX
// 004912e3: MOV EAX,[0x006723ac]
//   XREF to: 006723ac (READ)
// 004912e8: SUB EAX,dword ptr [0x006723a4]
//   XREF to: 006723a4 (READ)
// 004912ee: IMUL dword ptr [ECX*0x4 + 0x2d02584]
//   XREF to: 02d02584 (DATA)
// 004912f5: SAR EDX,0x8
// 004912f8: MOV EBP,EDX
// 004912fa: MOV EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491300: SHL ECX,0x10
// 00491303: AND ESI,0xffff
// 00491309: MOV EDX,dword ptr [0x006723a4]
//   XREF to: 006723a4 (READ)
// 0049130f: OR ESI,ECX
// 00491311: MOV ECX,dword ptr [0x006723a0]
//   XREF to: 006723a0 (READ)
// 00491317: SAR ECX,0x8
// 0049131a: SAR EDX,0x8
// 0049131d: MOV EBX,0x0
// 00491322: MOV BL,CH
// 00491324: MOV BH,DH
// 00491326: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049132c: ADD ECX,ESI
// 0049132e: MOVZX EAX,byte ptr [EBX]
// 00491331: ADD EDX,EBP
// 00491333: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0049133a: MOV dword ptr [EDI],EAX
//   XREF to: 0067241c (WRITE)
// 0049133c: SUB ESI,0x10000
// 00491342: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491348: MOV EBX,0x0
// 0049134d: MOV BL,CH
// 0049134f: MOV BH,DH
// 00491351: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491357: ADD ECX,ESI
// 00491359: MOVZX EAX,byte ptr [EBX]
// 0049135c: ADD EDX,EBP
// 0049135e: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491365: MOV dword ptr [EDI + 0x4],EAX
//   XREF to: 00672420 (WRITE)
// 00491368: SUB ESI,0x10000
// 0049136e: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491374: MOV EBX,0x0
// 00491379: MOV BL,CH
// 0049137b: MOV BH,DH
// 0049137d: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491383: ADD ECX,ESI
// 00491385: MOVZX EAX,byte ptr [EBX]
// 00491388: ADD EDX,EBP
// 0049138a: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491391: MOV dword ptr [EDI + 0x8],EAX
//   XREF to: 00672424 (WRITE)
// 00491394: SUB ESI,0x10000
// 0049139a: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004913a0: MOV EBX,0x0
// 004913a5: MOV BL,CH
// 004913a7: MOV BH,DH
// 004913a9: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004913af: ADD ECX,ESI
// 004913b1: MOVZX EAX,byte ptr [EBX]
// 004913b4: ADD EDX,EBP
// 004913b6: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004913bd: MOV dword ptr [EDI + 0xc],EAX
//   XREF to: 00672428 (WRITE)
// 004913c0: SUB ESI,0x10000
// 004913c6: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004913cc: MOV EBX,0x0
// 004913d1: MOV BL,CH
// 004913d3: MOV BH,DH
// 004913d5: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004913db: ADD ECX,ESI
// 004913dd: MOVZX EAX,byte ptr [EBX]
// 004913e0: ADD EDX,EBP
// 004913e2: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004913e9: MOV dword ptr [EDI + 0x10],EAX
//   XREF to: 0067242c (WRITE)
// 004913ec: SUB ESI,0x10000
// 004913f2: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004913f8: MOV EBX,0x0
// 004913fd: MOV BL,CH
// 004913ff: MOV BH,DH
// 00491401: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491407: ADD ECX,ESI
// 00491409: MOVZX EAX,byte ptr [EBX]
// 0049140c: ADD EDX,EBP
// 0049140e: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491415: MOV dword ptr [EDI + 0x14],EAX
//   XREF to: 00672430 (WRITE)
// 00491418: SUB ESI,0x10000
// 0049141e: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491424: MOV EBX,0x0
// 00491429: MOV BL,CH
// 0049142b: MOV BH,DH
// 0049142d: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491433: ADD ECX,ESI
// 00491435: MOVZX EAX,byte ptr [EBX]
// 00491438: ADD EDX,EBP
// 0049143a: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491441: MOV dword ptr [EDI + 0x18],EAX
//   XREF to: 00672434 (WRITE)
// 00491444: SUB ESI,0x10000
// 0049144a: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491450: MOV EBX,0x0
// 00491455: MOV BL,CH
// 00491457: MOV BH,DH
// 00491459: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049145f: ADD ECX,ESI
// 00491461: MOVZX EAX,byte ptr [EBX]
// 00491464: ADD EDX,EBP
// 00491466: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0049146d: MOV dword ptr [EDI + 0x1c],EAX
//   XREF to: 00672438 (WRITE)
// 00491470: SUB ESI,0x10000
// 00491476: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 0049147c: MOV EBX,0x0
// 00491481: MOV BL,CH
// 00491483: MOV BH,DH
// 00491485: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049148b: ADD ECX,ESI
// 0049148d: MOVZX EAX,byte ptr [EBX]
// 00491490: ADD EDX,EBP
// 00491492: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491499: MOV dword ptr [EDI + 0x20],EAX
//   XREF to: 0067243c (WRITE)
// 0049149c: SUB ESI,0x10000
// 004914a2: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004914a8: MOV EBX,0x0
// 004914ad: MOV BL,CH
// 004914af: MOV BH,DH
// 004914b1: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004914b7: ADD ECX,ESI
// 004914b9: MOVZX EAX,byte ptr [EBX]
// 004914bc: ADD EDX,EBP
// 004914be: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004914c5: MOV dword ptr [EDI + 0x24],EAX
//   XREF to: 00672440 (WRITE)
// 004914c8: SUB ESI,0x10000
// 004914ce: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004914d4: MOV EBX,0x0
// 004914d9: MOV BL,CH
// 004914db: MOV BH,DH
// 004914dd: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004914e3: ADD ECX,ESI
// 004914e5: MOVZX EAX,byte ptr [EBX]
// 004914e8: ADD EDX,EBP
// 004914ea: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004914f1: MOV dword ptr [EDI + 0x28],EAX
//   XREF to: 00672444 (WRITE)
// 004914f4: SUB ESI,0x10000
// 004914fa: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491500: MOV EBX,0x0
// 00491505: MOV BL,CH
// 00491507: MOV BH,DH
// 00491509: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049150f: ADD ECX,ESI
// 00491511: MOVZX EAX,byte ptr [EBX]
// 00491514: ADD EDX,EBP
// 00491516: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 0049151d: MOV dword ptr [EDI + 0x2c],EAX
//   XREF to: 00672448 (WRITE)
// 00491520: SUB ESI,0x10000
// 00491526: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 0049152c: MOV EBX,0x0
// 00491531: MOV BL,CH
// 00491533: MOV BH,DH
// 00491535: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049153b: ADD ECX,ESI
// 0049153d: MOVZX EAX,byte ptr [EBX]
// 00491540: ADD EDX,EBP
// 00491542: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491549: MOV dword ptr [EDI + 0x30],EAX
//   XREF to: 0067244c (WRITE)
// 0049154c: SUB ESI,0x10000
// 00491552: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 00491554: MOV EBX,0x0
// 00491559: MOV BL,CH
// 0049155b: MOV BH,DH
// 0049155d: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00491563: ADD ECX,ESI
// 00491565: MOVZX EAX,byte ptr [EBX]
// 00491568: ADD EDX,EBP
// 0049156a: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491571: MOV dword ptr [EDI + 0x34],EAX
//   XREF to: 00672450 (WRITE)
// 00491574: SUB ESI,0x10000
// 0049157a: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 0049157c: MOV EBX,0x0
// 00491581: MOV BL,CH
// 00491583: MOV BH,DH
// 00491585: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0049158b: ADD ECX,ESI
// 0049158d: MOVZX EAX,byte ptr [EBX]
// 00491590: ADD EDX,EBP
// 00491592: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00491599: MOV dword ptr [EDI + 0x38],EAX
//   XREF to: 00672454 (WRITE)
// 0049159c: SUB ESI,0x10000
// 004915a2: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004915a4: MOV EBX,0x0
// 004915a9: MOV BL,CH
// 004915ab: MOV BH,DH
// 004915ad: ADD EBX,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004915b3: ADD ECX,ESI
// 004915b5: MOVZX EAX,byte ptr [EBX]
// 004915b8: ADD EDX,EBP
// 004915ba: MOV EAX,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 004915c1: MOV dword ptr [EDI + 0x3c],EAX
//   XREF to: 00672458 (WRITE)
// 004915c4: SUB ESI,0x10000
// 004915ca: JS 0x004915cc
//   XREF to: 004915cc (CONDITIONAL_JUMP)
// 004915cc: POP dword ptr [0x00672378]
//   Label: LAB_004915cc
//   XREF to: 00672378 (WRITE)
// 004915d2: MOV EBX,0x6723dc
//   XREF to: 006723dc (DATA)
// 004915d7: MOV ECX,dword ptr [0x006723d4]
//   XREF to: 006723d4 (READ)
// 004915dd: MOV EDX,dword ptr [0x0067239c]
//   XREF to: 0067239c (READ)
// 004915e3: SAR EDX,0x8
// 004915e6: MOV ESI,dword ptr [0x00672378]
//   XREF to: 00672378 (READ)
// 004915ec: SAR ESI,0x4
// 004915ef: MOV EDI,dword ptr [0x006723d0]
//   XREF to: 006723d0 (READ)
// 004915f5: MOV EBP,dword ptr [0x006723d8]
//   XREF to: 006723d8 (READ)
// 004915fb: SUB ECX,0x4
//   Label: LAB_004915fb
// 004915fe: JS 0x00491649
//   XREF to: 00491649 (CONDITIONAL_JUMP)
// 00491600: CMP ESI,dword ptr [EBP]
// 00491603: JL 0x0049160c
//   XREF to: 0049160c (CONDITIONAL_JUMP)
// 00491605: MOV EAX,dword ptr [EBX]
//   XREF to: 006723dc (READ)
//   XREF to: 006723ec (READ)
// 00491607: MOV dword ptr [EBP],ESI
// 0049160a: MOV dword ptr [EDI],EAX
// 0049160c: ADD ESI,EDX
//   Label: LAB_0049160c
// 0049160e: CMP ESI,dword ptr [EBP + 0x4]
// 00491611: JL 0x0049161c
//   XREF to: 0049161c (CONDITIONAL_JUMP)
// 00491613: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 006723e0 (READ)
//   XREF to: 006723f0 (READ)
// 00491616: MOV dword ptr [EBP + 0x4],ESI
// 00491619: MOV dword ptr [EDI + 0x4],EAX
// 0049161c: ADD ESI,EDX
//   Label: LAB_0049161c
// 0049161e: CMP ESI,dword ptr [EBP + 0x8]
// 00491621: JL 0x0049162c
//   XREF to: 0049162c (CONDITIONAL_JUMP)
// 00491623: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 006723e4 (READ)
//   XREF to: 006723f4 (READ)
// 00491626: MOV dword ptr [EBP + 0x8],ESI
// 00491629: MOV dword ptr [EDI + 0x8],EAX
// 0049162c: ADD ESI,EDX
//   Label: LAB_0049162c
// 0049162e: CMP ESI,dword ptr [EBP + 0xc]
// 00491631: JL 0x0049163c
//   XREF to: 0049163c (CONDITIONAL_JUMP)
// 00491633: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 006723e8 (READ)
// 00491636: MOV dword ptr [EBP + 0xc],ESI
// 00491639: MOV dword ptr [EDI + 0xc],EAX
// 0049163c: ADD ESI,EDX
//   Label: LAB_0049163c
// 0049163e: ADD EBX,0x10
// 00491641: ADD EDI,0x10
// 00491644: ADD EBP,0x10
// 00491647: JMP 0x004915fb
//   XREF to: 004915fb (UNCONDITIONAL_JUMP)
// 00491649: ADD ECX,0x4
//   Label: LAB_00491649
// 0049164c: JS 0x00491699
//   XREF to: 00491699 (CONDITIONAL_JUMP)
// 0049164e: CMP ESI,dword ptr [EBP]
// 00491651: JL 0x0049165a
//   XREF to: 0049165a (CONDITIONAL_JUMP)
// 00491653: MOV EAX,dword ptr [EBX]
//   XREF to: 006723ec (READ)
// 00491655: MOV dword ptr [EBP],ESI
// 00491658: MOV dword ptr [EDI],EAX
// 0049165a: ADD ESI,EDX
//   Label: LAB_0049165a
// 0049165c: SUB ECX,0x1
// 0049165f: JS 0x00491699
//   XREF to: 00491699 (CONDITIONAL_JUMP)
// 00491661: CMP ESI,dword ptr [EBP + 0x4]
// 00491664: JL 0x0049166f
//   XREF to: 0049166f (CONDITIONAL_JUMP)
// 00491666: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 006723f0 (READ)
// 00491669: MOV dword ptr [EBP + 0x4],ESI
// 0049166c: MOV dword ptr [EDI + 0x4],EAX
// 0049166f: ADD ESI,EDX
//   Label: LAB_0049166f
// 00491671: SUB ECX,0x1
// 00491674: JS 0x00491699
//   XREF to: 00491699 (CONDITIONAL_JUMP)
// 00491676: CMP ESI,dword ptr [EBP + 0x8]
// 00491679: JL 0x00491684
//   XREF to: 00491684 (CONDITIONAL_JUMP)
// 0049167b: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 006723f4 (READ)
// 0049167e: MOV dword ptr [EBP + 0x8],ESI
// 00491681: MOV dword ptr [EDI + 0x8],EAX
// 00491684: ADD ESI,EDX
//   Label: LAB_00491684
// 00491686: SUB ECX,0x1
// 00491689: JS 0x00491699
//   XREF to: 00491699 (CONDITIONAL_JUMP)
// 0049168b: CMP ESI,dword ptr [EBP + 0xc]
// 0049168e: JL 0x00491699
//   XREF to: 00491699 (CONDITIONAL_JUMP)
// 00491690: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 006723f8 (READ)
// 00491693: MOV dword ptr [EBP + 0xc],ESI
// 00491696: MOV dword ptr [EDI + 0xc],EAX
// 00491699: POP EBP
//   Label: LAB_00491699
// 0049169a: POP EDI
// 0049169b: POP ESI
// 0049169c: RET
