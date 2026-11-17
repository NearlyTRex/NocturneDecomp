// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3
// Address: 0057e5e3
// Address Range: [[0057e5e3, 0057ee3e] [0057ee45, 0057eeab]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  ulonglong uVar1;
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
  short sVar34;
  short sVar35;
  ulonglong uVar33;
  ulonglong uVar36;
  uint7 uVar37;
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
    g_INT_PTR_006239c8 = (int *)(g_ARRAY_PTR_01c4354c[scanline_y] + uVar9 * 2);
    g_INT_00623964 = iVar11 * 4;
    puVar18 = g_UINT_PTR_ARRAY_01c4480c[scanline_y] + uVar9;
    g_INT_PTR_006239cc = (int *)puVar18;
    if (g_BIT_INTEGER32_01c51d14.dword == 0x80) {
      uVar19 = (pSVar16->base).depth_current;
      iVar17 = (int)((ulonglong)
                     ((longlong)(int)((left_vertex->base).depth_current - uVar19) *
                     (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
      iVar11 = g_INT_00623964;
      g_INT_006239ac = uVar19;
      g_INT_00623dd8 = iVar17;
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
    if (g_INT_01c51d18 == 5) {
      uVar19 = (pSVar16->base).u_current;
      g_INT_006239a0 =
           (int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)(pSVar16->base).depth_current);
      uVar19 = (left_vertex->base).u_current;
      g_INT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006239a0) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
      uVar19 = (pSVar16->base).v_current;
      g_INT_006239a4 =
           (int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                (longlong)(pSVar16->base).depth_current);
      uVar19 = (left_vertex->base).v_current;
      g_INT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)
                  ((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                        (longlong)(left_vertex->base).depth_current) - g_INT_006239a4) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
    }
    else {
      g_INT_006239a0 = (pSVar16->base).u_current;
      g_INT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).u_current - g_INT_006239a0) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
      g_INT_006239a4 = (pSVar16->base).v_current;
      g_INT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).v_current - g_INT_006239a4) *
                 (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
    }
    iVar17 = (pSVar16->base).depth_current;
    g_INT_00623dd8 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).depth_current - iVar17) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
    g_INT_00623e90 = (pSVar16->base).alpha_current;
    g_INT_00623e98 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - g_INT_00623e90) *
               (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
    if ((g_BIT_INTEGER32_01c51d14.dword & 0x200) == 0) {
      if ((g_BIT_INTEGER32_01c51d14.dword & 4) == 0) {
        if ((g_BIT_INTEGER32_01c51d14.dword & 0x10) == 0) {
          uVar40 = psllw(g_QWORD_ARRAY_006247d0[0xff],7);
          uVar45 = 0;
        }
        else {
          uVar19 = g_INT_01c4f024 - 0x100U >> 4;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          uVar40 = psllw(g_QWORD_ARRAY_006247d0[uVar19],7);
          uVar45 = 0;
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
                        (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
        g_QWORD_00623e50._0_4_ = uVar9 & 0xffff;
        g_QWORD_00623e70._0_4_ = uVar19 & 0xffff;
        uVar40 = ((CONCAT44(g_QWORD_00623e50._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e50._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e50._4_4_,uVar9) & 0xffffffff0000ffff;
        uVar45 = ((CONCAT44(g_QWORD_00623e70._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e70._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(g_QWORD_00623e70._4_4_,uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar10 = (uint)(pSVar16->base).red_current >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar10) *
                      (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
      g_QWORD_00623e50._0_4_ = uVar10 & 0xffff;
      g_QWORD_00623e70._0_4_ = uVar19 & 0xffff;
      uVar15 = (uint)pSVar16->green_current >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar15) *
                      (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
      g_MMX_INTEGER_00623e58.u32[0] = uVar15 & 0xffff;
      g_MMX_INTEGER_00623e78.u32[0] = uVar12 & 0xffff;
      uVar14 = (uint)pSVar16->blue_current >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar14) *
                     (longlong)(int)g_UINT_ARRAY_01c4f030[iVar11 + 1]) >> 0x20);
      g_MMX_INTEGER_00623e60.u32[0] = uVar14 & 0xffff;
      g_MMX_INTEGER_00623e80.u32[0] = uVar9 & 0xffff;
      uVar40 = ((CONCAT44(g_QWORD_00623e50._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e58.u32[1],uVar15) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e60.u32[1],uVar14) & 0xffffffff0000ffff;
      uVar45 = ((CONCAT44(g_QWORD_00623e70._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e78.u32[1],uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(g_MMX_INTEGER_00623e80.u32[1],uVar9) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar44 = (short)uVar45;
    sVar46 = (short)(uVar45 >> 0x10);
    sVar47 = (short)(uVar45 >> 0x20);
    sVar48 = (short)(uVar45 >> 0x30);
    g_INT_006239ac = iVar17;
    if ((g_UCHAR_PTR_01c50934 == (uchar *)0x0) && ((g_BIT_INTEGER32_01c51d14.dword & 2) == 0)) {
      uVar1 = (ulonglong)_g_ULONG_01c51d1c >> 0x10;
      uVar39 = (ushort)(((uint7)(byte)((ulonglong)_g_ULONG_01c51d1c >> 0x18) << 0x30) >> 0x28);
      uVar45 = (ulonglong)_g_ULONG_01c51d1c >> 8;
      bVar32 = (byte)_g_ULONG_01c51d1c;
      uVar12 = g_INT_006239a0;
      uVar9 = g_INT_006239a4;
      iVar11 = g_INT_00623e90;
      if ((g_BIT_INTEGER32_01c51d14.dword & 8) == 0) {
        iVar11 = 0;
        g_INT_00623e98 = 0;
      }
      while( true ) {
        uVar49 = (ushort)(uVar40 >> 0x10);
        uVar50 = (ushort)(uVar40 >> 0x20);
        uVar20 = (ushort)(uVar40 >> 0x30);
        if (((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
           (*(int *)(uVar19 + (int)g_INT_PTR_006239cc) <= iVar17)) {
          if ((g_BIT_INTEGER32_01c51d14.dword & 1) == 0) {
            uVar10 = g_INT_00623fc8;
            if ((g_BIT_INTEGER32_01c51d14.dword & 0x200) == 0) {
              uVar10 = g_INT_01c4f020;
            }
          }
          else {
            uVar10 = g_UINT_ARRAY_01c4e3d4
                     [g_UCHAR_PTR_01c50930
                      [(uVar12 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                       (uVar9 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]];
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  (char)(uVar10 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)(uVar10 >> 8),(short)uVar10)) >>
                                        0x10),(short)uVar10) & 0xffffffff00ff00ff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar20 >> 3,
                                          CONCAT24(uVar50 >> 3,
                                                   CONCAT22(uVar49 >> 3,(ushort)uVar40 >> 3))));
          sVar38 = (short)uVar22;
          bVar3 = (0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 - (0xff < sVar38);
          sVar38 = (short)((ulonglong)uVar22 >> 0x10);
          cVar4 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x10) -
                  (0xff < sVar38);
          uVar21 = CONCAT11(cVar4,bVar3);
          sVar38 = (short)((ulonglong)uVar22 >> 0x20);
          cVar5 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x20) -
                  (0xff < sVar38);
          sVar38 = (short)((ulonglong)uVar22 >> 0x30);
          cVar6 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                  (0xff < sVar38);
          uVar10 = CONCAT13(cVar6,CONCAT12(cVar5,uVar21));
          uVar36 = (ulonglong)(uint6)uVar10;
          if ((g_BIT_INTEGER32_01c51d14.dword & 8) != 0) {
            uVar36 = g_QWORD_ARRAY_006247d0[iVar11 >> 8];
            uVar33 = uVar36 ^ g_QWORD_ARRAY_006247d0[0xff];
            uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar6,(uint6)uVar10) >> 0x28),
                                                     CONCAT14(cVar5,uVar10)) >> 0x20),uVar10) >>
                           0x18);
            uVar24 = (uint5)uVar10 & 0xffff00ff00;
            uVar23 = (ushort)bVar3 * (short)uVar33 + (ushort)bVar32 * (short)uVar36;
            uVar28 = ((ushort)(CONCAT43(uVar10,CONCAT12(cVar4,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar33 >> 0x10) + (ushort)(byte)uVar45 * (short)(uVar36 >> 0x10);
            uVar26 = (short)(uVar24 >> 8) * (short)(uVar33 >> 0x20) +
                     (short)CONCAT21(uVar39,(char)uVar1) * (short)(uVar36 >> 0x20);
            uVar30 = (short)(uVar24 >> 0x18) * (short)(uVar33 >> 0x30) +
                     (uVar39 >> 8) * (short)(uVar36 >> 0x30);
            uVar25 = uVar23 >> 8;
            uVar29 = uVar28 >> 8;
            uVar27 = uVar26 >> 8;
            uVar31 = uVar30 >> 8;
            uVar36 = (ulonglong)
                     CONCAT13((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                              (0xff < uVar31),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) * (char)(uVar26 >> 8) -
                                       (0xff < uVar27),
                                       CONCAT11((uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)(uVar28 >> 8) - (0xff < uVar29),
                                                (uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)(uVar23 >> 8) - (0xff < uVar25))));
          }
          *(ushort *)((uVar19 >> 1) + (int)g_INT_PTR_006239c8) =
               (ushort)((uVar36 & g_QWORD_00623f78) >> g_QWORD_00623fc0) |
               (ushort)((uVar36 & g_QWORD_00623f58) >> g_QWORD_00623fa0) |
               (ushort)((uVar36 & g_QWORD_00623f38) >> g_QWORD_00623f80);
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
            *(int *)((int)g_INT_PTR_006239cc + uVar19) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_INT_00623964 <= uVar19) break;
        uVar12 = uVar12 + g_INT_00623dd0;
        sVar38 = (ushort)uVar40 + sVar44;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar50 + sVar47;
        sVar43 = uVar20 + sVar48;
        uVar9 = uVar9 + g_INT_00623dd4;
        iVar17 = iVar17 + g_INT_00623dd8;
        iVar11 = iVar11 + g_INT_00623e98;
        uVar40 = CONCAT26(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x30) < sVar43),
                          CONCAT24(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x20) < sVar42)
                                   ,CONCAT22(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x10)
                                                      < sVar41),
                                             -(ushort)(SUB82(g_DOUBLE_00623ddc,0) < sVar38)))) &
                 CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar38)));
      }
    }
    else {
      iVar11 = g_INT_00623e90;
      if ((g_BIT_INTEGER32_01c51d14.dword & 0x100) == 0) {
        iVar11 = g_INT_0061b4b8 << 8;
        g_INT_00623e98 = 0;
      }
      uVar12 = g_INT_006239a0;
      uVar9 = g_INT_006239a4;
      if (g_UCHAR_PTR_01c50934 != (uchar *)0x0) {
        while( true ) {
          uVar39 = (ushort)uVar40;
          uVar49 = (ushort)(uVar40 >> 0x10);
          uVar50 = (ushort)(uVar40 >> 0x20);
          uVar20 = (ushort)(uVar40 >> 0x30);
          if (((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
             (*(int *)(uVar19 + (int)g_INT_PTR_006239cc) <= iVar17)) {
            uVar10 = g_UINT_ARRAY_01c4e3d4
                     [g_UCHAR_PTR_01c50930
                      [(uVar12 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                       (uVar9 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]];
            uVar40 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar10 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                              (ushort)(byte)uVar10) & 0xffffffff00ffffff;
            uVar10 = (uint)g_UCHAR_PTR_01c50934
                           [(int)(g_UCHAR_PTR_01c50930 +
                                 (uVar12 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                                 (uVar9 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)) -
                            (int)g_UCHAR_PTR_01c50930];
            if (uVar10 != 0) {
              if ((((iVar11 < 0xff01) || (uVar10 < 0xff)) || (iVar11 < 0xff)) ||
                 (g_INT_01c51d0c != 0)) {
                uVar15 = (uint)*(ushort *)((uVar19 >> 1) + (int)g_INT_PTR_006239c8);
                uVar37 = (uint7)((uVar15 & g_MMX_INTEGER_00623f30.mm) << g_QWORD_00623fc0) |
                         (uint7)((uVar15 & g_MMX_INTEGER_00623f28.mm) << g_QWORD_00623fa0) |
                         (uint7)((uVar15 & g_MMX_INTEGER_00623f20.mm) << g_QWORD_00623f80);
                uVar23 = (ushort)(((uVar37 >> 0x18) << 0x30) >> 0x28);
                uVar7 = CONCAT21(uVar23,(char)(uVar37 >> 0x10));
                uVar8 = CONCAT41((int)(((uint7)uVar7 << 0x20) >> 0x18),(char)(uVar37 >> 8));
                uVar22 = psllw(uVar40,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar50 >> 3,
                                                         CONCAT22(uVar49 >> 3,uVar39 >> 3))));
                uVar40 = g_QWORD_ARRAY_006247d0[uVar10 * iVar11 >> 0x10];
                sVar38 = (short)uVar22;
                sVar41 = (short)((ulonglong)uVar22 >> 0x10);
                sVar42 = (short)((ulonglong)uVar22 >> 0x20);
                sVar43 = (short)((ulonglong)uVar22 >> 0x30);
                uVar45 = uVar40 ^ g_QWORD_ARRAY_006247d0[0xff];
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
                if (g_INT_01c51d0c == 0) {
                  uVar22 = paddusw(CONCAT26(uVar28 * sVar35,
                                            CONCAT24(sVar38 * sVar34,
                                                     CONCAT22(uVar29 * sVar43,uVar25 * (short)uVar40
                                                             ))),
                                   CONCAT26((uVar23 >> 8) * (short)(uVar45 >> 0x30),
                                            CONCAT24((short)uVar7 * (short)(uVar45 >> 0x20),
                                                     CONCAT22((short)uVar8 * (short)(uVar45 >> 0x10)
                                                              ,(ushort)(byte)uVar37 * (short)uVar45)
                                                    )));
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar40 = (ulonglong)
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
                  uVar22 = psllw((ulonglong)CONCAT52(uVar8,(ushort)(byte)uVar37),8);
                  uVar22 = paddusw(CONCAT26(uVar28 * sVar35,
                                            CONCAT24(sVar38 * sVar34,
                                                     CONCAT22(uVar29 * sVar43,uVar25 * (short)uVar40
                                                             ))),uVar22);
                  uVar23 = (ushort)uVar22 >> 8;
                  uVar25 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                  uVar40 = (ulonglong)
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
                uVar22 = psllw(uVar40,4);
                uVar22 = pmulhw(uVar22,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar50 >> 3,
                                                         CONCAT22(uVar49 >> 3,uVar39 >> 3))));
                sVar38 = (short)uVar22;
                sVar41 = (short)((ulonglong)uVar22 >> 0x10);
                sVar42 = (short)((ulonglong)uVar22 >> 0x20);
                sVar43 = (short)((ulonglong)uVar22 >> 0x30);
                uVar40 = (ulonglong)
                         CONCAT13((0 < sVar43) * (sVar43 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar43),
                                  CONCAT12((0 < sVar42) * (sVar42 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar42),
                                           CONCAT11((0 < sVar41) * (sVar41 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 0x10) -
                                                    (0xff < sVar41),
                                                    (0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 -
                                                    (0xff < sVar38))));
              }
              *(ushort *)((uVar19 >> 1) + (int)g_INT_PTR_006239c8) =
                   (ushort)((uVar40 & g_QWORD_00623f78) >> g_QWORD_00623fc0) |
                   (ushort)((uVar40 & g_QWORD_00623f58) >> g_QWORD_00623fa0) |
                   (ushort)((uVar40 & g_QWORD_00623f38) >> g_QWORD_00623f80);
              if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
                *(int *)(uVar19 + (int)g_INT_PTR_006239cc) = iVar17;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if ((uint)g_INT_00623964 <= uVar19) break;
          uVar12 = uVar12 + g_INT_00623dd0;
          uVar9 = uVar9 + g_INT_00623dd4;
          iVar17 = iVar17 + g_INT_00623dd8;
          iVar11 = iVar11 + g_INT_00623e98;
          uVar40 = CONCAT26(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x30) <
                                     (short)(uVar20 + sVar48)),
                            CONCAT24(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x20) <
                                              (short)(uVar50 + sVar47)),
                                     CONCAT22(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x10
                                                               ) < (short)(uVar49 + sVar46)),
                                              -(ushort)(SUB82(g_DOUBLE_00623ddc,0) <
                                                       (short)(uVar39 + sVar44))))) &
                   CONCAT26(uVar20 + sVar48,
                            CONCAT24(uVar50 + sVar47,CONCAT22(uVar49 + sVar46,uVar39 + sVar44)));
        }
        return;
      }
      while( true ) {
        uVar39 = (ushort)(uVar40 >> 0x10);
        uVar49 = (ushort)(uVar40 >> 0x20);
        uVar50 = (ushort)(uVar40 >> 0x30);
        if ((((g_BIT_INTEGER32_01c51d14.dword & 0x40) == 0) ||
            (*(int *)(uVar19 + (int)g_INT_PTR_006239cc) <= iVar17)) &&
           (uVar10 = g_UINT_ARRAY_01c4e3d4
                     [g_UCHAR_PTR_01c50930
                      [(uVar12 >> g_QWORD_00623eb8 & (uint)g_QWORD_00623ef8) +
                       (uVar9 >> g_QWORD_00623ed8 & (uint)g_QWORD_00623f18)]], uVar10 != 0)) {
          uVar45 = 0;
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x20) != 0) {
            uVar15 = (uint)*(ushort *)((uVar19 >> 1) + (int)g_INT_PTR_006239c8);
            uVar37 = (uint7)((uVar15 & g_MMX_INTEGER_00623f30.mm) << g_QWORD_00623fc0) |
                     (uint7)((uVar15 & g_MMX_INTEGER_00623f28.mm) << g_QWORD_00623fa0) |
                     (uint7)((uVar15 & g_MMX_INTEGER_00623f20.mm) << g_QWORD_00623f80);
            uVar45 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar37 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar37 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar37 >> 8)),
                              (ushort)(byte)uVar37);
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar10 >> 0x10),uVar10)) >> 0x20),
                                                  uVar10) >> 0x18),(char)(uVar10 >> 8)),
                                  (ushort)(byte)uVar10) & 0xffffffff00ffffff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar50 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar39 >> 3,(ushort)uVar40 >> 3))));
          uVar1 = g_QWORD_ARRAY_006247d0[iVar11 >> 8];
          sVar38 = (short)uVar22;
          sVar41 = (short)((ulonglong)uVar22 >> 0x10);
          sVar42 = (short)((ulonglong)uVar22 >> 0x20);
          sVar43 = (short)((ulonglong)uVar22 >> 0x30);
          uVar36 = uVar1 ^ g_QWORD_ARRAY_006247d0[0xff];
          uVar23 = (ushort)(((uint7)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar43)) <<
                            0x30) >> 0x28);
          uVar20 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 - (0xff < sVar38));
          sVar43 = (short)(uVar1 >> 0x10);
          sVar34 = (short)(uVar1 >> 0x20);
          sVar35 = (short)(uVar1 >> 0x30);
          uVar25 = (ushort)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar41));
          sVar38 = (short)CONCAT21(uVar23,(0 < sVar42) * (sVar42 < 0x100) *
                                          (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar42));
          uVar23 = uVar23 >> 8;
          if (g_INT_01c51d0c == 0) {
            uVar22 = paddusw(CONCAT26(uVar23 * sVar35,
                                      CONCAT24(sVar38 * sVar34,
                                               CONCAT22(uVar25 * sVar43,uVar20 * (short)uVar1))),
                             CONCAT26((short)(uVar45 >> 0x30) * (short)(uVar36 >> 0x30),
                                      CONCAT24((short)(uVar45 >> 0x20) * (short)(uVar36 >> 0x20),
                                               CONCAT22((short)(uVar45 >> 0x10) *
                                                        (short)(uVar36 >> 0x10),
                                                        (short)uVar45 * (short)uVar36))));
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
            uVar22 = psllw(uVar45,8);
            uVar22 = paddusw(CONCAT26(uVar23 * sVar35,
                                      CONCAT24(sVar38 * sVar34,
                                               CONCAT22(uVar25 * sVar43,uVar20 * (short)uVar1))),
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
          uVar45 = (ulonglong)uVar10;
          *(ushort *)((uVar19 >> 1) + (int)g_INT_PTR_006239c8) =
               (ushort)((uVar45 & g_QWORD_00623f78) >> g_QWORD_00623fc0) |
               (ushort)((uVar45 & g_QWORD_00623f58) >> g_QWORD_00623fa0) |
               (ushort)((uVar45 & g_QWORD_00623f38) >> g_QWORD_00623f80);
          if ((g_BIT_INTEGER32_01c51d14.dword & 0x80) != 0) {
            *(int *)(uVar19 + (int)g_INT_PTR_006239cc) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if ((uint)g_INT_00623964 <= uVar19) break;
        uVar12 = uVar12 + g_INT_00623dd0;
        sVar38 = (ushort)uVar40 + sVar44;
        sVar41 = uVar39 + sVar46;
        sVar42 = uVar49 + sVar47;
        sVar43 = uVar50 + sVar48;
        uVar9 = uVar9 + g_INT_00623dd4;
        iVar17 = iVar17 + g_INT_00623dd8;
        iVar11 = iVar11 + g_INT_00623e98;
        uVar40 = CONCAT26(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x30) < sVar43),
                          CONCAT24(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x20) < sVar42)
                                   ,CONCAT22(-(ushort)((short)((ulonglong)g_DOUBLE_00623ddc >> 0x10)
                                                      < sVar41),
                                             -(ushort)(SUB82(g_DOUBLE_00623ddc,0) < sVar38)))) &
                 CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar38)));
      }
    }
  }
  return;
}
