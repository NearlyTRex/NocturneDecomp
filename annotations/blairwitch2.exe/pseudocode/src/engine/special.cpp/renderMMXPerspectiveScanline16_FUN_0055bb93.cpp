// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0055bb93
// Address: 0055bb93
// Address Range: [[0055bb93, 0055c3ee] [0055c3f5, 0055c45b]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  ulonglong uVar1;
  int iVar2;
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
  int iVar17;
  SSoftwareEdge *pSVar18;
  int *piVar19;
  uint uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar25;
  uint uVar23;
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
  pSVar18 = right_vertex;
  if (uVar12 < uVar20) {
    uVar10 = uVar12;
    uVar12 = uVar20;
    pSVar18 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar10 = uVar10 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar10;
  if (iVar11 != 0 && uVar10 <= uVar12 >> 0x10) {
    DAT_0061c378 = *(int *)(&DAT_01c2a38c + scanline_y * 4) + uVar10 * 2;
    DAT_0061c314 = iVar11 * 4;
    piVar19 = (int *)(*(int *)(&DAT_01c2b64c + scanline_y * 4) + uVar10 * 4);
    DAT_0061c37c = piVar19;
    if (_DAT_01c38b54 == 0x80) {
      iVar11 = (pSVar18->base).depth_current;
      iVar17 = (int)((ulonglong)
                     ((longlong)((left_vertex->base).depth_current - iVar11) *
                     (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar20 = DAT_0061c314;
      DAT_0061c35c = iVar11;
      DAT_0061c788 = iVar17;
      do {
        *piVar19 = iVar11;
        iVar11 = iVar11 + iVar17;
        piVar19 = piVar19 + 1;
        uVar12 = uVar20 - 4;
        bVar3 = 3 < (int)uVar20;
        uVar20 = uVar12;
      } while (uVar12 != 0 && bVar3);
      return;
    }
    if (_DAT_01c38b58 == 5) {
      uVar20 = (pSVar18->base).u_current;
      DAT_0061c350 = (uint)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                           (longlong)(pSVar18->base).depth_current);
      uVar20 = (left_vertex->base).u_current;
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar20 = (pSVar18->base).v_current;
      DAT_0061c354 = (uint)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                           (longlong)(pSVar18->base).depth_current);
      uVar20 = (left_vertex->base).v_current;
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar20 >> 0x1f) << 0x18 | uVar20 >> 8,uVar20 << 0x18) /
                             (longlong)(left_vertex->base).depth_current) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    else {
      DAT_0061c350 = (pSVar18->base).u_current;
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).u_current - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c354 = (pSVar18->base).v_current;
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)(int)((left_vertex->base).v_current - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    iVar11 = (pSVar18->base).depth_current;
    DAT_0061c788 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar11) *
                         (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    DAT_0061c840 = (pSVar18->base).alpha_current;
    _DAT_0061c848 =
         (int)((ulonglong)
               ((longlong)((left_vertex->base).alpha_current - DAT_0061c840) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    if ((_DAT_01c38b54 & 0x200) == 0) {
      if ((_DAT_01c38b54 & 4) == 0) {
        if ((_DAT_01c38b54 & 0x10) == 0) {
          uVar42 = psllw(0x000000FF00FF00FF,7);
          uVar47 = 0;
        }
        else {
          uVar20 = _DAT_01c35e64 - 0x100U >> 4;
          if (0xfe < uVar20) {
            uVar20 = 0xff;
          }
          uVar42 = psllw((&DAT_0061d180)[uVar20],7);
          uVar47 = 0;
        }
      }
      else {
        uVar20 = (left_vertex->base).red_current - 0x100;
        uVar12 = (pSVar18->base).red_current - 0x100;
        if (0xfff < uVar20) {
          uVar20 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar10 = uVar12 * 8;
        uVar20 = (uint)((ulonglong)
                        ((longlong)(int)(uVar20 * 8 + uVar12 * -8) *
                        (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
        DAT_0061c800._0_4_ = uVar10 & 0xffff;
        DAT_0061c820._0_4_ = uVar20 & 0xffff;
        uVar42 = ((CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff;
        uVar47 = ((CONCAT44(DAT_0061c820._4_4_,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c820._4_4_,uVar20) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c820._4_4_,uVar20) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar14 = (uint)(pSVar18->base).red_current >> 1;
      uVar20 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar14) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c800._0_4_ = uVar14 & 0xffff;
      DAT_0061c820._0_4_ = uVar20 & 0xffff;
      uVar16 = (uint)pSVar18->green_current >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar16) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      _DAT_0061c808 = uVar16 & 0xffff;
      _DAT_0061c828 = uVar12 & 0xffff;
      uVar13 = (uint)pSVar18->blue_current >> 1;
      uVar10 = (uint)((ulonglong)
                      ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar13) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      _DAT_0061c810 = uVar13 & 0xffff;
      _DAT_0061c830 = uVar10 & 0xffff;
      uVar42 = ((CONCAT44(DAT_0061c800._4_4_,uVar14) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c80c,uVar16) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c814,uVar13) & 0xffffffff0000ffff;
      uVar47 = ((CONCAT44(DAT_0061c820._4_4_,uVar20) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c82c,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c834,uVar10) & 0xffffffff0000ffff;
    }
    uVar20 = 0;
    sVar46 = (short)uVar47;
    sVar48 = (short)(uVar47 >> 0x10);
    sVar49 = (short)(uVar47 >> 0x20);
    sVar50 = (short)(uVar47 >> 0x30);
    DAT_0061c35c = iVar11;
    if ((_DAT_01c37774 == 0) && ((_DAT_01c38b54 & 2) == 0)) {
      uVar1 = (ulonglong)_DAT_01c38b5c >> 0x10;
      uVar41 = (ushort)(((uint7)(byte)((ulonglong)_DAT_01c38b5c >> 0x18) << 0x30) >> 0x28);
      uVar47 = (ulonglong)_DAT_01c38b5c >> 8;
      bVar34 = (byte)_DAT_01c38b5c;
      uVar12 = DAT_0061c350;
      uVar10 = DAT_0061c354;
      iVar17 = DAT_0061c840;
      if ((_DAT_01c38b54 & 8) == 0) {
        iVar17 = 0;
        _DAT_0061c848 = 0;
      }
      while( true ) {
        uVar51 = (ushort)(uVar42 >> 0x10);
        uVar52 = (ushort)(uVar42 >> 0x20);
        uVar21 = (ushort)(uVar42 >> 0x30);
        if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar20 + (int)DAT_0061c37c) <= iVar11)) {
          if ((_DAT_01c38b54 & 1) == 0) {
            uVar23 = 0x00FFFFFF;
            if ((_DAT_01c38b54 & 0x200) == 0) {
              uVar23 = _DAT_01c35e60;
            }
          }
          else {
            uVar23 = *(uint *)
                      (&DAT_01c35214 +
                      (uint)*(byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                                      (uVar10 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) +
                                     _DAT_01c37770) * 4);
          }
          uVar24 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar23 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar23 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar23 >> 8),(short)uVar23))
                                        >> 0x10),(short)uVar23) & 0xffffffff00ff00ff,4);
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
          if ((_DAT_01c38b54 & 8) != 0) {
            uVar38 = (&DAT_0061d180)[iVar17 >> 8];
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
          *(ushort *)((uVar20 >> 1) + DAT_0061c378) =
               (ushort)((uVar38 & _DAT_0061c928) >> _DAT_0061c970) |
               (ushort)((uVar38 & _DAT_0061c908) >> _DAT_0061c950) |
               (ushort)((uVar38 & _DAT_0061c8e8) >> _DAT_0061c930);
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)((int)DAT_0061c37c + uVar20) = iVar11;
          }
        }
        uVar20 = uVar20 + 4;
        if (DAT_0061c314 <= uVar20) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar40 = (ushort)uVar42 + sVar46;
        sVar43 = uVar51 + sVar48;
        sVar44 = uVar52 + sVar49;
        sVar45 = uVar21 + sVar50;
        uVar10 = uVar10 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar17 = iVar17 + _DAT_0061c848;
        uVar42 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar45),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar44),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar43),-(ushort)((short)DAT_0061c78c < sVar40)
                                           ))) &
                 CONCAT26(sVar45,CONCAT24(sVar44,CONCAT22(sVar43,sVar40)));
      }
    }
    else {
      iVar17 = DAT_0061c840;
      if ((_DAT_01c38b54 & 0x100) == 0) {
        iVar17 = DAT_006141d8 << 8;
        _DAT_0061c848 = 0;
      }
      uVar12 = DAT_0061c350;
      uVar10 = DAT_0061c354;
      if (_DAT_01c37774 != 0) {
        while( true ) {
          uVar41 = (ushort)uVar42;
          uVar51 = (ushort)(uVar42 >> 0x10);
          uVar52 = (ushort)(uVar42 >> 0x20);
          uVar21 = (ushort)(uVar42 >> 0x30);
          if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar20 + (int)DAT_0061c37c) <= iVar11)) {
            pbVar15 = (byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                               (uVar10 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + _DAT_01c37770);
            uVar23 = *(uint *)(&DAT_01c35214 + (uint)*pbVar15 * 4);
            uVar42 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar23 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar23 >> 0x10),uVar23)) >>
                                                  0x20),uVar23) >> 0x18),(char)((uint)uVar23 >> 8)),
                              (ushort)(byte)uVar23) & 0xffffffff00ffffff;
            uVar14 = (uint)pbVar15[_DAT_01c37774 - _DAT_01c37770];
            if (uVar14 != 0) {
              if ((((iVar17 < 0xff01) || (uVar14 < 0xff)) || (iVar17 < 0xff)) ||
                 (_DAT_01c38b4c != 0)) {
                uVar16 = (uint)*(ushort *)((uVar20 >> 1) + DAT_0061c378);
                uVar39 = (uint7)((uVar16 & _DAT_0061c8e0) << _DAT_0061c970) |
                         (uint7)((uVar16 & _DAT_0061c8d8) << _DAT_0061c950) |
                         (uint7)((uVar16 & _DAT_0061c8d0) << _DAT_0061c930);
                uVar25 = (ushort)(((uVar39 >> 0x18) << 0x30) >> 0x28);
                uVar8 = CONCAT21(uVar25,(char)(uVar39 >> 0x10));
                uVar9 = CONCAT41((int)(((uint7)uVar8 << 0x20) >> 0x18),(char)(uVar39 >> 8));
                uVar24 = psllw(uVar42,4);
                uVar24 = pmulhw(uVar24,CONCAT26(uVar21 >> 3,
                                                CONCAT24(uVar52 >> 3,
                                                         CONCAT22(uVar51 >> 3,uVar41 >> 3))));
                uVar42 = (&DAT_0061d180)[uVar14 * iVar17 >> 0x10];
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
                if (_DAT_01c38b4c == 0) {
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
              *(ushort *)((uVar20 >> 1) + DAT_0061c378) =
                   (ushort)((uVar42 & _DAT_0061c928) >> _DAT_0061c970) |
                   (ushort)((uVar42 & _DAT_0061c908) >> _DAT_0061c950) |
                   (ushort)((uVar42 & _DAT_0061c8e8) >> _DAT_0061c930);
              if ((_DAT_01c38b54 & 0x80) != 0) {
                *(int *)(uVar20 + (int)DAT_0061c37c) = iVar11;
              }
            }
          }
          uVar20 = uVar20 + 4;
          if (DAT_0061c314 <= uVar20) break;
          uVar12 = uVar12 + _DAT_0061c780;
          uVar10 = uVar10 + _DAT_0061c784;
          iVar11 = iVar11 + DAT_0061c788;
          iVar17 = iVar17 + _DAT_0061c848;
          uVar42 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) <
                                     (short)(uVar21 + sVar50)),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) <
                                              (short)(uVar52 + sVar49)),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                       (short)(uVar51 + sVar48)),
                                              -(ushort)((short)DAT_0061c78c <
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
        if ((((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar20 + (int)DAT_0061c37c) <= iVar11)) &&
           (iVar2 = *(int *)(&DAT_01c35214 +
                            (uint)*(byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                                            (uVar10 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) +
                                           _DAT_01c37770) * 4), iVar2 != 0)) {
          uVar47 = 0;
          if ((_DAT_01c38b54 & 0x20) != 0) {
            uVar14 = (uint)*(ushort *)((uVar20 >> 1) + DAT_0061c378);
            uVar39 = (uint7)((uVar14 & _DAT_0061c8e0) << _DAT_0061c970) |
                     (uint7)((uVar14 & _DAT_0061c8d8) << _DAT_0061c950) |
                     (uint7)((uVar14 & _DAT_0061c8d0) << _DAT_0061c930);
            uVar47 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar39 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar39 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar39 >> 8)),
                              (ushort)(byte)uVar39);
          }
          uVar24 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar2 >> 0x10),iVar2)) >>
                                                  0x20),iVar2) >> 0x18),(char)((uint)iVar2 >> 8)),
                                  (ushort)(byte)iVar2) & 0xffffffff00ffffff,4);
          uVar24 = pmulhw(uVar24,CONCAT26(uVar52 >> 3,
                                          CONCAT24(uVar51 >> 3,
                                                   CONCAT22(uVar41 >> 3,(ushort)uVar42 >> 3))));
          uVar1 = (&DAT_0061d180)[iVar17 >> 8];
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
          if (_DAT_01c38b4c == 0) {
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
          *(ushort *)((uVar20 >> 1) + DAT_0061c378) =
               (ushort)((uVar47 & _DAT_0061c928) >> _DAT_0061c970) |
               (ushort)((uVar47 & _DAT_0061c908) >> _DAT_0061c950) |
               (ushort)((uVar47 & _DAT_0061c8e8) >> _DAT_0061c930);
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)(uVar20 + (int)DAT_0061c37c) = iVar11;
          }
        }
        uVar20 = uVar20 + 4;
        if (DAT_0061c314 <= uVar20) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar40 = (ushort)uVar42 + sVar46;
        sVar43 = uVar41 + sVar48;
        sVar44 = uVar51 + sVar49;
        sVar45 = uVar52 + sVar50;
        uVar10 = uVar10 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar17 = iVar17 + _DAT_0061c848;
        uVar42 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar45),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar44),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar43),-(ushort)((short)DAT_0061c78c < sVar40)
                                           ))) &
                 CONCAT26(sVar45,CONCAT24(sVar44,CONCAT22(sVar43,sVar40)));
      }
    }
  }
  return;
}
