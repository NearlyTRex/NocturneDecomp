// Name: FUN_0052f031
// Address: 0052f031
// Address Range: [[0052f031, 0052f1b1] [0052f1c0, 0052f27c] [0052f280, 0052f30b] [0052f310, 0052f339] [0052f340, 0052f464] [0052f470, 0052f4d9] [0052f4e0, 0052f4e5] [0052f4f0, 0052f5c8] [0052f5d0, 0052f5f3] [0052f600, 0052f669] [0052f670, 0052f7a8] [0052f7b6, 0052f7cd] [0052f7d0, 0052f7db] [0052f7e0, 0052f822]]
// Convention: unknown
// Signature: void FUN_0052f031(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052f031(void)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined6 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_EBX;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int unaff_ESI;
  int *piVar16;
  int unaff_EDI;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar22;
  uint uVar20;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ulonglong uVar21;
  ushort uVar27;
  ushort uVar28;
  uint5 uVar23;
  ushort uVar29;
  ushort uVar30;
  byte bVar31;
  short sVar33;
  short sVar34;
  ulonglong uVar32;
  ulonglong uVar35;
  ulonglong uVar36;
  short sVar37;
  ushort uVar38;
  short sVar40;
  short sVar41;
  ulonglong uVar39;
  short sVar42;
  short sVar43;
  short sVar45;
  short sVar46;
  ulonglong uVar44;
  short sVar47;
  ushort uVar48;
  ushort uVar49;
  char cVar4;
  char cVar5;
  byte bVar6;
  
  uVar17 = *(uint *)(unaff_ESI + 8);
  uVar11 = *(uint *)(unaff_EDI + 8);
  uVar8 = uVar17;
  iVar15 = unaff_ESI;
  if (uVar11 < uVar17) {
    uVar8 = uVar11;
    uVar11 = uVar17;
    iVar15 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar8 = uVar8 >> 0x10;
  iVar10 = (uVar11 >> 0x10) - uVar8;
  if (iVar10 != 0 && uVar8 <= uVar11 >> 0x10) {
    DAT_005bf078 = *(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar8 * 4;
    DAT_005bf014 = iVar10 * 4;
    piVar16 = (int *)(*(int *)(&DAT_01bd4260 + unaff_EBX * 4) + uVar8 * 4);
    DAT_005bf07c = piVar16;
    if (_DAT_01c039a0 == 0x80) {
      iVar15 = *(int *)(iVar15 + 0x28);
      iVar10 = (int)((ulonglong)
                     ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar15) *
                     (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
      uVar17 = DAT_005bf014;
      DAT_005bf05c = iVar15;
      DAT_005bf488 = iVar10;
      do {
        *piVar16 = iVar15;
        iVar15 = iVar15 + iVar10;
        piVar16 = piVar16 + 1;
        uVar11 = uVar17 - 4;
        bVar2 = 3 < (int)uVar17;
        uVar17 = uVar11;
      } while (uVar11 != 0 && bVar2);
      return;
    }
    if (_DAT_01c039a4 == 5) {
      uVar17 = *(uint *)(iVar15 + 0x18);
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                           (longlong)*(int *)(iVar15 + 0x28));
      uVar17 = *(uint *)(unaff_EDI + 0x18);
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_005bf050) *
                 (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
      uVar17 = *(uint *)(iVar15 + 0x20);
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                           (longlong)*(int *)(iVar15 + 0x28));
      uVar17 = *(uint *)(unaff_EDI + 0x20);
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar17 >> 0x1f) << 0x18 | uVar17 >> 8,uVar17 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_005bf054) *
                 (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
    }
    else {
      DAT_005bf050 = *(uint *)(iVar15 + 0x18);
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_005bf050) *
                 (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
      DAT_005bf054 = *(uint *)(iVar15 + 0x20);
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_005bf054) *
                 (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
    }
    iVar10 = *(int *)(iVar15 + 0x28);
    DAT_005bf488 = (int)((ulonglong)
                         ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar10) *
                         (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
    DAT_005bf540 = *(int *)(iVar15 + 0x30);
    _DAT_005bf548 =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x30) - DAT_005bf540) *
               (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
    if ((_DAT_01c039a0 & 0x200) == 0) {
      if ((_DAT_01c039a0 & 4) == 0) {
        if ((_DAT_01c039a0 & 0x10) == 0) {
          uVar39 = psllw(0x000000FF00FF00FF,7);
          uVar44 = 0;
        }
        else {
          uVar17 = _DAT_01c00c74 - 0x100U >> 4;
          if (0xfe < uVar17) {
            uVar17 = 0xff;
          }
          uVar39 = psllw((&DAT_005bfe70)[uVar17],7);
          uVar44 = 0;
        }
      }
      else {
        uVar17 = *(int *)(unaff_EDI + 0x10) - 0x100;
        uVar11 = *(int *)(iVar15 + 0x10) - 0x100;
        if (0xfff < uVar17) {
          uVar17 = 0xfff;
        }
        if (0xfff < uVar11) {
          uVar11 = 0xfff;
        }
        uVar8 = uVar11 * 8;
        uVar17 = (uint)((ulonglong)
                        ((longlong)(int)(uVar17 * 8 + uVar11 * -8) *
                        (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
        DAT_005bf500._0_4_ = uVar8 & 0xffff;
        DAT_005bf520._0_4_ = uVar17 & 0xffff;
        uVar39 = ((CONCAT44(DAT_005bf500._4_4_,uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar8) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar8) & 0xffffffff0000ffff;
        uVar44 = ((CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar9 = *(uint *)(iVar15 + 0x10) >> 1;
      uVar17 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x10) >> 1) - uVar9) *
                      (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
      DAT_005bf500._0_4_ = uVar9 & 0xffff;
      DAT_005bf520._0_4_ = uVar17 & 0xffff;
      uVar12 = *(uint *)(iVar15 + 0x38) >> 1;
      uVar11 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x38) >> 1) - uVar12) *
                      (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
      _DAT_005bf508 = uVar12 & 0xffff;
      _DAT_005bf528 = uVar11 & 0xffff;
      uVar13 = *(uint *)(iVar15 + 0x40) >> 1;
      uVar8 = (uint)((ulonglong)
                     ((longlong)(int)((*(uint *)(unaff_EDI + 0x40) >> 1) - uVar13) *
                     (longlong)*(int *)(&DAT_01c00c84 + DAT_005bf014)) >> 0x20);
      _DAT_005bf510 = uVar13 & 0xffff;
      _DAT_005bf530 = uVar8 & 0xffff;
      uVar39 = ((CONCAT44(DAT_005bf500._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf50c,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf514,uVar13) & 0xffffffff0000ffff;
      uVar44 = ((CONCAT44(DAT_005bf520._4_4_,uVar17) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf52c,uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf534,uVar8) & 0xffffffff0000ffff;
    }
    uVar17 = 0;
    sVar43 = (short)uVar44;
    sVar45 = (short)(uVar44 >> 0x10);
    sVar46 = (short)(uVar44 >> 0x20);
    sVar47 = (short)(uVar44 >> 0x30);
    DAT_005bf05c = iVar10;
    if ((_DAT_01c02584 == 0) && ((_DAT_01c039a0 & 2) == 0)) {
      uVar36 = (ulonglong)_DAT_01c039a8 >> 0x10;
      uVar38 = (ushort)(((uint7)(byte)((ulonglong)_DAT_01c039a8 >> 0x18) << 0x30) >> 0x28);
      uVar44 = (ulonglong)_DAT_01c039a8 >> 8;
      bVar31 = (byte)_DAT_01c039a8;
      uVar11 = DAT_005bf050;
      uVar8 = DAT_005bf054;
      iVar15 = DAT_005bf540;
      if ((_DAT_01c039a0 & 8) == 0) {
        iVar15 = 0;
        _DAT_005bf548 = 0;
      }
      while( true ) {
        uVar48 = (ushort)(uVar39 >> 0x10);
        uVar49 = (ushort)(uVar39 >> 0x20);
        uVar18 = (ushort)(uVar39 >> 0x30);
        if (((_DAT_01c039a0 & 0x40) == 0) || (*(int *)(uVar17 + (int)DAT_005bf07c) <= iVar10)) {
          if ((_DAT_01c039a0 & 1) == 0) {
            uVar20 = 0x00FFFFFF;
            if ((_DAT_01c039a0 & 0x200) == 0) {
              uVar20 = _DAT_01c00c70;
            }
          }
          else {
            uVar20 = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uVar11 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                      (uVar8 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580
                                     ) * 4);
          }
          uVar21 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar20 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar20 >> 8),(short)uVar20))
                                        >> 0x10),(short)uVar20) & 0xffffffff00ff00ff,4);
          uVar21 = pmulhw(uVar21,CONCAT26(uVar18 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar48 >> 3,(ushort)uVar39 >> 3))));
          sVar37 = (short)uVar21;
          bVar3 = (0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 - (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar21 >> 0x10);
          cVar4 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar21 >> 0x10) -
                  (0xff < sVar37);
          uVar19 = CONCAT11(cVar4,bVar3);
          sVar37 = (short)((ulonglong)uVar21 >> 0x20);
          cVar5 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar21 >> 0x20) -
                  (0xff < sVar37);
          sVar37 = (short)((ulonglong)uVar21 >> 0x30);
          bVar6 = (0 < sVar37) * (sVar37 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                  (0xff < sVar37);
          uVar20 = CONCAT13(bVar6,CONCAT12(cVar5,uVar19));
          if ((_DAT_01c039a0 & 8) != 0) {
            uVar35 = (&DAT_005bfe70)[iVar15 >> 8];
            uVar32 = uVar35 ^ 0x000000FF00FF00FF;
            uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar6 << 0x30) >> 0x28),
                                                    CONCAT14(cVar5,uVar20)) >> 0x20),uVar20) >> 0x18
                          );
            uVar23 = (uint5)uVar9 & 0xffffffff00;
            uVar22 = (ushort)bVar3 * (short)uVar32 + (ushort)bVar31 * (short)uVar35;
            uVar27 = ((ushort)(CONCAT43(uVar9,CONCAT12(cVar4,uVar19)) >> 0x10) & 0xff) *
                     (short)(uVar32 >> 0x10) + (ushort)(byte)uVar44 * (short)(uVar35 >> 0x10);
            uVar25 = (short)(uVar23 >> 8) * (short)(uVar32 >> 0x20) +
                     (short)CONCAT21(uVar38,(char)uVar36) * (short)(uVar35 >> 0x20);
            uVar29 = (short)(uVar23 >> 0x18) * (short)(uVar32 >> 0x30) +
                     (uVar38 >> 8) * (short)(uVar35 >> 0x30);
            uVar24 = uVar22 >> 8;
            uVar28 = uVar27 >> 8;
            uVar26 = uVar25 >> 8;
            uVar30 = uVar29 >> 8;
            uVar20 = CONCAT13((uVar30 != 0) * (uVar30 < 0x100) * (char)(uVar29 >> 8) -
                              (0xff < uVar30),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) -
                                       (0xff < uVar26),
                                       CONCAT11((uVar28 != 0) * (uVar28 < 0x100) *
                                                (char)(uVar27 >> 8) - (0xff < uVar28),
                                                (uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)(uVar22 >> 8) - (0xff < uVar24))));
          }
          *(uint *)(DAT_005bf078 + uVar17) = uVar20;
          if ((_DAT_01c039a0 & 0x80) != 0) {
            *(int *)((int)DAT_005bf07c + uVar17) = iVar10;
          }
        }
        uVar17 = uVar17 + 4;
        if (DAT_005bf014 <= uVar17) break;
        uVar11 = uVar11 + _DAT_005bf480;
        sVar37 = (ushort)uVar39 + sVar43;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar18 + sVar47;
        uVar8 = uVar8 + _DAT_005bf484;
        iVar10 = iVar10 + DAT_005bf488;
        iVar15 = iVar15 + _DAT_005bf548;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) < sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                     sVar40),-(ushort)((short)DAT_005bf48c < sVar37)
                                           ))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar37)));
      }
    }
    else {
      iVar15 = DAT_005bf540;
      if ((_DAT_01c039a0 & 0x100) == 0) {
        iVar15 = DAT_005b763c << 8;
        _DAT_005bf548 = 0;
      }
      uVar11 = DAT_005bf050;
      uVar8 = DAT_005bf054;
      if (_DAT_01c02584 != 0) {
        while( true ) {
          uVar38 = (ushort)uVar39;
          uVar48 = (ushort)(uVar39 >> 0x10);
          uVar49 = (ushort)(uVar39 >> 0x20);
          uVar18 = (ushort)(uVar39 >> 0x30);
          if (((_DAT_01c039a0 & 0x40) == 0) || (*(int *)(uVar17 + (int)DAT_005bf07c) <= iVar10)) {
            pbVar14 = (byte *)((uVar11 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                               (uVar8 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580);
            uVar20 = *(uint *)(&DAT_01c00024 + (uint)*pbVar14 * 4);
            uVar39 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar20 >> 0x10),uVar20)) >>
                                                  0x20),uVar20) >> 0x18),(char)((uint)uVar20 >> 8)),
                              (ushort)(byte)uVar20) & 0xffffffff00ffffff;
            uVar9 = (uint)pbVar14[_DAT_01c02584 - _DAT_01c02580];
            if (uVar9 != 0) {
              if ((((iVar15 < 0xff01) || (uVar9 < 0xff)) || (iVar15 < 0xff)) || (_DAT_01c03998 != 0)
                 ) {
                uVar20 = *(uint *)(uVar17 + DAT_005bf078);
                uVar22 = (ushort)(((uint7)(byte)((uint)uVar20 >> 0x18) << 0x30) >> 0x28);
                uVar36 = (ulonglong)
                         CONCAT34((int3)(CONCAT25(uVar22,CONCAT14((char)((uint)uVar20 >> 0x10),
                                                                  uVar20)) >> 0x20),uVar20) &
                         0xffffffff00ffffff;
                uVar7 = CONCAT51((int5)(uVar36 >> 0x18),(char)((uint)uVar20 >> 8));
                uVar21 = psllw(uVar39,4);
                uVar21 = pmulhw(uVar21,CONCAT26(uVar18 >> 3,
                                                CONCAT24(uVar49 >> 3,
                                                         CONCAT22(uVar48 >> 3,uVar38 >> 3))));
                uVar39 = (&DAT_005bfe70)[uVar9 * iVar15 >> 0x10];
                sVar37 = (short)uVar21;
                sVar40 = (short)((ulonglong)uVar21 >> 0x10);
                sVar41 = (short)((ulonglong)uVar21 >> 0x20);
                sVar42 = (short)((ulonglong)uVar21 >> 0x30);
                uVar44 = uVar39 ^ 0x000000FF00FF00FF;
                uVar27 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                                 (char)((ulonglong)uVar21 >> 0x30) - (0xff < sVar42)
                                                ) << 0x30) >> 0x28);
                uVar24 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 -
                                       (0xff < sVar37));
                sVar42 = (short)(uVar39 >> 0x10);
                sVar33 = (short)(uVar39 >> 0x20);
                sVar34 = (short)(uVar39 >> 0x30);
                uVar28 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                        (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar40));
                sVar37 = (short)CONCAT21(uVar27,(0 < sVar41) * (sVar41 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar41))
                ;
                uVar27 = uVar27 >> 8;
                if (_DAT_01c03998 == 0) {
                  uVar21 = paddusw(CONCAT26(uVar27 * sVar34,
                                            CONCAT24(sVar37 * sVar33,
                                                     CONCAT22(uVar28 * sVar42,uVar24 * (short)uVar39
                                                             ))),
                                   CONCAT26((uVar22 >> 8) * (short)(uVar44 >> 0x30),
                                            CONCAT24((short)(uVar36 >> 0x20) *
                                                     (short)(uVar44 >> 0x20),
                                                     CONCAT22((short)uVar7 * (short)(uVar44 >> 0x10)
                                                              ,(ushort)(byte)uVar20 * (short)uVar44)
                                                    )));
                  uVar22 = (ushort)uVar21 >> 8;
                  uVar24 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
                  uVar27 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar21 >> 0x38);
                  uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                    (char)((ulonglong)uVar21 >> 0x38) - (0xff < uVar28),
                                    CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                             (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar27),
                                             CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar21 >> 0x18) -
                                                      (0xff < uVar24),
                                                      (uVar22 != 0) * (uVar22 < 0x100) *
                                                      (char)((ulonglong)uVar21 >> 8) -
                                                      (0xff < uVar22))));
                }
                else {
                  uVar21 = psllw(CONCAT62(uVar7,(ushort)(byte)uVar20),8);
                  uVar21 = paddusw(CONCAT26(uVar27 * sVar34,
                                            CONCAT24(sVar37 * sVar33,
                                                     CONCAT22(uVar28 * sVar42,uVar24 * (short)uVar39
                                                             ))),uVar21);
                  uVar22 = (ushort)uVar21 >> 8;
                  uVar24 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
                  uVar27 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
                  uVar28 = (ushort)((ulonglong)uVar21 >> 0x38);
                  uVar20 = CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                    (char)((ulonglong)uVar21 >> 0x38) - (0xff < uVar28),
                                    CONCAT12((uVar27 != 0) * (uVar27 < 0x100) *
                                             (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar27),
                                             CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                      (char)((ulonglong)uVar21 >> 0x18) -
                                                      (0xff < uVar24),
                                                      (uVar22 != 0) * (uVar22 < 0x100) *
                                                      (char)((ulonglong)uVar21 >> 8) -
                                                      (0xff < uVar22))));
                }
              }
              else {
                uVar21 = psllw(uVar39,4);
                uVar21 = pmulhw(uVar21,CONCAT26(uVar18 >> 3,
                                                CONCAT24(uVar49 >> 3,
                                                         CONCAT22(uVar48 >> 3,uVar38 >> 3))));
                sVar37 = (short)uVar21;
                sVar40 = (short)((ulonglong)uVar21 >> 0x10);
                sVar41 = (short)((ulonglong)uVar21 >> 0x20);
                sVar42 = (short)((ulonglong)uVar21 >> 0x30);
                uVar20 = CONCAT13((0 < sVar42) * (sVar42 < 0x100) *
                                  (char)((ulonglong)uVar21 >> 0x30) - (0xff < sVar42),
                                  CONCAT12((0 < sVar41) * (sVar41 < 0x100) *
                                           (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar41),
                                           CONCAT11((0 < sVar40) * (sVar40 < 0x100) *
                                                    (char)((ulonglong)uVar21 >> 0x10) -
                                                    (0xff < sVar40),
                                                    (0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 -
                                                    (0xff < sVar37))));
              }
              *(uint *)(uVar17 + DAT_005bf078) = uVar20;
              if ((_DAT_01c039a0 & 0x80) != 0) {
                *(int *)(uVar17 + (int)DAT_005bf07c) = iVar10;
              }
            }
          }
          uVar17 = uVar17 + 4;
          if (DAT_005bf014 <= uVar17) break;
          uVar11 = uVar11 + _DAT_005bf480;
          uVar8 = uVar8 + _DAT_005bf484;
          iVar10 = iVar10 + DAT_005bf488;
          iVar15 = iVar15 + _DAT_005bf548;
          uVar39 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) <
                                     (short)(uVar18 + sVar47)),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) <
                                              (short)(uVar49 + sVar46)),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                       (short)(uVar48 + sVar45)),
                                              -(ushort)((short)DAT_005bf48c <
                                                       (short)(uVar38 + sVar43))))) &
                   CONCAT26(uVar18 + sVar47,
                            CONCAT24(uVar49 + sVar46,CONCAT22(uVar48 + sVar45,uVar38 + sVar43)));
        }
        return;
      }
      while( true ) {
        uVar38 = (ushort)(uVar39 >> 0x10);
        uVar48 = (ushort)(uVar39 >> 0x20);
        uVar49 = (ushort)(uVar39 >> 0x30);
        if ((((_DAT_01c039a0 & 0x40) == 0) || (*(int *)(uVar17 + (int)DAT_005bf07c) <= iVar10)) &&
           (iVar1 = *(int *)(&DAT_01c00024 +
                            (uint)*(byte *)((uVar11 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                            (uVar8 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) +
                                           _DAT_01c02580) * 4), iVar1 != 0)) {
          uVar44 = 0;
          if ((_DAT_01c039a0 & 0x20) != 0) {
            uVar20 = *(uint *)(uVar17 + DAT_005bf078);
            uVar44 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar20 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar20 >> 0x10),uVar20)) >>
                                                  0x20),uVar20) >> 0x18),(char)((uint)uVar20 >> 8)),
                              (ushort)(byte)uVar20) & 0xffffffff00ffffff;
          }
          uVar21 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar1 >> 0x10),iVar1)) >>
                                                  0x20),iVar1) >> 0x18),(char)((uint)iVar1 >> 8)),
                                  (ushort)(byte)iVar1) & 0xffffffff00ffffff,4);
          uVar21 = pmulhw(uVar21,CONCAT26(uVar49 >> 3,
                                          CONCAT24(uVar48 >> 3,
                                                   CONCAT22(uVar38 >> 3,(ushort)uVar39 >> 3))));
          uVar36 = (&DAT_005bfe70)[iVar15 >> 8];
          sVar37 = (short)uVar21;
          sVar40 = (short)((ulonglong)uVar21 >> 0x10);
          sVar41 = (short)((ulonglong)uVar21 >> 0x20);
          sVar42 = (short)((ulonglong)uVar21 >> 0x30);
          uVar35 = uVar36 ^ 0x000000FF00FF00FF;
          uVar22 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                           (char)((ulonglong)uVar21 >> 0x30) - (0xff < sVar42)) <<
                            0x30) >> 0x28);
          uVar18 = (ushort)(byte)((0 < sVar37) * (sVar37 < 0x100) * (char)uVar21 - (0xff < sVar37));
          sVar42 = (short)(uVar36 >> 0x10);
          sVar33 = (short)(uVar36 >> 0x20);
          sVar34 = (short)(uVar36 >> 0x30);
          uVar24 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                  (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar40));
          sVar37 = (short)CONCAT21(uVar22,(0 < sVar41) * (sVar41 < 0x100) *
                                          (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar41));
          uVar22 = uVar22 >> 8;
          if (_DAT_01c03998 == 0) {
            uVar21 = paddusw(CONCAT26(uVar22 * sVar34,
                                      CONCAT24(sVar37 * sVar33,
                                               CONCAT22(uVar24 * sVar42,uVar18 * (short)uVar36))),
                             CONCAT26((short)(uVar44 >> 0x30) * (short)(uVar35 >> 0x30),
                                      CONCAT24((short)(uVar44 >> 0x20) * (short)(uVar35 >> 0x20),
                                               CONCAT22((short)(uVar44 >> 0x10) *
                                                        (short)(uVar35 >> 0x10),
                                                        (short)uVar44 * (short)uVar35))));
            uVar18 = (ushort)uVar21 >> 8;
            uVar22 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
            uVar24 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
            uVar27 = (ushort)((ulonglong)uVar21 >> 0x38);
            uVar20 = CONCAT13((uVar27 != 0) * (uVar27 < 0x100) * (char)((ulonglong)uVar21 >> 0x38) -
                              (0xff < uVar27),
                              CONCAT12((uVar24 != 0) * (uVar24 < 0x100) *
                                       (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar24),
                                       CONCAT11((uVar22 != 0) * (uVar22 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 0x18) - (0xff < uVar22),
                                                (uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 8) - (0xff < uVar18))));
          }
          else {
            uVar21 = psllw(uVar44,8);
            uVar21 = paddusw(CONCAT26(uVar22 * sVar34,
                                      CONCAT24(sVar37 * sVar33,
                                               CONCAT22(uVar24 * sVar42,uVar18 * (short)uVar36))),
                             uVar21);
            uVar18 = (ushort)uVar21 >> 8;
            uVar22 = (ushort)((ulonglong)uVar21 >> 0x10) >> 8;
            uVar24 = (ushort)((ulonglong)uVar21 >> 0x20) >> 8;
            uVar27 = (ushort)((ulonglong)uVar21 >> 0x38);
            uVar20 = CONCAT13((uVar27 != 0) * (uVar27 < 0x100) * (char)((ulonglong)uVar21 >> 0x38) -
                              (0xff < uVar27),
                              CONCAT12((uVar24 != 0) * (uVar24 < 0x100) *
                                       (char)((ulonglong)uVar21 >> 0x28) - (0xff < uVar24),
                                       CONCAT11((uVar22 != 0) * (uVar22 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 0x18) - (0xff < uVar22),
                                                (uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)((ulonglong)uVar21 >> 8) - (0xff < uVar18))));
          }
          *(uint *)(uVar17 + DAT_005bf078) = uVar20;
          if ((_DAT_01c039a0 & 0x80) != 0) {
            *(int *)(uVar17 + (int)DAT_005bf07c) = iVar10;
          }
        }
        uVar17 = uVar17 + 4;
        if (DAT_005bf014 <= uVar17) break;
        uVar11 = uVar11 + _DAT_005bf480;
        sVar37 = (ushort)uVar39 + sVar43;
        sVar40 = uVar38 + sVar45;
        sVar41 = uVar48 + sVar46;
        sVar42 = uVar49 + sVar47;
        uVar8 = uVar8 + _DAT_005bf484;
        iVar10 = iVar10 + DAT_005bf488;
        iVar15 = iVar15 + _DAT_005bf548;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) < sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                     sVar40),-(ushort)((short)DAT_005bf48c < sVar37)
                                           ))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar37)));
      }
    }
  }
  return;
}
