// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0055bb93
// Address: 0055bb93
// Address Range: [[0055bb93, 0055c3ee] [0055c3f5, 0055c45b]]
// Convention: unknown
// Signature: void engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(void)

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
  int unaff_EBX;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  int unaff_ESI;
  int *piVar18;
  int unaff_EDI;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar24;
  uint uVar22;
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
  short sVar35;
  short sVar36;
  ulonglong uVar34;
  ulonglong uVar37;
  uint7 uVar38;
  short sVar39;
  ushort uVar40;
  short sVar42;
  short sVar43;
  ulonglong uVar41;
  short sVar44;
  short sVar45;
  short sVar47;
  short sVar48;
  ulonglong uVar46;
  short sVar49;
  ushort uVar50;
  ushort uVar51;
  char cVar5;
  char cVar6;
  char cVar7;
  
  uVar19 = *(uint *)(unaff_ESI + 8);
  uVar12 = *(uint *)(unaff_EDI + 8);
  uVar10 = uVar19;
  iVar17 = unaff_ESI;
  if (uVar12 < uVar19) {
    uVar10 = uVar12;
    uVar12 = uVar19;
    iVar17 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar10 = uVar10 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar10;
  if (iVar11 != 0 && uVar10 <= uVar12 >> 0x10) {
    DAT_0061c378 = *(int *)(&DAT_01c2a38c + unaff_EBX * 4) + uVar10 * 2;
    DAT_0061c314 = iVar11 * 4;
    piVar18 = (int *)(*(int *)(&DAT_01c2b64c + unaff_EBX * 4) + uVar10 * 4);
    DAT_0061c37c = piVar18;
    if (_DAT_01c38b54 == 0x80) {
      iVar17 = *(int *)(iVar17 + 0x28);
      iVar11 = (int)((ulonglong)
                     ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar17) *
                     (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar19 = DAT_0061c314;
      DAT_0061c35c = iVar17;
      DAT_0061c788 = iVar11;
      do {
        *piVar18 = iVar17;
        iVar17 = iVar17 + iVar11;
        piVar18 = piVar18 + 1;
        uVar12 = uVar19 - 4;
        bVar3 = 3 < (int)uVar19;
        uVar19 = uVar12;
      } while (uVar12 != 0 && bVar3);
      return;
    }
    if (_DAT_01c38b58 == 5) {
      uVar19 = *(uint *)(iVar17 + 0x18);
      DAT_0061c350 = (uint)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                           (longlong)*(int *)(iVar17 + 0x28));
      uVar19 = *(uint *)(unaff_EDI + 0x18);
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar19 = *(uint *)(iVar17 + 0x20);
      DAT_0061c354 = (uint)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                           (longlong)*(int *)(iVar17 + 0x28));
      uVar19 = *(uint *)(unaff_EDI + 0x20);
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    else {
      DAT_0061c350 = *(uint *)(iVar17 + 0x18);
      _DAT_0061c780 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_0061c350) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c354 = *(uint *)(iVar17 + 0x20);
      _DAT_0061c784 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_0061c354) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    iVar11 = *(int *)(iVar17 + 0x28);
    DAT_0061c788 = (int)((ulonglong)
                         ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar11) *
                         (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    DAT_0061c840 = *(int *)(iVar17 + 0x30);
    _DAT_0061c848 =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x30) - DAT_0061c840) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    if ((_DAT_01c38b54 & 0x200) == 0) {
      if ((_DAT_01c38b54 & 4) == 0) {
        if ((_DAT_01c38b54 & 0x10) == 0) {
          uVar41 = psllw(0x000000FF00FF00FF,7);
          uVar46 = 0;
        }
        else {
          uVar19 = _DAT_01c35e64 - 0x100U >> 4;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          uVar41 = psllw((&DAT_0061d180)[uVar19],7);
          uVar46 = 0;
        }
      }
      else {
        uVar19 = *(int *)(unaff_EDI + 0x10) - 0x100;
        uVar12 = *(int *)(iVar17 + 0x10) - 0x100;
        if (0xfff < uVar19) {
          uVar19 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar10 = uVar12 * 8;
        uVar19 = (uint)((ulonglong)
                        ((longlong)(int)(uVar19 * 8 + uVar12 * -8) *
                        (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
        DAT_0061c800._0_4_ = uVar10 & 0xffff;
        DAT_0061c820._0_4_ = uVar19 & 0xffff;
        uVar41 = ((CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c800._4_4_,uVar10) & 0xffffffff0000ffff;
        uVar46 = ((CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar14 = *(uint *)(iVar17 + 0x10) >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x10) >> 1) - uVar14) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      DAT_0061c800._0_4_ = uVar14 & 0xffff;
      DAT_0061c820._0_4_ = uVar19 & 0xffff;
      uVar16 = *(uint *)(iVar17 + 0x38) >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x38) >> 1) - uVar16) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      _DAT_0061c808 = uVar16 & 0xffff;
      _DAT_0061c828 = uVar12 & 0xffff;
      uVar13 = *(uint *)(iVar17 + 0x40) >> 1;
      uVar10 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x40) >> 1) - uVar13) *
                      (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      _DAT_0061c810 = uVar13 & 0xffff;
      _DAT_0061c830 = uVar10 & 0xffff;
      uVar41 = ((CONCAT44(DAT_0061c800._4_4_,uVar14) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c80c,uVar16) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c814,uVar13) & 0xffffffff0000ffff;
      uVar46 = ((CONCAT44(DAT_0061c820._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c82c,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam0061c834,uVar10) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar45 = (short)uVar46;
    sVar47 = (short)(uVar46 >> 0x10);
    sVar48 = (short)(uVar46 >> 0x20);
    sVar49 = (short)(uVar46 >> 0x30);
    DAT_0061c35c = iVar11;
    if ((_DAT_01c37774 == 0) && ((_DAT_01c38b54 & 2) == 0)) {
      uVar1 = (ulonglong)_DAT_01c38b5c >> 0x10;
      uVar40 = (ushort)(((uint7)(byte)((ulonglong)_DAT_01c38b5c >> 0x18) << 0x30) >> 0x28);
      uVar46 = (ulonglong)_DAT_01c38b5c >> 8;
      bVar33 = (byte)_DAT_01c38b5c;
      uVar12 = DAT_0061c350;
      uVar10 = DAT_0061c354;
      iVar17 = DAT_0061c840;
      if ((_DAT_01c38b54 & 8) == 0) {
        iVar17 = 0;
        _DAT_0061c848 = 0;
      }
      while( true ) {
        uVar50 = (ushort)(uVar41 >> 0x10);
        uVar51 = (ushort)(uVar41 >> 0x20);
        uVar20 = (ushort)(uVar41 >> 0x30);
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
                                      (uVar10 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) +
                                     _DAT_01c37770) * 4);
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar22 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar22 >> 8),(short)uVar22))
                                        >> 0x10),(short)uVar22) & 0xffffffff00ff00ff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                          CONCAT24(uVar51 >> 3,
                                                   CONCAT22(uVar50 >> 3,(ushort)uVar41 >> 3))));
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
          cVar7 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar39);
          uVar14 = CONCAT13(cVar7,CONCAT12(cVar6,uVar21));
          uVar37 = (ulonglong)(uint6)uVar14;
          if ((_DAT_01c38b54 & 8) != 0) {
            uVar37 = (&DAT_0061d180)[iVar17 >> 8];
            uVar34 = uVar37 ^ 0x000000FF00FF00FF;
            uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar7,(uint6)uVar14) >> 0x28),
                                                     CONCAT14(cVar6,uVar14)) >> 0x20),uVar14) >>
                           0x18);
            uVar25 = (uint5)uVar14 & 0xffff00ff00;
            uVar24 = (ushort)bVar4 * (short)uVar34 + (ushort)bVar33 * (short)uVar37;
            uVar29 = ((ushort)(CONCAT43(uVar14,CONCAT12(cVar5,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar34 >> 0x10) + (ushort)(byte)uVar46 * (short)(uVar37 >> 0x10);
            uVar27 = (short)(uVar25 >> 8) * (short)(uVar34 >> 0x20) +
                     (short)CONCAT21(uVar40,(char)uVar1) * (short)(uVar37 >> 0x20);
            uVar31 = (short)(uVar25 >> 0x18) * (short)(uVar34 >> 0x30) +
                     (uVar40 >> 8) * (short)(uVar37 >> 0x30);
            uVar26 = uVar24 >> 8;
            uVar30 = uVar29 >> 8;
            uVar28 = uVar27 >> 8;
            uVar32 = uVar31 >> 8;
            uVar37 = (ulonglong)
                     CONCAT13((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                              (0xff < uVar32),
                              CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                       (0xff < uVar28),
                                       CONCAT11((uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar30),
                                                (uVar26 != 0) * (uVar26 < 0x100) *
                                                (char)(uVar24 >> 8) - (0xff < uVar26))));
          }
          *(ushort *)((uVar19 >> 1) + DAT_0061c378) =
               (ushort)((uVar37 & _DAT_0061c928) >> _DAT_0061c970) |
               (ushort)((uVar37 & _DAT_0061c908) >> _DAT_0061c950) |
               (ushort)((uVar37 & _DAT_0061c8e8) >> _DAT_0061c930);
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)((int)DAT_0061c37c + uVar19) = iVar11;
          }
        }
        uVar19 = uVar19 + 4;
        if (DAT_0061c314 <= uVar19) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar39 = (ushort)uVar41 + sVar45;
        sVar42 = uVar50 + sVar47;
        sVar43 = uVar51 + sVar48;
        sVar44 = uVar20 + sVar49;
        uVar10 = uVar10 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar17 = iVar17 + _DAT_0061c848;
        uVar41 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar44),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar43),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar42),-(ushort)((short)DAT_0061c78c < sVar39)
                                           ))) &
                 CONCAT26(sVar44,CONCAT24(sVar43,CONCAT22(sVar42,sVar39)));
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
          uVar40 = (ushort)uVar41;
          uVar50 = (ushort)(uVar41 >> 0x10);
          uVar51 = (ushort)(uVar41 >> 0x20);
          uVar20 = (ushort)(uVar41 >> 0x30);
          if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_0061c37c) <= iVar11)) {
            pbVar15 = (byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                               (uVar10 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) + _DAT_01c37770);
            uVar22 = *(uint *)(&DAT_01c35214 + (uint)*pbVar15 * 4);
            uVar41 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar22 >> 0x10),uVar22)) >>
                                                  0x20),uVar22) >> 0x18),(char)((uint)uVar22 >> 8)),
                              (ushort)(byte)uVar22) & 0xffffffff00ffffff;
            uVar14 = (uint)pbVar15[_DAT_01c37774 - _DAT_01c37770];
            if (uVar14 != 0) {
              if ((((iVar17 < 0xff01) || (uVar14 < 0xff)) || (iVar17 < 0xff)) ||
                 (_DAT_01c38b4c != 0)) {
                uVar16 = (uint)*(ushort *)((uVar19 >> 1) + DAT_0061c378);
                uVar38 = (uint7)((uVar16 & _DAT_0061c8e0) << _DAT_0061c970) |
                         (uint7)((uVar16 & _DAT_0061c8d8) << _DAT_0061c950) |
                         (uint7)((uVar16 & _DAT_0061c8d0) << _DAT_0061c930);
                uVar24 = (ushort)(((uVar38 >> 0x18) << 0x30) >> 0x28);
                uVar8 = CONCAT21(uVar24,(char)(uVar38 >> 0x10));
                uVar9 = CONCAT41((int)(((uint7)uVar8 << 0x20) >> 0x18),(char)(uVar38 >> 8));
                uVar23 = psllw(uVar41,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar51 >> 3,
                                                         CONCAT22(uVar50 >> 3,uVar40 >> 3))));
                uVar41 = (&DAT_0061d180)[uVar14 * iVar17 >> 0x10];
                sVar39 = (short)uVar23;
                sVar42 = (short)((ulonglong)uVar23 >> 0x10);
                sVar43 = (short)((ulonglong)uVar23 >> 0x20);
                sVar44 = (short)((ulonglong)uVar23 >> 0x30);
                uVar46 = uVar41 ^ 0x000000FF00FF00FF;
                uVar29 = (ushort)(((uint7)(byte)((0 < sVar44) * (sVar44 < 0x100) *
                                                 (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar44)
                                                ) << 0x30) >> 0x28);
                uVar26 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 -
                                       (0xff < sVar39));
                sVar44 = (short)(uVar41 >> 0x10);
                sVar35 = (short)(uVar41 >> 0x20);
                sVar36 = (short)(uVar41 >> 0x30);
                uVar30 = (ushort)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                        (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar42));
                sVar39 = (short)CONCAT21(uVar29,(0 < sVar43) * (sVar43 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar43))
                ;
                uVar29 = uVar29 >> 8;
                if (_DAT_01c38b4c == 0) {
                  uVar23 = paddusw(CONCAT26(uVar29 * sVar36,
                                            CONCAT24(sVar39 * sVar35,
                                                     CONCAT22(uVar30 * sVar44,uVar26 * (short)uVar41
                                                             ))),
                                   CONCAT26((uVar24 >> 8) * (short)(uVar46 >> 0x30),
                                            CONCAT24((short)uVar8 * (short)(uVar46 >> 0x20),
                                                     CONCAT22((short)uVar9 * (short)(uVar46 >> 0x10)
                                                              ,(ushort)(byte)uVar38 * (short)uVar46)
                                                    )));
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar41 = (ulonglong)
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
                  uVar23 = psllw((ulonglong)CONCAT52(uVar9,(ushort)(byte)uVar38),8);
                  uVar23 = paddusw(CONCAT26(uVar29 * sVar36,
                                            CONCAT24(sVar39 * sVar35,
                                                     CONCAT22(uVar30 * sVar44,uVar26 * (short)uVar41
                                                             ))),uVar23);
                  uVar24 = (ushort)uVar23 >> 8;
                  uVar26 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
                  uVar29 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
                  uVar30 = (ushort)((ulonglong)uVar23 >> 0x38);
                  uVar41 = (ulonglong)
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
                uVar23 = psllw(uVar41,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar51 >> 3,
                                                         CONCAT22(uVar50 >> 3,uVar40 >> 3))));
                sVar39 = (short)uVar23;
                sVar42 = (short)((ulonglong)uVar23 >> 0x10);
                sVar43 = (short)((ulonglong)uVar23 >> 0x20);
                sVar44 = (short)((ulonglong)uVar23 >> 0x30);
                uVar41 = (ulonglong)
                         CONCAT13((0 < sVar44) * (sVar44 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar44),
                                  CONCAT12((0 < sVar43) * (sVar43 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar43),
                                           CONCAT11((0 < sVar42) * (sVar42 < 0x100) *
                                                    (char)((ulonglong)uVar23 >> 0x10) -
                                                    (0xff < sVar42),
                                                    (0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 -
                                                    (0xff < sVar39))));
              }
              *(ushort *)((uVar19 >> 1) + DAT_0061c378) =
                   (ushort)((uVar41 & _DAT_0061c928) >> _DAT_0061c970) |
                   (ushort)((uVar41 & _DAT_0061c908) >> _DAT_0061c950) |
                   (ushort)((uVar41 & _DAT_0061c8e8) >> _DAT_0061c930);
              if ((_DAT_01c38b54 & 0x80) != 0) {
                *(int *)(uVar19 + (int)DAT_0061c37c) = iVar11;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if (DAT_0061c314 <= uVar19) break;
          uVar12 = uVar12 + _DAT_0061c780;
          uVar10 = uVar10 + _DAT_0061c784;
          iVar11 = iVar11 + DAT_0061c788;
          iVar17 = iVar17 + _DAT_0061c848;
          uVar41 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) <
                                     (short)(uVar20 + sVar49)),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) <
                                              (short)(uVar51 + sVar48)),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                       (short)(uVar50 + sVar47)),
                                              -(ushort)((short)DAT_0061c78c <
                                                       (short)(uVar40 + sVar45))))) &
                   CONCAT26(uVar20 + sVar49,
                            CONCAT24(uVar51 + sVar48,CONCAT22(uVar50 + sVar47,uVar40 + sVar45)));
        }
        return;
      }
      while( true ) {
        uVar40 = (ushort)(uVar41 >> 0x10);
        uVar50 = (ushort)(uVar41 >> 0x20);
        uVar51 = (ushort)(uVar41 >> 0x30);
        if ((((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_0061c37c) <= iVar11)) &&
           (iVar2 = *(int *)(&DAT_01c35214 +
                            (uint)*(byte *)((uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                                            (uVar10 >> _DAT_0061c888 & (uint)_DAT_0061c8c8) +
                                           _DAT_01c37770) * 4), iVar2 != 0)) {
          uVar46 = 0;
          if ((_DAT_01c38b54 & 0x20) != 0) {
            uVar14 = (uint)*(ushort *)((uVar19 >> 1) + DAT_0061c378);
            uVar38 = (uint7)((uVar14 & _DAT_0061c8e0) << _DAT_0061c970) |
                     (uint7)((uVar14 & _DAT_0061c8d8) << _DAT_0061c950) |
                     (uint7)((uVar14 & _DAT_0061c8d0) << _DAT_0061c930);
            uVar46 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar38 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar38 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar38 >> 8)),
                              (ushort)(byte)uVar38);
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar2 >> 0x10),iVar2)) >>
                                                  0x20),iVar2) >> 0x18),(char)((uint)iVar2 >> 8)),
                                  (ushort)(byte)iVar2) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar51 >> 3,
                                          CONCAT24(uVar50 >> 3,
                                                   CONCAT22(uVar40 >> 3,(ushort)uVar41 >> 3))));
          uVar1 = (&DAT_0061d180)[iVar17 >> 8];
          sVar39 = (short)uVar23;
          sVar42 = (short)((ulonglong)uVar23 >> 0x10);
          sVar43 = (short)((ulonglong)uVar23 >> 0x20);
          sVar44 = (short)((ulonglong)uVar23 >> 0x30);
          uVar37 = uVar1 ^ 0x000000FF00FF00FF;
          uVar24 = (ushort)(((uint7)(byte)((0 < sVar44) * (sVar44 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar44)) <<
                            0x30) >> 0x28);
          uVar20 = (ushort)(byte)((0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 - (0xff < sVar39));
          sVar44 = (short)(uVar1 >> 0x10);
          sVar35 = (short)(uVar1 >> 0x20);
          sVar36 = (short)(uVar1 >> 0x30);
          uVar26 = (ushort)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                  (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar42));
          sVar39 = (short)CONCAT21(uVar24,(0 < sVar43) * (sVar43 < 0x100) *
                                          (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar43));
          uVar24 = uVar24 >> 8;
          if (_DAT_01c38b4c == 0) {
            uVar23 = paddusw(CONCAT26(uVar24 * sVar36,
                                      CONCAT24(sVar39 * sVar35,
                                               CONCAT22(uVar26 * sVar44,uVar20 * (short)uVar1))),
                             CONCAT26((short)(uVar46 >> 0x30) * (short)(uVar37 >> 0x30),
                                      CONCAT24((short)(uVar46 >> 0x20) * (short)(uVar37 >> 0x20),
                                               CONCAT22((short)(uVar46 >> 0x10) *
                                                        (short)(uVar37 >> 0x10),
                                                        (short)uVar46 * (short)uVar37))));
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar14 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          else {
            uVar23 = psllw(uVar46,8);
            uVar23 = paddusw(CONCAT26(uVar24 * sVar36,
                                      CONCAT24(sVar39 * sVar35,
                                               CONCAT22(uVar26 * sVar44,uVar20 * (short)uVar1))),
                             uVar23);
            uVar20 = (ushort)uVar23 >> 8;
            uVar24 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar23 >> 0x38);
            uVar14 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          uVar46 = (ulonglong)uVar14;
          *(ushort *)((uVar19 >> 1) + DAT_0061c378) =
               (ushort)((uVar46 & _DAT_0061c928) >> _DAT_0061c970) |
               (ushort)((uVar46 & _DAT_0061c908) >> _DAT_0061c950) |
               (ushort)((uVar46 & _DAT_0061c8e8) >> _DAT_0061c930);
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)(uVar19 + (int)DAT_0061c37c) = iVar11;
          }
        }
        uVar19 = uVar19 + 4;
        if (DAT_0061c314 <= uVar19) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar39 = (ushort)uVar41 + sVar45;
        sVar42 = uVar40 + sVar47;
        sVar43 = uVar50 + sVar48;
        sVar44 = uVar51 + sVar49;
        uVar10 = uVar10 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar17 = iVar17 + _DAT_0061c848;
        uVar41 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar44),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar43),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar42),-(ushort)((short)DAT_0061c78c < sVar39)
                                           ))) &
                 CONCAT26(sVar44,CONCAT24(sVar43,CONCAT22(sVar42,sVar39)));
      }
    }
  }
  return;
}
