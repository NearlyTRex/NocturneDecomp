// Name: FUN_0057eeac
// Address: 0057eeac
// Address Range: [[0057eeac, 0057ef79] [0057ef80, 0057f1f5] [0057f200, 0057f208] [0057f210, 0057f217] [0057f220, 0057f29d] [0057f2a0, 0057f3f6] [0057f406, 0057f41d] [0057f420, 0057f42b] [0057f430, 0057f472]]
// Convention: unknown
// Signature: void FUN_0057eeac(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057eeac(void)

{
  bool bVar1;
  byte bVar2;
  uint3 uVar6;
  undefined5 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int unaff_EBX;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  int unaff_ESI;
  int *piVar19;
  int unaff_EDI;
  ushort uVar20;
  ushort uVar21;
  int iVar22;
  ushort uVar26;
  int iVar23;
  ushort uVar27;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ulonglong uVar25;
  ushort uVar32;
  uint5 uVar28;
  ushort uVar33;
  ushort uVar34;
  byte bVar35;
  ulonglong uVar36;
  short sVar37;
  short sVar40;
  short sVar41;
  ulonglong uVar38;
  short sVar42;
  ulonglong uVar39;
  ulonglong uVar43;
  short sVar45;
  short sVar46;
  short sVar47;
  ulonglong uVar44;
  short sVar48;
  short sVar50;
  short sVar51;
  ulonglong uVar49;
  short sVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar24;
  
  uVar10 = *(uint *)(unaff_ESI + 8);
  uVar13 = *(uint *)(unaff_EDI + 8);
  uVar8 = uVar10;
  iVar18 = unaff_ESI;
  if (uVar13 < uVar10) {
    uVar8 = uVar13;
    uVar13 = uVar10;
    iVar18 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar8 = uVar8 >> 0x10;
  iVar9 = (uVar13 >> 0x10) - uVar8;
  if (iVar9 != 0 && uVar8 <= uVar13 >> 0x10) {
    DAT_006239c8 = *(int *)(&DAT_01c4354c + unaff_EBX * 4) + uVar8 * 4;
    DAT_00623964 = iVar9 * 4;
    piVar19 = (int *)(*(int *)(&DAT_01c4480c + unaff_EBX * 4) + uVar8 * 4);
    DAT_006239cc = piVar19;
    if (_DAT_01c51d14 == 0x80) {
      iVar18 = *(int *)(iVar18 + 0x28);
      iVar9 = (int)((ulonglong)
                    ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar18) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar10 = DAT_00623964;
      DAT_006239ac = iVar18;
      DAT_00623dd8 = iVar9;
      do {
        *piVar19 = iVar18;
        iVar18 = iVar18 + iVar9;
        piVar19 = piVar19 + 1;
        uVar13 = uVar10 - 4;
        bVar1 = 3 < (int)uVar10;
        uVar10 = uVar13;
      } while (uVar13 != 0 && bVar1);
      return;
    }
    uVar10 = *(uint *)(iVar18 + 0x18);
    _DAT_00623dd0 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x18) - uVar10) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    uVar13 = *(uint *)(iVar18 + 0x20);
    _DAT_00623dd4 =
         (int)((ulonglong)
               ((longlong)(int)(*(int *)(unaff_EDI + 0x20) - uVar13) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    iVar9 = *(int *)(iVar18 + 0x28);
    DAT_00623dd8 = (int)((ulonglong)
                         ((longlong)(*(int *)(unaff_EDI + 0x28) - iVar9) *
                         (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    if ((_DAT_01c51d14 & 8) == 0) {
      DAT_00623e90 = 0;
      _DAT_00623e98 = 0;
    }
    else {
      DAT_00623e90 = *(int *)(iVar18 + 0x30);
      _DAT_00623e98 =
           (int)((ulonglong)
                 ((longlong)(*(int *)(unaff_EDI + 0x30) - DAT_00623e90) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    if ((_DAT_01c51d14 & 0x20) != 0) {
      DAT_00623ea0 = *(int *)(iVar18 + 0x48);
      DAT_00623ea8._0_4_ =
           (int)((ulonglong)
                 ((longlong)(*(int *)(unaff_EDI + 0x48) - DAT_00623ea0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    uVar14 = *(uint *)(iVar18 + 0x10) >> 1;
    uVar8 = (uint)((ulonglong)
                   ((longlong)(int)((*(uint *)(unaff_EDI + 0x10) >> 1) - uVar14) *
                   (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    DAT_00623e50._0_4_ = uVar14 & 0xffff;
    DAT_00623e70._0_4_ = uVar8 & 0xffff;
    uVar15 = *(uint *)(iVar18 + 0x38) >> 1;
    uVar11 = (uint)((ulonglong)
                    ((longlong)(int)((*(uint *)(unaff_EDI + 0x38) >> 1) - uVar15) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    _DAT_00623e58 = uVar15 & 0xffff;
    _DAT_00623e78 = uVar11 & 0xffff;
    uVar16 = *(uint *)(iVar18 + 0x40) >> 1;
    uVar12 = (uint)((ulonglong)
                    ((longlong)(int)((*(uint *)(unaff_EDI + 0x40) >> 1) - uVar16) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    _DAT_00623e60 = uVar16 & 0xffff;
    _DAT_00623e80 = uVar12 & 0xffff;
    uVar49 = ((CONCAT44(DAT_00623e50._4_4_,uVar14) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(uRam00623e5c,uVar15) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(uRam00623e64,uVar16) & 0xffffffff0000ffff;
    DAT_00623eb0 = ((CONCAT44(DAT_00623e70._4_4_,uVar8) & 0xffffffff0000ffff) << 0x10 |
                   CONCAT44(uRam00623e7c,uVar11) & 0xffffffff0000ffff) << 0x10 |
                   CONCAT44(uRam00623e84,uVar12) & 0xffffffff0000ffff;
    uVar8 = 0;
    iVar18 = DAT_00623e90;
    DAT_006239a0 = uVar10;
    DAT_006239a4 = uVar13;
    DAT_006239ac = iVar9;
    iVar23 = DAT_00623ea0;
    if ((_DAT_01c51d14 & 0x20) == 0) {
      uVar12 = (uint)_DAT_01c51d1c >> 0x10;
      uVar53 = (ushort)(((uint7)(byte)((uint)_DAT_01c51d1c >> 0x18) << 0x30) >> 0x28);
      uVar11 = (uint)_DAT_01c51d1c >> 8;
      bVar35 = (byte)_DAT_01c51d1c;
      if ((_DAT_01c51d14 & 8) == 0) {
        iVar18 = 0;
        _DAT_00623e98 = 0;
      }
      while( true ) {
        uVar54 = (ushort)(uVar49 >> 0x10);
        uVar55 = (ushort)(uVar49 >> 0x20);
        uVar20 = (ushort)(uVar49 >> 0x30);
        if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar8 + (int)DAT_006239cc) <= iVar9)) {
          if ((_DAT_01c51d14 & 1) == 0) {
            uVar24 = 0x00FFFFFF;
            if ((_DAT_01c51d14 & 0x200) == 0) {
              uVar24 = _DAT_01c4f020;
            }
          }
          else {
            iVar23 = (uVar10 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                     (uVar13 >> _DAT_00623ed8 & (uint)_DAT_00623f18);
            if (_DAT_01c50944 == 0) {
              uVar24 = *(uint *)(&DAT_01c4e3d4 + (uint)*(byte *)(iVar23 + _DAT_01c50930) * 4);
            }
            else {
              uVar24 = *(uint *)(iVar23 * 4 + _DAT_01c50930);
            }
          }
          uVar25 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar24 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar24 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar24 >> 8),(short)uVar24))
                                        >> 0x10),(short)uVar24) & 0xffffffff00ff00ff,4);
          uVar25 = pmulhw(uVar25,CONCAT26(uVar20 >> 3,
                                          CONCAT24(uVar55 >> 3,
                                                   CONCAT22(uVar54 >> 3,(ushort)uVar49 >> 3))));
          sVar48 = (short)uVar25;
          bVar2 = (0 < sVar48) * (sVar48 < 0x100) * (char)uVar25 - (0xff < sVar48);
          sVar48 = (short)((ulonglong)uVar25 >> 0x10);
          cVar3 = (0 < sVar48) * (sVar48 < 0x100) * (char)((ulonglong)uVar25 >> 0x10) -
                  (0xff < sVar48);
          uVar21 = CONCAT11(cVar3,bVar2);
          sVar48 = (short)((ulonglong)uVar25 >> 0x20);
          cVar4 = (0 < sVar48) * (sVar48 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                  (0xff < sVar48);
          sVar48 = (short)((ulonglong)uVar25 >> 0x30);
          bVar5 = (0 < sVar48) * (sVar48 < 0x100) * (char)((ulonglong)uVar25 >> 0x30) -
                  (0xff < sVar48);
          uVar24 = CONCAT13(bVar5,CONCAT12(cVar4,uVar21));
          if ((_DAT_01c51d14 & 8) != 0) {
            uVar36 = (&DAT_006247d0)[iVar18 >> 8];
            uVar39 = uVar36 ^ 0x000000FF00FF00FF;
            uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar5 << 0x30) >> 0x28),
                                                     CONCAT14(cVar4,uVar24)) >> 0x20),uVar24) >>
                           0x18);
            uVar28 = (uint5)uVar14 & 0xffffffff00;
            uVar26 = (ushort)bVar2 * (short)uVar39 + (ushort)bVar35 * (short)uVar36;
            uVar32 = ((ushort)(CONCAT43(uVar14,CONCAT12(cVar3,uVar21)) >> 0x10) & 0xff) *
                     (short)(uVar39 >> 0x10) + (ushort)(byte)uVar11 * (short)(uVar36 >> 0x10);
            uVar30 = (short)(uVar28 >> 8) * (short)(uVar39 >> 0x20) +
                     (short)CONCAT21(uVar53,(char)uVar12) * (short)(uVar36 >> 0x20);
            uVar33 = (short)(uVar28 >> 0x18) * (short)(uVar39 >> 0x30) +
                     (uVar53 >> 8) * (short)(uVar36 >> 0x30);
            uVar29 = uVar26 >> 8;
            uVar27 = uVar32 >> 8;
            uVar31 = uVar30 >> 8;
            uVar34 = uVar33 >> 8;
            uVar24 = CONCAT13((uVar34 != 0) * (uVar34 < 0x100) * (char)(uVar33 >> 8) -
                              (0xff < uVar34),
                              CONCAT12((uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                                       (0xff < uVar31),
                                       CONCAT11((uVar27 != 0) * (uVar27 < 0x100) *
                                                (char)(uVar32 >> 8) - (0xff < uVar27),
                                                (uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)(uVar26 >> 8) - (0xff < uVar29))));
          }
          *(uint *)(DAT_006239c8 + uVar8) = uVar24;
          if ((_DAT_01c51d14 & 0x80) != 0) {
            *(int *)((int)DAT_006239cc + uVar8) = iVar9;
          }
        }
        uVar8 = uVar8 + 4;
        if (DAT_00623964 <= uVar8) break;
        uVar10 = uVar10 + _DAT_00623dd0;
        sVar48 = (ushort)uVar49 + (short)DAT_00623eb0;
        sVar50 = uVar54 + (short)(DAT_00623eb0 >> 0x10);
        sVar51 = uVar55 + (short)(DAT_00623eb0 >> 0x20);
        sVar52 = uVar20 + (short)(DAT_00623eb0 >> 0x30);
        uVar13 = uVar13 + _DAT_00623dd4;
        iVar9 = iVar9 + DAT_00623dd8;
        iVar18 = iVar18 + _DAT_00623e98;
        uVar49 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar52),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar51),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                     sVar50),-(ushort)((short)DAT_00623ddc < sVar48)
                                           ))) &
                 CONCAT26(sVar52,CONCAT24(sVar51,CONCAT22(sVar50,sVar48)));
      }
    }
    else {
      while( true ) {
        uVar53 = (ushort)(uVar49 >> 0x10);
        uVar54 = (ushort)(uVar49 >> 0x20);
        uVar55 = (ushort)(uVar49 >> 0x30);
        if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar8 + (int)DAT_006239cc) <= iVar9)) {
          iVar22 = (uVar10 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                   (uVar13 >> _DAT_00623ed8 & (uint)_DAT_00623f18);
          if (_DAT_01c50944 == 0) {
            pbVar17 = (byte *)(iVar22 + _DAT_01c50930);
            uVar24 = *(uint *)(&DAT_01c4e3d4 + (uint)*pbVar17 * 4);
            uVar36 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar24 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar24 >> 0x10),uVar24)) >>
                                                  0x20),uVar24) >> 0x18),(char)((uint)uVar24 >> 8)),
                              (ushort)(byte)uVar24) & 0xffffffff00ffffff;
            if (_DAT_01c50934 == 0) {
              uVar11 = 0xff;
            }
            else {
              uVar11 = (uint)pbVar17[_DAT_01c50934 - _DAT_01c50930];
            }
          }
          else {
            uVar11 = *(uint *)(iVar22 * 4 + _DAT_01c50930);
            uVar36 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar11 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar11 >> 0x10),uVar11)) >> 0x20),
                                                  uVar11) >> 0x18),(char)(uVar11 >> 8)),
                              (ushort)(byte)uVar11) & 0xffffffff00ffffff;
            uVar11 = uVar11 >> 0x18;
          }
          if (uVar11 != 0) {
            uVar24 = *(uint *)(uVar8 + DAT_006239c8);
            uVar12 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar24 >> 0x18) <<
                                                             0x30) >> 0x28),
                                                     CONCAT14((char)((uint)uVar24 >> 0x10),uVar24))
                                           >> 0x20),uVar24) >> 0x18);
            uVar28 = (uint5)uVar12 & 0xffffffff00;
            uVar39 = (ulonglong)CONCAT41(uVar12,(char)((uint)uVar24 >> 8)) & 0xffffffff00ff;
            uVar29 = (ushort)(byte)uVar24;
            uVar25 = psllw(uVar36,4);
            uVar25 = pmulhw(uVar25,CONCAT26(uVar55 >> 3,
                                            CONCAT24(uVar54 >> 3,
                                                     CONCAT22(uVar53 >> 3,(ushort)uVar49 >> 3))));
            sVar48 = (short)uVar25;
            sVar50 = (short)((ulonglong)uVar25 >> 0x10);
            sVar51 = (short)((ulonglong)uVar25 >> 0x20);
            sVar52 = (short)((ulonglong)uVar25 >> 0x30);
            uVar26 = (ushort)(((uint7)(byte)((0 < sVar52) * (sVar52 < 0x100) *
                                             (char)((ulonglong)uVar25 >> 0x30) - (0xff < sVar52)) <<
                              0x30) >> 0x28);
            uVar6 = CONCAT21(uVar26,(0 < sVar51) * (sVar51 < 0x100) *
                                    (char)((ulonglong)uVar25 >> 0x20) - (0xff < sVar51));
            uVar7 = CONCAT41((int)(((uint7)uVar6 << 0x20) >> 0x18),
                             (0 < sVar50) * (sVar50 < 0x100) * (char)((ulonglong)uVar25 >> 0x10) -
                             (0xff < sVar50));
            uVar20 = (ushort)(byte)((0 < sVar48) * (sVar48 < 0x100) * (char)uVar25 - (0xff < sVar48)
                                   );
            uVar36 = (ulonglong)CONCAT52(uVar7,uVar20);
            if ((_DAT_01c51d14 & 8) != 0) {
              uVar36 = (&DAT_006247d0)[iVar18 >> 8];
              uVar38 = uVar36 ^ 0x000000FF00FF00FF;
              uVar32 = (ushort)(((uint7)(byte)((uint)_DAT_01c51d1c >> 0x18) << 0x30) >> 0x28);
              uVar36 = CONCAT26((ushort)((uVar26 >> 8) * (short)(uVar38 >> 0x30) +
                                        (uVar32 >> 8) * (short)(uVar36 >> 0x30)) >> 8,
                                CONCAT24((ushort)((short)uVar6 * (short)(uVar38 >> 0x20) +
                                                 (short)CONCAT21(uVar32,(char)((uint)_DAT_01c51d1c
                                                                              >> 0x10)) *
                                                 (short)(uVar36 >> 0x20)) >> 8,
                                         CONCAT22((ushort)((short)uVar7 * (short)(uVar38 >> 0x10) +
                                                          (ushort)(byte)((uint)_DAT_01c51d1c >> 8) *
                                                          (short)(uVar36 >> 0x10)) >> 8,
                                                  (ushort)(uVar20 * (short)uVar38 +
                                                          ((ushort)_DAT_01c51d1c & 0xff) *
                                                          (short)uVar36) >> 8)));
            }
            uVar38 = (&DAT_006247d0)[uVar11 * iVar23 >> 0x10];
            uVar43 = uVar38 ^ 0x000000FF00FF00FF;
            sVar48 = (short)uVar36;
            sVar37 = (short)uVar38;
            sVar40 = (short)(uVar38 >> 0x10);
            sVar41 = (short)(uVar38 >> 0x20);
            sVar42 = (short)(uVar38 >> 0x30);
            sVar50 = (short)(uVar36 >> 0x10);
            sVar51 = (short)(uVar36 >> 0x20);
            sVar52 = (short)(uVar36 >> 0x30);
            if (_DAT_01c51d0c == 1) {
              uVar25 = CONCAT26(sVar52 * sVar42,
                                CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar37)))
              ;
              uVar44 = psllw(CONCAT62((int6)uVar39,uVar29),8);
            }
            else {
              sVar45 = (short)uVar39;
              sVar46 = (short)(uVar28 >> 8);
              sVar47 = (short)(uVar28 >> 0x18);
              if (_DAT_01c51d0c == 2) {
                uVar44 = CONCAT26(sVar47 * sVar52,
                                  CONCAT24(sVar46 * sVar51,CONCAT22(sVar45 * sVar50,uVar29 * sVar48)
                                          ));
                uVar25 = CONCAT26(sVar52 * sVar42,
                                  CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar37)
                                          ));
              }
              else if (_DAT_01c51d0c == 3) {
                uVar36 = uVar36 ^ 0x000000FF00FF00FF;
                uVar44 = CONCAT26(sVar47 * (short)(uVar36 >> 0x30),
                                  CONCAT24(sVar46 * (short)(uVar36 >> 0x20),
                                           CONCAT22(sVar45 * (short)(uVar36 >> 0x10),
                                                    uVar29 * (short)uVar36)));
                uVar25 = CONCAT26(sVar52 * sVar42,
                                  CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar37)
                                          ));
              }
              else {
                uVar25 = CONCAT26(sVar52 * sVar42,
                                  CONCAT24(sVar51 * sVar41,CONCAT22(sVar50 * sVar40,sVar48 * sVar37)
                                          ));
                uVar44 = CONCAT26(sVar47 * (short)(uVar43 >> 0x30),
                                  CONCAT24(sVar46 * (short)(uVar43 >> 0x20),
                                           CONCAT22(sVar45 * (short)(uVar43 >> 0x10),
                                                    uVar29 * (short)uVar43)));
              }
            }
            uVar25 = paddusw(uVar25,uVar44);
            uVar20 = (ushort)uVar25 >> 8;
            uVar26 = (ushort)((ulonglong)uVar25 >> 0x10) >> 8;
            uVar29 = (ushort)((ulonglong)uVar25 >> 0x20) >> 8;
            uVar32 = (ushort)((ulonglong)uVar25 >> 0x38);
            *(uint *)(uVar8 + DAT_006239c8) =
                 CONCAT13((uVar32 != 0) * (uVar32 < 0x100) * (char)((ulonglong)uVar25 >> 0x38) -
                          (0xff < uVar32),
                          CONCAT12((uVar29 != 0) * (uVar29 < 0x100) *
                                   (char)((ulonglong)uVar25 >> 0x28) - (0xff < uVar29),
                                   CONCAT11((uVar26 != 0) * (uVar26 < 0x100) *
                                            (char)((ulonglong)uVar25 >> 0x18) - (0xff < uVar26),
                                            (uVar20 != 0) * (uVar20 < 0x100) *
                                            (char)((ulonglong)uVar25 >> 8) - (0xff < uVar20))));
            if ((_DAT_01c51d14 & 0x80) != 0) {
              *(int *)(uVar8 + (int)DAT_006239cc) = iVar9;
            }
          }
        }
        uVar8 = uVar8 + 4;
        if (DAT_00623964 <= uVar8) break;
        uVar10 = uVar10 + _DAT_00623dd0;
        sVar48 = (ushort)uVar49 + (short)DAT_00623eb0;
        sVar50 = uVar53 + (short)(DAT_00623eb0 >> 0x10);
        sVar51 = uVar54 + (short)(DAT_00623eb0 >> 0x20);
        sVar52 = uVar55 + (short)(DAT_00623eb0 >> 0x30);
        uVar13 = uVar13 + _DAT_00623dd4;
        iVar9 = iVar9 + DAT_00623dd8;
        uVar49 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar52),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar51),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                     sVar50),-(ushort)((short)DAT_00623ddc < sVar48)
                                           ))) &
                 CONCAT26(sVar52,CONCAT24(sVar51,CONCAT22(sVar50,sVar48)));
        iVar18 = iVar18 + _DAT_00623e98;
        iVar23 = iVar23 + (int)DAT_00623ea8;
      }
    }
  }
  return;
}
