// Name: engine_special.cpp_FUN_0052f823
// Address: 0052f823
// Address Range: [[0052f823, 0053007e] [00530085, 005300eb]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_0052f823(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_0052f823(void)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  uint3 uVar7;
  undefined5 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_EBX;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int unaff_ESI;
  int iVar17;
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
  char cVar4;
  char cVar5;
  char cVar6;
  
  uVar19 = *(uint *)(unaff_ESI + 8);
  uVar11 = *(uint *)(unaff_EDI + 8);
  uVar9 = uVar19;
  iVar16 = unaff_ESI;
  if (uVar11 < uVar19) {
    uVar9 = uVar11;
    uVar11 = uVar19;
    iVar16 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar9 = uVar9 >> 0x10;
  iVar10 = (uVar11 >> 0x10) - uVar9;
  if (iVar10 != 0 && uVar9 <= uVar11 >> 0x10) {
    DAT_005bf078 = *(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar9 * 2;
    DAT_005bf014 = iVar10 * 4;
    piVar18 = (int *)(*(int *)(&DAT_01bd4260 + unaff_EBX * 4) + uVar9 * 4);
    DAT_005bf07c = piVar18;
    if (_DAT_01c039a0 == 0x80) {
      iVar16 = *(int *)(iVar16 + 0x28);
      iVar10 = (int)((ulonglong)
                     ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar16) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      uVar19 = DAT_005bf014;
      DAT_005bf05c = iVar16;
      DAT_005bf488 = iVar10;
      do {
        *piVar18 = iVar16;
        iVar16 = iVar16 + iVar10;
        piVar18 = piVar18 + 1;
        uVar11 = uVar19 - 4;
        bVar2 = 3 < (int)uVar19;
        uVar19 = uVar11;
      } while (uVar11 != 0 && bVar2);
      return;
    }
    if (_DAT_01c039a4 == 5) {
      uVar19 = *(uint *)(iVar16 + 0x18);
      DAT_005bf050 = (uint)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                           (longlong)*(int *)(iVar16 + 0x28));
      uVar19 = *(uint *)(unaff_EDI + 0x18);
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      uVar19 = *(uint *)(iVar16 + 0x20);
      DAT_005bf054 = (uint)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                           (longlong)*(int *)(iVar16 + 0x28));
      uVar19 = *(uint *)(unaff_EDI + 0x20);
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar19 >> 0x1f) << 0x18 | uVar19 >> 8,uVar19 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    else {
      DAT_005bf050 = *(uint *)(iVar16 + 0x18);
      _DAT_005bf480 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_005bf050) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      DAT_005bf054 = *(uint *)(iVar16 + 0x20);
      _DAT_005bf484 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_005bf054) *
                 (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    }
    iVar17 = *(int *)(iVar16 + 0x28);
    DAT_005bf488 = (int)((ulonglong)
                         ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar17) *
                         (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    DAT_005bf540 = *(int *)(iVar16 + 0x30);
    _DAT_005bf548 =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x30) - DAT_005bf540) *
               (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
    if ((_DAT_01c039a0 & 0x200) == 0) {
      if ((_DAT_01c039a0 & 4) == 0) {
        if ((_DAT_01c039a0 & 0x10) == 0) {
          uVar41 = psllw(0x000000FF00FF00FF,7);
          uVar46 = 0;
        }
        else {
          uVar19 = _DAT_01c00c74 - 0x100U >> 4;
          if (0xfe < uVar19) {
            uVar19 = 0xff;
          }
          uVar41 = psllw((&DAT_005bfe70)[uVar19],7);
          uVar46 = 0;
        }
      }
      else {
        uVar19 = *(int *)(unaff_EDI + 0x10) - 0x100;
        uVar11 = *(int *)(iVar16 + 0x10) - 0x100;
        if (0xfff < uVar19) {
          uVar19 = 0xfff;
        }
        if (0xfff < uVar11) {
          uVar11 = 0xfff;
        }
        uVar9 = uVar11 * 8;
        uVar19 = (uint)((ulonglong)
                        ((longlong)(int)(uVar19 * 8 + uVar11 * -8) *
                        (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
        DAT_005bf500._0_4_ = uVar9 & 0xffff;
        DAT_005bf520._0_4_ = uVar19 & 0xffff;
        uVar41 = ((CONCAT44(DAT_005bf500._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf500._4_4_,uVar9) & 0xffffffff0000ffff;
        uVar46 = ((CONCAT44(DAT_005bf520._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_005bf520._4_4_,uVar19) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar13 = *(uint *)(iVar16 + 0x10) >> 1;
      uVar19 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x10) >> 1) - uVar13) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      DAT_005bf500._0_4_ = uVar13 & 0xffff;
      DAT_005bf520._0_4_ = uVar19 & 0xffff;
      uVar15 = *(uint *)(iVar16 + 0x38) >> 1;
      uVar11 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x38) >> 1) - uVar15) *
                      (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      _DAT_005bf508 = uVar15 & 0xffff;
      _DAT_005bf528 = uVar11 & 0xffff;
      uVar12 = *(uint *)(iVar16 + 0x40) >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)((*(uint *)(unaff_EDI + 0x40) >> 1) - uVar12) *
                     (longlong)(int)g_ReciprocalLookupTable[iVar10 + 1]) >> 0x20);
      _DAT_005bf510 = uVar12 & 0xffff;
      _DAT_005bf530 = uVar9 & 0xffff;
      uVar41 = ((CONCAT44(DAT_005bf500._4_4_,uVar13) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf50c,uVar15) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf514,uVar12) & 0xffffffff0000ffff;
      uVar46 = ((CONCAT44(DAT_005bf520._4_4_,uVar19) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf52c,uVar11) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam005bf534,uVar9) & 0xffffffff0000ffff;
    }
    uVar19 = 0;
    sVar45 = (short)uVar46;
    sVar47 = (short)(uVar46 >> 0x10);
    sVar48 = (short)(uVar46 >> 0x20);
    sVar49 = (short)(uVar46 >> 0x30);
    DAT_005bf05c = iVar17;
    if ((_DAT_01c02584 == 0) && ((_DAT_01c039a0 & 2) == 0)) {
      uVar1 = (ulonglong)_DAT_01c039a8 >> 0x10;
      uVar40 = (ushort)(((uint7)(byte)((ulonglong)_DAT_01c039a8 >> 0x18) << 0x30) >> 0x28);
      uVar46 = (ulonglong)_DAT_01c039a8 >> 8;
      bVar33 = (byte)_DAT_01c039a8;
      uVar11 = DAT_005bf050;
      uVar9 = DAT_005bf054;
      iVar16 = DAT_005bf540;
      if ((_DAT_01c039a0 & 8) == 0) {
        iVar16 = 0;
        _DAT_005bf548 = 0;
      }
      while( true ) {
        uVar50 = (ushort)(uVar41 >> 0x10);
        uVar51 = (ushort)(uVar41 >> 0x20);
        uVar20 = (ushort)(uVar41 >> 0x30);
        if (((_DAT_01c039a0 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_005bf07c) <= iVar17)) {
          if ((_DAT_01c039a0 & 1) == 0) {
            uVar22 = 0x00FFFFFF;
            if ((_DAT_01c039a0 & 0x200) == 0) {
              uVar22 = _DAT_01c00c70;
            }
          }
          else {
            uVar22 = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uVar11 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                      (uVar9 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580
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
                                                   CONCAT22(uVar50 >> 3,(ushort)uVar41 >> 3))));
          sVar39 = (short)uVar23;
          bVar3 = (0 < sVar39) * (sVar39 < 0x100) * (char)uVar23 - (0xff < sVar39);
          sVar39 = (short)((ulonglong)uVar23 >> 0x10);
          cVar4 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x10) -
                  (0xff < sVar39);
          uVar21 = CONCAT11(cVar4,bVar3);
          sVar39 = (short)((ulonglong)uVar23 >> 0x20);
          cVar5 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                  (0xff < sVar39);
          sVar39 = (short)((ulonglong)uVar23 >> 0x30);
          cVar6 = (0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar39);
          uVar13 = CONCAT13(cVar6,CONCAT12(cVar5,uVar21));
          uVar37 = (ulonglong)(uint6)uVar13;
          if ((_DAT_01c039a0 & 8) != 0) {
            uVar37 = (&DAT_005bfe70)[iVar16 >> 8];
            uVar34 = uVar37 ^ 0x000000FF00FF00FF;
            uVar13 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar6,(uint6)uVar13) >> 0x28),
                                                     CONCAT14(cVar5,uVar13)) >> 0x20),uVar13) >>
                           0x18);
            uVar25 = (uint5)uVar13 & 0xffff00ff00;
            uVar24 = (ushort)bVar3 * (short)uVar34 + (ushort)bVar33 * (short)uVar37;
            uVar29 = ((ushort)(CONCAT43(uVar13,CONCAT12(cVar4,uVar21)) >> 0x10) & 0xff) *
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
          *(ushort *)((uVar19 >> 1) + DAT_005bf078) =
               (ushort)((uVar37 & _DAT_005bf610) >> _DAT_005bf658) |
               (ushort)((uVar37 & _DAT_005bf5f0) >> _DAT_005bf638) |
               (ushort)((uVar37 & _DAT_005bf5d0) >> _DAT_005bf618);
          if ((_DAT_01c039a0 & 0x80) != 0) {
            *(int *)((int)DAT_005bf07c + uVar19) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if (DAT_005bf014 <= uVar19) break;
        uVar11 = uVar11 + _DAT_005bf480;
        sVar39 = (ushort)uVar41 + sVar45;
        sVar42 = uVar50 + sVar47;
        sVar43 = uVar51 + sVar48;
        sVar44 = uVar20 + sVar49;
        uVar9 = uVar9 + _DAT_005bf484;
        iVar17 = iVar17 + DAT_005bf488;
        iVar16 = iVar16 + _DAT_005bf548;
        uVar41 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) < sVar44),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) < sVar43),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                     sVar42),-(ushort)((short)DAT_005bf48c < sVar39)
                                           ))) &
                 CONCAT26(sVar44,CONCAT24(sVar43,CONCAT22(sVar42,sVar39)));
      }
    }
    else {
      iVar16 = DAT_005bf540;
      if ((_DAT_01c039a0 & 0x100) == 0) {
        iVar16 = DAT_005b763c << 8;
        _DAT_005bf548 = 0;
      }
      uVar11 = DAT_005bf050;
      uVar9 = DAT_005bf054;
      if (_DAT_01c02584 != 0) {
        while( true ) {
          uVar40 = (ushort)uVar41;
          uVar50 = (ushort)(uVar41 >> 0x10);
          uVar51 = (ushort)(uVar41 >> 0x20);
          uVar20 = (ushort)(uVar41 >> 0x30);
          if (((_DAT_01c039a0 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_005bf07c) <= iVar17)) {
            pbVar14 = (byte *)((uVar11 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                               (uVar9 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) + _DAT_01c02580);
            uVar22 = *(uint *)(&DAT_01c00024 + (uint)*pbVar14 * 4);
            uVar41 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar22 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar22 >> 0x10),uVar22)) >>
                                                  0x20),uVar22) >> 0x18),(char)((uint)uVar22 >> 8)),
                              (ushort)(byte)uVar22) & 0xffffffff00ffffff;
            uVar13 = (uint)pbVar14[_DAT_01c02584 - _DAT_01c02580];
            if (uVar13 != 0) {
              if ((((iVar16 < 0xff01) || (uVar13 < 0xff)) || (iVar16 < 0xff)) ||
                 (_DAT_01c03998 != 0)) {
                uVar15 = (uint)*(ushort *)((uVar19 >> 1) + DAT_005bf078);
                uVar38 = (uint7)((uVar15 & _DAT_005bf5c8) << _DAT_005bf658) |
                         (uint7)((uVar15 & _DAT_005bf5c0) << _DAT_005bf638) |
                         (uint7)((uVar15 & _DAT_005bf5b8) << _DAT_005bf618);
                uVar24 = (ushort)(((uVar38 >> 0x18) << 0x30) >> 0x28);
                uVar7 = CONCAT21(uVar24,(char)(uVar38 >> 0x10));
                uVar8 = CONCAT41((int)(((uint7)uVar7 << 0x20) >> 0x18),(char)(uVar38 >> 8));
                uVar23 = psllw(uVar41,4);
                uVar23 = pmulhw(uVar23,CONCAT26(uVar20 >> 3,
                                                CONCAT24(uVar51 >> 3,
                                                         CONCAT22(uVar50 >> 3,uVar40 >> 3))));
                uVar41 = (&DAT_005bfe70)[uVar13 * iVar16 >> 0x10];
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
                if (_DAT_01c03998 == 0) {
                  uVar23 = paddusw(CONCAT26(uVar29 * sVar36,
                                            CONCAT24(sVar39 * sVar35,
                                                     CONCAT22(uVar30 * sVar44,uVar26 * (short)uVar41
                                                             ))),
                                   CONCAT26((uVar24 >> 8) * (short)(uVar46 >> 0x30),
                                            CONCAT24((short)uVar7 * (short)(uVar46 >> 0x20),
                                                     CONCAT22((short)uVar8 * (short)(uVar46 >> 0x10)
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
                  uVar23 = psllw((ulonglong)CONCAT52(uVar8,(ushort)(byte)uVar38),8);
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
              *(ushort *)((uVar19 >> 1) + DAT_005bf078) =
                   (ushort)((uVar41 & _DAT_005bf610) >> _DAT_005bf658) |
                   (ushort)((uVar41 & _DAT_005bf5f0) >> _DAT_005bf638) |
                   (ushort)((uVar41 & _DAT_005bf5d0) >> _DAT_005bf618);
              if ((_DAT_01c039a0 & 0x80) != 0) {
                *(int *)(uVar19 + (int)DAT_005bf07c) = iVar17;
              }
            }
          }
          uVar19 = uVar19 + 4;
          if (DAT_005bf014 <= uVar19) break;
          uVar11 = uVar11 + _DAT_005bf480;
          uVar9 = uVar9 + _DAT_005bf484;
          iVar17 = iVar17 + DAT_005bf488;
          iVar16 = iVar16 + _DAT_005bf548;
          uVar41 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) <
                                     (short)(uVar20 + sVar49)),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) <
                                              (short)(uVar51 + sVar48)),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                       (short)(uVar50 + sVar47)),
                                              -(ushort)((short)DAT_005bf48c <
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
        if ((((_DAT_01c039a0 & 0x40) == 0) || (*(int *)(uVar19 + (int)DAT_005bf07c) <= iVar17)) &&
           (iVar10 = *(int *)(&DAT_01c00024 +
                             (uint)*(byte *)((uVar11 >> _DAT_005bf550 & (uint)_DAT_005bf590) +
                                             (uVar9 >> _DAT_005bf570 & (uint)_DAT_005bf5b0) +
                                            _DAT_01c02580) * 4), iVar10 != 0)) {
          uVar46 = 0;
          if ((_DAT_01c039a0 & 0x20) != 0) {
            uVar13 = (uint)*(ushort *)((uVar19 >> 1) + DAT_005bf078);
            uVar38 = (uint7)((uVar13 & _DAT_005bf5c8) << _DAT_005bf658) |
                     (uint7)((uVar13 & _DAT_005bf5c0) << _DAT_005bf638) |
                     (uint7)((uVar13 & _DAT_005bf5b8) << _DAT_005bf618);
            uVar46 = (ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uVar38 >> 0x18) << 0x30) >>
                                                                     0x28),(char)(uVar38 >> 0x10))
                                             << 0x20) >> 0x18),(char)(uVar38 >> 8)),
                              (ushort)(byte)uVar38);
          }
          uVar23 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar10 >> 0x10),iVar10)) >>
                                                  0x20),iVar10) >> 0x18),(char)((uint)iVar10 >> 8)),
                                  (ushort)(byte)iVar10) & 0xffffffff00ffffff,4);
          uVar23 = pmulhw(uVar23,CONCAT26(uVar51 >> 3,
                                          CONCAT24(uVar50 >> 3,
                                                   CONCAT22(uVar40 >> 3,(ushort)uVar41 >> 3))));
          uVar1 = (&DAT_005bfe70)[iVar16 >> 8];
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
          if (_DAT_01c03998 == 0) {
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
            uVar13 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
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
            uVar13 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar23 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar24),
                                                (uVar20 != 0) * (uVar20 < 0x100) *
                                                (char)((ulonglong)uVar23 >> 8) - (0xff < uVar20))));
          }
          uVar46 = (ulonglong)uVar13;
          *(ushort *)((uVar19 >> 1) + DAT_005bf078) =
               (ushort)((uVar46 & _DAT_005bf610) >> _DAT_005bf658) |
               (ushort)((uVar46 & _DAT_005bf5f0) >> _DAT_005bf638) |
               (ushort)((uVar46 & _DAT_005bf5d0) >> _DAT_005bf618);
          if ((_DAT_01c039a0 & 0x80) != 0) {
            *(int *)(uVar19 + (int)DAT_005bf07c) = iVar17;
          }
        }
        uVar19 = uVar19 + 4;
        if (DAT_005bf014 <= uVar19) break;
        uVar11 = uVar11 + _DAT_005bf480;
        sVar39 = (ushort)uVar41 + sVar45;
        sVar42 = uVar40 + sVar47;
        sVar43 = uVar50 + sVar48;
        sVar44 = uVar51 + sVar49;
        uVar9 = uVar9 + _DAT_005bf484;
        iVar17 = iVar17 + DAT_005bf488;
        iVar16 = iVar16 + _DAT_005bf548;
        uVar41 = CONCAT26(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x30) < sVar44),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x20) < sVar43),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_005bf48c >> 0x10) <
                                                     sVar42),-(ushort)((short)DAT_005bf48c < sVar39)
                                           ))) &
                 CONCAT26(sVar44,CONCAT24(sVar43,CONCAT22(sVar42,sVar39)));
      }
    }
  }
  return;
}
