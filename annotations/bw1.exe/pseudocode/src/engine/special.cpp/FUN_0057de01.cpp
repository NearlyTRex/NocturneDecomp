// Name: engine_special.cpp_FUN_0057de01
// Address: 0057de01
// Address Range: [[0057de01, 0057df81] [0057df90, 0057e04c] [0057e050, 0057e0db] [0057e0e0, 0057e109] [0057e110, 0057e234] [0057e240, 0057e2a9] [0057e2b0, 0057e2b5] [0057e2c0, 0057e389] [0057e3c0, 0057e429] [0057e430, 0057e568] [0057e576, 0057e58d] [0057e590, 0057e59b] [0057e5a0, 0057e5e2]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_0057de01(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_0057de01(void)

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
  int unaff_EBX;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  int unaff_ESI;
  int *piVar17;
  int unaff_EDI;
  uint uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar23;
  uint uVar21;
  ushort uVar24;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ulonglong uVar22;
  ushort uVar29;
  uint5 uVar25;
  ushort uVar30;
  ushort uVar31;
  byte bVar32;
  short sVar34;
  short sVar35;
  ulonglong uVar33;
  ulonglong uVar36;
  ulonglong uVar37;
  short sVar38;
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
  ushort uVar50;
  char cVar5;
  char cVar6;
  byte bVar7;
  
  uVar18 = *(uint *)(unaff_ESI + 8);
  uVar12 = *(uint *)(unaff_EDI + 8);
  uVar9 = uVar18;
  iVar16 = unaff_ESI;
  if (uVar12 < uVar18) {
    uVar9 = uVar12;
    uVar12 = uVar18;
    iVar16 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar9 = uVar9 >> 0x10;
  iVar11 = (uVar12 >> 0x10) - uVar9;
  if (iVar11 != 0 && uVar9 <= uVar12 >> 0x10) {
    DAT_006239c8 = *(int *)(&DAT_01c4354c + unaff_EBX * 4) + uVar9 * 4;
    DAT_00623964 = iVar11 * 4;
    piVar17 = (int *)(*(int *)(&DAT_01c4480c + unaff_EBX * 4) + uVar9 * 4);
    DAT_006239cc = piVar17;
    if (_DAT_01c51d14 == 0x80) {
      iVar16 = *(int *)(iVar16 + 0x28);
      iVar11 = (int)((ulonglong)
                     ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar16) *
                     (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar18 = DAT_00623964;
      DAT_006239ac = iVar16;
      DAT_00623dd8 = iVar11;
      do {
        *piVar17 = iVar16;
        iVar16 = iVar16 + iVar11;
        piVar17 = piVar17 + 1;
        uVar12 = uVar18 - 4;
        bVar3 = 3 < (int)uVar18;
        uVar18 = uVar12;
      } while (uVar12 != 0 && bVar3);
      return;
    }
    if (_DAT_01c51d18 == 5) {
      uVar18 = *(uint *)(iVar16 + 0x18);
      DAT_006239a0 = (uint)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                           (longlong)*(int *)(iVar16 + 0x28));
      uVar18 = *(uint *)(unaff_EDI + 0x18);
      _DAT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_006239a0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar18 = *(uint *)(iVar16 + 0x20);
      DAT_006239a4 = (uint)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                           (longlong)*(int *)(iVar16 + 0x28));
      uVar18 = *(uint *)(unaff_EDI + 0x20);
      _DAT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)
                  (int)((int)(CONCAT44(((int)uVar18 >> 0x1f) << 0x18 | uVar18 >> 8,uVar18 << 0x18) /
                             (longlong)*(int *)(unaff_EDI + 0x28)) - DAT_006239a4) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    else {
      DAT_006239a0 = *(uint *)(iVar16 + 0x18);
      _DAT_00623dd0 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - DAT_006239a0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      DAT_006239a4 = *(uint *)(iVar16 + 0x20);
      _DAT_00623dd4 =
           (int)((ulonglong)
                 ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - DAT_006239a4) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    iVar11 = *(int *)(iVar16 + 0x28);
    DAT_00623dd8 = (int)((ulonglong)
                         ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar11) *
                         (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    DAT_00623e90 = *(int *)(iVar16 + 0x30);
    _DAT_00623e98 =
         (int)((ulonglong)
               ((longlong)(*(int *)(unaff_EDI + 0x30) - DAT_00623e90) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    if ((_DAT_01c51d14 & 0x200) == 0) {
      if ((_DAT_01c51d14 & 4) == 0) {
        if ((_DAT_01c51d14 & 0x10) == 0) {
          uVar39 = psllw(0x000000FF00FF00FF,7);
          uVar44 = 0;
        }
        else {
          uVar18 = _DAT_01c4f024 - 0x100U >> 4;
          if (0xfe < uVar18) {
            uVar18 = 0xff;
          }
          uVar39 = psllw((&DAT_006247d0)[uVar18],7);
          uVar44 = 0;
        }
      }
      else {
        uVar18 = *(int *)(unaff_EDI + 0x10) - 0x100;
        uVar12 = *(int *)(iVar16 + 0x10) - 0x100;
        if (0xfff < uVar18) {
          uVar18 = 0xfff;
        }
        if (0xfff < uVar12) {
          uVar12 = 0xfff;
        }
        uVar9 = uVar12 * 8;
        uVar18 = (uint)((ulonglong)
                        ((longlong)(int)(uVar18 * 8 + uVar12 * -8) *
                        (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
        DAT_00623e50._0_4_ = uVar9 & 0xffff;
        DAT_00623e70._0_4_ = uVar18 & 0xffff;
        uVar39 = ((CONCAT44(DAT_00623e50._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_00623e50._4_4_,uVar9) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_00623e50._4_4_,uVar9) & 0xffffffff0000ffff;
        uVar44 = ((CONCAT44(DAT_00623e70._4_4_,uVar18) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_00623e70._4_4_,uVar18) & 0xffffffff0000ffff) << 0x10 |
                 CONCAT44(DAT_00623e70._4_4_,uVar18) & 0xffffffff0000ffff;
      }
    }
    else {
      uVar10 = *(uint *)(iVar16 + 0x10) >> 1;
      uVar18 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x10) >> 1) - uVar10) *
                      (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      DAT_00623e50._0_4_ = uVar10 & 0xffff;
      DAT_00623e70._0_4_ = uVar18 & 0xffff;
      uVar13 = *(uint *)(iVar16 + 0x38) >> 1;
      uVar12 = (uint)((ulonglong)
                      ((longlong)(int)((*(uint *)(unaff_EDI + 0x38) >> 1) - uVar13) *
                      (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      _DAT_00623e58 = uVar13 & 0xffff;
      _DAT_00623e78 = uVar12 & 0xffff;
      uVar14 = *(uint *)(iVar16 + 0x40) >> 1;
      uVar9 = (uint)((ulonglong)
                     ((longlong)(int)((*(uint *)(unaff_EDI + 0x40) >> 1) - uVar14) *
                     (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      _DAT_00623e60 = uVar14 & 0xffff;
      _DAT_00623e80 = uVar9 & 0xffff;
      uVar39 = ((CONCAT44(DAT_00623e50._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam00623e5c,uVar13) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam00623e64,uVar14) & 0xffffffff0000ffff;
      uVar44 = ((CONCAT44(DAT_00623e70._4_4_,uVar18) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam00623e7c,uVar12) & 0xffffffff0000ffff) << 0x10 |
               CONCAT44(uRam00623e84,uVar9) & 0xffffffff0000ffff;
    }
    uVar18 = 0;
    sVar43 = (short)uVar44;
    sVar45 = (short)(uVar44 >> 0x10);
    sVar46 = (short)(uVar44 >> 0x20);
    sVar47 = (short)(uVar44 >> 0x30);
    DAT_006239ac = iVar11;
    if ((_DAT_01c50934 == 0) && ((_DAT_01c51d14 & 2) == 0)) {
      uVar37 = (ulonglong)_DAT_01c51d1c >> 0x10;
      uVar48 = (ushort)(((uint7)(byte)((ulonglong)_DAT_01c51d1c >> 0x18) << 0x30) >> 0x28);
      uVar44 = (ulonglong)_DAT_01c51d1c >> 8;
      bVar32 = (byte)_DAT_01c51d1c;
      uVar12 = DAT_006239a0;
      uVar9 = DAT_006239a4;
      iVar16 = DAT_00623e90;
      if ((_DAT_01c51d14 & 8) == 0) {
        iVar16 = 0;
        _DAT_00623e98 = 0;
      }
      while( true ) {
        uVar49 = (ushort)(uVar39 >> 0x10);
        uVar50 = (ushort)(uVar39 >> 0x20);
        uVar19 = (ushort)(uVar39 >> 0x30);
        if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar18 + (int)DAT_006239cc) <= iVar11)) {
          if ((_DAT_01c51d14 & 1) == 0) {
            uVar21 = 0x00FFFFFF;
            if ((_DAT_01c51d14 & 0x200) == 0) {
              uVar21 = _DAT_01c4f020;
            }
          }
          else {
            uVar21 = *(uint *)
                      (&DAT_01c4e3d4 +
                      (uint)*(byte *)((uVar12 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                                      (uVar9 >> _DAT_00623ed8 & (uint)_DAT_00623f18) + _DAT_01c50930
                                     ) * 4);
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar21 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar21 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar21 >> 8),(short)uVar21))
                                        >> 0x10),(short)uVar21) & 0xffffffff00ff00ff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar19 >> 3,
                                          CONCAT24(uVar50 >> 3,
                                                   CONCAT22(uVar49 >> 3,(ushort)uVar39 >> 3))));
          sVar38 = (short)uVar22;
          bVar4 = (0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 - (0xff < sVar38);
          sVar38 = (short)((ulonglong)uVar22 >> 0x10);
          cVar5 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x10) -
                  (0xff < sVar38);
          uVar20 = CONCAT11(cVar5,bVar4);
          sVar38 = (short)((ulonglong)uVar22 >> 0x20);
          cVar6 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x20) -
                  (0xff < sVar38);
          sVar38 = (short)((ulonglong)uVar22 >> 0x30);
          bVar7 = (0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar22 >> 0x30) -
                  (0xff < sVar38);
          uVar21 = CONCAT13(bVar7,CONCAT12(cVar6,uVar20));
          if ((_DAT_01c51d14 & 8) != 0) {
            uVar36 = (&DAT_006247d0)[iVar16 >> 8];
            uVar33 = uVar36 ^ 0x000000FF00FF00FF;
            uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar7 << 0x30) >> 0x28),
                                                     CONCAT14(cVar6,uVar21)) >> 0x20),uVar21) >>
                           0x18);
            uVar25 = (uint5)uVar10 & 0xffffffff00;
            uVar23 = (ushort)bVar4 * (short)uVar33 + (ushort)bVar32 * (short)uVar36;
            uVar29 = ((ushort)(CONCAT43(uVar10,CONCAT12(cVar5,uVar20)) >> 0x10) & 0xff) *
                     (short)(uVar33 >> 0x10) + (ushort)(byte)uVar44 * (short)(uVar36 >> 0x10);
            uVar27 = (short)(uVar25 >> 8) * (short)(uVar33 >> 0x20) +
                     (short)CONCAT21(uVar48,(char)uVar37) * (short)(uVar36 >> 0x20);
            uVar30 = (short)(uVar25 >> 0x18) * (short)(uVar33 >> 0x30) +
                     (uVar48 >> 8) * (short)(uVar36 >> 0x30);
            uVar26 = uVar23 >> 8;
            uVar24 = uVar29 >> 8;
            uVar28 = uVar27 >> 8;
            uVar31 = uVar30 >> 8;
            uVar21 = CONCAT13((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                              (0xff < uVar31),
                              CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) -
                                       (0xff < uVar28),
                                       CONCAT11((uVar24 != 0) * (uVar24 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar24),
                                                (uVar26 != 0) * (uVar26 < 0x100) *
                                                (char)(uVar23 >> 8) - (0xff < uVar26))));
          }
          *(uint *)(DAT_006239c8 + uVar18) = uVar21;
          if ((_DAT_01c51d14 & 0x80) != 0) {
            *(int *)((int)DAT_006239cc + uVar18) = iVar11;
          }
        }
        uVar18 = uVar18 + 4;
        if (DAT_00623964 <= uVar18) break;
        uVar12 = uVar12 + _DAT_00623dd0;
        sVar38 = (ushort)uVar39 + sVar43;
        sVar40 = uVar49 + sVar45;
        sVar41 = uVar50 + sVar46;
        sVar42 = uVar19 + sVar47;
        uVar9 = uVar9 + _DAT_00623dd4;
        iVar11 = iVar11 + DAT_00623dd8;
        iVar16 = iVar16 + _DAT_00623e98;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                     sVar40),-(ushort)((short)DAT_00623ddc < sVar38)
                                           ))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar38)));
      }
    }
    else {
      iVar16 = DAT_00623e90;
      if ((_DAT_01c51d14 & 0x100) == 0) {
        iVar16 = DAT_0061b4b8 << 8;
        _DAT_00623e98 = 0;
      }
      uVar12 = DAT_006239a0;
      uVar9 = DAT_006239a4;
      if (_DAT_01c50934 != 0) {
        while( true ) {
          uVar48 = (ushort)(uVar39 >> 0x10);
          uVar49 = (ushort)(uVar39 >> 0x20);
          uVar50 = (ushort)(uVar39 >> 0x30);
          if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar18 + (int)DAT_006239cc) <= iVar11)) {
            pbVar15 = (byte *)((uVar12 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                               (uVar9 >> _DAT_00623ed8 & (uint)_DAT_00623f18) + _DAT_01c50930);
            uVar21 = *(uint *)(&DAT_01c4e3d4 + (uint)*pbVar15 * 4);
            uVar10 = (uint)pbVar15[_DAT_01c50934 - _DAT_01c50930];
            if (uVar10 != 0) {
              uVar2 = *(uint *)(uVar18 + DAT_006239c8);
              uVar19 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
              uVar36 = (ulonglong)
                       CONCAT34((int3)(CONCAT25(uVar19,CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                      >> 0x20),uVar2) & 0xffffffff00ffffff;
              uVar8 = CONCAT51((int5)(uVar36 >> 0x18),(char)((uint)uVar2 >> 8));
              uVar22 = psllw((ulonglong)
                             CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)
                                                  ((uint)uVar21 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar21 >> 0x10),uVar21)) >>
                                                  0x20),uVar21) >> 0x18),(char)((uint)uVar21 >> 8)),
                                      (ushort)(byte)uVar21) & 0xffffffff00ffffff,4);
              uVar22 = pmulhw(uVar22,CONCAT26(uVar50 >> 3,
                                              CONCAT24(uVar49 >> 3,
                                                       CONCAT22(uVar48 >> 3,(ushort)uVar39 >> 3))));
              uVar44 = (&DAT_006247d0)[uVar10 * iVar16 >> 0x10];
              sVar38 = (short)uVar22;
              sVar40 = (short)((ulonglong)uVar22 >> 0x10);
              sVar41 = (short)((ulonglong)uVar22 >> 0x20);
              sVar42 = (short)((ulonglong)uVar22 >> 0x30);
              uVar37 = uVar44 ^ 0x000000FF00FF00FF;
              uVar26 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                               (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar42))
                                << 0x30) >> 0x28);
              uVar23 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 -
                                     (0xff < sVar38));
              sVar42 = (short)(uVar44 >> 0x10);
              sVar34 = (short)(uVar44 >> 0x20);
              sVar35 = (short)(uVar44 >> 0x30);
              uVar29 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                      (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar40));
              sVar38 = (short)CONCAT21(uVar26,(0 < sVar41) * (sVar41 < 0x100) *
                                              (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar41));
              uVar26 = uVar26 >> 8;
              if (_DAT_01c51d0c == 0) {
                uVar22 = paddusw(CONCAT26(uVar26 * sVar35,
                                          CONCAT24(sVar38 * sVar34,
                                                   CONCAT22(uVar29 * sVar42,uVar23 * (short)uVar44))
                                         ),
                                 CONCAT26((uVar19 >> 8) * (short)(uVar37 >> 0x30),
                                          CONCAT24((short)(uVar36 >> 0x20) * (short)(uVar37 >> 0x20)
                                                   ,CONCAT22((short)uVar8 * (short)(uVar37 >> 0x10),
                                                             (ushort)(byte)uVar2 * (short)uVar37))))
                ;
                uVar19 = (ushort)uVar22 >> 8;
                uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                uVar26 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                uVar21 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x38) - (0xff < uVar29),
                                  CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar26),
                                           CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 0x18) -
                                                    (0xff < uVar23),
                                                    (uVar19 != 0) * (uVar19 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 8) - (0xff < uVar19)
                                                   )));
              }
              else {
                uVar22 = psllw(CONCAT62(uVar8,(ushort)(byte)uVar2),8);
                uVar22 = paddusw(CONCAT26(uVar26 * sVar35,
                                          CONCAT24(sVar38 * sVar34,
                                                   CONCAT22(uVar29 * sVar42,uVar23 * (short)uVar44))
                                         ),uVar22);
                uVar19 = (ushort)uVar22 >> 8;
                uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
                uVar26 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
                uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
                uVar21 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x38) - (0xff < uVar29),
                                  CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar26),
                                           CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 0x18) -
                                                    (0xff < uVar23),
                                                    (uVar19 != 0) * (uVar19 < 0x100) *
                                                    (char)((ulonglong)uVar22 >> 8) - (0xff < uVar19)
                                                   )));
              }
              *(uint *)(uVar18 + DAT_006239c8) = uVar21;
              if ((_DAT_01c51d14 & 0x80) != 0) {
                *(int *)(uVar18 + (int)DAT_006239cc) = iVar11;
              }
            }
          }
          uVar18 = uVar18 + 4;
          if (DAT_00623964 <= uVar18) break;
          uVar12 = uVar12 + _DAT_00623dd0;
          sVar38 = (ushort)uVar39 + sVar43;
          sVar40 = uVar48 + sVar45;
          sVar41 = uVar49 + sVar46;
          sVar42 = uVar50 + sVar47;
          uVar9 = uVar9 + _DAT_00623dd4;
          iVar11 = iVar11 + DAT_00623dd8;
          iVar16 = iVar16 + _DAT_00623e98;
          uVar39 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar42),
                            CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar41),
                                     CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                       sVar40),
                                              -(ushort)((short)DAT_00623ddc < sVar38)))) &
                   CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar38)));
        }
        return;
      }
      while( true ) {
        uVar48 = (ushort)(uVar39 >> 0x10);
        uVar49 = (ushort)(uVar39 >> 0x20);
        uVar50 = (ushort)(uVar39 >> 0x30);
        if ((((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar18 + (int)DAT_006239cc) <= iVar11)) &&
           (iVar1 = *(int *)(&DAT_01c4e3d4 +
                            (uint)*(byte *)((uVar12 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                                            (uVar9 >> _DAT_00623ed8 & (uint)_DAT_00623f18) +
                                           _DAT_01c50930) * 4), iVar1 != 0)) {
          uVar44 = 0;
          if ((_DAT_01c51d14 & 0x20) != 0) {
            uVar21 = *(uint *)(uVar18 + DAT_006239c8);
            uVar44 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar21 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar21 >> 0x10),uVar21)) >>
                                                  0x20),uVar21) >> 0x18),(char)((uint)uVar21 >> 8)),
                              (ushort)(byte)uVar21) & 0xffffffff00ffffff;
          }
          uVar22 = psllw((ulonglong)
                         CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)iVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)iVar1 >> 0x10),iVar1)) >>
                                                  0x20),iVar1) >> 0x18),(char)((uint)iVar1 >> 8)),
                                  (ushort)(byte)iVar1) & 0xffffffff00ffffff,4);
          uVar22 = pmulhw(uVar22,CONCAT26(uVar50 >> 3,
                                          CONCAT24(uVar49 >> 3,
                                                   CONCAT22(uVar48 >> 3,(ushort)uVar39 >> 3))));
          uVar37 = (&DAT_006247d0)[iVar16 >> 8];
          sVar38 = (short)uVar22;
          sVar40 = (short)((ulonglong)uVar22 >> 0x10);
          sVar41 = (short)((ulonglong)uVar22 >> 0x20);
          sVar42 = (short)((ulonglong)uVar22 >> 0x30);
          uVar36 = uVar37 ^ 0x000000FF00FF00FF;
          uVar23 = (ushort)(((uint7)(byte)((0 < sVar42) * (sVar42 < 0x100) *
                                           (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar42)) <<
                            0x30) >> 0x28);
          uVar19 = (ushort)(byte)((0 < sVar38) * (sVar38 < 0x100) * (char)uVar22 - (0xff < sVar38));
          sVar42 = (short)(uVar37 >> 0x10);
          sVar34 = (short)(uVar37 >> 0x20);
          sVar35 = (short)(uVar37 >> 0x30);
          uVar26 = (ushort)(byte)((0 < sVar40) * (sVar40 < 0x100) *
                                  (char)((ulonglong)uVar22 >> 0x10) - (0xff < sVar40));
          sVar38 = (short)CONCAT21(uVar23,(0 < sVar41) * (sVar41 < 0x100) *
                                          (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar41));
          uVar23 = uVar23 >> 8;
          if (_DAT_01c51d0c == 0) {
            uVar22 = paddusw(CONCAT26(uVar23 * sVar35,
                                      CONCAT24(sVar38 * sVar34,
                                               CONCAT22(uVar26 * sVar42,uVar19 * (short)uVar37))),
                             CONCAT26((short)(uVar44 >> 0x30) * (short)(uVar36 >> 0x30),
                                      CONCAT24((short)(uVar44 >> 0x20) * (short)(uVar36 >> 0x20),
                                               CONCAT22((short)(uVar44 >> 0x10) *
                                                        (short)(uVar36 >> 0x10),
                                                        (short)uVar44 * (short)uVar36))));
            uVar19 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar21 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar19 != 0) * (uVar19 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar19))));
          }
          else {
            uVar22 = psllw(uVar44,8);
            uVar22 = paddusw(CONCAT26(uVar23 * sVar35,
                                      CONCAT24(sVar38 * sVar34,
                                               CONCAT22(uVar26 * sVar42,uVar19 * (short)uVar37))),
                             uVar22);
            uVar19 = (ushort)uVar22 >> 8;
            uVar23 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
            uVar26 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
            uVar29 = (ushort)((ulonglong)uVar22 >> 0x38);
            uVar21 = CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                              (0xff < uVar29),
                              CONCAT12((uVar26 != 0) * (uVar26 < 0x100) *
                                       (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar26),
                                       CONCAT11((uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar23),
                                                (uVar19 != 0) * (uVar19 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 8) - (0xff < uVar19))));
          }
          *(uint *)(uVar18 + DAT_006239c8) = uVar21;
          if ((_DAT_01c51d14 & 0x80) != 0) {
            *(int *)(uVar18 + (int)DAT_006239cc) = iVar11;
          }
        }
        uVar18 = uVar18 + 4;
        if (DAT_00623964 <= uVar18) break;
        uVar12 = uVar12 + _DAT_00623dd0;
        sVar38 = (ushort)uVar39 + sVar43;
        sVar40 = uVar48 + sVar45;
        sVar41 = uVar49 + sVar46;
        sVar42 = uVar50 + sVar47;
        uVar9 = uVar9 + _DAT_00623dd4;
        iVar11 = iVar11 + DAT_00623dd8;
        iVar16 = iVar16 + _DAT_00623e98;
        uVar39 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar42),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar41),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                     sVar40),-(ushort)((short)DAT_00623ddc < sVar38)
                                           ))) &
                 CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar38)));
      }
    }
  }
  return;
}
