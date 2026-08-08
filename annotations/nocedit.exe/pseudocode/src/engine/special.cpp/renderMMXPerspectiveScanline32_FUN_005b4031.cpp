// Name: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
// Address: 005b4031
// Address Range: [[005b4031, 005b41b1] [005b41c0, 005b427c] [005b4280, 005b430b] [005b4310, 005b4339] [005b4340, 005b4464] [005b4470, 005b44d9] [005b44e0, 005b44e5] [005b44f0, 005b45c8] [005b45d0, 005b45f3] [005b4600, 005b4669] [005b4670, 005b47a8] [005b47b6, 005b47cd] [005b47d0, 005b47db] [005b47e0, 005b4822]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
  SSoftwareEdge *pSVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar23;
  uint uVar21;
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
  short sVar35;
  ushort uVar36;
  short sVar38;
  short sVar39;
  ulonglong uVar37;
  short sVar40;
  short sVar41;
  short sVar43;
  short sVar44;
  ulonglong uVar42;
  short sVar45;
  ushort uVar46;
  ushort uVar47;
  char cVar4;
  char cVar5;
  byte bVar6;
  
  uVar18 = (right_vertex->base).x_current;
  uVar11 = (left_vertex->base).x_current;
  uVar8 = uVar18;
  pSVar15 = right_vertex;
  if (uVar11 < uVar18) {
    uVar8 = uVar11;
    uVar11 = uVar18;
    pSVar15 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar8 = uVar8 >> 0x10;
  iVar10 = (uVar11 >> 0x10) - uVar8;
  if (iVar10 != 0 && uVar8 <= uVar11 >> 0x10) {
    g_CurrentScreenPtr = (int *)((int)g_ScreenBufferArray[scanline_y] + uVar8 * 4);
    g_ScanlinePixelCount = iVar10 * 4;
    puVar17 = g_ZBufferScanlineArray[scanline_y] + uVar8;
    g_CurrentZBufferPtr = (int *)puVar17;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar18 = (pSVar15->base).depth_current;
      iVar16 = (int)((ulonglong)
                     ((longlong)(int)((left_vertex->base).depth_current - uVar18) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      iVar10 = g_ScanlinePixelCount;
      g_StartDepthW = uVar18;
      g_HardwareDeltaDepthZ = iVar16;
      do {
        *puVar17 = uVar18;
        uVar18 = uVar18 + iVar16;
        puVar17 = puVar17 + 1;
        iVar12 = iVar10 + -4;
        bVar2 = 3 < iVar10;
        iVar10 = iVar12;
      } while (iVar12 != 0 && bVar2);
      return;
    }
    if (g_VertexPreprocessMode == PREPROCESS_PERSPECTIVE_TEXTURE) {
      uVar18 = (pSVar15->base).u_current;
      g_StartTextureU =
           (int)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                (longlong)(pSVar15->base).depth_current);
      uVar18 = (left_vertex->base).u_current;
      g_HardwareDeltaTextureU =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      uVar18 = (pSVar15->base).v_current;
      g_StartTextureV =
           (int)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                (longlong)(pSVar15->base).depth_current);
      uVar18 = (left_vertex->base).v_current;
      g_HardwareDeltaTextureV =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    else {
      g_StartTextureU = (pSVar15->base).u_current;
      g_HardwareDeltaTextureU =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_StartTextureU) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_StartTextureV = (pSVar15->base).v_current;
      g_HardwareDeltaTextureV =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_StartTextureV) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    iVar16 = (pSVar15->base).depth_current;
    g_HardwareDeltaDepthZ =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar16) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    g_VertexAlphaStart = (pSVar15->base).alpha_current;
    g_VertexAlphaDelta =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - g_VertexAlphaStart) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
      if ((g_RenderStateFlags.dword & RENDER_FOG_COLOR) == 0) {
        if ((g_RenderStateFlags.dword & RENDER_LIGHTING_COLOR) == 0) {
          uVar37 = psllw(g_AlphaTable[0xff],7);
          uVar42 = 0;
        }
        else {
          uVar18 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar18) {
            uVar18 = 0xff;
          }
          uVar37 = psllw(g_AlphaTable[uVar18],7);
          uVar42 = 0;
        }
      }
      else {
        uVar18 = (left_vertex->base).red_current - 0x100;
        uVar11 = (pSVar15->base).red_current - 0x100;
        if (0xfff < uVar18) {
          uVar18 = 0xfff;
        }
        if (0xfff < uVar11) {
          uVar11 = 0xfff;
        }
        uVar8 = uVar11 * 8;
        uVar18 = (uint)((ulonglong)
                        ((longlong)(int)(uVar18 * 8 + uVar11 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
        g_VertexRedStart.u32[0] = uVar8 & 0xffff;
        g_VertexRedDelta.u32[0] = uVar18 & 0xffff;
        uVar37 = ((CONCAT44(g_VertexRedStart.u32[1],uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedStart.u32[1],uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedStart.u32[1],uVar8) & 0xffffffff0000ffff;
        uVar42 = ((CONCAT44(g_VertexRedDelta.u32[1],uVar18) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedDelta.u32[1],uVar18) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_VertexRedDelta.u32[1],uVar18) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar9 = (uint)(pSVar15->base).red_current >> 1;
      uVar18 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar9) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexRedStart.u32[0] = uVar9 & 0xffff;
      g_VertexRedDelta.u32[0] = uVar18 & 0xffff;
      uVar13 = (uint)pSVar15->green_current >> 1;
      uVar11 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar13) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexGreenStart.u32[0] = uVar13 & 0xffff;
      g_VertexGreenDelta.u32[0] = uVar11 & 0xffff;
      uVar14 = (uint)pSVar15->blue_current >> 1;
      uVar8 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar14) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      g_VertexBlueStart.u32[0] = uVar14 & 0xffff;
      g_VertexBlueDelta.u32[0] = uVar8 & 0xffff;
      uVar37 = ((CONCAT44(g_VertexRedStart.u32[1],uVar9) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexGreenStart.u32[1],uVar13) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexBlueStart.u32[1],uVar14) & 0xffffffff0000ffff;
      uVar42 = ((CONCAT44(g_VertexRedDelta.u32[1],uVar18) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexGreenDelta.u32[1],uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_VertexBlueDelta.u32[1],uVar8) & 0xffffffff0000ffff;
    }
    uVar18 = 0;
    sVar41 = (short)uVar42;
    sVar43 = (short)(uVar42 >> 0x10);
    sVar44 = (short)(uVar42 >> 0x20);
    sVar45 = (short)(uVar42 >> 0x30);
    g_StartDepthW = iVar16;
    if ((g_CurrentTextureOpacityData == (uchar *)0x0) && ((g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0)) {
      uVar34 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar36 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar42 = (ulonglong)_g_SolidColorMode >> 8;
      bVar32 = (byte)_g_SolidColorMode;
      uVar11 = g_StartTextureU;
      uVar8 = g_StartTextureV;
      iVar10 = g_VertexAlphaStart;
      if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
        iVar10 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar46 = (ushort)(uVar37 >> 0x10);
        uVar47 = (ushort)(uVar37 >> 0x20);
        uVar19 = (ushort)(uVar37 >> 0x30);
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar18 + (int)g_CurrentZBufferPtr) <= iVar16)) {
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0) {
            uVar9 = g_SpecialColor;
            if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
              uVar9 = g_ActiveRenderColor;
            }
          }
          else {
            uVar9 = g_Hardware32BitPalette
                    [g_CurrentTextureData
                     [(uVar11 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                      (uVar8 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]];
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar9 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar9 >> 8),(short)uVar9)) >> 0x10
                                        ),(short)uVar9) & 0xffffffff00ff00ff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar19 >> 3,
                                          CONCAT24(uVar47 >> 3,
                                                   CONCAT22(uVar46 >> 3,(ushort)uVar37 >> 3))));
          sVar35 = (short)uVar22;
          bVar3 = (0 < sVar35) * (sVar35 < 0x100) * (char)uVar22 - (0xff < sVar35);
          sVar35 = (short)((ulonglong)uVar22 >> 0x10);
          cVar4 = (0 < sVar35) * (sVar35 < 0x100) * (char)((ulonglong)uVar22 >> 0x10) -
                  (0xff < sVar35);
          uVar20 = CONCAT11(cVar4,bVar3);
          sVar35 = (short)((ulonglong)uVar22 >> 0x20);
          cVar5 = (0 < sVar35) * (sVar35 < 0x100) * (char)((ulonglong)uVar22 >> 0x20) -
                  (0xff < sVar35);
          sVar35 = (short)((ulonglong)uVar22 >> 0x30);
          bVar6 = (0 < sVar35) * (sVar35 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                  (0xff < sVar35);
          uVar21 = CONCAT13(bVar6,CONCAT12(cVar5,uVar20));
          if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
            SVar1 = g_AlphaTable[iVar10 >> 8];
            uVar33 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
            uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar6 << 0x30) >> 0x28),
                                                    CONCAT14(cVar5,uVar21)) >> 0x20),uVar21) >> 0x18
                          );
            uVar24 = (uint5)uVar9 & 0xffffffff00;
            uVar23 = (ushort)bVar3 * (short)uVar33 + (ushort)bVar32 * SVar1.red;
            uVar28 = ((ushort)(CONCAT43(uVar9,CONCAT12(cVar4,uVar20)) >> 0x10) & 0xff) *
                     (short)(uVar33 >> 0x10) + (ushort)(byte)uVar42 * SVar1.green;
            uVar26 = (short)(uVar24 >> 8) * (short)(uVar33 >> 0x20) +
                     (short)CONCAT21(uVar36,(char)uVar34) * SVar1.blue;
            uVar30 = (short)(uVar24 >> 0x18) * (short)(uVar33 >> 0x30) +
                     (uVar36 >> 8) * SVar1.alignment;
            uVar25 = uVar23 >> 8;
            uVar29 = uVar28 >> 8;
            uVar27 = uVar26 >> 8;
            uVar31 = uVar30 >> 8;
            uVar21 = CONCAT13((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                              (0xff < uVar31),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) -
                                       (0xff < uVar27),
                                       CONCAT11((uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)(uVar28 >> 8) - (0xff < uVar29),
                                                (uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)(uVar23 >> 8) - (0xff < uVar25))));
          }
          *(uint *)((int)g_CurrentScreenPtr + uVar18) = uVar21;
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar18) = iVar16;
          }
        }
        uVar18 = uVar18 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar18) break;
        uVar11 = uVar11 + g_HardwareDeltaTextureU;
        sVar35 = (ushort)uVar37 + sVar41;
        sVar38 = uVar46 + sVar43;
        sVar39 = uVar47 + sVar44;
        sVar40 = uVar19 + sVar45;
        uVar8 = uVar8 + g_HardwareDeltaTextureV;
        iVar16 = iVar16 + g_HardwareDeltaDepthZ;
        iVar10 = iVar10 + g_VertexAlphaDelta;
        uVar37 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar40),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar39),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar38),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar35)))) &
                 CONCAT26(sVar40,CONCAT24(sVar39,CONCAT22(sVar38,sVar35)));
      }
    }
    else {
      iVar10 = g_VertexAlphaStart;
      if ((g_RenderStateFlags.dword & RENDER_ALPHA_FROM_VERTEX) == 0) {
        iVar10 = g_CurrentAlphaValue << 8;
        g_VertexAlphaDelta = 0;
      }
      uVar11 = g_StartTextureU;
      uVar8 = g_StartTextureV;
      if (g_CurrentTextureOpacityData != (uchar *)0x0) {
        while( true ) {
          uVar36 = (ushort)uVar37;
          uVar46 = (ushort)(uVar37 >> 0x10);
          uVar47 = (ushort)(uVar37 >> 0x20);
          uVar19 = (ushort)(uVar37 >> 0x30);
          if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
             (*(int *)(uVar18 + (int)g_CurrentZBufferPtr) <= iVar16)) {
            uVar9 = g_Hardware32BitPalette
                    [g_CurrentTextureData
                     [(uVar11 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                      (uVar8 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]];
            uVar37 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar9 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar9 >> 0x10),uVar9)) >> 0x20),
                                                  uVar9) >> 0x18),(char)(uVar9 >> 8)),
                              (ushort)(byte)uVar9) & 0xffffffff00ffffff;
            uVar9 = (uint)g_CurrentTextureOpacityData
                          [(int)(g_CurrentTextureData +
                                (uVar11 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                                (uVar8 >> g_TextureShift2.mm & g_TextureMask2.u32[0])) -
                           (int)g_CurrentTextureData];
            if (uVar9 != 0) {
              if ((((iVar10 < 0xff01) || (uVar9 < 0xff)) || (iVar10 < 0xff)) || (g_BlendMode != 0))
              {
                uVar21 = *(uint *)(uVar18 + (int)g_CurrentScreenPtr);
                uVar23 = (ushort)(((uint7)(byte)((uint)uVar21 >> 0x18) << 0x30) >> 0x28);
                uVar42 = (ulonglong)
                         CONCAT34((int3)(CONCAT25(uVar23,CONCAT14((char)((uint)uVar21 >> 0x10),
                                                                  uVar21)) >> 0x20),uVar21) &
                         0xffffffff00ffffff;
                uVar7 = CONCAT51((int5)(uVar42 >> 0x18),(char)((uint)uVar21 >> 8));
                uVar22 = psllw(uVar37,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar19 >> 3,
                                                CONCAT24(uVar47 >> 3,
                                                         CONCAT22(uVar46 >> 3,uVar36 >> 3))));
                SVar1 = g_AlphaTable[uVar9 * iVar10 >> 0x10];
                sVar35 = (short)uVar22;
                sVar38 = (short)((ulonglong)uVar22 >> 0x10);
                sVar39 = (short)((ulonglong)uVar22 >> 0x20);
                sVar40 = (short)((ulonglong)uVar22 >> 0x30);
                uVar37 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
                uVar28 = (ushort)(((uint7)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                                 (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar40)
                                                ) << 0x30) >> 0x28);
                uVar25 = (ushort)(byte)((0 < sVar35) * (sVar35 < 0x100) * (char)uVar22 -
                                       (0xff < sVar35));
                uVar29 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) *
                                        (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar38));
                sVar35 = (short)CONCAT21(uVar28,(0 < sVar39) * (sVar39 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar39))
                ;
                uVar28 = uVar28 >> 8;
                if (g_BlendMode == 0) {
                  uVar22 = paddusw(CONCAT26(uVar28 * SVar1.alignment,
                                            CONCAT24(sVar35 * SVar1.blue,
                                                     CONCAT22(uVar29 * SVar1.green,
                                                              uVar25 * SVar1.red))),
                                   CONCAT26((uVar23 >> 8) * (short)(uVar37 >> 0x30),
                                            CONCAT24((short)(uVar42 >> 0x20) *
                                                     (short)(uVar37 >> 0x20),
                                                     CONCAT22((short)uVar7 * (short)(uVar37 >> 0x10)
                                                              ,(ushort)(byte)uVar21 * (short)uVar37)
                                                    )));
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar21 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
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
                  uVar22 = psllw(CONCAT62(uVar7,(ushort)(byte)uVar21),8);
                  uVar22 = paddusw(CONCAT26(uVar28 * SVar1.alignment,
                                            CONCAT24(sVar35 * SVar1.blue,
                                                     CONCAT22(uVar29 * SVar1.green,
                                                              uVar25 * SVar1.red))),uVar22);
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar21 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
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
                uVar22 = psllw(uVar37,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar19 >> 3,
                                                CONCAT24(uVar47 >> 3,
                                                         CONCAT22(uVar46 >> 3,uVar36 >> 3))));
                sVar35 = (short)uVar22;
                sVar38 = (short)((ulonglong)uVar22 >> 0x10);
                sVar39 = (short)((ulonglong)uVar22 >> 0x20);
                sVar40 = (short)((ulonglong)uVar22 >> 0x30);
                uVar21 = CONCAT13((0 < sVar40) * (sVar40 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar40),
                                  CONCAT12((0 < sVar39) * (sVar39 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar39),
                                           CONCAT11((0 < sVar38) * (sVar38 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 0x10) -
                                                    (0xff < sVar38),
                                                    (0 < sVar35) * (sVar35 < 0x100) * (char)uVar22 -
                                                    (0xff < sVar35))));
              }
              *(uint *)(uVar18 + (int)g_CurrentScreenPtr) = uVar21;
              if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
                *(int *)(uVar18 + (int)g_CurrentZBufferPtr) = iVar16;
              }
            }
          }
          uVar18 = uVar18 + 4;
          if ((uint)g_ScanlinePixelCount <= uVar18) break;
          uVar11 = uVar11 + g_HardwareDeltaTextureU;
          uVar8 = uVar8 + g_HardwareDeltaTextureV;
          iVar16 = iVar16 + g_HardwareDeltaDepthZ;
          iVar10 = iVar10 + g_VertexAlphaDelta;
          uVar37 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) <
                                     (short)(uVar19 + sVar45)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                              (short)(uVar47 + sVar44)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                               0x10) < (short)(uVar46 + sVar43)),
                                              -(ushort)(SUB82(g_BufferFillZeroQword,0) <
                                                       (short)(uVar36 + sVar41))))) &
                   CONCAT26(uVar19 + sVar45,
                            CONCAT24(uVar47 + sVar44,CONCAT22(uVar46 + sVar43,uVar36 + sVar41)));
        }
        return;
      }
      while( true ) {
        uVar36 = (ushort)(uVar37 >> 0x10);
        uVar46 = (ushort)(uVar37 >> 0x20);
        uVar47 = (ushort)(uVar37 >> 0x30);
        if ((((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
            (*(int *)(uVar18 + (int)g_CurrentZBufferPtr) <= iVar16)) &&
           (uVar9 = g_Hardware32BitPalette
                    [g_CurrentTextureData
                     [(uVar11 >> g_TextureShift1.mm & g_TextureMask1.u32[0]) +
                      (uVar8 >> g_TextureShift2.mm & g_TextureMask2.u32[0])]], uVar9 != 0)) {
          uVar42 = 0;
          if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) != 0) {
            uVar21 = *(uint *)(uVar18 + (int)g_CurrentScreenPtr);
            uVar42 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar21 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar21 >> 0x10),uVar21)) >>
                                                  0x20),uVar21) >> 0x18),(char)((uint)uVar21 >> 8)),
                              (ushort)(byte)uVar21) & 0xffffffff00ffffff;
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar9 >> 0x10),uVar9)) >> 0x20),
                                                  uVar9) >> 0x18),(char)(uVar9 >> 8)),
                                  (ushort)(byte)uVar9) & 0xffffffff00ffffff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar47 >> 3,
                                          CONCAT24(uVar46 >> 3,
                                                   CONCAT22(uVar36 >> 3,(ushort)uVar37 >> 3))));
          SVar1 = g_AlphaTable[iVar10 >> 8];
          sVar35 = (short)uVar22;
          sVar38 = (short)((ulonglong)uVar22 >> 0x10);
          sVar39 = (short)((ulonglong)uVar22 >> 0x20);
          sVar40 = (short)((ulonglong)uVar22 >> 0x30);
          uVar34 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
          uVar23 = (ushort)(((uint7)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar40)) <<
                            0x30) >> 0x28);
          uVar19 = (ushort)(byte)((0 < sVar35) * (sVar35 < 0x100) * (char)uVar22 - (0xff < sVar35));
          uVar25 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar38));
          sVar35 = (short)CONCAT21(uVar23,(0 < sVar39) * (sVar39 < 0x100) *
                                          (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar39));
          uVar23 = uVar23 >> 8;
          if (g_BlendMode == 0) {
            uVar22 = paddusw(CONCAT26(uVar23 * SVar1.alignment,
                                      CONCAT24(sVar35 * SVar1.blue,
                                               CONCAT22(uVar25 * SVar1.green,uVar19 * SVar1.red))),
                             CONCAT26((short)(uVar42 >> 0x30) * (short)(uVar34 >> 0x30),
                                      CONCAT24((short)(uVar42 >> 0x20) * (short)(uVar34 >> 0x20),
                                               CONCAT22((short)(uVar42 >> 0x10) *
                                                        (short)(uVar34 >> 0x10),
                                                        (short)uVar42 * (short)uVar34))));
            uVar19 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar21 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar19 != 0) * (uVar19 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar19))));
          }
          else {
            uVar22 = psllw(uVar42,8);
            uVar22 = paddusw(CONCAT26(uVar23 * SVar1.alignment,
                                      CONCAT24(sVar35 * SVar1.blue,
                                               CONCAT22(uVar25 * SVar1.green,uVar19 * SVar1.red))),
                             uVar22);
            uVar19 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar21 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar19 != 0) * (uVar19 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar19))));
          }
          *(uint *)(uVar18 + (int)g_CurrentScreenPtr) = uVar21;
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)(uVar18 + (int)g_CurrentZBufferPtr) = iVar16;
          }
        }
        uVar18 = uVar18 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar18) break;
        uVar11 = uVar11 + g_HardwareDeltaTextureU;
        sVar35 = (ushort)uVar37 + sVar41;
        sVar38 = uVar36 + sVar43;
        sVar39 = uVar46 + sVar44;
        sVar40 = uVar47 + sVar45;
        uVar8 = uVar8 + g_HardwareDeltaTextureV;
        iVar16 = iVar16 + g_HardwareDeltaDepthZ;
        iVar10 = iVar10 + g_VertexAlphaDelta;
        uVar37 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar40),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar39),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar38),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar35)))) &
                 CONCAT26(sVar40,CONCAT24(sVar39,CONCAT22(sVar38,sVar35)));
      }
    }
  }
  return;
}
