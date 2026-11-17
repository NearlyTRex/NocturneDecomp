// Name: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23
// Address: 0055ca23
// Address Range: [[0055ca23, 0055caf0] [0055cb00, 0055cdb0] [0055cdc0, 0055cdc8] [0055cdd0, 0055cdd7] [0055cde0, 0055ce98] [0055cea0, 0055d031] [0055d046, 0055d05d] [0055d060, 0055d06b] [0055d070, 0055d0b2]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  byte bVar2;
  uint3 uVar6;
  undefined5 uVar7;
  uint3 uVar8;
  undefined5 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  SSoftwareEdge *pSVar19;
  int iVar20;
  uint *puVar21;
  ushort uVar22;
  ushort uVar23;
  int iVar24;
  ushort uVar27;
  int iVar25;
  ushort uVar28;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ulonglong uVar26;
  ushort uVar33;
  uint5 uVar29;
  ushort uVar34;
  ushort uVar35;
  byte bVar36;
  ulonglong uVar37;
  short sVar38;
  short sVar40;
  short sVar41;
  ulonglong uVar39;
  short sVar42;
  ulonglong uVar43;
  short sVar46;
  short sVar47;
  uint7 uVar44;
  ulonglong uVar45;
  short sVar48;
  short sVar50;
  short sVar51;
  ulonglong uVar49;
  short sVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  char cVar3;
  char cVar4;
  char cVar5;
  
  uVar12 = (right_vertex->base).x_current;
  uVar15 = (left_vertex->base).x_current;
  uVar10 = uVar12;
  pSVar19 = right_vertex;
  if (uVar15 < uVar12) {
    uVar10 = uVar15;
    uVar15 = uVar12;
    pSVar19 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar10 = uVar10 >> 0x10;
  iVar11 = (uVar15 >> 0x10) - uVar10;
  if (iVar11 != 0 && uVar10 <= uVar15 >> 0x10) {
    g_CurrentScreenPtr = (int *)(g_ScreenBufferArray[scanline_y] + uVar10 * 2);
    g_ScanlinePixelCount = iVar11 * 4;
    puVar21 = g_ZBufferScanlineArray[scanline_y] + uVar10;
    g_CurrentZBufferPtr = (int *)puVar21;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar12 = (pSVar19->base).depth_current;
      iVar20 = (int)((ulonglong)
                     ((longlong)(int)((left_vertex->base).depth_current - uVar12) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      iVar11 = g_ScanlinePixelCount;
      g_StartDepthW = uVar12;
      g_HardwareDeltaDepthZ = iVar20;
      do {
        *puVar21 = uVar12;
        uVar12 = uVar12 + iVar20;
        puVar21 = puVar21 + 1;
        iVar25 = iVar11 + -4;
        bVar1 = 3 < iVar11;
        iVar11 = iVar25;
      } while (iVar25 != 0 && bVar1);
      return;
    }
    uVar12 = (pSVar19->base).u_current;
    g_HardwareDeltaTextureU =
         (int)((ulonglong)
               ((longlong)(int)((left_vertex->base).u_current - uVar12) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    uVar15 = (pSVar19->base).v_current;
    g_HardwareDeltaTextureV =
         (int)((ulonglong)
               ((longlong)(int)((left_vertex->base).v_current - uVar15) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    iVar20 = (pSVar19->base).depth_current;
    g_HardwareDeltaDepthZ =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar20) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
      g_VertexAlphaStart = 0;
      g_VertexAlphaDelta = 0;
    }
    else {
      g_VertexAlphaStart = (pSVar19->base).alpha_current;
      g_VertexAlphaDelta =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).alpha_current - g_VertexAlphaStart) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) != 0) {
      g_INT_0061c850 = *(int *)&pSVar19->field_0x48;
      g_INT_0061c858 =
           (int)((ulonglong)
                 ((longlong)(*(int *)&left_vertex->field_0x48 - g_INT_0061c850) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    uVar16 = (uint)(pSVar19->base).red_current >> 1;
    uVar10 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar16) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    g_VertexRedStart._0_4_ = uVar16 & 0xffff;
    g_VertexRedDelta._0_4_ = uVar10 & 0xffff;
    uVar17 = (uint)pSVar19->green_current >> 1;
    uVar13 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar17) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    g_VertexGreenStart.u32[0] = uVar17 & 0xffff;
    g_VertexGreenDelta.u32[0] = uVar13 & 0xffff;
    uVar18 = (uint)pSVar19->blue_current >> 1;
    uVar14 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar18) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    g_VertexBlueStart.u32[0] = uVar18 & 0xffff;
    g_VertexBlueDelta.u32[0] = uVar14 & 0xffff;
    uVar49 = ((CONCAT44(g_VertexRedStart._4_4_,uVar16) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(g_VertexGreenStart.u32[1],uVar17) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(g_VertexBlueStart.u32[1],uVar18) & 0xffffffff0000ffff;
    g_QWORD_0061c860 =
         ((CONCAT44(g_VertexRedDelta._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
         CONCAT44(g_VertexGreenDelta.u32[1],uVar13) & 0xffffffff0000ffff) << 0x10 |
         CONCAT44(g_VertexBlueDelta.u32[1],uVar14) & 0xffffffff0000ffff;
    uVar10 = 0;
    iVar11 = g_VertexAlphaStart;
    g_StartTextureU = uVar12;
    g_StartTextureV = uVar15;
    g_StartDepthW = iVar20;
    iVar25 = g_INT_0061c850;
    if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) == 0) {
      uVar14 = g_SolidColorMode >> 0x10;
      uVar53 = (ushort)(((uint7)(byte)(g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar13 = g_SolidColorMode >> 8;
      bVar36 = (byte)g_SolidColorMode;
      if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
        iVar11 = 0;
        g_VertexAlphaDelta = 0;
      }
      while( true ) {
        uVar54 = (ushort)(uVar49 >> 0x10);
        uVar55 = (ushort)(uVar49 >> 0x20);
        uVar22 = (ushort)(uVar49 >> 0x30);
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar10 + (int)g_CurrentZBufferPtr) <= iVar20)) {
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0) {
            uVar16 = g_SpecialColor;
            if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
              uVar16 = g_INT_01c35e60;
            }
          }
          else {
            iVar25 = (uVar12 >> g_TextureShift1 & (uint)g_TextureMask1) +
                     (uVar15 >> g_TextureShift2 & (uint)g_TextureMask2);
            if (g_INT_01c37784 == 0) {
              uVar16 = g_Hardware32BitPalette[g_CurrentTextureData[iVar25]];
            }
            else {
              uVar16 = *(uint *)(g_CurrentTextureData + iVar25 * 4);
            }
          }
          uVar26 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar16 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar16 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar16 >> 8),(short)uVar16)) >>
                                        0x10),(short)uVar16) & 0xffffffff00ff00ff,4);
          uVar26 = pmulhw(uVar26,CONCAT26(uVar22 >> 3,
                                          CONCAT24(uVar55 >> 3,
                                                   CONCAT22(uVar54 >> 3,(ushort)uVar49 >> 3))));
          sVar48 = (short)uVar26;
          bVar2 = (0 < sVar48) * (sVar48 < 0x100) * (char)uVar26 - (0xff < sVar48);
          sVar48 = (short)((ulonglong)uVar26 >> 0x10);
          cVar3 = (0 < sVar48) * (sVar48 < 0x100) * (char)((ulonglong)uVar26 >> 0x10) -
                  (0xff < sVar48);
          uVar23 = CONCAT11(cVar3,bVar2);
          sVar48 = (short)((ulonglong)uVar26 >> 0x20);
          cVar4 = (0 < sVar48) * (sVar48 < 0x100) * (char)((ulonglong)uVar26 >> 0x20) -
                  (0xff < sVar48);
          sVar48 = (short)((ulonglong)uVar26 >> 0x30);
          cVar5 = (0 < sVar48) * (sVar48 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                  (0xff < sVar48);
          uVar16 = CONCAT13(cVar5,CONCAT12(cVar4,uVar23));
          uVar37 = (ulonglong)(uint6)uVar16;
          if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
            uVar37 = g_QWORD_ARRAY_0061d180[iVar11 >> 8];
            uVar39 = uVar37 ^ g_QWORD_ARRAY_0061d180[0xff];
            uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar5,(uint6)uVar16) >> 0x28),
                                                     CONCAT14(cVar4,uVar16)) >> 0x20),uVar16) >>
                           0x18);
            uVar29 = (uint5)uVar16 & 0xffff00ff00;
            uVar27 = (ushort)bVar2 * (short)uVar39 + (ushort)bVar36 * (short)uVar37;
            uVar33 = ((ushort)(CONCAT43(uVar16,CONCAT12(cVar3,uVar23)) >> 0x10) & 0xff) *
                     (short)(uVar39 >> 0x10) + (ushort)(byte)uVar13 * (short)(uVar37 >> 0x10);
            uVar31 = (short)(uVar29 >> 8) * (short)(uVar39 >> 0x20) +
                     (short)CONCAT21(uVar53,(char)uVar14) * (short)(uVar37 >> 0x20);
            uVar34 = (short)(uVar29 >> 0x18) * (short)(uVar39 >> 0x30) +
                     (uVar53 >> 8) * (short)(uVar37 >> 0x30);
            uVar30 = uVar27 >> 8;
            uVar28 = uVar33 >> 8;
            uVar32 = uVar31 >> 8;
            uVar35 = uVar34 >> 8;
            uVar37 = (ulonglong)
                     CONCAT13((uVar35 != 0) * (uVar35 < 0x100) * (char)(uVar34 >> 8) -
                              (0xff < uVar35),
                              CONCAT12((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                                       (0xff < uVar32),
                                       CONCAT11((uVar28 != 0) * (uVar28 < 0x100) *
                                                (char)(uVar33 >> 8) - (0xff < uVar28),
                                                (uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar27 >> 8) - (0xff < uVar30))));
          }
          *(ushort *)((uVar10 >> 1) + (int)g_CurrentScreenPtr) =
               (ushort)((uVar37 & g_BlueMask32) >> g_BlueBitShift) |
               (ushort)((uVar37 & g_GreenMask32) >> g_GreenBlueDitherShift) |
               (ushort)((uVar37 & g_RedMask32) >> g_TotalDitherShift);
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)g_CurrentZBufferPtr + uVar10) = iVar20;
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar10) break;
        uVar12 = uVar12 + g_HardwareDeltaTextureU;
        sVar48 = (ushort)uVar49 + (short)g_QWORD_0061c860;
        sVar50 = uVar54 + (short)(g_QWORD_0061c860 >> 0x10);
        sVar51 = uVar55 + (short)(g_QWORD_0061c860 >> 0x20);
        sVar52 = uVar22 + (short)(g_QWORD_0061c860 >> 0x30);
        uVar15 = uVar15 + g_HardwareDeltaTextureV;
        iVar20 = iVar20 + g_HardwareDeltaDepthZ;
        iVar11 = iVar11 + g_VertexAlphaDelta;
        uVar49 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar52),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar51),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar50),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar48)))) &
                 CONCAT26(sVar52,CONCAT24(sVar51,CONCAT22(sVar50,sVar48)));
      }
    }
    else {
      while( true ) {
        uVar53 = (ushort)(uVar49 >> 0x10);
        uVar54 = (ushort)(uVar49 >> 0x20);
        uVar55 = (ushort)(uVar49 >> 0x30);
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar10 + (int)g_CurrentZBufferPtr) <= iVar20)) {
          iVar24 = (uVar12 >> g_TextureShift1 & (uint)g_TextureMask1) +
                   (uVar15 >> g_TextureShift2 & (uint)g_TextureMask2);
          if (g_INT_01c37784 == 0) {
            uVar13 = g_Hardware32BitPalette[g_CurrentTextureData[iVar24]];
            uVar37 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar13 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar13 >> 0x10),uVar13)) >> 0x20),
                                                  uVar13) >> 0x18),(char)(uVar13 >> 8)),
                              (ushort)(byte)uVar13) & 0xffffffff00ffffff;
            if (g_CurrentTextureOpacityData == (uchar *)0x0) {
              uVar13 = 0xff;
            }
            else {
              uVar13 = (uint)g_CurrentTextureOpacityData
                             [(int)(g_CurrentTextureData + iVar24) - (int)g_CurrentTextureData];
            }
          }
          else {
            uVar13 = *(uint *)(g_CurrentTextureData + iVar24 * 4);
            uVar37 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar13 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar13 >> 0x10),uVar13)) >> 0x20),
                                                  uVar13) >> 0x18),(char)(uVar13 >> 8)),
                              (ushort)(byte)uVar13) & 0xffffffff00ffffff;
            uVar13 = uVar13 >> 0x18;
          }
          if (uVar13 != 0) {
            uVar14 = (uint)*(ushort *)((uVar10 >> 1) + (int)g_CurrentScreenPtr);
            uVar44 = (uint7)((uVar14 & g_BlueMask16.mm) << g_BlueBitShift) |
                     (uint7)((uVar14 & g_GreenMask16.mm) << g_GreenBlueDitherShift) |
                     (uint7)((uVar14 & g_RedMask16.mm) << g_TotalDitherShift);
            uVar22 = (ushort)(((uVar44 >> 0x18) << 0x30) >> 0x28);
            uVar6 = CONCAT21(uVar22,(char)(uVar44 >> 0x10));
            uVar7 = CONCAT41((int)(((uint7)uVar6 << 0x20) >> 0x18),(char)(uVar44 >> 8));
            uVar33 = (ushort)(byte)uVar44;
            uVar26 = psllw(uVar37,4);
            uVar26 = pmulhw(uVar26,CONCAT26(uVar55 >> 3,
                                            CONCAT24(uVar54 >> 3,
                                                     CONCAT22(uVar53 >> 3,(ushort)uVar49 >> 3))));
            sVar48 = (short)uVar26;
            sVar50 = (short)((ulonglong)uVar26 >> 0x10);
            sVar51 = (short)((ulonglong)uVar26 >> 0x20);
            sVar52 = (short)((ulonglong)uVar26 >> 0x30);
            uVar30 = (ushort)(((uint7)(byte)((0 < sVar52) * (sVar52 < 0x100) *
                                             (char)((ulonglong)uVar26 >> 0x30) - (0xff < sVar52)) <<
                              0x30) >> 0x28);
            uVar8 = CONCAT21(uVar30,(0 < sVar51) * (sVar51 < 0x100) *
                                    (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar51));
            uVar9 = CONCAT41((int)(((uint7)uVar8 << 0x20) >> 0x18),
                             (0 < sVar50) * (sVar50 < 0x100) * (char)((ulonglong)uVar26 >> 0x10) -
                             (0xff < sVar50));
            uVar27 = (ushort)(byte)((0 < sVar48) * (sVar48 < 0x100) * (char)uVar26 - (0xff < sVar48)
                                   );
            uVar37 = (ulonglong)CONCAT52(uVar9,uVar27);
            if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
              uVar37 = g_QWORD_ARRAY_0061d180[iVar11 >> 8];
              uVar39 = uVar37 ^ g_QWORD_ARRAY_0061d180[0xff];
              uVar28 = (ushort)(((uint7)(byte)(g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
              uVar37 = CONCAT26((ushort)((uVar30 >> 8) * (short)(uVar39 >> 0x30) +
                                        (uVar28 >> 8) * (short)(uVar37 >> 0x30)) >> 8,
                                CONCAT24((ushort)((short)uVar8 * (short)(uVar39 >> 0x20) +
                                                 (short)CONCAT21(uVar28,(char)(g_SolidColorMode >>
                                                                              0x10)) *
                                                 (short)(uVar37 >> 0x20)) >> 8,
                                         CONCAT22((ushort)((short)uVar9 * (short)(uVar39 >> 0x10) +
                                                          (ushort)(byte)(g_SolidColorMode >> 8) *
                                                          (short)(uVar37 >> 0x10)) >> 8,
                                                  (ushort)(uVar27 * (short)uVar39 +
                                                          ((ushort)g_SolidColorMode & 0xff) *
                                                          (short)uVar37) >> 8)));
            }
            uVar39 = g_QWORD_ARRAY_0061d180[uVar13 * iVar25 >> 0x10];
            uVar43 = uVar39 ^ g_QWORD_ARRAY_0061d180[0xff];
            sVar48 = (short)uVar37;
            sVar38 = (short)uVar39;
            sVar40 = (short)(uVar39 >> 0x10);
            sVar41 = (short)(uVar39 >> 0x20);
            sVar42 = (short)(uVar39 >> 0x30);
            sVar50 = (short)(uVar37 >> 0x10);
            sVar51 = (short)(uVar37 >> 0x20);
            sVar52 = (short)(uVar37 >> 0x30);
            if (g_BlendMode == 1) {
              uVar26 = CONCAT26(sVar52 * sVar42,
                                CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar38)))
              ;
              uVar45 = psllw((ulonglong)CONCAT52(uVar7,uVar33),8);
            }
            else {
              sVar46 = (short)uVar7;
              sVar47 = (short)uVar6;
              uVar22 = uVar22 >> 8;
              if (g_BlendMode == 2) {
                uVar45 = CONCAT26(uVar22 * sVar52,
                                  CONCAT24(sVar47 * sVar51,CONCAT22(sVar46 * sVar50,uVar33 * sVar48)
                                          ));
                uVar26 = CONCAT26(sVar52 * sVar42,
                                  CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar38)
                                          ));
              }
              else if (g_BlendMode == 3) {
                uVar37 = uVar37 ^ g_QWORD_ARRAY_0061d180[0xff];
                uVar45 = CONCAT26(uVar22 * (short)(uVar37 >> 0x30),
                                  CONCAT24(sVar47 * (short)(uVar37 >> 0x20),
                                           CONCAT22(sVar46 * (short)(uVar37 >> 0x10),
                                                    uVar33 * (short)uVar37)));
                uVar26 = CONCAT26(sVar52 * sVar42,
                                  CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar38)
                                          ));
              }
              else {
                uVar26 = CONCAT26(sVar52 * sVar42,
                                  CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar38)
                                          ));
                uVar45 = CONCAT26(uVar22 * (short)(uVar43 >> 0x30),
                                  CONCAT24(sVar47 * (short)(uVar43 >> 0x20),
                                           CONCAT22(sVar46 * (short)(uVar43 >> 0x10),
                                                    uVar33 * (short)uVar43)));
              }
            }
            uVar26 = paddusw(uVar26,uVar45);
            uVar22 = (ushort)uVar26 >> 8;
            uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 8;
            uVar30 = (ushort)((ulonglong)uVar26 >> 0x20) >> 8;
            uVar33 = (ushort)((ulonglong)uVar26 >> 0x38);
            uVar37 = (ulonglong)
                     CONCAT13((uVar33 != 0) * (uVar33 < 0x100) * (char)((ulonglong)uVar26 >> 0x38) -
                              (0xff < uVar33),
                              CONCAT12((uVar30 != 0) * (uVar30 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x28) - (0xff < uVar30),
                                       CONCAT11((uVar27 != 0) * (uVar27 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x18) - (0xff < uVar27),
                                                (uVar22 != 0) * (uVar22 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 8) - (0xff < uVar22))));
            *(ushort *)((uVar10 >> 1) + (int)g_CurrentScreenPtr) =
                 (ushort)((uVar37 & g_BlueMask32) >> g_BlueBitShift) |
                 (ushort)((uVar37 & g_GreenMask32) >> g_GreenBlueDitherShift) |
                 (ushort)((uVar37 & g_RedMask32) >> g_TotalDitherShift);
            if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
              *(int *)(uVar10 + (int)g_CurrentZBufferPtr) = iVar20;
            }
          }
        }
        uVar10 = uVar10 + 4;
        if ((uint)g_ScanlinePixelCount <= uVar10) break;
        uVar12 = uVar12 + g_HardwareDeltaTextureU;
        sVar48 = (ushort)uVar49 + (short)g_QWORD_0061c860;
        sVar50 = uVar53 + (short)(g_QWORD_0061c860 >> 0x10);
        sVar51 = uVar54 + (short)(g_QWORD_0061c860 >> 0x20);
        sVar52 = uVar55 + (short)(g_QWORD_0061c860 >> 0x30);
        uVar15 = uVar15 + g_HardwareDeltaTextureV;
        iVar20 = iVar20 + g_HardwareDeltaDepthZ;
        uVar49 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar52),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar51),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar50),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar48)))) &
                 CONCAT26(sVar52,CONCAT24(sVar51,CONCAT22(sVar50,sVar48)));
        iVar11 = iVar11 + g_VertexAlphaDelta;
        iVar25 = iVar25 + g_INT_0061c858;
      }
    }
  }
  return;
}
