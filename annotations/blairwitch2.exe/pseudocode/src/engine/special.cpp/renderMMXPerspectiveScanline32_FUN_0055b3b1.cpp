// Name: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1
// Address: 0055b3b1
// Address Range: [[0055b3b1, 0055b531] [0055b540, 0055b5fc] [0055b600, 0055b68b] [0055b690, 0055b6b9] [0055b6c0, 0055b7e4] [0055b7f0, 0055b859] [0055b860, 0055b865] [0055b870, 0055b939] [0055b970, 0055b9d9] [0055b9e0, 0055bb18] [0055bb26, 0055bb3d] [0055bb40, 0055bb4b] [0055bb50, 0055bb92]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined6 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  SSoftwareEdge *pSVar17;
  int *piVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar24;
  uint uVar22;
  ushort uVar25;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ulonglong uVar23;
  ushort uVar30;
  uint5 uVar26;
  ushort uVar31;
  ushort uVar32;
  byte bVar33;
  short sVar35;
  short sVar36;
  ulonglong uVar34;
  ulonglong uVar37;
  ulonglong uVar38;
  short sVar39;
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
  ushort uVar51;
  char cVar5;
  char cVar6;
  byte bVar7;
  
  uVar19 = (right_vertex->base).x_current;
  uVar12 = (left_vertex->base).x_current;
  uVar9 = uVar19;
  pSVar17 = right_vertex;
  if (uVar12 < uVar19) {
    uVar9 = uVar12;
    uVar12 = uVar19;
    pSVar17 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar9 = uVar9 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar9;
  if (iVar11 != 0 && uVar9 <= uVar12 >> 0x10) {
    DAT_0061c378 = *(int *)(&DAT_01c2a38c + scanline_y * 4) + uVar9 * 4;
    DAT_0061c314 = iVar11 * 4;
    piVar18 = (int *)(*(int *)(&DAT_01c2b64c + scanline_y * 4) + uVar9 * 4);
    DAT_0061c37c = piVar18;
    if (_DAT_01c38b54 == 0x80) {
      iVar11 = (pSVar17->base).depth_current;
      iVar16 = (int)((ulonglong)
                     ((longlong)((left_vertex->base).depth_current - iVar11) *
                     (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar19 = DAT_0061c314;
      DAT_0061c35c = iVar11;
      DAT_0061c788 = iVar16;
      do {
        *piVar18 = iVar11;
        iVar11 = iVar11 + iVar16;
        piVar18 = piVar18 + 1;
        uVar12 = uVar19 - 4;
        bVar3 = 3 < (int)uVar19;
        uVar19 = uVar12;
      } while (uVar12 != 0 && bVar3);
      return;
    }
    if (_DAT_01c38b58 == 5) {
      uVar19 = (pSVar17->base).u_current;
      DAT_0061c350 = (uint)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                           (longlong)(pSVar17->base).depth_current);
      uVar19 = (left_vertex->base).u_current;
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar19 = (pSVar17->base).v_current;
      DAT_0061c354 = (uint)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                           (longlong)(pSVar17->base).depth_current);
      uVar19 = (left_vertex->base).v_current;
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    else {
      DAT_0061c350 = (pSVar17->base).u_current;
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c354 = (pSVar17->base).v_current;
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    iVar11 = (pSVar17->base).depth_current;
    DAT_0061c788 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar11) *
                         (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    DAT_0061c840 = (pSVar17->base).alpha_current;
    _DAT_0061c848 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - DAT_0061c840) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    if ((_DAT_01c38b54 & 0x200) == 0) {
      if ((_DAT_01c38b54 & 4) == 0) {
        if ((_DAT_01c38b54 & 0x10) == 0) {
          uVar40 = psllw(0x000000FF00FF00FF,7);
          uVar45 = 0;
        }
        else {
          uVar19 = _DAT_01c35e64 - 0x100U >> 4;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          uVar40 = psllw((&DAT_0061d180)[uVar19],7);
          uVar45 = 0;
        }
      }
      else {
        uVar19 = (left_vertex->base).red_current - 0x100;
        uVar12 = (pSVar17->base).red_current - 0x100;
        if (0xfff < uVar19) {
          uVar19 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar9 = uVar12 * 8;
        uVar19 = (uint)((ulonglong)
                        ((longlong)(int)(uVar19 * 8 + uVar12 * -8) *
                        (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
        DAT_0061c800._0_4_ = uVar9 & 0xffff;
        DAT_0061c820._0_4_ = uVar19 & 0xffff;
        uVar40 = ((CONCAT44(DAT_0061c800._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c800._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c800._4_4_,uVar9) & 0xffffffff0000ffff;
        uVar45 = ((CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar10 = (uint)(pSVar17->base).red_current >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar10) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c800._0_4_ = uVar10 & 0xffff;
      DAT_0061c820._0_4_ = uVar19 & 0xffff;
      uVar13 = (uint)pSVar17->green_current >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar13) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      _DAT_0061c808 = uVar13 & 0xffff;
      _DAT_0061c828 = uVar12 & 0xffff;
      uVar14 = (uint)pSVar17->blue_current >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar14) *
                     (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      _DAT_0061c810 = uVar14 & 0xffff;
      _DAT_0061c830 = uVar9 & 0xffff;
      uVar40 = ((CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c80c,uVar13) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c814,uVar14) & 0xffffffff0000ffff;
      uVar45 = ((CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c82c,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c834,uVar9) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar44 = (short)uVar45;
    sVar46 = (short)(uVar45 >> 0x10);
    sVar47 = (short)(uVar45 >> 0x20);
    sVar48 = (short)(uVar45 >> 0x30);
    DAT_0061c35c = iVar11;
    if ((_DAT_01c37774 == 0) && ((_DAT_01c38b54 & 2) == 0)) {
      uVar38 = (ulonglong)_DAT_01c38b5c >> 0x10;
      uVar49 = (ushort)(((uint7)(byte)((ulonglong)_DAT_01c38b5c >> 0x18) << 0x30) >> 0x28);
      uVar45 = (ulonglong)_DAT_01c38b5c >> 8;
      bVar33 = (byte)_DAT_01c38b5c;
      uVar12 = DAT_0061c350;
      uVar9 = DAT_0061c354;
      iVar16 = DAT_0061c840;
      if ((_DAT_01c38b54 & 8) == 0) {
        iVar16 = 0;
        _DAT_0061c848 = 0;
      }
      while( true ) {
        uVar50 = (ushort)(uVar40 >> 0x10);
        uVar51 = (ushort)(uVar40 >> 0x20);
        uVar20 = (ushort)(uVar40 >> 0x30);
        if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_0061c37c) <= iVar11)) {
          if ((_DAT_01c38b54 & 1) == 0) {
            uVar22 = 0x00FFFFFF;
            if ((_DAT_01c38b54 & 0x200) == 0) {
              uVar22 = _DAT_01c35e60;
            }
          }
          else {
            uVar22 = *(uint *)
                      (&DAT_01c35214 +
                      (uint)*(byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                                      (uVar9 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + _DAT_01c37770
                                     ) * 4);
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar22 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar22 >> 8),(short)uVar22))
                                        >> 0x10),(short)uVar22) & 0xffffffff00ff00ff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                          CONCAT24(uVar51 >> 3,
                                                   CONCAT22(uVar50 >> 3,(ushort)uVar40 >> 3))));
          sVar39 = (short)uVar23;
          bVar4 = (0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 - (0xff < sVar39);
          sVar39 = (short)((ulonglong)uVar23 >> 0x10);
          cVar5 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x10) -
                  (0xff < sVar39);
          uVar21 = CONCAT11(cVar5,bVar4);
          sVar39 = (short)((ulonglong)uVar23 >> 0x20);
          cVar6 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                  (0xff < sVar39);
          sVar39 = (short)((ulonglong)uVar23 >> 0x30);
          bVar7 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar39);
          uVar22 = CONCAT13(bVar7,CONCAT12(cVar6,uVar21));
          if ((_DAT_01c38b54 & 8) != 0) {
            uVar37 = (&DAT_0061d180)[iVar16 >> 8];
            uVar34 = uVar37 ^ 0x000000FF00FF00FF;
            uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar7 << 0x30) >> 0x28),
                                                     CONCAT14(cVar6,uVar22)) >> 0x20),uVar22) >>
                           0x18);
            uVar26 = (uint5)uVar10 & 0xffffffff00;
            uVar24 = (ushort)bVar4 * (short)uVar34 + (ushort)bVar33 * (short)uVar37;
            uVar30 = ((ushort)(CONCAT43(uVar10,CONCAT12(cVar5,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar34 >> 0x10) + (ushort)(byte)uVar45 * (short)(uVar37 >> 0x10);
            uVar28 = (short)(uVar26 >> 8) * (short)(uVar34 >> 0x20) +
                     (short)CONCAT21(uVar49,(char)uVar38) * (short)(uVar37 >> 0x20);
            uVar31 = (short)(uVar26 >> 0x18) * (short)(uVar34 >> 0x30) +
                     (uVar49 >> 8) * (short)(uVar37 >> 0x30);
            uVar27 = uVar24 >> 8;
            uVar25 = uVar30 >> 8;
            uVar29 = uVar28 >> 8;
            uVar32 = uVar31 >> 8;
            uVar22 = CONCAT13((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                              (0xff < uVar32),
                              CONCAT12((uVar29 != 0) * (uVar29 < 0x100) * (char)(uVar28 >> 8) -
                                       (0xff < uVar29),
                                       CONCAT11((uVar25 != 0) * (uVar25 < 0x100) *
                                                (char)(uVar30 >> 8) - (0xff < uVar25),
                                                (uVar27 != 0) * (uVar27 < 0x100) *
                                                (char)(uVar24 >> 8) - (0xff < uVar27))));
          }
          *(uint *)(DAT_0061c378 + uVar19) = uVar22;
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)((int)DAT_0061c37c + uVar19) = iVar11;
          }
        }
        uVar19 = uVar19 + 4;
        if (DAT_0061c314 <= uVar19) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar39 = (ushort)uVar40 + sVar44;
        sVar41 = uVar50 + sVar46;
        sVar42 = uVar51 + sVar47;
        sVar43 = uVar20 + sVar48;
        uVar9 = uVar9 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar16 = iVar16 + _DAT_0061c848;
        uVar40 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar43),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar42),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar41),-(ushort)((short)DAT_0061c78c < sVar39)
                                           ))) &
                 CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar39)));
      }
    }
    else {
      iVar16 = DAT_0061c840;
      if ((_DAT_01c38b54 & 0x100) == 0) {
        iVar16 = DAT_006141d8 << 8;
        _DAT_0061c848 = 0;
      }
      uVar12 = DAT_0061c350;
      uVar9 = DAT_0061c354;
      if (_DAT_01c37774 != 0) {
        while( true ) {
          uVar49 = (ushort)(uVar40 >> 0x10);
          uVar50 = (ushort)(uVar40 >> 0x20);
          uVar51 = (ushort)(uVar40 >> 0x30);
          if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_0061c37c) <= iVar11)) {
            pbVar15 = (byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                               (uVar9 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + _DAT_01c37770);
            uVar22 = *(uint *)(&DAT_01c35214 + (uint)*pbVar15 * 4);
            uVar10 = (uint)pbVar15[_DAT_01c37774 - _DAT_01c37770];
            if (uVar10 != 0) {
              uVar2 = *(uint *)(uVar19 + DAT_0061c378);
              uVar20 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
              uVar37 = (ulonglong)
                       CONCAT34((int3)(CONCAT25(uVar20,CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                      >> 0x20),uVar2) & 0xffffffff00ffffff;
              uVar8 = CONCAT51((int5)(uVar37 >> 0x18),(char)((uint)uVar2 >> 8));
              uVar23 = psllw((ulonglong)
                             CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)
                                                  ((uint)uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar22 >> 0x10),uVar22)) >>
                                                  0x20),uVar22) >> 0x18),(char)((uint)uVar22 >> 8)),
                                      (ushort)(byte)uVar22) & 0xffffffff00ffffff,4);
              uVar23 = pmulhw(uVar23,CONCAT26(uVar51 >> 3,
                                              CONCAT24(uVar50 >> 3,
                                                       CONCAT22(uVar49 >> 3,(ushort)uVar40 >> 3))));
              uVar45 = (&DAT_0061d180)[uVar10 * iVar16 >> 0x10];
              sVar39 = (short)uVar23;
              sVar41 = (short)((ulonglong)uVar23 >> 0x10);
              sVar42 = (short)((ulonglong)uVar23 >> 0x20);
              sVar43 = (short)((ulonglong)uVar23 >> 0x30);
              uVar38 = uVar45 ^ 0x000000FF00FF00FF;
              uVar27 = (ushort)(((uint7)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                               (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar43))
                                << 0x30) >> 0x28);
              uVar24 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 -
                                     (0xff < sVar39));
              sVar43 = (short)(uVar45 >> 0x10);
              sVar35 = (short)(uVar45 >> 0x20);
              sVar36 = (short)(uVar45 >> 0x30);
              uVar30 = (ushort)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                      (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar41));
              sVar39 = (short)CONCAT21(uVar27,(0 < sVar42) * (sVar42 < 0x100) *
                                              (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar42));
              uVar27 = uVar27 >> 8;
              if (_DAT_01c38b4c == 0) {
                uVar23 = paddusw(CONCAT26(uVar27 * sVar36,
                                          CONCAT24(sVar39 * sVar35,
                                                   CONCAT22(uVar30 * sVar43,uVar24 * (short)uVar45))
                                         ),
                                 CONCAT26((uVar20 >> 8) * (short)(uVar38 >> 0x30),
                                          CONCAT24((short)(uVar37 >> 0x20) * (short)(uVar38 >> 0x20)
                                                   ,CONCAT22((short)uVar8 * (short)(uVar38 >> 0x10),
                                                             (ushort)(byte)uVar2 * (short)uVar38))))
                ;
                uVar20 = (ushort)uVar23 >> 8;
                uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                uVar27 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                uVar22 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                  CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar27),
                                           CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x18) -
                                                    (0xff < uVar24),
                                                    (uVar20 != 0) * (uVar20 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20)
                                                   )));
              }
              else {
                uVar23 = psllw(CONCAT62(uVar8,(ushort)(byte)uVar2),8);
                uVar23 = paddusw(CONCAT26(uVar27 * sVar36,
                                          CONCAT24(sVar39 * sVar35,
                                                   CONCAT22(uVar30 * sVar43,uVar24 * (short)uVar45))
                                         ),uVar23);
                uVar20 = (ushort)uVar23 >> 8;
                uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                uVar27 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                uVar22 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x38) - (0xff < uVar30),
                                  CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar27),
                                           CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x18) -
                                                    (0xff < uVar24),
                                                    (uVar20 != 0) * (uVar20 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20)
                                                   )));
              }
              *(uint *)(uVar19 + DAT_0061c378) = uVar22;
              if ((_DAT_01c38b54 & 0x80) != 0) {
                *(int *)(uVar19 + (int)DAT_0061c37c) = iVar11;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if (DAT_0061c314 <= uVar19) break;
          uVar12 = uVar12 + _DAT_0061c780;
          sVar39 = (ushort)uVar40 + sVar44;
          sVar41 = uVar49 + sVar46;
          sVar42 = uVar50 + sVar47;
          sVar43 = uVar51 + sVar48;
          uVar9 = uVar9 + _DAT_0061c784;
          iVar11 = iVar11 + DAT_0061c788;
          iVar16 = iVar16 + _DAT_0061c848;
          uVar40 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar43),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar42),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                       sVar41),
                                              -(ushort)((short)DAT_0061c78c < sVar39)))) &
                   CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar39)));
        }
        return;
      }
      while( true ) {
        uVar49 = (ushort)(uVar40 >> 0x10);
        uVar50 = (ushort)(uVar40 >> 0x20);
        uVar51 = (ushort)(uVar40 >> 0x30);
        if ((((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_0061c37c) <= iVar11)) &&
           (iVar1 = *(int *)(&DAT_01c35214 +
                            (uint)*(byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                                            (uVar9 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) +
                                           _DAT_01c37770) * 4), iVar1 != 0)) {
          uVar45 = 0;
          if ((_DAT_01c38b54 & 0x20) != 0) {
            uVar22 = *(uint *)(uVar19 + DAT_0061c378);
            uVar45 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar22 >> 0x10),uVar22)) >>
                                                  0x20),uVar22) >> 0x18),(char)((uint)uVar22 >> 8)),
                              (ushort)(byte)uVar22) & 0xffffffff00ffffff;
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar1 >> 0x10),iVar1)) >>
                                                  0x20),iVar1) >> 0x18),(char)((uint)iVar1 >> 8)),
                                  (ushort)(byte)iVar1) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar51 >> 3,
                                          CONCAT24(uVar50 >> 3,
                                                   CONCAT22(uVar49 >> 3,(ushort)uVar40 >> 3))));
          uVar38 = (&DAT_0061d180)[iVar16 >> 8];
          sVar39 = (short)uVar23;
          sVar41 = (short)((ulonglong)uVar23 >> 0x10);
          sVar42 = (short)((ulonglong)uVar23 >> 0x20);
          sVar43 = (short)((ulonglong)uVar23 >> 0x30);
          uVar37 = uVar38 ^ 0x000000FF00FF00FF;
          uVar24 = (ushort)(((uint7)(byte)((0 < sVar43) * (sVar43 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar43)) <<
                            0x30) >> 0x28);
          uVar20 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 - (0xff < sVar39));
          sVar43 = (short)(uVar38 >> 0x10);
          sVar35 = (short)(uVar38 >> 0x20);
          sVar36 = (short)(uVar38 >> 0x30);
          uVar27 = (ushort)(byte)((0 < sVar41) * (sVar41 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar41));
          sVar39 = (short)CONCAT21(uVar24,(0 < sVar42) * (sVar42 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar42));
          uVar24 = uVar24 >> 8;
          if (_DAT_01c38b4c == 0) {
            uVar23 = paddusw(CONCAT26(uVar24 * sVar36,
                                      CONCAT24(sVar39 * sVar35,
                                               CONCAT22(uVar27 * sVar43,uVar20 * (short)uVar38))),
                             CONCAT26((short)(uVar45 >> 0x30) * (short)(uVar37 >> 0x30),
                                      CONCAT24((short)(uVar45 >> 0x20) * (short)(uVar37 >> 0x20),
                                               CONCAT22((short)(uVar45 >> 0x10) *
                                                        (short)(uVar37 >> 0x10),
                                                        (short)uVar45 * (short)uVar37))));
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar27 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar22 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar30),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar27),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          else {
            uVar23 = psllw(uVar45,8);
            uVar23 = paddusw(CONCAT26(uVar24 * sVar36,
                                      CONCAT24(sVar39 * sVar35,
                                               CONCAT22(uVar27 * sVar43,uVar20 * (short)uVar38))),
                             uVar23);
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar27 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar22 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar30),
                              CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar27),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          *(uint *)(uVar19 + DAT_0061c378) = uVar22;
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)(uVar19 + (int)DAT_0061c37c) = iVar11;
          }
        }
        uVar19 = uVar19 + 4;
        if (DAT_0061c314 <= uVar19) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar39 = (ushort)uVar40 + sVar44;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar50 + sVar47;
        sVar43 = uVar51 + sVar48;
        uVar9 = uVar9 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar16 = iVar16 + _DAT_0061c848;
        uVar40 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar43),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar42),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar41),-(ushort)((short)DAT_0061c78c < sVar39)
                                           ))) &
                 CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar39)));
      }
    }
  }
  return;
}
