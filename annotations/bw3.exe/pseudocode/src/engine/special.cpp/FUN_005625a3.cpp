// Name: engine_special.cpp_FUN_005625a3
// Address: 005625a3
// Address Range: [[005625a3, 00562670] [00562680, 00562930] [00562940, 00562948] [00562950, 00562957] [00562960, 00562a18] [00562a20, 00562bb1] [00562bc6, 00562bdd] [00562be0, 00562beb] [00562bf0, 00562c32]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_005625a3(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_005625a3(void)

{
  bool bVar1;
  byte bVar2;
  uint3 uVar6;
  undefined5 uVar7;
  uint3 uVar8;
  undefined5 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int unaff_EBX;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  int unaff_ESI;
  int *piVar21;
  int unaff_EDI;
  ushort uVar22;
  ushort uVar23;
  int iVar24;
  ushort uVar28;
  int iVar25;
  uint uVar26;
  ushort uVar29;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ulonglong uVar27;
  ushort uVar34;
  uint5 uVar30;
  ushort uVar35;
  ushort uVar36;
  byte bVar37;
  ulonglong uVar38;
  short sVar39;
  short sVar41;
  short sVar42;
  ulonglong uVar40;
  short sVar43;
  ulonglong uVar44;
  short sVar47;
  short sVar48;
  uint7 uVar45;
  ulonglong uVar46;
  short sVar49;
  short sVar51;
  short sVar52;
  ulonglong uVar50;
  short sVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  char cVar3;
  char cVar4;
  char cVar5;
  
  uVar12 = *(uint *)(unaff_ESI + 8);
  uVar15 = *(uint *)(unaff_EDI + 8);
  uVar10 = uVar12;
  iVar20 = unaff_ESI;
  if (uVar15 < uVar12) {
    uVar10 = uVar15;
    uVar15 = uVar12;
    iVar20 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar10 = uVar10 >> 0x10;
  iVar11 = (uVar15 >> 0x10) - uVar10;
  if (iVar11 != 0 && uVar10 <= uVar15 >> 0x10) {
    DAT_00604908 = *(int *)(&DAT_01c5faec + unaff_EBX * 4) + uVar10 * 2;
    DAT_006048a4 = iVar11 * 4;
    piVar21 = (int *)(*(int *)(&DAT_01c60dac + unaff_EBX * 4) + uVar10 * 4);
    DAT_0060490c = piVar21;
    if (_DAT_01c6e2b4 == 0x80) {
      iVar20 = *(int *)(iVar20 + 0x28);
      iVar11 = (int)((ulonglong)
                     ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar20) *
                     (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
      uVar12 = DAT_006048a4;
      DAT_006048ec = iVar20;
      DAT_00604d18 = iVar11;
      do {
        *piVar21 = iVar20;
        iVar20 = iVar20 + iVar11;
        piVar21 = piVar21 + 1;
        uVar15 = uVar12 - 4;
        bVar1 = 3 < (int)uVar12;
        uVar12 = uVar15;
      } while (uVar15 != 0 && bVar1);
      return;
    }
    uVar12 = *(uint *)(iVar20 + 0x18);
    _DAT_00604d10 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar12) *
               (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    uVar15 = *(uint *)(iVar20 + 0x20);
    _DAT_00604d14 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar15) *
               (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    iVar11 = *(int *)(iVar20 + 0x28);
    DAT_00604d18 = (int)((ulonglong)
                         ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar11) *
                         (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    if ((_DAT_01c6e2b4 & 8) == 0) {
      DAT_00604dd0 = 0;
      _DAT_00604dd8 = 0;
    }
    else {
      DAT_00604dd0 = *(int *)(iVar20 + 0x30);
      _DAT_00604dd8 =
           (int)((ulonglong)
                 ((longlong)(*(int *)(unaff_EDI + 0x30) - DAT_00604dd0) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    }
    if ((_DAT_01c6e2b4 & 0x20) != 0) {
      DAT_00604de0 = *(int *)(iVar20 + 0x48);
      DAT_00604de8._0_4_ =
           (int)((ulonglong)
                 ((longlong)(*(int *)(unaff_EDI + 0x48) - DAT_00604de0) *
                 (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    }
    uVar16 = *(uint *)(iVar20 + 0x10) >> 1;
    uVar10 = (uint)((ulonglong)
                    ((longlong)(int)((*(uint *)(unaff_EDI + 0x10) >> 1) - uVar16) *
                    (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    DAT_00604d90._0_4_ = uVar16 & 0xffff;
    DAT_00604db0._0_4_ = uVar10 & 0xffff;
    uVar17 = *(uint *)(iVar20 + 0x38) >> 1;
    uVar13 = (uint)((ulonglong)
                    ((longlong)(int)((*(uint *)(unaff_EDI + 0x38) >> 1) - uVar17) *
                    (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    _DAT_00604d98 = uVar17 & 0xffff;
    _DAT_00604db8 = uVar13 & 0xffff;
    uVar18 = *(uint *)(iVar20 + 0x40) >> 1;
    uVar14 = (uint)((ulonglong)
                    ((longlong)(int)((*(uint *)(unaff_EDI + 0x40) >> 1) - uVar18) *
                    (longlong)*(int *)(&DAT_01c6b5d4 + DAT_006048a4)) >> 0x20);
    _DAT_00604da0 = uVar18 & 0xffff;
    _DAT_00604dc0 = uVar14 & 0xffff;
    uVar50 = ((CONCAT44(DAT_00604d90._4_4_,uVar16) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(uRam00604d9c,uVar17) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(uRam00604da4,uVar18) & 0xffffffff0000ffff;
    DAT_00604df0 = ((CONCAT44(DAT_00604db0._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                   CONCAT44(uRam00604dbc,uVar13) & 0xffffffff0000ffff) << 0x10 |
                   CONCAT44(uRam00604dc4,uVar14) & 0xffffffff0000ffff;
    uVar10 = 0;
    iVar20 = DAT_00604dd0;
    DAT_006048e0 = uVar12;
    DAT_006048e4 = uVar15;
    DAT_006048ec = iVar11;
    iVar25 = DAT_00604de0;
    if ((_DAT_01c6e2b4 & 0x20) == 0) {
      uVar14 = (uint)_DAT_01c6e2bc >> 0x10;
      uVar54 = (ushort)(((uint7)(byte)((uint)_DAT_01c6e2bc >> 0x18) << 0x30) >> 0x28);
      uVar13 = (uint)_DAT_01c6e2bc >> 8;
      bVar37 = (byte)_DAT_01c6e2bc;
      if ((_DAT_01c6e2b4 & 8) == 0) {
        iVar20 = 0;
        _DAT_00604dd8 = 0;
      }
      while( true ) {
        uVar55 = (ushort)(uVar50 >> 0x10);
        uVar56 = (ushort)(uVar50 >> 0x20);
        uVar22 = (ushort)(uVar50 >> 0x30);
        if (((_DAT_01c6e2b4 & 0x40) == 0) || (*(int *)(uVar10 + (int)DAT_0060490c) <= iVar11)) {
          if ((_DAT_01c6e2b4 & 1) == 0) {
            uVar26 = 0x00FFFFFF;
            if ((_DAT_01c6e2b4 & 0x200) == 0) {
              uVar26 = _DAT_01c6b5c0;
            }
          }
          else {
            iVar25 = (uVar12 >> _DAT_00604df8 & (uint)_DAT_00604e38) +
                     (uVar15 >> _DAT_00604e18 & (uint)_DAT_00604e58);
            if (_DAT_01c6cee4 == 0) {
              uVar26 = *(uint *)(&DAT_01c6a974 + (uint)*(byte *)(iVar25 + _DAT_01c6ced0) * 4);
            }
            else {
              uVar26 = *(uint *)(iVar25 * 4 + _DAT_01c6ced0);
            }
          }
          uVar27 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar26 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar26 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar26 >> 8),(short)uVar26))
                                        >> 0x10),(short)uVar26) & 0xffffffff00ff00ff,4);
          uVar27 = pmulhw(uVar27,CONCAT26(uVar22 >> 3,
                                          CONCAT24(uVar56 >> 3,
                                                   CONCAT22(uVar55 >> 3,(ushort)uVar50 >> 3))));
          sVar49 = (short)uVar27;
          bVar2 = (0 < sVar49) * (sVar49 < 0x100) * (char)uVar27 - (0xff < sVar49);
          sVar49 = (short)((ulonglong)uVar27 >> 0x10);
          cVar3 = (0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar27 >> 0x10) -
                  (0xff < sVar49);
          uVar23 = CONCAT11(cVar3,bVar2);
          sVar49 = (short)((ulonglong)uVar27 >> 0x20);
          cVar4 = (0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar27 >> 0x20) -
                  (0xff < sVar49);
          sVar49 = (short)((ulonglong)uVar27 >> 0x30);
          cVar5 = (0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar27 >> 0x30) -
                  (0xff < sVar49);
          uVar16 = CONCAT13(cVar5,CONCAT12(cVar4,uVar23));
          uVar38 = (ulonglong)(uint6)uVar16;
          if ((_DAT_01c6e2b4 & 8) != 0) {
            uVar38 = (&DAT_00605710)[iVar20 >> 8];
            uVar40 = uVar38 ^ 0x000000FF00FF00FF;
            uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar5,(uint6)uVar16) >> 0x28),
                                                     CONCAT14(cVar4,uVar16)) >> 0x20),uVar16) >>
                           0x18);
            uVar30 = (uint5)uVar16 & 0xffff00ff00;
            uVar28 = (ushort)bVar2 * (short)uVar40 + (ushort)bVar37 * (short)uVar38;
            uVar34 = ((ushort)(CONCAT43(uVar16,CONCAT12(cVar3,uVar23)) >> 0x10) & 0xff) *
                     (short)(uVar40 >> 0x10) + (ushort)(byte)uVar13 * (short)(uVar38 >> 0x10);
            uVar32 = (short)(uVar30 >> 8) * (short)(uVar40 >> 0x20) +
                     (short)CONCAT21(uVar54,(char)uVar14) * (short)(uVar38 >> 0x20);
            uVar35 = (short)(uVar30 >> 0x18) * (short)(uVar40 >> 0x30) +
                     (uVar54 >> 8) * (short)(uVar38 >> 0x30);
            uVar31 = uVar28 >> 8;
            uVar29 = uVar34 >> 8;
            uVar33 = uVar32 >> 8;
            uVar36 = uVar35 >> 8;
            uVar38 = (ulonglong)
                     CONCAT13((uVar36 != 0) * (uVar36 < 0x100) * (char)(uVar35 >> 8) -
                              (0xff < uVar36),
                              CONCAT12((uVar33 != 0) * (uVar33 < 0x100) * (char)(uVar32 >> 8) -
                                       (0xff < uVar33),
                                       CONCAT11((uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)(uVar34 >> 8) - (0xff < uVar29),
                                                (uVar31 != 0) * (uVar31 < 0x100) *
                                                (char)(uVar28 >> 8) - (0xff < uVar31))));
          }
          *(ushort *)((uVar10 >> 1) + DAT_00604908) =
               (ushort)((uVar38 & _DAT_00604eb8) >> _DAT_00604f00) |
               (ushort)((uVar38 & _DAT_00604e98) >> _DAT_00604ee0) |
               (ushort)((uVar38 & _DAT_00604e78) >> _DAT_00604ec0);
          if ((_DAT_01c6e2b4 & 0x80) != 0) {
            *(int *)((int)DAT_0060490c + uVar10) = iVar11;
          }
        }
        uVar10 = uVar10 + 4;
        if (DAT_006048a4 <= uVar10) break;
        uVar12 = uVar12 + _DAT_00604d10;
        sVar49 = (ushort)uVar50 + (short)DAT_00604df0;
        sVar51 = uVar55 + (short)(DAT_00604df0 >> 0x10);
        sVar52 = uVar56 + (short)(DAT_00604df0 >> 0x20);
        sVar53 = uVar22 + (short)(DAT_00604df0 >> 0x30);
        uVar15 = uVar15 + _DAT_00604d14;
        iVar11 = iVar11 + DAT_00604d18;
        iVar20 = iVar20 + _DAT_00604dd8;
        uVar50 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00604d1c >> 0x30) < sVar53),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00604d1c >> 0x20) < sVar52),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00604d1c >> 0x10) <
                                                     sVar51),-(ushort)((short)DAT_00604d1c < sVar49)
                                           ))) &
                 CONCAT26(sVar53,CONCAT24(sVar52,CONCAT22(sVar51,sVar49)));
      }
    }
    else {
      while( true ) {
        uVar54 = (ushort)(uVar50 >> 0x10);
        uVar55 = (ushort)(uVar50 >> 0x20);
        uVar56 = (ushort)(uVar50 >> 0x30);
        if (((_DAT_01c6e2b4 & 0x40) == 0) || (*(int *)(uVar10 + (int)DAT_0060490c) <= iVar11)) {
          iVar24 = (uVar12 >> _DAT_00604df8 & (uint)_DAT_00604e38) +
                   (uVar15 >> _DAT_00604e18 & (uint)_DAT_00604e58);
          if (_DAT_01c6cee4 == 0) {
            pbVar19 = (byte *)(iVar24 + _DAT_01c6ced0);
            uVar26 = *(uint *)(&DAT_01c6a974 + (uint)*pbVar19 * 4);
            uVar38 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar26 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar26 >> 0x10),uVar26)) >>
                                                  0x20),uVar26) >> 0x18),(char)((uint)uVar26 >> 8)),
                              (ushort)(byte)uVar26) & 0xffffffff00ffffff;
            if (_DAT_01c6ced4 == 0) {
              uVar13 = 0xff;
            }
            else {
              uVar13 = (uint)pbVar19[_DAT_01c6ced4 - _DAT_01c6ced0];
            }
          }
          else {
            uVar13 = *(uint *)(iVar24 * 4 + _DAT_01c6ced0);
            uVar38 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar13 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar13 >> 0x10),uVar13)) >> 0x20),
                                                  uVar13) >> 0x18),(char)(uVar13 >> 8)),
                              (ushort)(byte)uVar13) & 0xffffffff00ffffff;
            uVar13 = uVar13 >> 0x18;
          }
          if (uVar13 != 0) {
            uVar14 = (uint)*(ushort *)((uVar10 >> 1) + DAT_00604908);
            uVar45 = (uint7)((uVar14 & _DAT_00604e70) << _DAT_00604f00) |
                     (uint7)((uVar14 & _DAT_00604e68) << _DAT_00604ee0) |
                     (uint7)((uVar14 & _DAT_00604e60) << _DAT_00604ec0);
            uVar22 = (ushort)(((uVar45 >> 0x18) << 0x30) >> 0x28);
            uVar6 = CONCAT21(uVar22,(char)(uVar45 >> 0x10));
            uVar7 = CONCAT41((int)(((uint7)uVar6 << 0x20) >> 0x18),(char)(uVar45 >> 8));
            uVar34 = (ushort)(byte)uVar45;
            uVar27 = psllw(uVar38,4);
            uVar27 = pmulhw(uVar27,CONCAT26(uVar56 >> 3,
                                            CONCAT24(uVar55 >> 3,
                                                     CONCAT22(uVar54 >> 3,(ushort)uVar50 >> 3))));
            sVar49 = (short)uVar27;
            sVar51 = (short)((ulonglong)uVar27 >> 0x10);
            sVar52 = (short)((ulonglong)uVar27 >> 0x20);
            sVar53 = (short)((ulonglong)uVar27 >> 0x30);
            uVar31 = (ushort)(((uint7)(byte)((0 < sVar53) * (sVar53 < 0x100) *
                                             (char)((ulonglong)uVar27 >> 0x30) - (0xff < sVar53)) <<
                              0x30) >> 0x28);
            uVar8 = CONCAT21(uVar31,(0 < sVar52) * (sVar52 < 0x100) *
                                    (char)((ulonglong)uVar27 >> 0x20) - (0xff < sVar52));
            uVar9 = CONCAT41((int)(((uint7)uVar8 << 0x20) >> 0x18),
                             (0 < sVar51) * (sVar51 < 0x100) * (char)((ulonglong)uVar27 >> 0x10) -
                             (0xff < sVar51));
            uVar28 = (ushort)(byte)((0 < sVar49) * (sVar49 < 0x100) * (char)uVar27 - (0xff < sVar49)
                                   );
            uVar38 = (ulonglong)CONCAT52(uVar9,uVar28);
            if ((_DAT_01c6e2b4 & 8) != 0) {
              uVar38 = (&DAT_00605710)[iVar20 >> 8];
              uVar40 = uVar38 ^ 0x000000FF00FF00FF;
              uVar29 = (ushort)(((uint7)(byte)((uint)_DAT_01c6e2bc >> 0x18) << 0x30) >> 0x28);
              uVar38 = CONCAT26((ushort)((uVar31 >> 8) * (short)(uVar40 >> 0x30) +
                                        (uVar29 >> 8) * (short)(uVar38 >> 0x30)) >> 8,
                                CONCAT24((ushort)((short)uVar8 * (short)(uVar40 >> 0x20) +
                                                 (short)CONCAT21(uVar29,(char)((uint)_DAT_01c6e2bc
                                                                              >> 0x10)) *
                                                 (short)(uVar38 >> 0x20)) >> 8,
                                         CONCAT22((ushort)((short)uVar9 * (short)(uVar40 >> 0x10) +
                                                          (ushort)(byte)((uint)_DAT_01c6e2bc >> 8) *
                                                          (short)(uVar38 >> 0x10)) >> 8,
                                                  (ushort)(uVar28 * (short)uVar40 +
                                                          ((ushort)_DAT_01c6e2bc & 0xff) *
                                                          (short)uVar38) >> 8)));
            }
            uVar40 = (&DAT_00605710)[uVar13 * iVar25 >> 0x10];
            uVar44 = uVar40 ^ 0x000000FF00FF00FF;
            sVar49 = (short)uVar38;
            sVar39 = (short)uVar40;
            sVar41 = (short)(uVar40 >> 0x10);
            sVar42 = (short)(uVar40 >> 0x20);
            sVar43 = (short)(uVar40 >> 0x30);
            sVar51 = (short)(uVar38 >> 0x10);
            sVar52 = (short)(uVar38 >> 0x20);
            sVar53 = (short)(uVar38 >> 0x30);
            if (_DAT_01c6e2ac == 1) {
              uVar27 = CONCAT26(sVar53 * sVar43,
                                CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar39)))
              ;
              uVar46 = psllw((ulonglong)CONCAT52(uVar7,uVar34),8);
            }
            else {
              sVar47 = (short)uVar7;
              sVar48 = (short)uVar6;
              uVar22 = uVar22 >> 8;
              if (_DAT_01c6e2ac == 2) {
                uVar46 = CONCAT26(uVar22 * sVar53,
                                  CONCAT24(sVar48 * sVar52,CONCAT22(sVar47 * sVar51,uVar34 * sVar49)
                                          ));
                uVar27 = CONCAT26(sVar53 * sVar43,
                                  CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar39)
                                          ));
              }
              else if (_DAT_01c6e2ac == 3) {
                uVar38 = uVar38 ^ 0x000000FF00FF00FF;
                uVar46 = CONCAT26(uVar22 * (short)(uVar38 >> 0x30),
                                  CONCAT24(sVar48 * (short)(uVar38 >> 0x20),
                                           CONCAT22(sVar47 * (short)(uVar38 >> 0x10),
                                                    uVar34 * (short)uVar38)));
                uVar27 = CONCAT26(sVar53 * sVar43,
                                  CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar39)
                                          ));
              }
              else {
                uVar27 = CONCAT26(sVar53 * sVar43,
                                  CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar39)
                                          ));
                uVar46 = CONCAT26(uVar22 * (short)(uVar44 >> 0x30),
                                  CONCAT24(sVar48 * (short)(uVar44 >> 0x20),
                                           CONCAT22(sVar47 * (short)(uVar44 >> 0x10),
                                                    uVar34 * (short)uVar44)));
              }
            }
            uVar27 = paddusw(uVar27,uVar46);
            uVar22 = (ushort)uVar27 >> 8;
            uVar28 = (ushort)((ulonglong)uVar27 >> 0x10) >> 8;
            uVar31 = (ushort)((ulonglong)uVar27 >> 0x20) >> 8;
            uVar34 = (ushort)((ulonglong)uVar27 >> 0x38);
            uVar38 = (ulonglong)
                     CONCAT13((uVar34 != 0) * (uVar34 < 0x100) * (char)((ulonglong)uVar27 >> 0x38) -
                              (0xff < uVar34),
                              CONCAT12((uVar31 != 0) * (uVar31 < 0x100) *
                                       (char)((ulonglong)uVar27 >> 0x28) - (0xff < uVar31),
                                       CONCAT11((uVar28 != 0) * (uVar28 < 0x100) *
                                                (char)((ulonglong)uVar27 >> 0x18) - (0xff < uVar28),
                                                (uVar22 != 0) * (uVar22 < 0x100) *
                                                (char)((ulonglong)uVar27 >> 8) - (0xff < uVar22))));
            *(ushort *)((uVar10 >> 1) + DAT_00604908) =
                 (ushort)((uVar38 & _DAT_00604eb8) >> _DAT_00604f00) |
                 (ushort)((uVar38 & _DAT_00604e98) >> _DAT_00604ee0) |
                 (ushort)((uVar38 & _DAT_00604e78) >> _DAT_00604ec0);
            if ((_DAT_01c6e2b4 & 0x80) != 0) {
              *(int *)(uVar10 + (int)DAT_0060490c) = iVar11;
            }
          }
        }
        uVar10 = uVar10 + 4;
        if (DAT_006048a4 <= uVar10) break;
        uVar12 = uVar12 + _DAT_00604d10;
        sVar49 = (ushort)uVar50 + (short)DAT_00604df0;
        sVar51 = uVar54 + (short)(DAT_00604df0 >> 0x10);
        sVar52 = uVar55 + (short)(DAT_00604df0 >> 0x20);
        sVar53 = uVar56 + (short)(DAT_00604df0 >> 0x30);
        uVar15 = uVar15 + _DAT_00604d14;
        iVar11 = iVar11 + DAT_00604d18;
        uVar50 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00604d1c >> 0x30) < sVar53),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00604d1c >> 0x20) < sVar52),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00604d1c >> 0x10) <
                                                     sVar51),-(ushort)((short)DAT_00604d1c < sVar49)
                                           ))) &
                 CONCAT26(sVar53,CONCAT24(sVar52,CONCAT22(sVar51,sVar49)));
        iVar20 = iVar20 + _DAT_00604dd8;
        iVar25 = iVar25 + (int)DAT_00604de8;
      }
    }
  }
  return;
}
