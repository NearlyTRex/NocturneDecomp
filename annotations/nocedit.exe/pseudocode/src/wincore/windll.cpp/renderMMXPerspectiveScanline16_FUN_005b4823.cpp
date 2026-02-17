// Name: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// Address: 005b4823
// Address Range: [[005b4823, 005b507e] [005b5085, 005b50eb]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(STexturedVertex *left_vertex,STexturedVertex *right_vertex,int scanline_y)

{
  SAlphaEntry SVar1;
  bool bVar2;
  byte bVar3;
  uint3 uVar7;
  undefined5 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  STexturedVertex *pSVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar24;
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
  uint7 uVar36;
  short sVar37;
  ushort uVar38;
  short sVar40;
  short sVar41;
  ulonglong uVar39;
  short sVar42;
  short sVar43;
  short sVar45;
  short sVar46;
  ulonglong uVar44;
  short sVar47;
  ushort uVar48;
  ushort uVar49;
  char cVar4;
  char cVar5;
  char cVar6;
  
  uVar20 = left_vertex->screen_x;
  uVar12 = right_vertex->screen_x;
  uVar9 = uVar20;
  pSVar17 = left_vertex;
  if (uVar12 < uVar20) {
    uVar9 = uVar12;
    uVar12 = uVar20;
    pSVar17 = right_vertex;
    right_vertex = left_vertex;
  }
  uVar9 = uVar9 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar9;
  if (iVar11 != 0 && uVar9 <= uVar12 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar9 * 2);
    g_ScanlinePixelCount = iVar11 * 4;
    puVar19 = g_ZBufferScanlineArray[scanline_y] + uVar9;
    g_CurrentZBufferPtr = (int *)puVar19;
    if (g_RenderStateFlags.dword == 0x80) {
      uVar20 = pSVar17->perspective_w;
      iVar18 = (int)((ulonglong)
                     ((longlong)(int)(right_vertex->perspective_w - uVar20) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      iVar11 = g_ScanlinePixelCount;
      g_StartDepthW = uVar20;
      g_DeltaDepthW = iVar18;
      do {
        *puVar19 = uVar20;
        uVar20 = uVar20 + iVar18;
        puVar19 = puVar19 + 1;
        iVar13 = iVar11 + -4;
        bVar2 = 3 < iVar11;
        iVar11 = iVar13;
      } while (iVar13 != 0 && bVar2);
      return;
    }
    if (g_RenderStateFlag2 == PREPROCESS_TEXTURE_NORMALIZE_ALT) {
      uVar20 = pSVar17->texture_u;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                (longlong)pSVar17->perspective_w);
      uVar20 = right_vertex->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      uVar20 = pSVar17->texture_v;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                (longlong)pSVar17->perspective_w);
      uVar20 = right_vertex->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                        (longlong)right_vertex->perspective_w) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = pSVar17->texture_u;
      g_DeltaTextureU =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_u - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_StartTextureV = pSVar17->texture_v;
      g_DeltaTextureV =
           (int)((ulonglong)
                 ((longlong)(right_vertex->texture_v - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    iVar18 = pSVar17->perspective_w;
    g_DeltaDepthW =
         (int)((ulonglong)
               ((longlong)(right_vertex->perspective_w - iVar18) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    g_VertexAlphaStart = pSVar17->vertex_alpha;
    g_VertexAlphaDelta =
         (int)((ulonglong)
               ((longlong)(right_vertex->vertex_alpha - g_VertexAlphaStart) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    if ((g_RenderStateFlags.dword & 0x200) == 0) {
      if ((g_RenderStateFlags.dword & 4) == 0) {
        if ((g_RenderStateFlags.dword & 0x10) == 0) {
          uVar39 = psllw(g_AlphaTable[0xff],7);
          uVar44 = 0;
        }
        else {
          uVar20 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar20) {
            uVar20 = 0xff;
          }
          uVar39 = psllw(g_AlphaTable[uVar20],7);
          uVar44 = 0;
        }
      }
      else {
        uVar20 = right_vertex->vertex_red - 0x100;
        uVar12 = pSVar17->vertex_red - 0x100;
        if (0xfff < uVar20) {
          uVar20 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar9 = uVar12 * 8;
        uVar20 = (uint)((ulonglong)
                        ((longlong)(int)(uVar20 * 8 + uVar12 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
        g_VertexRedStart = uVar9 & 0xffff;
        g_VertexRedDelta = uVar20 & 0xffff;
        uVar39 = ((CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam00682694,uVar9) & 0xffffffff0000ffff;
        uVar44 = ((CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar10 = (uint)pSVar17->vertex_red >> 1;
      uVar20 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_red >> 1) - uVar10) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexRedStart = uVar10 & 0xffff;
      g_VertexRedDelta = uVar20 & 0xffff;
      uVar15 = (uint)pSVar17->vertex_green >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)right_vertex->vertex_green >> 1) - uVar15) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexGreenStart = uVar15 & 0xffff;
      g_VertexGreenDelta = uVar12 & 0xffff;
      uVar14 = (uint)pSVar17->vertex_blue >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)right_vertex->vertex_blue >> 1) - uVar14) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexBlueStart = uVar14 & 0xffff;
      g_VertexBlueDelta = uVar9 & 0xffff;
      uVar39 = ((CONCAT44(uRam00682694,uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0068269c,uVar15) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826a4,uVar14) & 0xffffffff0000ffff;
      uVar44 = ((CONCAT44(uRam006826b4,uVar20) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826bc,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam006826c4,uVar9) & 0xffffffff0000ffff;
    }
    uVar20 = 0;
    sVar43 = (short)uVar44;
    sVar45 = (short)(uVar44 >> 0x10);
    sVar46 = (short)(uVar44 >> 0x20);
    sVar47 = (short)(uVar44 >> 0x30);
    g_StartDepthW = iVar18;
    if ((g_CurrentTextureOpacityData == (void *)0x0) && ((g_RenderStateFlags.dword & 2) == 0)) {
      uVar35 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar38 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar44 = (ulonglong)_g_SolidColorMode >> 8;
      bVar33 = (byte)_g_SolidColorMode;
      uVar12 = g_StartTextureU;
      uVar9 = g_StartTextureV;
      iVar11 = g_VertexAlphaStart;
      if ((g_RenderStateFlags.dword & 8) == 0) {
        iVar11 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar48 = (ushort)(uVar39 >> 0x10);
        uVar49 = (ushort)(uVar39 >> 0x20);
        uVar21 = (ushort)(uVar39 >> 0x30);
        if (((g_RenderStateFlags.dword & 0x40) == 0) ||
           (*(int *)(uVar20 + (int)g_CurrentZBufferPtr) <= iVar18)) {
          if ((g_RenderStateFlags.dword & 1) == 0) {
            uVar10 = g_SpecialColor;
            if ((g_RenderStateFlags.dword & 0x200) == 0) {
              uVar10 = g_ActiveRenderColor;
            }
          }
          else {
            uVar10 = g_Hardware32BitPalette
                     [*(byte *)((uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                                (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0]) +
                               (int)g_CurrentTextureData)];
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar10 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar10 >> 8),(short)uVar10)) >>
                                        0x10),(short)uVar10) & 0xffffffff00ff00ff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar21 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar48 >> 3,(ushort)uVar39 >> 3))));
          sVar37 = (short)uVar23;
          bVar3 = (0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 - (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar23 >> 0x10);
          cVar4 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar23 >> 0x10) -
                  (0xff < sVar37);
          uVar22 = CONCAT11(cVar4,bVar3);
          sVar37 = (short)((ulonglong)uVar23 >> 0x20);
          cVar5 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                  (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar23 >> 0x30);
          cVar6 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar37);
          uVar10 = CONCAT13(cVar6,CONCAT12(cVar5,uVar22));
          uVar34 = (ulonglong)(uint6)uVar10;
          if ((g_RenderStateFlags.dword & 8) != 0) {
            SVar1 = g_AlphaTable[iVar11 >> 8];
            uVar34 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
            uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar6,(uint6)uVar10) >> 0x28),
                                                     CONCAT14(cVar5,uVar10)) >> 0x20),uVar10) >>
                           0x18);
            uVar25 = (uint5)uVar10 & 0xffff00ff00;
            uVar24 = (ushort)bVar3 * (short)uVar34 + (ushort)bVar33 * SVar1.red;
            uVar29 = ((ushort)(CONCAT43(uVar10,CONCAT12(cVar4,uVar22)) >> 0x10) & 0xff) *
                     (short)(uVar34 >> 0x10) + (ushort)(byte)uVar44 * SVar1.green;
            uVar27 = (short)(uVar25 >> 8) * (short)(uVar34 >> 0x20) +
                     (short)CONCAT21(uVar38,(char)uVar35) * SVar1.blue;
            uVar31 = (short)(uVar25 >> 0x18) * (short)(uVar34 >> 0x30) + (uVar38 >> 8) * SVar1.pad;
            uVar26 = uVar24 >> 8;
            uVar30 = uVar29 >> 8;
            uVar28 = uVar27 >> 8;
            uVar32 = uVar31 >> 8;
            uVar34 = (ulonglong)
                     CONCAT13((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                              (0xff < uVar32),
                              CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                       (0xff < uVar28),
                                       CONCAT11((uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar30),
                                                (uVar26 != 0) * (uVar26 < 0x100) *
                                                (char)(uVar24 >> 8) - (0xff < uVar26))));
          }
          *(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar34 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
               (ushort)((uVar34 & g_GreenMask32.mm) >> g_GreenBlueBits.mm) |
               (ushort)((uVar34 & g_RedMask32.mm) >> g_TotalColorBits.mm);
          if ((g_RenderStateFlags.dword & 0x80) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar20) = iVar18;
          }
        }
        uVar20 = uVar20 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar20) break;
        uVar12 = uVar12 + g_DeltaTextureU;
        sVar37 = (ushort)uVar39 + sVar43;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar21 + sVar47;
        uVar9 = uVar9 + g_DeltaTextureV;
        iVar18 = iVar18 + g_DeltaDepthW;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                            sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                             0x10) < sVar40),
                                            -(ushort)(SUB82(g_SelectedClearColor,0) < sVar37)))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar37)));
      }
    }
    else {
      iVar11 = g_VertexAlphaStart;
      if ((g_RenderStateFlags.dword & 0x100) == 0) {
        iVar11 = g_CurrentAlphaValue << 8;
        g_VertexAlphaDelta = 0;
      }
      uVar12 = g_StartTextureU;
      uVar9 = g_StartTextureV;
      if (g_CurrentTextureOpacityData != (void *)0x0) {
        while( true ) {
          uVar38 = (ushort)uVar39;
          uVar48 = (ushort)(uVar39 >> 0x10);
          uVar49 = (ushort)(uVar39 >> 0x20);
          uVar21 = (ushort)(uVar39 >> 0x30);
          if (((g_RenderStateFlags.dword & 0x40) == 0) ||
             (*(int *)(uVar20 + (int)g_CurrentZBufferPtr) <= iVar18)) {
            pbVar16 = (byte *)((uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                               (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0]) +
                              (int)g_CurrentTextureData);
            uVar10 = g_Hardware32BitPalette[*pbVar16];
            uVar39 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar10 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                              (ushort)(byte)uVar10) & 0xffffffff00ffffff;
            uVar10 = (uint)*(byte *)(((int)pbVar16 - (int)g_CurrentTextureData) +
                                    (int)g_CurrentTextureOpacityData);
            if (uVar10 != 0) {
              if ((((iVar11 < 0xff01) || (uVar10 < 0xff)) || (iVar11 < 0xff)) || (g_BlendMode != 0))
              {
                uVar15 = (uint)*(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr);
                uVar36 = (uint7)((uVar15 & g_BlueMask16.mm) << g_BlueBitShift.mm) |
                         (uint7)((uVar15 & g_GreenMask16.mm) << g_GreenBlueBits.mm) |
                         (uint7)((uVar15 & g_RedMask16.mm) << g_TotalColorBits.mm);
                uVar24 = (ushort)(((uVar36 >> 0x18) << 0x30) >> 0x28);
                uVar7 = CONCAT21(uVar24,(char)(uVar36 >> 0x10));
                uVar8 = CONCAT41((int)(((uint7)uVar7 << 0x20) >> 0x18),(char)(uVar36 >> 8));
                uVar23 = psllw(uVar39,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar49 >> 3,
                                                         CONCAT22(uVar48 >> 3,uVar38 >> 3))));
                SVar1 = g_AlphaTable[uVar10 * iVar11 >> 0x10];
                sVar37 = (short)uVar23;
                sVar40 = (short)((ulonglong)uVar23 >> 0x10);
                sVar41 = (short)((ulonglong)uVar23 >> 0x20);
                sVar42 = (short)((ulonglong)uVar23 >> 0x30);
                uVar39 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
                uVar29 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                                 (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar42)
                                                ) << 0x30) >> 0x28);
                uVar26 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 -
                                       (0xff < sVar37));
                uVar30 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                        (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar40));
                sVar37 = (short)CONCAT21(uVar29,(0 < sVar41) * (sVar41 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar41))
                ;
                uVar29 = uVar29 >> 8;
                if (g_BlendMode == 0) {
                  uVar23 = paddusw(CONCAT26(uVar29 * SVar1.pad,
                                            CONCAT24(sVar37 * SVar1.blue,
                                                     CONCAT22(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),
                                   CONCAT26((uVar24 >> 8) * (short)(uVar39 >> 0x30),
                                            CONCAT24((short)uVar7 * (short)(uVar39 >> 0x20),
                                                     CONCAT22((short)uVar8 * (short)(uVar39 >> 0x10)
                                                              ,(ushort)(byte)uVar36 * (short)uVar39)
                                                    )));
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar39 = (ulonglong)
                           CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                    CONCAT12((uVar29 != 0) * (uVar29 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar29),
                                             CONCAT11((uVar26 != 0) * (uVar26 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x18) -
                                                      (0xff < uVar26),
                                                      (uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 8) -
                                                      (0xff < uVar24))));
                }
                else {
                  uVar23 = psllw((ulonglong)CONCAT52(uVar8,(ushort)(byte)uVar36),8);
                  uVar23 = paddusw(CONCAT26(uVar29 * SVar1.pad,
                                            CONCAT24(sVar37 * SVar1.blue,
                                                     CONCAT22(uVar30 * SVar1.green,
                                                              uVar26 * SVar1.red))),uVar23);
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar39 = (ulonglong)
                           CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                    CONCAT12((uVar29 != 0) * (uVar29 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar29),
                                             CONCAT11((uVar26 != 0) * (uVar26 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x18) -
                                                      (0xff < uVar26),
                                                      (uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 8) -
                                                      (0xff < uVar24))));
                }
              }
              else {
                uVar23 = psllw(uVar39,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar49 >> 3,
                                                         CONCAT22(uVar48 >> 3,uVar38 >> 3))));
                sVar37 = (short)uVar23;
                sVar40 = (short)((ulonglong)uVar23 >> 0x10);
                sVar41 = (short)((ulonglong)uVar23 >> 0x20);
                sVar42 = (short)((ulonglong)uVar23 >> 0x30);
                uVar39 = (ulonglong)
                         CONCAT13((0 < sVar42) * (sVar42 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar42),
                                  CONCAT12((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar41),
                                           CONCAT11((0 < sVar40) * (sVar40 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x10) -
                                                    (0xff < sVar40),
                                                    (0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 -
                                                    (0xff < sVar37))));
              }
              *(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr) =
                   (ushort)((uVar39 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
                   (ushort)((uVar39 & g_GreenMask32.mm) >> g_GreenBlueBits.mm) |
                   (ushort)((uVar39 & g_RedMask32.mm) >> g_TotalColorBits.mm);
              if ((g_RenderStateFlags.dword & 0x80) != 0) {
                *(int *)(uVar20 + (int)g_CurrentZBufferPtr) = iVar18;
              }
            }
          }
          uVar20 = uVar20 + 4;
          if ((uint)g_ScanlinePixelCount <= uVar20) break;
          uVar12 = uVar12 + g_DeltaTextureU;
          uVar9 = uVar9 + g_DeltaTextureV;
          iVar18 = iVar18 + g_DeltaDepthW;
          iVar11 = iVar11 + g_VertexAlphaDelta;
          uVar39 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) <
                                     (short)(uVar21 + sVar47)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                              (short)(uVar49 + sVar46)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                               0x10) < (short)(uVar48 + sVar45)),
                                              -(ushort)(SUB82(g_SelectedClearColor,0) <
                                                       (short)(uVar38 + sVar43))))) &
                   CONCAT26(uVar21 + sVar47,
                            CONCAT24(uVar49 + sVar46,CONCAT22(uVar48 + sVar45,uVar38 + sVar43)));
        }
        return;
      }
      while( true ) {
        uVar38 = (ushort)(uVar39 >> 0x10);
        uVar48 = (ushort)(uVar39 >> 0x20);
        uVar49 = (ushort)(uVar39 >> 0x30);
        if ((((g_RenderStateFlags.dword & 0x40) == 0) ||
            (*(int *)(uVar20 + (int)g_CurrentZBufferPtr) <= iVar18)) &&
           (uVar10 = g_Hardware32BitPalette
                     [*(byte *)((uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                                (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0]) +
                               (int)g_CurrentTextureData)], uVar10 != 0)) {
          uVar44 = 0;
          if ((g_RenderStateFlags.dword & 0x20) != 0) {
            uVar15 = (uint)*(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr);
            uVar36 = (uint7)((uVar15 & g_BlueMask16.mm) << g_BlueBitShift.mm) |
                     (uint7)((uVar15 & g_GreenMask16.mm) << g_GreenBlueBits.mm) |
                     (uint7)((uVar15 & g_RedMask16.mm) << g_TotalColorBits.mm);
            uVar44 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar36 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar36 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar36 >> 8)),
                              (ushort)(byte)uVar36);
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                                  (ushort)(byte)uVar10) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar49 >> 3,
                                          CONCAT24(uVar48 >> 3,
                                                   CONCAT22(uVar38 >> 3,(ushort)uVar39 >> 3))));
          SVar1 = g_AlphaTable[iVar11 >> 8];
          sVar37 = (short)uVar23;
          sVar40 = (short)((ulonglong)uVar23 >> 0x10);
          sVar41 = (short)((ulonglong)uVar23 >> 0x20);
          sVar42 = (short)((ulonglong)uVar23 >> 0x30);
          uVar35 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
          uVar24 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar42)) <<
                            0x30) >> 0x28);
          uVar21 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar23 - (0xff < sVar37));
          uVar26 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar40));
          sVar37 = (short)CONCAT21(uVar24,(0 < sVar41) * (sVar41 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar41));
          uVar24 = uVar24 >> 8;
          if (g_BlendMode == 0) {
            uVar23 = paddusw(CONCAT26(uVar24 * SVar1.pad,
                                      CONCAT24(sVar37 * SVar1.blue,
                                               CONCAT22(uVar26 * SVar1.green,uVar21 * SVar1.red))),
                             CONCAT26((short)(uVar44 >> 0x30) * (short)(uVar35 >> 0x30),
                                      CONCAT24((short)(uVar44 >> 0x20) * (short)(uVar35 >> 0x20),
                                               CONCAT22((short)(uVar44 >> 0x10) *
                                                        (short)(uVar35 >> 0x10),
                                                        (short)uVar44 * (short)uVar35))));
            uVar21 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar10 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar21 != 0) * (uVar21 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar21))));
          }
          else {
            uVar23 = psllw(uVar44,8);
            uVar23 = paddusw(CONCAT26(uVar24 * SVar1.pad,
                                      CONCAT24(sVar37 * SVar1.blue,
                                               CONCAT22(uVar26 * SVar1.green,uVar21 * SVar1.red))),
                             uVar23);
            uVar21 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar10 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar21 != 0) * (uVar21 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar21))));
          }
          uVar44 = (ulonglong)uVar10;
          *(ushort *)((uVar20 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar44 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
               (ushort)((uVar44 & g_GreenMask32.mm) >> g_GreenBlueBits.mm) |
               (ushort)((uVar44 & g_RedMask32.mm) >> g_TotalColorBits.mm);
          if ((g_RenderStateFlags.dword & 0x80) != 0) {
            *(int *)(uVar20 + (int)g_CurrentZBufferPtr) = iVar18;
          }
        }
        uVar20 = uVar20 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar20) break;
        uVar12 = uVar12 + g_DeltaTextureU;
        sVar37 = (ushort)uVar39 + sVar43;
        sVar40 = uVar38 + sVar45;
        sVar41 = uVar48 + sVar46;
        sVar42 = uVar49 + sVar47;
        uVar9 = uVar9 + g_DeltaTextureV;
        iVar18 = iVar18 + g_DeltaDepthW;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)g_SelectedClearColor >> 0x20) <
                                            sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_SelectedClearColor >>
                                                             0x10) < sVar40),
                                            -(ushort)(SUB82(g_SelectedClearColor,0) < sVar37)))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar37)));
      }
    }
  }
  return;
}
