// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0052f823
// Address: 0052f823
// Address Range: [[0052f823, 0053007e] [00530085, 005300eb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint3 uVar8;
  undefined5 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  SSoftwareEdge *pSVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar25;
  int iVar23;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ulonglong uVar24;
  ushort uVar30;
  ushort uVar31;
  uint5 uVar26;
  ushort uVar32;
  ushort uVar33;
  byte bVar34;
  short sVar36;
  short sVar37;
  ulonglong uVar35;
  ulonglong uVar38;
  uint7 uVar39;
  short sVar40;
  ushort uVar41;
  short sVar43;
  short sVar44;
  ulonglong uVar42;
  short sVar45;
  short sVar46;
  short sVar48;
  short sVar49;
  ulonglong uVar47;
  short sVar50;
  ushort uVar51;
  ushort uVar52;
  char cVar5;
  char cVar6;
  char cVar7;
  
  uVar20 = (right_vertex->base).x_current;
  uVar12 = (left_vertex->base).x_current;
  uVar10 = uVar20;
  pSVar17 = right_vertex;
  if (uVar12 < uVar20) {
    uVar10 = uVar12;
    uVar12 = uVar20;
    pSVar17 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar10 = uVar10 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar10;
  if (iVar11 != 0 && uVar10 <= uVar12 >> 0x10) {
    DAT_005bf078 = (void *)((int)g_ScreenBufferArray[scanline_y] + uVar10 * 2);
    DAT_005bf014 = iVar11 * 4;
    puVar19 = g_ZBufferScanlineArray[scanline_y] + uVar10;
    DAT_005bf07c = puVar19;
    if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
      uVar20 = (pSVar17->base).depth_current;
      iVar11 = (int)((ulonglong)
                     ((longlong)(int)((left_vertex->base).depth_current - uVar20) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      uVar12 = DAT_005bf014;
      DAT_005bf05c = uVar20;
      DAT_005bf488 = iVar11;
      do {
        *puVar19 = uVar20;
        uVar20 = uVar20 + iVar11;
        puVar19 = puVar19 + 1;
        uVar10 = uVar12 - 4;
        bVar3 = 3 < (int)uVar12;
        uVar12 = uVar10;
      } while (uVar10 != 0 && bVar3);
      return;
    }
    if (g_VertexPreprocessMode == 5) {
      uVar20 = (pSVar17->base).u_current;
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                           (longlong)(pSVar17->base).depth_current);
      uVar20 = (left_vertex->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      uVar20 = (pSVar17->base).v_current;
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                           (longlong)(pSVar17->base).depth_current);
      uVar20 = (left_vertex->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    else {
      DAT_005bf050 = (pSVar17->base).u_current;
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      DAT_005bf054 = (pSVar17->base).v_current;
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    }
    iVar18 = (pSVar17->base).depth_current;
    DAT_005bf488 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar18) *
                         (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    DAT_005bf540 = (pSVar17->base).alpha_current;
    _DAT_005bf548 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - DAT_005bf540) *
               (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
    if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
      if ((g_RenderStateFlags.dword & RENDER_FOG_COLOR) == 0) {
        if ((g_RenderStateFlags.dword & RENDER_LIGHTING_COLOR) == 0) {
          uVar42 = psllw(0x000000FF00FF00FF,7);
          uVar47 = 0;
        }
        else {
          uVar20 = g_CurrentLightingValue - 0x100U >> 4;
          if (0xfe < uVar20) {
            uVar20 = 0xff;
          }
          uVar42 = psllw((&DAT_005bfe70)[uVar20],7);
          uVar47 = 0;
        }
      }
      else {
        uVar20 = (left_vertex->base).red_current - 0x100;
        uVar12 = (pSVar17->base).red_current - 0x100;
        if (0xfff < uVar20) {
          uVar20 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar10 = uVar12 * 8;
        uVar20 = (uint)((ulonglong)
                        ((longlong)(int)(uVar20 * 8 + uVar12 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
        DAT_005bf500._0_4_ = uVar10 & 0xffff;
        DAT_005bf520._0_4_ = uVar20 & 0xffff;
        uVar42 = ((CONCAT44(DAT_005bf500._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar10) & 0xffffffff0000ffff;
        uVar47 = ((CONCAT44(DAT_005bf520._4_4_,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar20) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar14 = (uint)(pSVar17->base).red_current >> 1;
      uVar20 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar14) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      DAT_005bf500._0_4_ = uVar14 & 0xffff;
      DAT_005bf520._0_4_ = uVar20 & 0xffff;
      uVar16 = (uint)pSVar17->green_current >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar16) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      _DAT_005bf508 = uVar16 & 0xffff;
      _DAT_005bf528 = uVar12 & 0xffff;
      uVar13 = (uint)pSVar17->blue_current >> 1;
      uVar10 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar13) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar11 + 1]) >> 0x20);
      _DAT_005bf510 = uVar13 & 0xffff;
      _DAT_005bf530 = uVar10 & 0xffff;
      uVar42 = ((CONCAT44(DAT_005bf500._4_4_,uVar14) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf50c,uVar16) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf514,uVar13) & 0xffffffff0000ffff;
      uVar47 = ((CONCAT44(DAT_005bf520._4_4_,uVar20) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf52c,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf534,uVar10) & 0xffffffff0000ffff;
    }
    uVar20 = 0;
    sVar46 = (short)uVar47;
    sVar48 = (short)(uVar47 >> 0x10);
    sVar49 = (short)(uVar47 >> 0x20);
    sVar50 = (short)(uVar47 >> 0x30);
    DAT_005bf05c = iVar18;
    if ((_DAT_01c02584 == 0) && ((g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0)) {
      uVar1 = (ulonglong)_g_SolidColorMode >> 0x10;
      uVar41 = (ushort)(((uint7)(byte)((ulonglong)_g_SolidColorMode >> 0x18) << 0x30) >> 0x28);
      uVar47 = (ulonglong)_g_SolidColorMode >> 8;
      bVar34 = (byte)_g_SolidColorMode;
      uVar12 = DAT_005bf050;
      uVar10 = DAT_005bf054;
      iVar11 = DAT_005bf540;
      if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
        iVar11 = 0;
        _DAT_005bf548 = 0;
      }
      while( true ) {
        uVar51 = (ushort)(uVar42 >> 0x10);
        uVar52 = (ushort)(uVar42 >> 0x20);
        uVar21 = (ushort)(uVar42 >> 0x30);
        if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
           (*(int *)(uVar20 + (int)DAT_005bf07c) <= iVar18)) {
          if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) == 0) {
            iVar23 = 0x00FFFFFF;
            if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
              iVar23 = g_ActiveRenderColor;
            }
          }
          else {
            iVar23 = *(int *)(&DAT_01c00024 +
                             (uint)*(byte *)((uVar12 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                             (uVar10 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) +
                                            _DAT_01c02580) * 4);
          }
          uVar24 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)iVar23 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)iVar23 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)iVar23 >> 8),(short)iVar23))
                                        >> 0x10),(short)iVar23) & 0xffffffff00ff00ff,4);
          uVar24 = pmulhw(uVar24,CONCAT26(uVar21 >> 3,
                                          CONCAT24(uVar52 >> 3,
                                                   CONCAT22(uVar51 >> 3,(ushort)uVar42 >> 3))));
          sVar40 = (short)uVar24;
          bVar4 = (0 < sVar40) * (sVar40 < 0x100) * (char)uVar24 - (0xff < sVar40);
          sVar40 = (short)((ulonglong)uVar24 >> 0x10);
          cVar5 = (0 < sVar40) * (sVar40 < 0x100) * (char)((ulonglong)uVar24 >> 0x10) -
                  (0xff < sVar40);
          uVar22 = CONCAT11(cVar5,bVar4);
          sVar40 = (short)((ulonglong)uVar24 >> 0x20);
          cVar6 = (0 < sVar40) * (sVar40 < 0x100) * (char)((ulonglong)uVar24 >> 0x20) -
                  (0xff < sVar40);
          sVar40 = (short)((ulonglong)uVar24 >> 0x30);
          cVar7 = (0 < sVar40) * (sVar40 < 0x100) * (char)((ulonglong)uVar24 >> 0x30) -
                  (0xff < sVar40);
          uVar14 = CONCAT13(cVar7,CONCAT12(cVar6,uVar22));
          uVar38 = (ulonglong)(uint6)uVar14;
          if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
            uVar38 = (&DAT_005bfe70)[iVar11 >> 8];
            uVar35 = uVar38 ^ 0x000000FF00FF00FF;
            uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar7,(uint6)uVar14) >> 0x28),
                                                     CONCAT14(cVar6,uVar14)) >> 0x20),uVar14) >>
                           0x18);
            uVar26 = (uint5)uVar14 & 0xffff00ff00;
            uVar25 = (ushort)bVar4 * (short)uVar35 + (ushort)bVar34 * (short)uVar38;
            uVar30 = ((ushort)(CONCAT43(uVar14,CONCAT12(cVar5,uVar22)) >> 0x10) & 0xff) *
                     (short)(uVar35 >> 0x10) + (ushort)(byte)uVar47 * (short)(uVar38 >> 0x10);
            uVar28 = (short)(uVar26 >> 8) * (short)(uVar35 >> 0x20) +
                     (short)CONCAT21(uVar41,(char)uVar1) * (short)(uVar38 >> 0x20);
            uVar32 = (short)(uVar26 >> 0x18) * (short)(uVar35 >> 0x30) +
                     (uVar41 >> 8) * (short)(uVar38 >> 0x30);
            uVar27 = uVar25 >> 8;
            uVar31 = uVar30 >> 8;
            uVar29 = uVar28 >> 8;
            uVar33 = uVar32 >> 8;
            uVar38 = (ulonglong)
                     CONCAT13((uVar33 != 0) * (uVar33 < 0x100) * (char)(uVar32 >> 8) -
                              (0xff < uVar33),
                              CONCAT12((uVar29 != 0) * (uVar29 < 0x100) * (char)(uVar28 >> 8) -
                                       (0xff < uVar29),
                                       CONCAT11((uVar31 != 0) * (uVar31 < 0x100) *
                                                (char)(uVar30 >> 8) - (0xff < uVar31),
                                                (uVar27 != 0) * (uVar27 < 0x100) *
                                                (char)(uVar25 >> 8) - (0xff < uVar27))));
          }
          *(ushort *)((uVar20 >> 1) + (int)DAT_005bf078) =
               (ushort)((uVar38 & g_BlueMask32.mm) >> _DAT_005bf658) |
               (ushort)((uVar38 & g_GreenMask32.mm) >> _DAT_005bf638) |
               (ushort)((uVar38 & g_RedMask32.mm) >> _DAT_005bf618);
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((int)DAT_005bf07c + uVar20) = iVar18;
          }
        }
        uVar20 = uVar20 + 4;
        if (DAT_005bf014 <= uVar20) break;
        uVar12 = uVar12 + _DAT_005bf480;
        sVar40 = (ushort)uVar42 + sVar46;
        sVar43 = uVar51 + sVar48;
        sVar44 = uVar52 + sVar49;
        sVar45 = uVar21 + sVar50;
        uVar10 = uVar10 + _DAT_005bf484;
        iVar18 = iVar18 + DAT_005bf488;
        iVar11 = iVar11 + _DAT_005bf548;
        uVar42 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) < sVar45),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) < sVar44),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                     sVar43),-(ushort)((short)DAT_005bf48c < sVar40)
                                           ))) &
                 CONCAT26(sVar45,CONCAT24(sVar44,CONCAT22(sVar43,sVar40)));
      }
    }
    else {
      iVar11 = DAT_005bf540;
      if ((g_RenderStateFlags.dword & RENDER_ALPHA_FROM_VERTEX) == 0) {
        iVar11 = DAT_005b763c << 8;
        _DAT_005bf548 = 0;
      }
      uVar12 = DAT_005bf050;
      uVar10 = DAT_005bf054;
      if (_DAT_01c02584 != 0) {
        while( true ) {
          uVar41 = (ushort)uVar42;
          uVar51 = (ushort)(uVar42 >> 0x10);
          uVar52 = (ushort)(uVar42 >> 0x20);
          uVar21 = (ushort)(uVar42 >> 0x30);
          if (((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
             (*(int *)(uVar20 + (int)DAT_005bf07c) <= iVar18)) {
            pbVar15 = (byte *)((uVar12 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                               (uVar10 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580);
            uVar2 = *(uint *)(&DAT_01c00024 + (uint)*pbVar15 * 4);
            uVar42 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),(char)((uint)uVar2 >> 8)),
                              (ushort)(byte)uVar2) & 0xffffffff00ffffff;
            uVar14 = (uint)pbVar15[_DAT_01c02584 - _DAT_01c02580];
            if (uVar14 != 0) {
              if ((((iVar11 < 0xff01) || (uVar14 < 0xff)) || (iVar11 < 0xff)) ||
                 (_DAT_01c03998 != 0)) {
                uVar16 = (uint)*(ushort *)((uVar20 >> 1) + (int)DAT_005bf078);
                uVar39 = (uint7)((uVar16 & g_BlueMask16.mm) << _DAT_005bf658) |
                         (uint7)((uVar16 & g_GreenMask16.mm) << _DAT_005bf638) |
                         (uint7)((uVar16 & g_RedMask16.mm) << _DAT_005bf618);
                uVar25 = (ushort)(((uVar39 >> 0x18) << 0x30) >> 0x28);
                uVar8 = CONCAT21(uVar25,(char)(uVar39 >> 0x10));
                uVar9 = CONCAT41((int)(((uint7)uVar8 << 0x20) >> 0x18),(char)(uVar39 >> 8));
                uVar24 = psllw(uVar42,4);
                uVar24 = pmulhw(uVar24,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar52 >> 3,
                                                         CONCAT22(uVar51 >> 3,uVar41 >> 3))));
                uVar42 = (&DAT_005bfe70)[uVar14 * iVar11 >> 0x10];
                sVar40 = (short)uVar24;
                sVar43 = (short)((ulonglong)uVar24 >> 0x10);
                sVar44 = (short)((ulonglong)uVar24 >> 0x20);
                sVar45 = (short)((ulonglong)uVar24 >> 0x30);
                uVar47 = uVar42 ^ 0x000000FF00FF00FF;
                uVar30 = (ushort)(((uint7)(byte)((0 < sVar45) * (sVar45 < 0x100) *
                                                 (char)((ulonglong)uVar24 >> 0x30) - (0xff < sVar45)
                                                ) << 0x30) >> 0x28);
                uVar27 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) * (char)uVar24 -
                                       (0xff < sVar40));
                sVar45 = (short)(uVar42 >> 0x10);
                sVar36 = (short)(uVar42 >> 0x20);
                sVar37 = (short)(uVar42 >> 0x30);
                uVar31 = (ushort)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                        (char)((ulonglong)uVar24 >> 0x10) - (0xff < sVar43));
                sVar40 = (short)CONCAT21(uVar30,(0 < sVar44) * (sVar44 < 0x100) *
                                                (char)((ulonglong)uVar24 >> 0x20) - (0xff < sVar44))
                ;
                uVar30 = uVar30 >> 8;
                if (_DAT_01c03998 == 0) {
                  uVar24 = paddusw(CONCAT26(uVar30 * sVar37,
                                            CONCAT24(sVar40 * sVar36,
                                                     CONCAT22(uVar31 * sVar45,uVar27 * (short)uVar42
                                                             ))),
                                   CONCAT26((uVar25 >> 8) * (short)(uVar47 >> 0x30),
                                            CONCAT24((short)uVar8 * (short)(uVar47 >> 0x20),
                                                     CONCAT22((short)uVar9 * (short)(uVar47 >> 0x10)
                                                              ,(ushort)(byte)uVar39 * (short)uVar47)
                                                    )));
                  uVar25 = (ushort)uVar24 >> 8;
                  uVar27 = (ushort)((ulonglong)uVar24 >> 0x10) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar24 >> 0x20) >> 8;
                  uVar31 = (ushort)((ulonglong)uVar24 >> 0x38);
                  uVar42 = (ulonglong)
                           CONCAT13((uVar31 != 0) * (uVar31 < 0x100) *
                                    (char)((ulonglong)uVar24 >> 0x38) - (0xff < uVar31),
                                    CONCAT12((uVar30 != 0) * (uVar30 < 0x100) *
                                             (char)((ulonglong)uVar24 >> 0x28) - (0xff < uVar30),
                                             CONCAT11((uVar27 != 0) * (uVar27 < 0x100) *
                                                      (char)((ulonglong)uVar24 >> 0x18) -
                                                      (0xff < uVar27),
                                                      (uVar25 != 0) * (uVar25 < 0x100) *
                                                      (char)((ulonglong)uVar24 >> 8) -
                                                      (0xff < uVar25))));
                }
                else {
                  uVar24 = psllw((ulonglong)CONCAT52(uVar9,(ushort)(byte)uVar39),8);
                  uVar24 = paddusw(CONCAT26(uVar30 * sVar37,
                                            CONCAT24(sVar40 * sVar36,
                                                     CONCAT22(uVar31 * sVar45,uVar27 * (short)uVar42
                                                             ))),uVar24);
                  uVar25 = (ushort)uVar24 >> 8;
                  uVar27 = (ushort)((ulonglong)uVar24 >> 0x10) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar24 >> 0x20) >> 8;
                  uVar31 = (ushort)((ulonglong)uVar24 >> 0x38);
                  uVar42 = (ulonglong)
                           CONCAT13((uVar31 != 0) * (uVar31 < 0x100) *
                                    (char)((ulonglong)uVar24 >> 0x38) - (0xff < uVar31),
                                    CONCAT12((uVar30 != 0) * (uVar30 < 0x100) *
                                             (char)((ulonglong)uVar24 >> 0x28) - (0xff < uVar30),
                                             CONCAT11((uVar27 != 0) * (uVar27 < 0x100) *
                                                      (char)((ulonglong)uVar24 >> 0x18) -
                                                      (0xff < uVar27),
                                                      (uVar25 != 0) * (uVar25 < 0x100) *
                                                      (char)((ulonglong)uVar24 >> 8) -
                                                      (0xff < uVar25))));
                }
              }
              else {
                uVar24 = psllw(uVar42,4);
                uVar24 = pmulhw(uVar24,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar52 >> 3,
                                                         CONCAT22(uVar51 >> 3,uVar41 >> 3))));
                sVar40 = (short)uVar24;
                sVar43 = (short)((ulonglong)uVar24 >> 0x10);
                sVar44 = (short)((ulonglong)uVar24 >> 0x20);
                sVar45 = (short)((ulonglong)uVar24 >> 0x30);
                uVar42 = (ulonglong)
                         CONCAT13((0 < sVar45) * (sVar45 < 0x100) *
                                  (char)((ulonglong)uVar24 >> 0x30) - (0xff < sVar45),
                                  CONCAT12((0 < sVar44) * (sVar44 < 0x100) *
                                           (char)((ulonglong)uVar24 >> 0x20) - (0xff < sVar44),
                                           CONCAT11((0 < sVar43) * (sVar43 < 0x100) *
                                                    (char)((ulonglong)uVar24 >> 0x10) -
                                                    (0xff < sVar43),
                                                    (0 < sVar40) * (sVar40 < 0x100) * (char)uVar24 -
                                                    (0xff < sVar40))));
              }
              *(ushort *)((uVar20 >> 1) + (int)DAT_005bf078) =
                   (ushort)((uVar42 & g_BlueMask32.mm) >> _DAT_005bf658) |
                   (ushort)((uVar42 & g_GreenMask32.mm) >> _DAT_005bf638) |
                   (ushort)((uVar42 & g_RedMask32.mm) >> _DAT_005bf618);
              if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
                *(int *)(uVar20 + (int)DAT_005bf07c) = iVar18;
              }
            }
          }
          uVar20 = uVar20 + 4;
          if (DAT_005bf014 <= uVar20) break;
          uVar12 = uVar12 + _DAT_005bf480;
          uVar10 = uVar10 + _DAT_005bf484;
          iVar18 = iVar18 + DAT_005bf488;
          iVar11 = iVar11 + _DAT_005bf548;
          uVar42 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) <
                                     (short)(uVar21 + sVar50)),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) <
                                              (short)(uVar52 + sVar49)),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                       (short)(uVar51 + sVar48)),
                                              -(ushort)((short)DAT_005bf48c <
                                                       (short)(uVar41 + sVar46))))) &
                   CONCAT26(uVar21 + sVar50,
                            CONCAT24(uVar52 + sVar49,CONCAT22(uVar51 + sVar48,uVar41 + sVar46)));
        }
        return;
      }
      while( true ) {
        uVar41 = (ushort)(uVar42 >> 0x10);
        uVar51 = (ushort)(uVar42 >> 0x20);
        uVar52 = (ushort)(uVar42 >> 0x30);
        if ((((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0) ||
            (*(int *)(uVar20 + (int)DAT_005bf07c) <= iVar18)) &&
           (iVar23 = *(int *)(&DAT_01c00024 +
                             (uint)*(byte *)((uVar12 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                             (uVar10 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) +
                                            _DAT_01c02580) * 4), iVar23 != 0)) {
          uVar47 = 0;
          if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) != 0) {
            uVar14 = (uint)*(ushort *)((uVar20 >> 1) + (int)DAT_005bf078);
            uVar39 = (uint7)((uVar14 & g_BlueMask16.mm) << _DAT_005bf658) |
                     (uint7)((uVar14 & g_GreenMask16.mm) << _DAT_005bf638) |
                     (uint7)((uVar14 & g_RedMask16.mm) << _DAT_005bf618);
            uVar47 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar39 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar39 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar39 >> 8)),
                              (ushort)(byte)uVar39);
          }
          uVar24 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar23 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar23 >> 0x10),iVar23)) >>
                                                  0x20),iVar23) >> 0x18),(char)((uint)iVar23 >> 8)),
                                  (ushort)(byte)iVar23) & 0xffffffff00ffffff,4);
          uVar24 = pmulhw(uVar24,CONCAT26(uVar52 >> 3,
                                          CONCAT24(uVar51 >> 3,
                                                   CONCAT22(uVar41 >> 3,(ushort)uVar42 >> 3))));
          uVar1 = (&DAT_005bfe70)[iVar11 >> 8];
          sVar40 = (short)uVar24;
          sVar43 = (short)((ulonglong)uVar24 >> 0x10);
          sVar44 = (short)((ulonglong)uVar24 >> 0x20);
          sVar45 = (short)((ulonglong)uVar24 >> 0x30);
          uVar38 = uVar1 ^ 0x000000FF00FF00FF;
          uVar25 = (ushort)(((uint7)(byte)((0 < sVar45) * (sVar45 < 0x100) *
                                           (char)((ulonglong)uVar24 >> 0x30) - (0xff < sVar45)) <<
                            0x30) >> 0x28);
          uVar21 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) * (char)uVar24 - (0xff < sVar40));
          sVar45 = (short)(uVar1 >> 0x10);
          sVar36 = (short)(uVar1 >> 0x20);
          sVar37 = (short)(uVar1 >> 0x30);
          uVar27 = (ushort)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                  (char)((ulonglong)uVar24 >> 0x10) - (0xff < sVar43));
          sVar40 = (short)CONCAT21(uVar25,(0 < sVar44) * (sVar44 < 0x100) *
                                          (char)((ulonglong)uVar24 >> 0x20) - (0xff < sVar44));
          uVar25 = uVar25 >> 8;
          if (_DAT_01c03998 == 0) {
            uVar24 = paddusw(CONCAT26(uVar25 * sVar37,
                                      CONCAT24(sVar40 * sVar36,
                                               CONCAT22(uVar27 * sVar45,uVar21 * (short)uVar1))),
                             CONCAT26((short)(uVar47 >> 0x30) * (short)(uVar38 >> 0x30),
                                      CONCAT24((short)(uVar47 >> 0x20) * (short)(uVar38 >> 0x20),
                                               CONCAT22((short)(uVar47 >> 0x10) *
                                                        (short)(uVar38 >> 0x10),
                                                        (short)uVar47 * (short)uVar38))));
            uVar21 = (ushort)uVar24 >> 8;
            uVar25 = (ushort)((ulonglong)uVar24 >> 0x10) >> 8;
            uVar27 = (ushort)((ulonglong)uVar24 >> 0x20) >> 8;
            uVar30 = (ushort)((ulonglong)uVar24 >> 0x38);
            uVar14 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) * (char)((ulonglong)uVar24 >> 0x38) -
                              (0xff < uVar30),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                       (char)((ulonglong)uVar24 >> 0x28) - (0xff < uVar27),
                                       CONCAT11((uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)((ulonglong)uVar24 >> 0x18) - (0xff < uVar25),
                                                (uVar21 != 0) * (uVar21 < 0x100) *
                                                (char)((ulonglong)uVar24 >> 8) - (0xff < uVar21))));
          }
          else {
            uVar24 = psllw(uVar47,8);
            uVar24 = paddusw(CONCAT26(uVar25 * sVar37,
                                      CONCAT24(sVar40 * sVar36,
                                               CONCAT22(uVar27 * sVar45,uVar21 * (short)uVar1))),
                             uVar24);
            uVar21 = (ushort)uVar24 >> 8;
            uVar25 = (ushort)((ulonglong)uVar24 >> 0x10) >> 8;
            uVar27 = (ushort)((ulonglong)uVar24 >> 0x20) >> 8;
            uVar30 = (ushort)((ulonglong)uVar24 >> 0x38);
            uVar14 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) * (char)((ulonglong)uVar24 >> 0x38) -
                              (0xff < uVar30),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                       (char)((ulonglong)uVar24 >> 0x28) - (0xff < uVar27),
                                       CONCAT11((uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)((ulonglong)uVar24 >> 0x18) - (0xff < uVar25),
                                                (uVar21 != 0) * (uVar21 < 0x100) *
                                                (char)((ulonglong)uVar24 >> 8) - (0xff < uVar21))));
          }
          uVar47 = (ulonglong)uVar14;
          *(ushort *)((uVar20 >> 1) + (int)DAT_005bf078) =
               (ushort)((uVar47 & g_BlueMask32.mm) >> _DAT_005bf658) |
               (ushort)((uVar47 & g_GreenMask32.mm) >> _DAT_005bf638) |
               (ushort)((uVar47 & g_RedMask32.mm) >> _DAT_005bf618);
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)(uVar20 + (int)DAT_005bf07c) = iVar18;
          }
        }
        uVar20 = uVar20 + 4;
        if (DAT_005bf014 <= uVar20) break;
        uVar12 = uVar12 + _DAT_005bf480;
        sVar40 = (ushort)uVar42 + sVar46;
        sVar43 = uVar41 + sVar48;
        sVar44 = uVar51 + sVar49;
        sVar45 = uVar52 + sVar50;
        uVar10 = uVar10 + _DAT_005bf484;
        iVar18 = iVar18 + DAT_005bf488;
        iVar11 = iVar11 + _DAT_005bf548;
        uVar42 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) < sVar45),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) < sVar44),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                     sVar43),-(ushort)((short)DAT_005bf48c < sVar40)
                                           ))) &
                 CONCAT26(sVar45,CONCAT24(sVar44,CONCAT22(sVar43,sVar40)));
      }
    }
  }
  return;
}
