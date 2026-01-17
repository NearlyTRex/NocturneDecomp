// Name: wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
// Address: 005b4031
// Address Range: [[005b4031, 005b41b1] [005b41c0, 005b427c] [005b4280, 005b430b] [005b4310, 005b4339] [005b4340, 005b4464] [005b4470, 005b44d9] [005b44e0, 005b44e5] [005b44f0, 005b45c8] [005b45d0, 005b45f3] [005b4600, 005b4669] [005b4670, 005b47a8] [005b47b6, 005b47cd] [005b47d0, 005b47db] [005b47e0, 005b4822]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031
          (STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

{
  SAlphaEntry SVar1;
  bool bVar2;
  byte bVar3;
  undefined6 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  STexturedVertex *pSVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar24;
  uint uVar22;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ulonglong uVar23;
  ushort uVar29;
  ushort uVar30;
  uint5 uVar25;
  ushort uVar31;
  ushort uVar32;
  byte bVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  short sVar36;
  ushort uVar37;
  short sVar39;
  short sVar40;
  ulonglong uVar38;
  short sVar41;
  short sVar42;
  short sVar44;
  short sVar45;
  ulonglong uVar43;
  short sVar46;
  ushort uVar47;
  ushort uVar48;
  char cVar4;
  char cVar5;
  byte bVar6;
  
  uVar19 = left_vertex->screen_x;
  uVar11 = right_vertex->screen_x;
  uVar8 = uVar19;
  pSVar16 = left_vertex;
  if (uVar11 < uVar19) {
    uVar8 = uVar11;
    uVar11 = uVar19;
    pSVar16 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar8 = uVar8 >> 0x10;
  iVar10 = (uVar11 >> 0x10) - uVar8;
  if (iVar10 != 0 && uVar8 <= uVar11 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar8 * 4);
    g_ScanlinePixelCount = iVar10 * 4;
    puVar18 = g_ZBufferScanlineArray[scanline_y] + uVar8;
    g_CurrentZBufferPtr = (int *)puVar18;
    if (g_RenderStateFlags == 0x80) {
      uVar19 = pSVar16->perspective_w;
      iVar17 = (int)((ulonglong)
                     ((longlong)(int)(right_vertex->perspective_w - uVar19) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      iVar10 = g_ScanlinePixelCount;
      g_StartDepthW = uVar19;
      g_DeltaDepthW = iVar17;
      do {
        *puVar18 = uVar19;
        uVar19 = uVar19 + iVar17;
        puVar18 = puVar18 + 1;
        iVar12 = iVar10 + -4;
        bVar2 = 3 < iVar10;
        iVar10 = iVar12;
      } while (iVar12 != 0 && bVar2);
      return;
    }
    if (g_RenderStateFlag2 == PREPROCESS_TEXTURE_NORMALIZE_ALT) {
      uVar19 = pSVar16->texture_u;
      g_StartTextureU =
           (int)(CONCAT44 /* combine 2-byte values */(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)pSVar16->perspective_w);
      uVar19 = right_vertex->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44 /* combine 2-byte values */(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      uVar19 = pSVar16->texture_v;
      g_StartTextureV =
           (int)(CONCAT44 /* combine 2-byte values */(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)pSVar16->perspective_w);
      uVar19 = right_vertex->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44 /* combine 2-byte values */(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = pSVar16->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_u - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_StartTextureV = pSVar16->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_v - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    iVar17 = pSVar16->perspective_w;
    g_DeltaDepthW =
         (int)((ulonglong)
               ((longlong)(right_vertex->perspective_w - iVar17) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    g_VertexAlphaStart = pSVar16->vertex_alpha;
    g_VertexAlphaDelta =
         (int)((ulonglong)
               ((longlong)(right_vertex->vertex_alpha - g_VertexAlphaStart) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    if ((g_RenderStateFlags & 0x200U) == 0) {
      if ((g_RenderStateFlags & 4U) == 0) {
        if ((g_RenderStateFlags & 0x10U) == 0) {
          uVar38 = psllw(g_AlphaTable[0xff],7);
          uVar43 = 0;
        }
        else {
          uVar19 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          uVar38 = psllw(g_AlphaTable[uVar19],7);
          uVar43 = 0;
        }
      }
      else {
        uVar19 = right_vertex->vertex_red - 0x100;
        uVar11 = pSVar16->vertex_red - 0x100;
        if (0xfff < uVar19) {
          uVar19 = 0xfff;
        }
        if (0xfff < uVar11) {
          uVar11 = 0xfff;
        }
        uVar8 = uVar11 * 8;
        uVar19 = (uint)((ulonglong)
                        ((longlong)(int)(uVar19 * 8 + uVar11 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
        g_VertexRedStart = uVar8 & 0xffff;
        g_VertexRedDelta = uVar19 & 0xffff;
        uVar38 = ((CONCAT44 /* combine 2-byte values */(uRam00682694,uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44 /* combine 2-byte values */(uRam00682694,uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44 /* combine 2-byte values */(uRam00682694,uVar8) & 0xffffffff0000ffff;
        uVar43 = ((CONCAT44 /* combine 2-byte values */(uRam006826b4,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44 /* combine 2-byte values */(uRam006826b4,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44 /* combine 2-byte values */(uRam006826b4,uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar9 = (uint)pSVar16->vertex_red >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_red >> 1) - uVar9) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexRedStart = uVar9 & 0xffff;
      g_VertexRedDelta = uVar19 & 0xffff;
      uVar13 = (uint)pSVar16->vertex_green >> 1;
      uVar11 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_green >> 1) - uVar13) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexGreenStart = uVar13 & 0xffff;
      g_VertexGreenDelta = uVar11 & 0xffff;
      uVar14 = (uint)pSVar16->vertex_blue >> 1;
      uVar8 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)right_vertex->vertex_blue >> 1) - uVar14) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexBlueStart = uVar14 & 0xffff;
      g_VertexBlueDelta = uVar8 & 0xffff;
      uVar38 = ((CONCAT44 /* combine 2-byte values */(uRam00682694,uVar9) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44 /* combine 2-byte values */(uRam0068269c,uVar13) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44 /* combine 2-byte values */(uRam006826a4,uVar14) & 0xffffffff0000ffff;
      uVar43 = ((CONCAT44 /* combine 2-byte values */(uRam006826b4,uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44 /* combine 2-byte values */(uRam006826bc,uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44 /* combine 2-byte values */(uRam006826c4,uVar8) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar42 = (short)uVar43;
    sVar44 = (short)(uVar43 >> 0x10);
    sVar45 = (short)(uVar43 >> 0x20);
    sVar46 = (short)(uVar43 >> 0x30);
    g_StartDepthW = iVar17;
    if ((g_CurrentTextureOpacityData == (void *)0x0) && ((g_RenderStateFlags & 2U) == 0)) {
      uVar35 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar37 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar43 = (ulonglong)_g_SolidColorMode >> 8;
      bVar33 = (byte)_g_SolidColorMode;
      uVar11 = g_StartTextureU;
      uVar8 = g_StartTextureV;
      iVar10 = g_VertexAlphaStart;
      if ((g_RenderStateFlags & 8U) == 0) {
        iVar10 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar47 = (ushort)(uVar38 >> 0x10);
        uVar48 = (ushort)(uVar38 >> 0x20);
        uVar20 = (ushort)(uVar38 >> 0x30);
        if (((g_RenderStateFlags & 0x40U) == 0) ||
           (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) {
          if ((g_RenderStateFlags & 1U) == 0) {
            uVar9 = g_SpecialColor;
            if ((g_RenderStateFlags & 0x200U) == 0) {
              uVar9 = g_ActiveRenderColor;
            }
          }
          else {
            uVar9 = g_Hardware32BitPalette
                    [*(byte *)((uVar11 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar8 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData)];
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52 /* combine 2-byte values */((int5)(CONCAT43 /* combine 2-byte values */((int)(((uint7)CONCAT21 /* combine 2-byte values */((short)(((uint7)(byte)(
                                                  uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar9 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12 /* combine 2-byte values */((char)(uVar9 >> 8),(short)uVar9)) >> 0x10
                                        ),(short)uVar9) & 0xffffffff00ff00ff,4);
          uVar23 = pmulhw(uVar23,CONCAT26 /* combine 2-byte values */(uVar20 >> 3,
                                          CONCAT24 /* combine 2-byte values */(uVar48 >> 3,
                                                   CONCAT22 /* combine 2-byte values */(uVar47 >> 3,(ushort)uVar38 >> 3))));
          sVar36 = (short)uVar23;
          bVar3 = (0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 - (0xff < sVar36);
          sVar36 = (short)((ulonglong)uVar23 >> 0x10);
          cVar4 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar23 >> 0x10) -
                  (0xff < sVar36);
          uVar21 = CONCAT11 /* combine 2-byte values */(cVar4,bVar3);
          sVar36 = (short)((ulonglong)uVar23 >> 0x20);
          cVar5 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                  (0xff < sVar36);
          sVar36 = (short)((ulonglong)uVar23 >> 0x30);
          bVar6 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar36);
          uVar22 = CONCAT13 /* combine 2-byte values */(bVar6,CONCAT12 /* combine 2-byte values */(cVar5,uVar21));
          if ((g_RenderStateFlags & 8U) != 0) {
            SVar1 = g_AlphaTable[iVar10 >> 8];
            uVar34 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
            uVar9 = (uint)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)bVar6 << 0x30) >> 0x28),
                                                    CONCAT14 /* combine 2-byte values */(cVar5,uVar22)) >> 0x20),uVar22) >> 0x18
                          );
            uVar25 = (uint5)uVar9 & 0xffffffff00;
            uVar24 = (ushort)bVar3 * (short)uVar34 + (ushort)bVar33 * SVar1.red;
            uVar29 = ((ushort)(CONCAT43 /* combine 2-byte values */(uVar9,CONCAT12 /* combine 2-byte values */(cVar4,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar34 >> 0x10) + (ushort)(byte)uVar43 * SVar1.green;
            uVar27 = (short)(uVar25 >> 8) * (short)(uVar34 >> 0x20) +
                     (short)CONCAT21 /* combine 2-byte values */(uVar37,(char)uVar35) * SVar1.blue;
            uVar31 = (short)(uVar25 >> 0x18) * (short)(uVar34 >> 0x30) + (uVar37 >> 8) * SVar1.pad;
            uVar26 = uVar24 >> 8;
            uVar30 = uVar29 >> 8;
            uVar28 = uVar27 >> 8;
            uVar32 = uVar31 >> 8;
            uVar22 = CONCAT13 /* combine 2-byte values */((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                              (0xff < uVar32),
                              CONCAT12 /* combine 2-byte values */((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                       (0xff < uVar28),
                                       CONCAT11 /* combine 2-byte values */((uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar30),
                                                (uVar26 != 0) * (uVar26 < 0x100) *
                                                (char)(uVar24 >> 8) - (0xff < uVar26))));
          }
          *(uint *)((int)g_CurrentScreenPtr + uVar19) = uVar22;
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar19) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar19) break;
        uVar11 = uVar11 + g_DeltaTextureU;
        sVar36 = (ushort)uVar38 + sVar42;
        sVar39 = uVar47 + sVar44;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar20 + sVar46;
        uVar8 = uVar8 + g_DeltaTextureV;
        iVar17 = iVar17 + g_DeltaDepthW;
        iVar10 = iVar10 + g_VertexAlphaDelta;
        uVar38 = CONCAT26 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >> 0x30) < sVar41),
                          CONCAT24 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >> 0x20) <
                                            sVar40),
                                   CONCAT22 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >>
                                                             0x10) < sVar39),
                                            -(ushort)(SUB82 /* extract 2-byte value */(0,0) < sVar36)))) &
                 CONCAT26 /* combine 2-byte values */(sVar41,CONCAT24 /* combine 2-byte values */(sVar40,CONCAT22 /* combine 2-byte values */(sVar39,sVar36)));
      }
    }
    else {
      iVar10 = g_VertexAlphaStart;
      if ((g_RenderStateFlags & 0x100U) == 0) {
        iVar10 = g_CurrentAlphaValue << 8;
        g_VertexAlphaDelta = 0;
      }
      uVar11 = g_StartTextureU;
      uVar8 = g_StartTextureV;
      if (g_CurrentTextureOpacityData != (void *)0x0) {
        while( true ) {
          uVar37 = (ushort)uVar38;
          uVar47 = (ushort)(uVar38 >> 0x10);
          uVar48 = (ushort)(uVar38 >> 0x20);
          uVar20 = (ushort)(uVar38 >> 0x30);
          if (((g_RenderStateFlags & 0x40U) == 0) ||
             (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) {
            pbVar15 = (byte *)((uVar11 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar8 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData);
            uVar9 = g_Hardware32BitPalette[*pbVar15];
            uVar38 = (ulonglong)
                     CONCAT52 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */((int)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(uVar9 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14 /* combine 2-byte values */((char)(uVar9 >> 0x10),uVar9)) >> 0x20),
                                                  uVar9) >> 0x18),(char)(uVar9 >> 8)),
                              (ushort)(byte)uVar9) & 0xffffffff00ffffff;
            uVar9 = (uint)*(byte *)(((int)pbVar15 - (int)g_CurrentTextureData) +
                                   (int)g_CurrentTextureOpacityData);
            if (uVar9 != 0) {
              if ((((iVar10 < 0xff01) || (uVar9 < 0xff)) || (iVar10 < 0xff)) || (g_BlendMode != 0))
              {
                uVar22 = *(uint *)(uVar19 + (int)g_CurrentScreenPtr);
                uVar24 = (ushort)(((uint7)(byte)((uint)uVar22 >> 0x18) << 0x30) >> 0x28);
                uVar43 = (ulonglong)
                         CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */(uVar24,CONCAT14 /* combine 2-byte values */((char)((uint)uVar22 >> 0x10),
                                                                  uVar22)) >> 0x20),uVar22) &
                         0xffffffff00ffffff;
                uVar7 = CONCAT51 /* combine 2-byte values */((int5)(uVar43 >> 0x18),(char)((uint)uVar22 >> 8));
                uVar23 = psllw(uVar38,4);
                uVar23 = pmulhw(uVar23,CONCAT26 /* combine 2-byte values */(uVar20 >> 3,
                                                CONCAT24 /* combine 2-byte values */(uVar48 >> 3,
                                                         CONCAT22 /* combine 2-byte values */(uVar47 >> 3,uVar37 >> 3))));
                SVar1 = g_AlphaTable[uVar9 * iVar10 >> 0x10];
                sVar36 = (short)uVar23;
                sVar39 = (short)((ulonglong)uVar23 >> 0x10);
                sVar40 = (short)((ulonglong)uVar23 >> 0x20);
                sVar41 = (short)((ulonglong)uVar23 >> 0x30);
                uVar38 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
                uVar29 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                                 (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar41)
                                                ) << 0x30) >> 0x28);
                uVar26 = (ushort)(byte)((0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 -
                                       (0xff < sVar36));
                uVar30 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                        (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar39));
                sVar36 = (short)CONCAT21 /* combine 2-byte values */(uVar29,(0 < sVar40) * (sVar40 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar40))
                ;
                uVar29 = uVar29 >> 8;
                if (g_BlendMode == 0) {
                  uVar23 = paddusw(CONCAT26 /* combine 2-byte values */(uVar29 * SVar1.pad,
                                            CONCAT24 /* combine 2-byte values */(sVar36 * SVar1.blue,
                                                     CONCAT22 /* combine 2-byte values */(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),
                                   CONCAT26 /* combine 2-byte values */((uVar24 >> 8) * (short)(uVar38 >> 0x30),
                                            CONCAT24 /* combine 2-byte values */((short)(uVar43 >> 0x20) *
                                                     (short)(uVar38 >> 0x20),
                                                     CONCAT22 /* combine 2-byte values */((short)uVar7 * (short)(uVar38 >> 0x10)
                                                              ,(ushort)(byte)uVar22 * (short)uVar38)
                                                    )));
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar22 = CONCAT13 /* combine 2-byte values */((uVar30 != 0) * (uVar30 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                    CONCAT12 /* combine 2-byte values */((uVar29 != 0) * (uVar29 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar29),
                                             CONCAT11 /* combine 2-byte values */((uVar26 != 0) * (uVar26 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x18) -
                                                      (0xff < uVar26),
                                                      (uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 8) -
                                                      (0xff < uVar24))));
                }
                else {
                  uVar23 = psllw(CONCAT62 /* combine 2-byte values */(uVar7,(ushort)(byte)uVar22),8);
                  uVar23 = paddusw(CONCAT26 /* combine 2-byte values */(uVar29 * SVar1.pad,
                                            CONCAT24 /* combine 2-byte values */(sVar36 * SVar1.blue,
                                                     CONCAT22 /* combine 2-byte values */(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),uVar23);
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar22 = CONCAT13 /* combine 2-byte values */((uVar30 != 0) * (uVar30 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                    CONCAT12 /* combine 2-byte values */((uVar29 != 0) * (uVar29 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar29),
                                             CONCAT11 /* combine 2-byte values */((uVar26 != 0) * (uVar26 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x18) -
                                                      (0xff < uVar26),
                                                      (uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 8) -
                                                      (0xff < uVar24))));
                }
              }
              else {
                uVar23 = psllw(uVar38,4);
                uVar23 = pmulhw(uVar23,CONCAT26 /* combine 2-byte values */(uVar20 >> 3,
                                                CONCAT24 /* combine 2-byte values */(uVar48 >> 3,
                                                         CONCAT22 /* combine 2-byte values */(uVar47 >> 3,uVar37 >> 3))));
                sVar36 = (short)uVar23;
                sVar39 = (short)((ulonglong)uVar23 >> 0x10);
                sVar40 = (short)((ulonglong)uVar23 >> 0x20);
                sVar41 = (short)((ulonglong)uVar23 >> 0x30);
                uVar22 = CONCAT13 /* combine 2-byte values */((0 < sVar41) * (sVar41 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar41),
                                  CONCAT12 /* combine 2-byte values */((0 < sVar40) * (sVar40 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar40),
                                           CONCAT11 /* combine 2-byte values */((0 < sVar39) * (sVar39 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x10) -
                                                    (0xff < sVar39),
                                                    (0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 -
                                                    (0xff < sVar36))));
              }
              *(uint *)(uVar19 + (int)g_CurrentScreenPtr) = uVar22;
              if ((g_RenderStateFlags & 0x80U) != 0) {
                *(int *)(uVar19 + (int)g_CurrentZBufferPtr) = iVar17;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if ((uint)g_ScanlinePixelCount <= uVar19) break;
          uVar11 = uVar11 + g_DeltaTextureU;
          uVar8 = uVar8 + g_DeltaTextureV;
          iVar17 = iVar17 + g_DeltaDepthW;
          iVar10 = iVar10 + g_VertexAlphaDelta;
          uVar38 = CONCAT26 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >> 0x30) <
                                     (short)(uVar20 + sVar46)),
                            CONCAT24 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >> 0x20) <
                                              (short)(uVar48 + sVar45)),
                                     CONCAT22 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >>
                                                               0x10) < (short)(uVar47 + sVar44)),
                                              -(ushort)(SUB82 /* extract 2-byte value */(0,0) <
                                                       (short)(uVar37 + sVar42))))) &
                   CONCAT26 /* combine 2-byte values */(uVar20 + sVar46,
                            CONCAT24 /* combine 2-byte values */(uVar48 + sVar45,CONCAT22 /* combine 2-byte values */(uVar47 + sVar44,uVar37 + sVar42)));
        }
        return;
      }
      while( true ) {
        uVar37 = (ushort)(uVar38 >> 0x10);
        uVar47 = (ushort)(uVar38 >> 0x20);
        uVar48 = (ushort)(uVar38 >> 0x30);
        if ((((g_RenderStateFlags & 0x40U) == 0) ||
            (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) &&
           (uVar9 = g_Hardware32BitPalette
                    [*(byte *)((uVar11 >> g_TextureShift1 & (uint)g_TextureMask1) +
                               (uVar8 >> g_TextureShift2 & (uint)g_TextureMask2) +
                              (int)g_CurrentTextureData)], uVar9 != 0)) {
          uVar43 = 0;
          if ((g_RenderStateFlags & 0x20U) != 0) {
            uVar22 = *(uint *)(uVar19 + (int)g_CurrentScreenPtr);
            uVar43 = (ulonglong)
                     CONCAT52 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */((int)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)((uint)
                                                  uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14 /* combine 2-byte values */((char)((uint)uVar22 >> 0x10),uVar22)) >>
                                                  0x20),uVar22) >> 0x18),(char)((uint)uVar22 >> 8)),
                              (ushort)(byte)uVar22) & 0xffffffff00ffffff;
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */((int)(CONCAT34 /* combine 2-byte values */((int3)(CONCAT25 /* combine 2-byte values */((short)(((uint7)(byte)(
                                                  uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14 /* combine 2-byte values */((char)(uVar9 >> 0x10),uVar9)) >> 0x20),
                                                  uVar9) >> 0x18),(char)(uVar9 >> 8)),
                                  (ushort)(byte)uVar9) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26 /* combine 2-byte values */(uVar48 >> 3,
                                          CONCAT24 /* combine 2-byte values */(uVar47 >> 3,
                                                   CONCAT22 /* combine 2-byte values */(uVar37 >> 3,(ushort)uVar38 >> 3))));
          SVar1 = g_AlphaTable[iVar10 >> 8];
          sVar36 = (short)uVar23;
          sVar39 = (short)((ulonglong)uVar23 >> 0x10);
          sVar40 = (short)((ulonglong)uVar23 >> 0x20);
          sVar41 = (short)((ulonglong)uVar23 >> 0x30);
          uVar35 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
          uVar24 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar41)) <<
                            0x30) >> 0x28);
          uVar20 = (ushort)(byte)((0 < sVar36) * (sVar36 < 0x100) * (char)uVar23 - (0xff < sVar36));
          uVar26 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar39));
          sVar36 = (short)CONCAT21 /* combine 2-byte values */(uVar24,(0 < sVar40) * (sVar40 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar40));
          uVar24 = uVar24 >> 8;
          if (g_BlendMode == 0) {
            uVar23 = paddusw(CONCAT26 /* combine 2-byte values */(uVar24 * SVar1.pad,
                                      CONCAT24 /* combine 2-byte values */(sVar36 * SVar1.blue,
                                               CONCAT22 /* combine 2-byte values */(uVar26 * SVar1.green,uVar20 * SVar1.red))),
                             CONCAT26 /* combine 2-byte values */((short)(uVar43 >> 0x30) * (short)(uVar35 >> 0x30),
                                      CONCAT24 /* combine 2-byte values */((short)(uVar43 >> 0x20) * (short)(uVar35 >> 0x20),
                                               CONCAT22 /* combine 2-byte values */((short)(uVar43 >> 0x10) *
                                                        (short)(uVar35 >> 0x10),
                                                        (short)uVar43 * (short)uVar35))));
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar22 = CONCAT13 /* combine 2-byte values */((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12 /* combine 2-byte values */((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11 /* combine 2-byte values */((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          else {
            uVar23 = psllw(uVar43,8);
            uVar23 = paddusw(CONCAT26 /* combine 2-byte values */(uVar24 * SVar1.pad,
                                      CONCAT24 /* combine 2-byte values */(sVar36 * SVar1.blue,
                                               CONCAT22 /* combine 2-byte values */(uVar26 * SVar1.green,uVar20 * SVar1.red))),
                             uVar23);
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar22 = CONCAT13 /* combine 2-byte values */((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12 /* combine 2-byte values */((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11 /* combine 2-byte values */((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          *(uint *)(uVar19 + (int)g_CurrentScreenPtr) = uVar22;
          if ((g_RenderStateFlags & 0x80U) != 0) {
            *(int *)(uVar19 + (int)g_CurrentZBufferPtr) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar19) break;
        uVar11 = uVar11 + g_DeltaTextureU;
        sVar36 = (ushort)uVar38 + sVar42;
        sVar39 = uVar37 + sVar44;
        sVar40 = uVar47 + sVar45;
        sVar41 = uVar48 + sVar46;
        uVar8 = uVar8 + g_DeltaTextureV;
        iVar17 = iVar17 + g_DeltaDepthW;
        iVar10 = iVar10 + g_VertexAlphaDelta;
        uVar38 = CONCAT26 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >> 0x30) < sVar41),
                          CONCAT24 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >> 0x20) <
                                            sVar40),
                                   CONCAT22 /* combine 2-byte values */(-(ushort)((short)((ulonglong)0 >>
                                                             0x10) < sVar39),
                                            -(ushort)(SUB82 /* extract 2-byte value */(0,0) < sVar36)))) &
                 CONCAT26 /* combine 2-byte values */(sVar41,CONCAT24 /* combine 2-byte values */(sVar40,CONCAT22 /* combine 2-byte values */(sVar39,sVar36)));
      }
    }
  }
  return;
}
