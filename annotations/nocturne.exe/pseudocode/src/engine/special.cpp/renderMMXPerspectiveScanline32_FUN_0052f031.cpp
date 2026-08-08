// Name: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_0052f031
// Address: 0052f031
// Address Range: [[0052f031, 0052f1b1] [0052f1c0, 0052f27c] [0052f280, 0052f30b] [0052f310, 0052f339] [0052f340, 0052f464] [0052f470, 0052f4d9] [0052f4e0, 0052f4e5] [0052f4f0, 0052f5c8] [0052f5d0, 0052f5f3] [0052f600, 0052f669] [0052f670, 0052f7a8] [0052f7b6, 0052f7cd] [0052f7d0, 0052f7db] [0052f7e0, 0052f822]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  byte bVar2;
  undefined6 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  SSoftwareEdge *pSVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar23;
  uint uVar20;
  int iVar21;
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
  short sVar34;
  short sVar35;
  ulonglong uVar33;
  ulonglong uVar36;
  ulonglong uVar37;
  short sVar38;
  ushort uVar39;
  short sVar41;
  short sVar42;
  ulonglong uVar40;
  short sVar43;
  short sVar44;
  short sVar46;
  short sVar47;
  ulonglong uVar45;
  short sVar48;
  ushort uVar49;
  ushort uVar50;
  char cVar3;
  char cVar4;
  byte bVar5;
  
  uVar17 = (right_vertex->base).x_current;
  uVar10 = (left_vertex->base).x_current;
  uVar7 = uVar17;
  pSVar14 = right_vertex;
  if (uVar10 < uVar17) {
    uVar7 = uVar10;
    uVar10 = uVar17;
    pSVar14 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar7 = uVar7 >> 0x10;
  iVar9 = (uVar10 >> 0x10) - uVar7;
  if (iVar9 != 0 && uVar7 <= uVar10 >> 0x10) {
    DAT_005bf078 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar7 * 4);
    DAT_005bf014 = iVar9 * 4;
    puVar16 = g_ZBufferScanlineArray[scanline_y] + uVar7;
    DAT_005bf07c = puVar16;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar17 = (pSVar14->base).depth_current;
      iVar9 = (int)((ulonglong)
                    ((longlong)(int)((left_vertex->base).depth_current - uVar17) *
                    (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
      uVar10 = DAT_005bf014;
      DAT_005bf05c = uVar17;
      DAT_005bf488 = iVar9;
      do {
        *puVar16 = uVar17;
        uVar17 = uVar17 + iVar9;
        puVar16 = puVar16 + 1;
        uVar7 = uVar10 - 4;
        bVar1 = 3 < (int)uVar10;
        uVar10 = uVar7;
      } while (uVar7 != 0 && bVar1);
      return;
    }
    if (g_VertexPreprocessMode == 5) {
      uVar17 = (pSVar14->base).u_current;
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                           (longlong)(pSVar14->base).depth_current);
      uVar17 = (left_vertex->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
      uVar17 = (pSVar14->base).v_current;
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                           (longlong)(pSVar14->base).depth_current);
      uVar17 = (left_vertex->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
    }
    else {
      DAT_005bf050 = (pSVar14->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
      DAT_005bf054 = (pSVar14->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
    }
    iVar15 = (pSVar14->base).depth_current;
    DAT_005bf488 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar15) *
                         (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
    DAT_005bf540 = (pSVar14->base).alpha_current;
    _DAT_005bf548 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - DAT_005bf540) *
               (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
    if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
      if ((g_RenderStateFlags.dword & RENDER_FOG_COLOR) == 0) {
        if ((g_RenderStateFlags.dword & RENDER_LIGHTING_COLOR) == 0) {
          uVar40 = psllw(0x000000FF00FF00FF,7);
          uVar45 = 0;
        }
        else {
          uVar17 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar17) {
            uVar17 = 0xff;
          }
          uVar40 = psllw((&DAT_005bfe70)[uVar17],7);
          uVar45 = 0;
        }
      }
      else {
        uVar17 = (left_vertex->base).red_current - 0x100;
        uVar10 = (pSVar14->base).red_current - 0x100;
        if (0xfff < uVar17) {
          uVar17 = 0xfff;
        }
        if (0xfff < uVar10) {
          uVar10 = 0xfff;
        }
        uVar7 = uVar10 * 8;
        uVar17 = (uint)((ulonglong)
                        ((longlong)(int)(uVar17 * 8 + uVar10 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
        DAT_005bf500._0_4_ = uVar7 & 0xffff;
        DAT_005bf520._0_4_ = uVar17 & 0xffff;
        uVar40 = ((CONCAT44(DAT_005bf500._4_4_,uVar7) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar7) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar7) & 0xffffffff0000ffff;
        uVar45 = ((CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar8 = (uint)(pSVar14->base).red_current >> 1;
      uVar17 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar8) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
      DAT_005bf500._0_4_ = uVar8 & 0xffff;
      DAT_005bf520._0_4_ = uVar17 & 0xffff;
      uVar11 = (uint)pSVar14->green_current >> 1;
      uVar10 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar11) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
      _DAT_005bf508 = uVar11 & 0xffff;
      _DAT_005bf528 = uVar10 & 0xffff;
      uVar12 = (uint)pSVar14->blue_current >> 1;
      uVar7 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar12) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar9 + 1]) >> 0x20);
      _DAT_005bf510 = uVar12 & 0xffff;
      _DAT_005bf530 = uVar7 & 0xffff;
      uVar40 = ((CONCAT44(DAT_005bf500._4_4_,uVar8) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf50c,uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf514,uVar12) & 0xffffffff0000ffff;
      uVar45 = ((CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf52c,uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf534,uVar7) & 0xffffffff0000ffff;
    }
    uVar17 = 0;
    sVar44 = (short)uVar45;
    sVar46 = (short)(uVar45 >> 0x10);
    sVar47 = (short)(uVar45 >> 0x20);
    sVar48 = (short)(uVar45 >> 0x30);
    DAT_005bf05c = iVar15;
    if ((_DAT_01c02584 == 0) && ((g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0)) {
      uVar37 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar39 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar45 = (ulonglong)_g_SolidColorMode >> 8;
      bVar32 = (byte)_g_SolidColorMode;
      uVar10 = DAT_005bf050;
      uVar7 = DAT_005bf054;
      iVar9 = DAT_005bf540;
      if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
        iVar9 = 0;
        _DAT_005bf548 = 0;
      }
      while( true ) {
        uVar49 = (ushort)(uVar40 >> 0x10);
        uVar50 = (ushort)(uVar40 >> 0x20);
        uVar18 = (ushort)(uVar40 >> 0x30);
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar17 + (int)DAT_005bf07c) <= iVar15)) {
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0) {
            iVar21 = 0x00FFFFFF;
            if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
              iVar21 = g_ActiveRenderColor;
            }
          }
          else {
            iVar21 = *(int *)(&DAT_01c00024 +
                             (uint)*(byte *)((uVar10 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                             (uVar7 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) +
                                            _DAT_01c02580) * 4);
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)iVar21 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)iVar21 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)iVar21 >> 8),(short)iVar21))
                                        >> 0x10),(short)iVar21) & 0xffffffff00ff00ff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar18 >> 3,
                                          CONCAT24(uVar50 >> 3,
                                                   CONCAT22(uVar49 >> 3,(ushort)uVar40 >> 3))));
          sVar38 = (short)uVar22;
          bVar2 = (0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 - (0xff < sVar38);
          sVar38 = (short)((ulonglong)uVar22 >> 0x10);
          cVar3 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x10) -
                  (0xff < sVar38);
          uVar19 = CONCAT11(cVar3,bVar2);
          sVar38 = (short)((ulonglong)uVar22 >> 0x20);
          cVar4 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x20) -
                  (0xff < sVar38);
          sVar38 = (short)((ulonglong)uVar22 >> 0x30);
          bVar5 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                  (0xff < sVar38);
          uVar20 = CONCAT13(bVar5,CONCAT12(cVar4,uVar19));
          if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
            uVar36 = (&DAT_005bfe70)[iVar9 >> 8];
            uVar33 = uVar36 ^ 0x000000FF00FF00FF;
            uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar5 << 0x30) >> 0x28),
                                                    CONCAT14(cVar4,uVar20)) >> 0x20),uVar20) >> 0x18
                          );
            uVar24 = (uint5)uVar8 & 0xffffffff00;
            uVar23 = (ushort)bVar2 * (short)uVar33 + (ushort)bVar32 * (short)uVar36;
            uVar28 = ((ushort)(CONCAT43(uVar8,CONCAT12(cVar3,uVar19)) >> 0x10) & 0xff) *
                     (short)(uVar33 >> 0x10) + (ushort)(byte)uVar45 * (short)(uVar36 >> 0x10);
            uVar26 = (short)(uVar24 >> 8) * (short)(uVar33 >> 0x20) +
                     (short)CONCAT21(uVar39,(char)uVar37) * (short)(uVar36 >> 0x20);
            uVar30 = (short)(uVar24 >> 0x18) * (short)(uVar33 >> 0x30) +
                     (uVar39 >> 8) * (short)(uVar36 >> 0x30);
            uVar25 = uVar23 >> 8;
            uVar29 = uVar28 >> 8;
            uVar27 = uVar26 >> 8;
            uVar31 = uVar30 >> 8;
            uVar20 = CONCAT13((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                              (0xff < uVar31),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) -
                                       (0xff < uVar27),
                                       CONCAT11((uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)(uVar28 >> 8) - (0xff < uVar29),
                                                (uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)(uVar23 >> 8) - (0xff < uVar25))));
          }
          *(uint *)((int)DAT_005bf078 + uVar17) = uVar20;
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)DAT_005bf07c + uVar17) = iVar15;
          }
        }
        uVar17 = uVar17 + 4;
        if (DAT_005bf014 <= uVar17) break;
        uVar10 = uVar10 + _DAT_005bf480;
        sVar38 = (ushort)uVar40 + sVar44;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar50 + sVar47;
        sVar43 = uVar18 + sVar48;
        uVar7 = uVar7 + _DAT_005bf484;
        iVar15 = iVar15 + DAT_005bf488;
        iVar9 = iVar9 + _DAT_005bf548;
        uVar40 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar43),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar42),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar41),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar38)))) &
                 CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar38)));
      }
    }
    else {
      iVar9 = DAT_005bf540;
      if ((g_RenderStateFlags.dword & RENDER_ALPHA_FROM_VERTEX) == 0) {
        iVar9 = DAT_005b763c << 8;
        _DAT_005bf548 = 0;
      }
      uVar10 = DAT_005bf050;
      uVar7 = DAT_005bf054;
      if (_DAT_01c02584 != 0) {
        while( true ) {
          uVar39 = (ushort)uVar40;
          uVar49 = (ushort)(uVar40 >> 0x10);
          uVar50 = (ushort)(uVar40 >> 0x20);
          uVar18 = (ushort)(uVar40 >> 0x30);
          if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
             (*(int *)(uVar17 + (int)DAT_005bf07c) <= iVar15)) {
            pbVar13 = (byte *)((uVar10 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                               (uVar7 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580);
            uVar20 = *(uint *)(&DAT_01c00024 + (uint)*pbVar13 * 4);
            uVar40 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar20 >> 0x10),uVar20)) >>
                                                  0x20),uVar20) >> 0x18),(char)((uint)uVar20 >> 8)),
                              (ushort)(byte)uVar20) & 0xffffffff00ffffff;
            uVar8 = (uint)pbVar13[_DAT_01c02584 - _DAT_01c02580];
            if (uVar8 != 0) {
              if ((((iVar9 < 0xff01) || (uVar8 < 0xff)) || (iVar9 < 0xff)) || (_DAT_01c03998 != 0))
              {
                uVar20 = *(uint *)(uVar17 + (int)DAT_005bf078);
                uVar23 = (ushort)(((uint7)(byte)((uint)uVar20 >> 0x18) << 0x30) >> 0x28);
                uVar37 = (ulonglong)
                         CONCAT34((int3)(CONCAT25(uVar23,CONCAT14((char)((uint)uVar20 >> 0x10),
                                                                  uVar20)) >> 0x20),uVar20) &
                         0xffffffff00ffffff;
                uVar6 = CONCAT51((int5)(uVar37 >> 0x18),(char)((uint)uVar20 >> 8));
                uVar22 = psllw(uVar40,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar18 >> 3,
                                                CONCAT24(uVar50 >> 3,
                                                         CONCAT22(uVar49 >> 3,uVar39 >> 3))));
                uVar40 = (&DAT_005bfe70)[uVar8 * iVar9 >> 0x10];
                sVar38 = (short)uVar22;
                sVar41 = (short)((ulonglong)uVar22 >> 0x10);
                sVar42 = (short)((ulonglong)uVar22 >> 0x20);
                sVar43 = (short)((ulonglong)uVar22 >> 0x30);
                uVar45 = uVar40 ^ 0x000000FF00FF00FF;
                uVar28 = (ushort)(((uint7)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                                 (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar43)
                                                ) << 0x30) >> 0x28);
                uVar25 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 -
                                       (0xff < sVar38));
                sVar43 = (short)(uVar40 >> 0x10);
                sVar34 = (short)(uVar40 >> 0x20);
                sVar35 = (short)(uVar40 >> 0x30);
                uVar29 = (ushort)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                        (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar41));
                sVar38 = (short)CONCAT21(uVar28,(0 < sVar42) * (sVar42 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar42))
                ;
                uVar28 = uVar28 >> 8;
                if (_DAT_01c03998 == 0) {
                  uVar22 = paddusw(CONCAT26(uVar28 * sVar35,
                                            CONCAT24(sVar38 * sVar34,
                                                     CONCAT22(uVar29 * sVar43,uVar25 * (short)uVar40
                                                             ))),
                                   CONCAT26((uVar23 >> 8) * (short)(uVar45 >> 0x30),
                                            CONCAT24((short)(uVar37 >> 0x20) *
                                                     (short)(uVar45 >> 0x20),
                                                     CONCAT22((short)uVar6 * (short)(uVar45 >> 0x10)
                                                              ,(ushort)(byte)uVar20 * (short)uVar45)
                                                    )));
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar20 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
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
                  uVar22 = psllw(CONCAT62(uVar6,(ushort)(byte)uVar20),8);
                  uVar22 = paddusw(CONCAT26(uVar28 * sVar35,
                                            CONCAT24(sVar38 * sVar34,
                                                     CONCAT22(uVar29 * sVar43,uVar25 * (short)uVar40
                                                             ))),uVar22);
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar20 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
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
                uVar22 = psllw(uVar40,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar18 >> 3,
                                                CONCAT24(uVar50 >> 3,
                                                         CONCAT22(uVar49 >> 3,uVar39 >> 3))));
                sVar38 = (short)uVar22;
                sVar41 = (short)((ulonglong)uVar22 >> 0x10);
                sVar42 = (short)((ulonglong)uVar22 >> 0x20);
                sVar43 = (short)((ulonglong)uVar22 >> 0x30);
                uVar20 = CONCAT13((0 < sVar43) * (sVar43 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar43),
                                  CONCAT12((0 < sVar42) * (sVar42 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar42),
                                           CONCAT11((0 < sVar41) * (sVar41 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 0x10) -
                                                    (0xff < sVar41),
                                                    (0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 -
                                                    (0xff < sVar38))));
              }
              *(uint *)(uVar17 + (int)DAT_005bf078) = uVar20;
              if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
                *(int *)(uVar17 + (int)DAT_005bf07c) = iVar15;
              }
            }
          }
          uVar17 = uVar17 + 4;
          if (DAT_005bf014 <= uVar17) break;
          uVar10 = uVar10 + _DAT_005bf480;
          uVar7 = uVar7 + _DAT_005bf484;
          iVar15 = iVar15 + DAT_005bf488;
          iVar9 = iVar9 + _DAT_005bf548;
          uVar40 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) <
                                     (short)(uVar18 + sVar48)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                              (short)(uVar50 + sVar47)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                               0x10) < (short)(uVar49 + sVar46)),
                                              -(ushort)(SUB82(g_BufferFillZeroQword,0) <
                                                       (short)(uVar39 + sVar44))))) &
                   CONCAT26(uVar18 + sVar48,
                            CONCAT24(uVar50 + sVar47,CONCAT22(uVar49 + sVar46,uVar39 + sVar44)));
        }
        return;
      }
      while( true ) {
        uVar39 = (ushort)(uVar40 >> 0x10);
        uVar49 = (ushort)(uVar40 >> 0x20);
        uVar50 = (ushort)(uVar40 >> 0x30);
        if ((((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
            (*(int *)(uVar17 + (int)DAT_005bf07c) <= iVar15)) &&
           (iVar21 = *(int *)(&DAT_01c00024 +
                             (uint)*(byte *)((uVar10 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                             (uVar7 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) +
                                            _DAT_01c02580) * 4), iVar21 != 0)) {
          uVar45 = 0;
          if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) != 0) {
            uVar20 = *(uint *)(uVar17 + (int)DAT_005bf078);
            uVar45 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar20 >> 0x10),uVar20)) >>
                                                  0x20),uVar20) >> 0x18),(char)((uint)uVar20 >> 8)),
                              (ushort)(byte)uVar20) & 0xffffffff00ffffff;
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar21 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar21 >> 0x10),iVar21)) >>
                                                  0x20),iVar21) >> 0x18),(char)((uint)iVar21 >> 8)),
                                  (ushort)(byte)iVar21) & 0xffffffff00ffffff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar50 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar39 >> 3,(ushort)uVar40 >> 3))));
          uVar37 = (&DAT_005bfe70)[iVar9 >> 8];
          sVar38 = (short)uVar22;
          sVar41 = (short)((ulonglong)uVar22 >> 0x10);
          sVar42 = (short)((ulonglong)uVar22 >> 0x20);
          sVar43 = (short)((ulonglong)uVar22 >> 0x30);
          uVar36 = uVar37 ^ 0x000000FF00FF00FF;
          uVar23 = (ushort)(((uint7)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar43)) <<
                            0x30) >> 0x28);
          uVar18 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 - (0xff < sVar38));
          sVar43 = (short)(uVar37 >> 0x10);
          sVar34 = (short)(uVar37 >> 0x20);
          sVar35 = (short)(uVar37 >> 0x30);
          uVar25 = (ushort)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar41));
          sVar38 = (short)CONCAT21(uVar23,(0 < sVar42) * (sVar42 < 0x100) *
                                          (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar42));
          uVar23 = uVar23 >> 8;
          if (_DAT_01c03998 == 0) {
            uVar22 = paddusw(CONCAT26(uVar23 * sVar35,
                                      CONCAT24(sVar38 * sVar34,
                                               CONCAT22(uVar25 * sVar43,uVar18 * (short)uVar37))),
                             CONCAT26((short)(uVar45 >> 0x30) * (short)(uVar36 >> 0x30),
                                      CONCAT24((short)(uVar45 >> 0x20) * (short)(uVar36 >> 0x20),
                                               CONCAT22((short)(uVar45 >> 0x10) *
                                                        (short)(uVar36 >> 0x10),
                                                        (short)uVar45 * (short)uVar36))));
            uVar18 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar18))));
          }
          else {
            uVar22 = psllw(uVar45,8);
            uVar22 = paddusw(CONCAT26(uVar23 * sVar35,
                                      CONCAT24(sVar38 * sVar34,
                                               CONCAT22(uVar25 * sVar43,uVar18 * (short)uVar37))),
                             uVar22);
            uVar18 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar18))));
          }
          *(uint *)(uVar17 + (int)DAT_005bf078) = uVar20;
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)(uVar17 + (int)DAT_005bf07c) = iVar15;
          }
        }
        uVar17 = uVar17 + 4;
        if (DAT_005bf014 <= uVar17) break;
        uVar10 = uVar10 + _DAT_005bf480;
        sVar38 = (ushort)uVar40 + sVar44;
        sVar41 = uVar39 + sVar46;
        sVar42 = uVar49 + sVar47;
        sVar43 = uVar50 + sVar48;
        uVar7 = uVar7 + _DAT_005bf484;
        iVar15 = iVar15 + DAT_005bf488;
        iVar9 = iVar9 + _DAT_005bf548;
        uVar40 = CONCAT26(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x30) < sVar43),
                          CONCAT24(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >> 0x20) <
                                            sVar42),
                                   CONCAT22(-(ushort)((short)((ulonglong)g_BufferFillZeroQword >>
                                                             0x10) < sVar41),
                                            -(ushort)(SUB82(g_BufferFillZeroQword,0) < sVar38)))) &
                 CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar38)));
      }
    }
  }
  return;
}
