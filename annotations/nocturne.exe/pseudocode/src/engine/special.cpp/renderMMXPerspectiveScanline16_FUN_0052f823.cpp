// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0052f823
// Address: 0052f823
// Address Range: [[0052f823, 0053007e] [00530085, 005300eb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
  SSoftwareEdge *pSVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ulonglong uVar22;
  ushort uVar28;
  ushort uVar29;
  uint5 uVar24;
  ushort uVar30;
  ushort uVar31;
  byte bVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint7 uVar35;
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
  char cVar6;
  
  uVar19 = (right_vertex->base).x_current;
  uVar12 = (left_vertex->base).x_current;
  uVar9 = uVar19;
  pSVar16 = right_vertex;
  if (uVar12 < uVar19) {
    uVar9 = uVar12;
    uVar12 = uVar19;
    pSVar16 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar9 = uVar9 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar9;
  if (iVar11 != 0 && uVar9 <= uVar12 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar9 * 2);
    g_ScanlinePixelCount = iVar11 * 4;
    puVar18 = g_ZBufferScanlineArray[scanline_y] + uVar9;
    g_CurrentZBufferPtr = (int *)puVar18;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar19 = (pSVar16->base).depth_current;
      iVar17 = (int)((ulonglong)
                     ((longlong)(int)((left_vertex->base).depth_current - uVar19) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      iVar11 = g_ScanlinePixelCount;
      g_StartDepthW = uVar19;
      g_HardwareDeltaDepthZ = iVar17;
      do {
        *puVar18 = uVar19;
        uVar19 = uVar19 + iVar17;
        puVar18 = puVar18 + 1;
        iVar13 = iVar11 + -4;
        bVar2 = 3 < iVar11;
        iVar11 = iVar13;
      } while (iVar13 != 0 && bVar2);
      return;
    }
    if (g_VertexPreprocessMode == 5) {
      uVar19 = (pSVar16->base).u_current;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)(pSVar16->base).depth_current);
      uVar19 = (left_vertex->base).u_current;
      g_HardwareDeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      uVar19 = (pSVar16->base).v_current;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)(pSVar16->base).depth_current);
      uVar19 = (left_vertex->base).v_current;
      g_HardwareDeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = (pSVar16->base).u_current;
      g_HardwareDeltaTextureU =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_StartTextureV = (pSVar16->base).v_current;
      g_HardwareDeltaTextureV =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    iVar17 = (pSVar16->base).depth_current;
    g_HardwareDeltaDepthZ =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar17) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    g_VertexAlphaStart = (pSVar16->base).alpha_current;
    g_VertexAlphaDelta =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - g_VertexAlphaStart) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
      if ((g_RenderStateFlags.dword & RENDER_FOG_COLOR) == 0) {
        if ((g_RenderStateFlags.dword & RENDER_LIGHTING_COLOR) == 0) {
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
        uVar19 = (left_vertex->base).red_current - 0x100;
        uVar12 = (pSVar16->base).red_current - 0x100;
        if (0xfff < uVar19) {
          uVar19 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar9 = uVar12 * 8;
        uVar19 = (uint)((ulonglong)
                        ((longlong)(int)(uVar19 * 8 + uVar12 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
        g_VertexRedStart.u32[0] = uVar9 & 0xffff;
        g_VertexRedDelta.u32[0] = uVar19 & 0xffff;
        uVar38 = ((CONCAT44(g_VertexRedStart.u32[1],uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedStart.u32[1],uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedStart.u32[1],uVar9) & 0xffffffff0000ffff;
        uVar43 = ((CONCAT44(g_VertexRedDelta.u32[1],uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedDelta.u32[1],uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedDelta.u32[1],uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar10 = (uint)(pSVar16->base).red_current >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar10) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexRedStart.u32[0] = uVar10 & 0xffff;
      g_VertexRedDelta.u32[0] = uVar19 & 0xffff;
      uVar15 = (uint)pSVar16->green_current >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar15) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexGreenStart.u32[0] = uVar15 & 0xffff;
      g_VertexGreenDelta.u32[0] = uVar12 & 0xffff;
      uVar14 = (uint)pSVar16->blue_current >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar14) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      g_VertexBlueStart.u32[0] = uVar14 & 0xffff;
      g_VertexBlueDelta.u32[0] = uVar9 & 0xffff;
      uVar38 = ((CONCAT44(g_VertexRedStart.u32[1],uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexGreenStart.u32[1],uVar15) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexBlueStart.u32[1],uVar14) & 0xffffffff0000ffff;
      uVar43 = ((CONCAT44(g_VertexRedDelta.u32[1],uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexGreenDelta.u32[1],uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexBlueDelta.u32[1],uVar9) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar42 = (short)uVar43;
    sVar44 = (short)(uVar43 >> 0x10);
    sVar45 = (short)(uVar43 >> 0x20);
    sVar46 = (short)(uVar43 >> 0x30);
    g_StartDepthW = iVar17;
    if ((g_CurrentTextureOpacityData == (uchar *)0x0) && ((g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0)) {
      uVar34 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar37 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar43 = (ulonglong)_g_SolidColorMode >> 8;
      bVar32 = (byte)_g_SolidColorMode;
      uVar12 = g_StartTextureU;
      uVar9 = g_StartTextureV;
      iVar11 = g_VertexAlphaStart;
      if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
        iVar11 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar47 = (ushort)(uVar38 >> 0x10);
        uVar48 = (ushort)(uVar38 >> 0x20);
        uVar20 = (ushort)(uVar38 >> 0x30);
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) {
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0) {
            uVar10 = g_SpecialColor;
            if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
              uVar10 = g_ActiveRenderColor;
            }
          }
          else {
            uVar10 = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [(uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                       (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]];
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar10 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar10 >> 8),(short)uVar10)) >>
                                        0x10),(short)uVar10) & 0xffffffff00ff00ff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar20 >> 3,
                                          CONCAT24(uVar48 >> 3,
                                                   CONCAT22(uVar47 >> 3,(ushort)uVar38 >> 3))));
          sVar36 = (short)uVar22;
          bVar3 = (0 < sVar36) * (sVar36 < 0x100) * (char)uVar22 - (0xff < sVar36);
          sVar36 = (short)((ulonglong)uVar22 >> 0x10);
          cVar4 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar22 >> 0x10) -
                  (0xff < sVar36);
          uVar21 = CONCAT11(cVar4,bVar3);
          sVar36 = (short)((ulonglong)uVar22 >> 0x20);
          cVar5 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar22 >> 0x20) -
                  (0xff < sVar36);
          sVar36 = (short)((ulonglong)uVar22 >> 0x30);
          cVar6 = (0 < sVar36) * (sVar36 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                  (0xff < sVar36);
          uVar10 = CONCAT13(cVar6,CONCAT12(cVar5,uVar21));
          uVar33 = (ulonglong)(uint6)uVar10;
          if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
            SVar1 = g_AlphaTable[iVar11 >> 8];
            uVar33 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
            uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar6,(uint6)uVar10) >> 0x28),
                                                     CONCAT14(cVar5,uVar10)) >> 0x20),uVar10) >>
                           0x18);
            uVar24 = (uint5)uVar10 & 0xffff00ff00;
            uVar23 = (ushort)bVar3 * (short)uVar33 + (ushort)bVar32 * SVar1.red;
            uVar28 = ((ushort)(CONCAT43(uVar10,CONCAT12(cVar4,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar33 >> 0x10) + (ushort)(byte)uVar43 * SVar1.green;
            uVar26 = (short)(uVar24 >> 8) * (short)(uVar33 >> 0x20) +
                     (short)CONCAT21(uVar37,(char)uVar34) * SVar1.blue;
            uVar30 = (short)(uVar24 >> 0x18) * (short)(uVar33 >> 0x30) +
                     (uVar37 >> 8) * SVar1.alignment;
            uVar25 = uVar23 >> 8;
            uVar29 = uVar28 >> 8;
            uVar27 = uVar26 >> 8;
            uVar31 = uVar30 >> 8;
            uVar33 = (ulonglong)
                     CONCAT13((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                              (0xff < uVar31),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) -
                                       (0xff < uVar27),
                                       CONCAT11((uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)(uVar28 >> 8) - (0xff < uVar29),
                                                (uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)(uVar23 >> 8) - (0xff < uVar25))));
          }
          *(ushort *)((uVar19 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar33 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
               (ushort)((uVar33 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
               (ushort)((uVar33 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar19) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar19) break;
        uVar12 = uVar12 + g_HardwareDeltaTextureU;
        sVar36 = (ushort)uVar38 + sVar42;
        sVar39 = uVar47 + sVar44;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar20 + sVar46;
        uVar9 = uVar9 + g_HardwareDeltaTextureV;
        iVar17 = iVar17 + g_HardwareDeltaDepthZ;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar41),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar40),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar39),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar36)))) &
                 CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar36)));
      }
    }
    else {
      iVar11 = g_VertexAlphaStart;
      if ((g_RenderStateFlags.dword & RENDER_ALPHA_FROM_VERTEX) == 0) {
        iVar11 = g_CurrentAlphaValue << 8;
        g_VertexAlphaDelta = 0;
      }
      uVar12 = g_StartTextureU;
      uVar9 = g_StartTextureV;
      if (g_CurrentTextureOpacityData != (uchar *)0x0) {
        while( true ) {
          uVar37 = (ushort)uVar38;
          uVar47 = (ushort)(uVar38 >> 0x10);
          uVar48 = (ushort)(uVar38 >> 0x20);
          uVar20 = (ushort)(uVar38 >> 0x30);
          if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
             (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) {
            uVar10 = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [(uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                       (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]];
            uVar38 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar10 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                              (ushort)(byte)uVar10) & 0xffffffff00ffffff;
            uVar10 = (uint)g_CurrentTextureOpacityData
                           [(int)(g_CurrentTextureData +
                                 (uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                                 (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0])) -
                            (int)g_CurrentTextureData];
            if (uVar10 != 0) {
              if ((((iVar11 < 0xff01) || (uVar10 < 0xff)) || (iVar11 < 0xff)) || (g_BlendMode != 0))
              {
                uVar15 = (uint)*(ushort *)((uVar19 >> 1) + (int)g_CurrentScreenPtr);
                uVar35 = (uint7)((uVar15 & g_BlueMask16.mm) << g_BlueBitShift.mm) |
                         (uint7)((uVar15 & g_GreenMask16.mm) << g_GreenBlueDitherShift.mm) |
                         (uint7)((uVar15 & g_RedMask16.mm) << g_TotalDitherShift.mm);
                uVar23 = (ushort)(((uVar35 >> 0x18) << 0x30) >> 0x28);
                uVar7 = CONCAT21(uVar23,(char)(uVar35 >> 0x10));
                uVar8 = CONCAT41((int)(((uint7)uVar7 << 0x20) >> 0x18),(char)(uVar35 >> 8));
                uVar22 = psllw(uVar38,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar48 >> 3,
                                                         CONCAT22(uVar47 >> 3,uVar37 >> 3))));
                SVar1 = g_AlphaTable[uVar10 * iVar11 >> 0x10];
                sVar36 = (short)uVar22;
                sVar39 = (short)((ulonglong)uVar22 >> 0x10);
                sVar40 = (short)((ulonglong)uVar22 >> 0x20);
                sVar41 = (short)((ulonglong)uVar22 >> 0x30);
                uVar38 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
                uVar28 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                                 (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar41)
                                                ) << 0x30) >> 0x28);
                uVar25 = (ushort)(byte)((0 < sVar36) * (sVar36 < 0x100) * (char)uVar22 -
                                       (0xff < sVar36));
                uVar29 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                        (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar39));
                sVar36 = (short)CONCAT21(uVar28,(0 < sVar40) * (sVar40 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar40))
                ;
                uVar28 = uVar28 >> 8;
                if (g_BlendMode == 0) {
                  uVar22 = paddusw(CONCAT26(uVar28 * SVar1.alignment,
                                            CONCAT24(sVar36 * SVar1.blue,
                                                     CONCAT22(uVar29 * SVar1.green,
                                                              uVar25 * SVar1.red))),
                                   CONCAT26((uVar23 >> 8) * (short)(uVar38 >> 0x30),
                                            CONCAT24((short)uVar7 * (short)(uVar38 >> 0x20),
                                                     CONCAT22((short)uVar8 * (short)(uVar38 >> 0x10)
                                                              ,(ushort)(byte)uVar35 * (short)uVar38)
                                                    )));
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar38 = (ulonglong)
                           CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
                                    (char)((ulonglong)uVar22 >> 0x38) - (0xff < uVar29),
                                    CONCAT12((uVar28 != 0) * (uVar28 < 0x100) *
                                             (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar28),
                                             CONCAT11((uVar25 != 0) * (uVar25 < 0x100) *
                                                      (char)((ulonglong)uVar22 >> 0x18) -
                                                      (0xff < uVar25),
                                                      (uVar23 != 0) * (uVar23 < 0x100) *
                                                      (char)((ulonglong)uVar22 >> 8) -
                                                      (0xff < uVar23))));
                }
                else {
                  uVar22 = psllw((ulonglong)CONCAT52(uVar8,(ushort)(byte)uVar35),8);
                  uVar22 = paddusw(CONCAT26(uVar28 * SVar1.alignment,
                                            CONCAT24(sVar36 * SVar1.blue,
                                                     CONCAT22(uVar29 * SVar1.green,
                                                              uVar25 * SVar1.red))),uVar22);
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar38 = (ulonglong)
                           CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
                                    (char)((ulonglong)uVar22 >> 0x38) - (0xff < uVar29),
                                    CONCAT12((uVar28 != 0) * (uVar28 < 0x100) *
                                             (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar28),
                                             CONCAT11((uVar25 != 0) * (uVar25 < 0x100) *
                                                      (char)((ulonglong)uVar22 >> 0x18) -
                                                      (0xff < uVar25),
                                                      (uVar23 != 0) * (uVar23 < 0x100) *
                                                      (char)((ulonglong)uVar22 >> 8) -
                                                      (0xff < uVar23))));
                }
              }
              else {
                uVar22 = psllw(uVar38,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar48 >> 3,
                                                         CONCAT22(uVar47 >> 3,uVar37 >> 3))));
                sVar36 = (short)uVar22;
                sVar39 = (short)((ulonglong)uVar22 >> 0x10);
                sVar40 = (short)((ulonglong)uVar22 >> 0x20);
                sVar41 = (short)((ulonglong)uVar22 >> 0x30);
                uVar38 = (ulonglong)
                         CONCAT13((0 < sVar41) * (sVar41 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar41),
                                  CONCAT12((0 < sVar40) * (sVar40 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar40),
                                           CONCAT11((0 < sVar39) * (sVar39 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 0x10) -
                                                    (0xff < sVar39),
                                                    (0 < sVar36) * (sVar36 < 0x100) * (char)uVar22 -
                                                    (0xff < sVar36))));
              }
              *(ushort *)((uVar19 >> 1) + (int)g_CurrentScreenPtr) =
                   (ushort)((uVar38 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
                   (ushort)((uVar38 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
                   (ushort)((uVar38 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
              if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
                *(int *)(uVar19 + (int)g_CurrentZBufferPtr) = iVar17;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if ((uint)g_ScanlinePixelCount <= uVar19) break;
          uVar12 = uVar12 + g_HardwareDeltaTextureU;
          uVar9 = uVar9 + g_HardwareDeltaTextureV;
          iVar17 = iVar17 + g_HardwareDeltaDepthZ;
          iVar11 = iVar11 + g_VertexAlphaDelta;
          uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) <
                                     (short)(uVar20 + sVar46)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                              (short)(uVar48 + sVar45)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                               0x10) < (short)(uVar47 + sVar44)),
                                              -(ushort)(SUB82(g_BufferFillZeroQword,0) <
                                                       (short)(uVar37 + sVar42))))) &
                   CONCAT26(uVar20 + sVar46,
                            CONCAT24(uVar48 + sVar45,CONCAT22(uVar47 + sVar44,uVar37 + sVar42)));
        }
        return;
      }
      while( true ) {
        uVar37 = (ushort)(uVar38 >> 0x10);
        uVar47 = (ushort)(uVar38 >> 0x20);
        uVar48 = (ushort)(uVar38 >> 0x30);
        if ((((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
            (*(int *)(uVar19 + (int)g_CurrentZBufferPtr) <= iVar17)) &&
           (uVar10 = g_Hardware32BitPalette
                     [g_CurrentTextureData
                      [(uVar12 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                       (uVar9 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]], uVar10 != 0)) {
          uVar43 = 0;
          if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) != 0) {
            uVar15 = (uint)*(ushort *)((uVar19 >> 1) + (int)g_CurrentScreenPtr);
            uVar35 = (uint7)((uVar15 & g_BlueMask16.mm) << g_BlueBitShift.mm) |
                     (uint7)((uVar15 & g_GreenMask16.mm) << g_GreenBlueDitherShift.mm) |
                     (uint7)((uVar15 & g_RedMask16.mm) << g_TotalDitherShift.mm);
            uVar43 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar35 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar35 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar35 >> 8)),
                              (ushort)(byte)uVar35);
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                                  (ushort)(byte)uVar10) & 0xffffffff00ffffff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar48 >> 3,
                                          CONCAT24(uVar47 >> 3,
                                                   CONCAT22(uVar37 >> 3,(ushort)uVar38 >> 3))));
          SVar1 = g_AlphaTable[iVar11 >> 8];
          sVar36 = (short)uVar22;
          sVar39 = (short)((ulonglong)uVar22 >> 0x10);
          sVar40 = (short)((ulonglong)uVar22 >> 0x20);
          sVar41 = (short)((ulonglong)uVar22 >> 0x30);
          uVar34 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
          uVar23 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar41)) <<
                            0x30) >> 0x28);
          uVar20 = (ushort)(byte)((0 < sVar36) * (sVar36 < 0x100) * (char)uVar22 - (0xff < sVar36));
          uVar25 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar39));
          sVar36 = (short)CONCAT21(uVar23,(0 < sVar40) * (sVar40 < 0x100) *
                                          (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar40));
          uVar23 = uVar23 >> 8;
          if (g_BlendMode == 0) {
            uVar22 = paddusw(CONCAT26(uVar23 * SVar1.alignment,
                                      CONCAT24(sVar36 * SVar1.blue,
                                               CONCAT22(uVar25 * SVar1.green,uVar20 * SVar1.red))),
                             CONCAT26((short)(uVar43 >> 0x30) * (short)(uVar34 >> 0x30),
                                      CONCAT24((short)(uVar43 >> 0x20) * (short)(uVar34 >> 0x20),
                                               CONCAT22((short)(uVar43 >> 0x10) *
                                                        (short)(uVar34 >> 0x10),
                                                        (short)uVar43 * (short)uVar34))));
            uVar20 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar10 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar20))));
          }
          else {
            uVar22 = psllw(uVar43,8);
            uVar22 = paddusw(CONCAT26(uVar23 * SVar1.alignment,
                                      CONCAT24(sVar36 * SVar1.blue,
                                               CONCAT22(uVar25 * SVar1.green,uVar20 * SVar1.red))),
                             uVar22);
            uVar20 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar10 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar20))));
          }
          uVar43 = (ulonglong)uVar10;
          *(ushort *)((uVar19 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar43 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
               (ushort)((uVar43 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
               (ushort)((uVar43 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)(uVar19 + (int)g_CurrentZBufferPtr) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar19) break;
        uVar12 = uVar12 + g_HardwareDeltaTextureU;
        sVar36 = (ushort)uVar38 + sVar42;
        sVar39 = uVar37 + sVar44;
        sVar40 = uVar47 + sVar45;
        sVar41 = uVar48 + sVar46;
        uVar9 = uVar9 + g_HardwareDeltaTextureV;
        iVar17 = iVar17 + g_HardwareDeltaDepthZ;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar41),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar40),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar39),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar36)))) &
                 CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar36)));
      }
    }
  }
  return;
}
