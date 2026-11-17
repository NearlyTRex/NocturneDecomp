// Name: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_0057de01
// Address: 0057de01
// Address Range: [[0057de01, 0057df81] [0057df90, 0057e04c] [0057e050, 0057e0db] [0057e0e0, 0057e109] [0057e110, 0057e234] [0057e240, 0057e2a9] [0057e2b0, 0057e2b5] [0057e2c0, 0057e389] [0057e3c0, 0057e429] [0057e430, 0057e568] [0057e576, 0057e58d] [0057e590, 0057e59b] [0057e5a0, 0057e5e2]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  bool bVar1;
  byte bVar2;
  undefined6 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  SSoftwareEdge *pSVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar22;
  uint uVar20;
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ulonglong uVar21;
  ushort uVar28;
  uint5 uVar24;
  ushort uVar29;
  ushort uVar30;
  byte bVar31;
  short sVar33;
  short sVar34;
  ulonglong uVar32;
  ulonglong uVar35;
  ulonglong uVar36;
  short sVar37;
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
  ushort uVar49;
  char cVar3;
  char cVar4;
  byte bVar5;
  
  uVar17 = (right_vertex->base).x_current;
  uVar9 = (left_vertex->base).x_current;
  uVar7 = uVar17;
  pSVar14 = right_vertex;
  if (uVar9 < uVar17) {
    uVar7 = uVar9;
    uVar9 = uVar17;
    pSVar14 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar7 = uVar7 >> 0x10;
  iVar8 = (uVar9 >> 0x10) - uVar7;
  if (iVar8 != 0 && uVar7 <= uVar9 >> 0x10) {
    g_INT_PTR_006239c8 = (int *)(g_ARRAY_PTR_01c4354c[scanline_y] + uVar7 * 4);
    g_INT_00623964 = iVar8 * 4;
    puVar16 = g_UINT_PTR_ARRAY_01c4480c[scanline_y] + uVar7;
    g_INT_PTR_006239cc = (int *)puVar16;
    if (g_BIT_INTEGER32_01c51d14.dword == 0x80) {
      uVar17 = (pSVar14->base).depth_current;
      iVar15 = (int)((ulonglong)
                     ((longlong)(int)((left_vertex->base).depth_current - uVar17) *
                     (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
      iVar8 = g_INT_00623964;
      g_INT_006239ac = uVar17;
      g_INT_00623dd8 = iVar15;
      do {
        *puVar16 = uVar17;
        uVar17 = uVar17 + iVar15;
        puVar16 = puVar16 + 1;
        iVar10 = iVar8 + -4;
        bVar1 = 3 < iVar8;
        iVar8 = iVar10;
      } while (iVar10 != 0 && bVar1);
      return;
    }
    if (g_INT_01c51d18 == 5) {
      uVar17 = (pSVar14->base).u_current;
      g_INT_006239a0 =
           (int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                (longlong)(pSVar14->base).depth_current);
      uVar17 = (left_vertex->base).u_current;
      g_INT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006239a0) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
      uVar17 = (pSVar14->base).v_current;
      g_INT_006239a4 =
           (int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                (longlong)(pSVar14->base).depth_current);
      uVar17 = (left_vertex->base).v_current;
      g_INT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006239a4) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
    }
    else {
      g_INT_006239a0 = (pSVar14->base).u_current;
      g_INT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_INT_006239a0) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
      g_INT_006239a4 = (pSVar14->base).v_current;
      g_INT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_INT_006239a4) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
    }
    iVar15 = (pSVar14->base).depth_current;
    g_INT_00623dd8 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar15) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
    g_INT_00623e90 = (pSVar14->base).alpha_current;
    g_INT_00623e98 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - g_INT_00623e90) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
    if ((g_BIT_INTEGER32_01c51d14.dword & 0x200) == 0) {
      if ((g_BIT_INTEGER32_01c51d14.dword & 4) == 0) {
        if ((g_BIT_INTEGER32_01c51d14.dword & 0x10) == 0) {
          uVar38 = psllw(g_QWORD_ARRAY_006247d0[0xff],7);
          uVar43 = 0;
        }
        else {
          uVar17 = g_INT_01c4f024 - 0x100U >> 4;
          if (0xfe < uVar17) {
            uVar17 = 0xff;
          }
          uVar38 = psllw(g_QWORD_ARRAY_006247d0[uVar17],7);
          uVar43 = 0;
        }
      }
      else {
        uVar17 = (left_vertex->base).red_current - 0x100;
        uVar9 = (pSVar14->base).red_current - 0x100;
        if (0xfff < uVar17) {
          uVar17 = 0xfff;
        }
        if (0xfff < uVar9) {
          uVar9 = 0xfff;
        }
        uVar7 = uVar9 * 8;
        uVar17 = (uint)((ulonglong)
                        ((longlong)(int)(uVar17 * 8 + uVar9 * -8) *
                        (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
        g_QWORD_00623e50._0_4_ = uVar7 & 0xffff;
        g_QWORD_00623e70._0_4_ = uVar17 & 0xffff;
        uVar38 = ((CONCAT44(g_QWORD_00623e50._4_4_,uVar7) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e50._4_4_,uVar7) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e50._4_4_,uVar7) & 0xffffffff0000ffff;
        uVar43 = ((CONCAT44(g_QWORD_00623e70._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e70._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e70._4_4_,uVar17) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar11 = (uint)(pSVar14->base).red_current >> 1;
      uVar17 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar11) *
                      (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
      g_QWORD_00623e50._0_4_ = uVar11 & 0xffff;
      g_QWORD_00623e70._0_4_ = uVar17 & 0xffff;
      uVar12 = (uint)pSVar14->green_current >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar12) *
                     (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
      g_MMX_INTEGER_00623e58.u32[0] = uVar12 & 0xffff;
      g_MMX_INTEGER_00623e78.u32[0] = uVar9 & 0xffff;
      uVar13 = (uint)pSVar14->blue_current >> 1;
      uVar7 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar13) *
                     (longlong)(int)g_UINT_ARRAY_01c4f030[iVar8 + 1]) >> 0x20);
      g_MMX_INTEGER_00623e60.u32[0] = uVar13 & 0xffff;
      g_MMX_INTEGER_00623e80.u32[0] = uVar7 & 0xffff;
      uVar38 = ((CONCAT44(g_QWORD_00623e50._4_4_,uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e58.u32[1],uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e60.u32[1],uVar13) & 0xffffffff0000ffff;
      uVar43 = ((CONCAT44(g_QWORD_00623e70._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e78.u32[1],uVar9) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e80.u32[1],uVar7) & 0xffffffff0000ffff;
    }
    uVar17 = 0;
    sVar42 = (short)uVar43;
    sVar44 = (short)(uVar43 >> 0x10);
    sVar45 = (short)(uVar43 >> 0x20);
    sVar46 = (short)(uVar43 >> 0x30);
    g_INT_006239ac = iVar15;
    if ((g_UCHAR_PTR_01c50934 == (uchar *)0x0) && ((g_BIT_INTEGER32_01c51d14.dword & 2) == 0)) {
      uVar36 = (ulonglong)_g_ULONG_01c51d1c >> 0x10;
      uVar47 = (ushort)(((uint7)(byte)((ulonglong)_g_ULONG_01c51d1c >> 0x18) << 0x30) >> 0x28);
      uVar43 = (ulonglong)_g_ULONG_01c51d1c >> 8;
      bVar31 = (byte)_g_ULONG_01c51d1c;
      uVar9 = g_INT_006239a0;
      uVar7 = g_INT_006239a4;
      iVar8 = g_INT_00623e90;
      if ((g_BIT_INTEGER32_01c51d14.dword & 8) == 0) {
        iVar8 = 0;
        g_INT_00623e98 = 0;
      }
      while( true ) {
        uVar48 = (ushort)(uVar38 >> 0x10);
        uVar49 = (ushort)(uVar38 >> 0x20);
        uVar18 = (ushort)(uVar38 >> 0x30);
        if (((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
           (*(int *)(uVar17 + (int)g_INT_PTR_006239cc) <= iVar15)) {
          if ((g_BIT_INTEGER32_01c51d14.dword & 1) == 0) {
            uVar11 = g_INT_00623fc8;
            if ((g_BIT_INTEGER32_01c51d14.dword & 0x200) == 0) {
              uVar11 = g_INT_01c4f020;
            }
          }
          else {
            uVar11 = g_UINT_ARRAY_01c4e3d4
                     [g_UCHAR_PTR_01c50930
                      [(uVar9 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                       (uVar7 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]];
          }
          uVar21 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar11 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar11 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar11 >> 8),(short)uVar11)) >>
                                        0x10),(short)uVar11) & 0xffffffff00ff00ff,4);
          uVar21 = pmulhw(uVar21,CONCAT26(uVar18 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar48 >> 3,(ushort)uVar38 >> 3))));
          sVar37 = (short)uVar21;
          bVar2 = (0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 - (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar21 >> 0x10);
          cVar3 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar21 >> 0x10) -
                  (0xff < sVar37);
          uVar19 = CONCAT11(cVar3,bVar2);
          sVar37 = (short)((ulonglong)uVar21 >> 0x20);
          cVar4 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar21 >> 0x20) -
                  (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar21 >> 0x30);
          bVar5 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                  (0xff < sVar37);
          uVar20 = CONCAT13(bVar5,CONCAT12(cVar4,uVar19));
          if ((g_BIT_INTEGER32_01c51d14.dword & 8) != 0) {
            uVar35 = g_QWORD_ARRAY_006247d0[iVar8 >> 8];
            uVar32 = uVar35 ^ g_QWORD_ARRAY_006247d0[0xff];
            uVar11 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar5 << 0x30) >> 0x28),
                                                     CONCAT14(cVar4,uVar20)) >> 0x20),uVar20) >>
                           0x18);
            uVar24 = (uint5)uVar11 & 0xffffffff00;
            uVar22 = (ushort)bVar2 * (short)uVar32 + (ushort)bVar31 * (short)uVar35;
            uVar28 = ((ushort)(CONCAT43(uVar11,CONCAT12(cVar3,uVar19)) >> 0x10) & 0xff) *
                     (short)(uVar32 >> 0x10) + (ushort)(byte)uVar43 * (short)(uVar35 >> 0x10);
            uVar26 = (short)(uVar24 >> 8) * (short)(uVar32 >> 0x20) +
                     (short)CONCAT21(uVar47,(char)uVar36) * (short)(uVar35 >> 0x20);
            uVar29 = (short)(uVar24 >> 0x18) * (short)(uVar32 >> 0x30) +
                     (uVar47 >> 8) * (short)(uVar35 >> 0x30);
            uVar25 = uVar22 >> 8;
            uVar23 = uVar28 >> 8;
            uVar27 = uVar26 >> 8;
            uVar30 = uVar29 >> 8;
            uVar20 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) * (char)(uVar29 >> 8) -
                              (0xff < uVar30),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) -
                                       (0xff < uVar27),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)(uVar28 >> 8) - (0xff < uVar23),
                                                (uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)(uVar22 >> 8) - (0xff < uVar25))));
          }
          *(uint *)((int)g_INT_PTR_006239c8 + uVar17) = uVar20;
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
            *(int *)((int)g_INT_PTR_006239cc + uVar17) = iVar15;
          }
        }
        uVar17 = uVar17 + 4;
        if ((uint)g_INT_00623964 <= uVar17) break;
        uVar9 = uVar9 + g_INT_00623dd0;
        sVar37 = (ushort)uVar38 + sVar42;
        sVar39 = uVar48 + sVar44;
        sVar40 = uVar49 + sVar45;
        sVar41 = uVar18 + sVar46;
        uVar7 = uVar7 + g_INT_00623dd4;
        iVar15 = iVar15 + g_INT_00623dd8;
        iVar8 = iVar8 + g_INT_00623e98;
        uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x30) < sVar41),
                          CONCAT24(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x20) < sVar40)
                                   ,CONCAT22(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x10)
                                                      < sVar39),
                                             -(ushort)(SUB82(g_DOUBLE_00623ddc,0) < sVar37)))) &
                 CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar37)));
      }
    }
    else {
      iVar8 = g_INT_00623e90;
      if ((g_BIT_INTEGER32_01c51d14.dword & 0x100) == 0) {
        iVar8 = g_INT_0061b4b8 << 8;
        g_INT_00623e98 = 0;
      }
      uVar9 = g_INT_006239a0;
      uVar7 = g_INT_006239a4;
      if (g_UCHAR_PTR_01c50934 != (uchar *)0x0) {
        while( true ) {
          uVar47 = (ushort)(uVar38 >> 0x10);
          uVar48 = (ushort)(uVar38 >> 0x20);
          uVar49 = (ushort)(uVar38 >> 0x30);
          if (((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
             (*(int *)(uVar17 + (int)g_INT_PTR_006239cc) <= iVar15)) {
            uVar11 = g_UINT_ARRAY_01c4e3d4
                     [g_UCHAR_PTR_01c50930
                      [(uVar9 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                       (uVar7 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]];
            if (g_UCHAR_PTR_01c50934
                [(int)(g_UCHAR_PTR_01c50930 +
                      (uVar9 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                      (uVar7 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)) -
                 (int)g_UCHAR_PTR_01c50930] != 0) {
              uVar20 = *(uint *)(uVar17 + (int)g_INT_PTR_006239c8);
              uVar18 = (ushort)(((uint7)(byte)((uint)uVar20 >> 0x18) << 0x30) >> 0x28);
              uVar35 = (ulonglong)
                       CONCAT34((int3)(CONCAT25(uVar18,CONCAT14((char)((uint)uVar20 >> 0x10),uVar20)
                                               ) >> 0x20),uVar20) & 0xffffffff00ffffff;
              uVar6 = CONCAT51((int5)(uVar35 >> 0x18),(char)((uint)uVar20 >> 8));
              uVar21 = psllw((ulonglong)
                             CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)
                                                  (uVar11 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar11 >> 0x10),uVar11)) >> 0x20),
                                                  uVar11) >> 0x18),(char)(uVar11 >> 8)),
                                      (ushort)(byte)uVar11) & 0xffffffff00ffffff,4);
              uVar21 = pmulhw(uVar21,CONCAT26(uVar49 >> 3,
                                              CONCAT24(uVar48 >> 3,
                                                       CONCAT22(uVar47 >> 3,(ushort)uVar38 >> 3))));
              uVar43 = g_QWORD_ARRAY_006247d0
                       [(uint)g_UCHAR_PTR_01c50934
                              [(int)(g_UCHAR_PTR_01c50930 +
                                    (uVar9 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                                    (uVar7 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)) -
                               (int)g_UCHAR_PTR_01c50930] * iVar8 >> 0x10];
              sVar37 = (short)uVar21;
              sVar39 = (short)((ulonglong)uVar21 >> 0x10);
              sVar40 = (short)((ulonglong)uVar21 >> 0x20);
              sVar41 = (short)((ulonglong)uVar21 >> 0x30);
              uVar36 = uVar43 ^ g_QWORD_ARRAY_006247d0[0xff];
              uVar25 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                               (char)((ulonglong)uVar21 >> 0x30) - (0xff < sVar41))
                                << 0x30) >> 0x28);
              uVar22 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 -
                                     (0xff < sVar37));
              sVar41 = (short)(uVar43 >> 0x10);
              sVar33 = (short)(uVar43 >> 0x20);
              sVar34 = (short)(uVar43 >> 0x30);
              uVar28 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                      (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar39));
              sVar37 = (short)CONCAT21(uVar25,(0 < sVar40) * (sVar40 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar40));
              uVar25 = uVar25 >> 8;
              if (g_INT_01c51d0c == 0) {
                uVar21 = paddusw(CONCAT26(uVar25 * sVar34,
                                          CONCAT24(sVar37 * sVar33,
                                                   CONCAT22(uVar28 * sVar41,uVar22 * (short)uVar43))
                                         ),
                                 CONCAT26((uVar18 >> 8) * (short)(uVar36 >> 0x30),
                                          CONCAT24((short)(uVar35 >> 0x20) * (short)(uVar36 >> 0x20)
                                                   ,CONCAT22((short)uVar6 * (short)(uVar36 >> 0x10),
                                                             (ushort)(byte)uVar20 * (short)uVar36)))
                                );
                uVar18 = (ushort)uVar21 >> 8;
                uVar22 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
                uVar25 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
                uVar28 = (ushort)((ulonglong)uVar21 >> 0x38);
                uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                  (char)((ulonglong)uVar21 >> 0x38) - (0xff < uVar28),
                                  CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                           (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar25),
                                           CONCAT11((uVar22 != 0) * (uVar22 < 0x100) *
                                                    (char)((ulonglong)uVar21 >> 0x18) -
                                                    (0xff < uVar22),
                                                    (uVar18 != 0) * (uVar18 < 0x100) *
                                                    (char)((ulonglong)uVar21 >> 8) - (0xff < uVar18)
                                                   )));
              }
              else {
                uVar21 = psllw(CONCAT62(uVar6,(ushort)(byte)uVar20),8);
                uVar21 = paddusw(CONCAT26(uVar25 * sVar34,
                                          CONCAT24(sVar37 * sVar33,
                                                   CONCAT22(uVar28 * sVar41,uVar22 * (short)uVar43))
                                         ),uVar21);
                uVar18 = (ushort)uVar21 >> 8;
                uVar22 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
                uVar25 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
                uVar28 = (ushort)((ulonglong)uVar21 >> 0x38);
                uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                  (char)((ulonglong)uVar21 >> 0x38) - (0xff < uVar28),
                                  CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                           (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar25),
                                           CONCAT11((uVar22 != 0) * (uVar22 < 0x100) *
                                                    (char)((ulonglong)uVar21 >> 0x18) -
                                                    (0xff < uVar22),
                                                    (uVar18 != 0) * (uVar18 < 0x100) *
                                                    (char)((ulonglong)uVar21 >> 8) - (0xff < uVar18)
                                                   )));
              }
              *(uint *)(uVar17 + (int)g_INT_PTR_006239c8) = uVar20;
              if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
                *(int *)(uVar17 + (int)g_INT_PTR_006239cc) = iVar15;
              }
            }
          }
          uVar17 = uVar17 + 4;
          if ((uint)g_INT_00623964 <= uVar17) break;
          uVar9 = uVar9 + g_INT_00623dd0;
          sVar37 = (ushort)uVar38 + sVar42;
          sVar39 = uVar47 + sVar44;
          sVar40 = uVar48 + sVar45;
          sVar41 = uVar49 + sVar46;
          uVar7 = uVar7 + g_INT_00623dd4;
          iVar15 = iVar15 + g_INT_00623dd8;
          iVar8 = iVar8 + g_INT_00623e98;
          uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x30) < sVar41),
                            CONCAT24(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x20) <
                                              sVar40),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x10
                                                               ) < sVar39),
                                              -(ushort)(SUB82(g_DOUBLE_00623ddc,0) < sVar37)))) &
                   CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar37)));
        }
        return;
      }
      while( true ) {
        uVar47 = (ushort)(uVar38 >> 0x10);
        uVar48 = (ushort)(uVar38 >> 0x20);
        uVar49 = (ushort)(uVar38 >> 0x30);
        if ((((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
            (*(int *)(uVar17 + (int)g_INT_PTR_006239cc) <= iVar15)) &&
           (uVar11 = g_UINT_ARRAY_01c4e3d4
                     [g_UCHAR_PTR_01c50930
                      [(uVar9 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                       (uVar7 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]], uVar11 != 0)) {
          uVar43 = 0;
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x20) != 0) {
            uVar20 = *(uint *)(uVar17 + (int)g_INT_PTR_006239c8);
            uVar43 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar20 >> 0x10),uVar20)) >>
                                                  0x20),uVar20) >> 0x18),(char)((uint)uVar20 >> 8)),
                              (ushort)(byte)uVar20) & 0xffffffff00ffffff;
          }
          uVar21 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar11 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar11 >> 0x10),uVar11)) >> 0x20),
                                                  uVar11) >> 0x18),(char)(uVar11 >> 8)),
                                  (ushort)(byte)uVar11) & 0xffffffff00ffffff,4);
          uVar21 = pmulhw(uVar21,CONCAT26(uVar49 >> 3,
                                          CONCAT24(uVar48 >> 3,
                                                   CONCAT22(uVar47 >> 3,(ushort)uVar38 >> 3))));
          uVar36 = g_QWORD_ARRAY_006247d0[iVar8 >> 8];
          sVar37 = (short)uVar21;
          sVar39 = (short)((ulonglong)uVar21 >> 0x10);
          sVar40 = (short)((ulonglong)uVar21 >> 0x20);
          sVar41 = (short)((ulonglong)uVar21 >> 0x30);
          uVar35 = uVar36 ^ g_QWORD_ARRAY_006247d0[0xff];
          uVar22 = (ushort)(((uint7)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar21 >> 0x30) - (0xff < sVar41)) <<
                            0x30) >> 0x28);
          uVar18 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 - (0xff < sVar37));
          sVar41 = (short)(uVar36 >> 0x10);
          sVar33 = (short)(uVar36 >> 0x20);
          sVar34 = (short)(uVar36 >> 0x30);
          uVar25 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) *
                                  (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar39));
          sVar37 = (short)CONCAT21(uVar22,(0 < sVar40) * (sVar40 < 0x100) *
                                          (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar40));
          uVar22 = uVar22 >> 8;
          if (g_INT_01c51d0c == 0) {
            uVar21 = paddusw(CONCAT26(uVar22 * sVar34,
                                      CONCAT24(sVar37 * sVar33,
                                               CONCAT22(uVar25 * sVar41,uVar18 * (short)uVar36))),
                             CONCAT26((short)(uVar43 >> 0x30) * (short)(uVar35 >> 0x30),
                                      CONCAT24((short)(uVar43 >> 0x20) * (short)(uVar35 >> 0x20),
                                               CONCAT22((short)(uVar43 >> 0x10) *
                                                        (short)(uVar35 >> 0x10),
                                                        (short)uVar43 * (short)uVar35))));
            uVar18 = (ushort)uVar21 >> 8;
            uVar22 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar21 >> 0x38);
            uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar21 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar22 != 0) * (uVar22 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 0x18) - (0xff < uVar22),
                                                (uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 8) - (0xff < uVar18))));
          }
          else {
            uVar21 = psllw(uVar43,8);
            uVar21 = paddusw(CONCAT26(uVar22 * sVar34,
                                      CONCAT24(sVar37 * sVar33,
                                               CONCAT22(uVar25 * sVar41,uVar18 * (short)uVar36))),
                             uVar21);
            uVar18 = (ushort)uVar21 >> 8;
            uVar22 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
            uVar25 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
            uVar28 = (ushort)((ulonglong)uVar21 >> 0x38);
            uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)((ulonglong)uVar21 >> 0x38) -
                              (0xff < uVar28),
                              CONCAT12((uVar25 != 0) * (uVar25 < 0x100) *
                                       (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar25),
                                       CONCAT11((uVar22 != 0) * (uVar22 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 0x18) - (0xff < uVar22),
                                                (uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 8) - (0xff < uVar18))));
          }
          *(uint *)(uVar17 + (int)g_INT_PTR_006239c8) = uVar20;
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
            *(int *)(uVar17 + (int)g_INT_PTR_006239cc) = iVar15;
          }
        }
        uVar17 = uVar17 + 4;
        if ((uint)g_INT_00623964 <= uVar17) break;
        uVar9 = uVar9 + g_INT_00623dd0;
        sVar37 = (ushort)uVar38 + sVar42;
        sVar39 = uVar47 + sVar44;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar49 + sVar46;
        uVar7 = uVar7 + g_INT_00623dd4;
        iVar15 = iVar15 + g_INT_00623dd8;
        iVar8 = iVar8 + g_INT_00623e98;
        uVar38 = CONCAT26(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x30) < sVar41),
                          CONCAT24(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x20) < sVar40)
                                   ,CONCAT22(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x10)
                                                      < sVar39),
                                             -(ushort)(SUB82(g_DOUBLE_00623ddc,0) < sVar37)))) &
                 CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar39,sVar37)));
      }
    }
  }
  return;
}
