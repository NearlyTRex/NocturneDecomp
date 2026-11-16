// Name: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0057eeac
// Address: 0057eeac
// Address Range: [[0057eeac, 0057ef79] [0057ef80, 0057f1f5] [0057f200, 0057f208] [0057f210, 0057f217] [0057f220, 0057f29d] [0057f2a0, 0057f3f6] [0057f406, 0057f41d] [0057f420, 0057f42b] [0057f430, 0057f472]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0057eeac(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0057eeac(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  SSoftwareEdge *pSVar19;
  int *piVar20;
  ushort uVar21;
  ushort uVar22;
  int iVar23;
  ushort uVar27;
  int iVar24;
  ushort uVar28;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ulonglong uVar26;
  ushort uVar33;
  uint5 uVar29;
  ushort uVar34;
  ushort uVar35;
  byte bVar36;
  ulonglong uVar37;
  short sVar38;
  short sVar41;
  short sVar42;
  ulonglong uVar39;
  short sVar43;
  ulonglong uVar40;
  ulonglong uVar44;
  short sVar46;
  short sVar47;
  short sVar48;
  ulonglong uVar45;
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
  byte bVar5;
  uint uVar25;
  
  uVar10 = (right_vertex->base).x_current;
  uVar13 = (left_vertex->base).x_current;
  uVar8 = uVar10;
  pSVar19 = right_vertex;
  if (uVar13 < uVar10) {
    uVar8 = uVar13;
    uVar13 = uVar10;
    pSVar19 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar8 = uVar8 >> 0x10;
  iVar9 = (uVar13 >> 0x10) - uVar8;
  if (iVar9 != 0 && uVar8 <= uVar13 >> 0x10) {
    DAT_006239c8 = *(int *)(&DAT_01c4354c + scanline_y * 4) + uVar8 * 4;
    DAT_00623964 = iVar9 * 4;
    piVar20 = (int *)(*(int *)(&DAT_01c4480c + scanline_y * 4) + uVar8 * 4);
    DAT_006239cc = piVar20;
    if (_DAT_01c51d14 == 0x80) {
      iVar9 = (pSVar19->base).depth_current;
      iVar18 = (int)((ulonglong)
                     ((longlong)((left_vertex->base).depth_current - iVar9) *
                     (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
      uVar10 = DAT_00623964;
      DAT_006239ac = iVar9;
      DAT_00623dd8 = iVar18;
      do {
        *piVar20 = iVar9;
        iVar9 = iVar9 + iVar18;
        piVar20 = piVar20 + 1;
        uVar13 = uVar10 - 4;
        bVar1 = 3 < (int)uVar10;
        uVar10 = uVar13;
      } while (uVar13 != 0 && bVar1);
      return;
    }
    uVar10 = (pSVar19->base).u_current;
    _DAT_00623dd0 =
         (int)((ulonglong)
               ((longlong)(int)((left_vertex->base).u_current - uVar10) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    uVar13 = (pSVar19->base).v_current;
    _DAT_00623dd4 =
         (int)((ulonglong)
               ((longlong)(int)((left_vertex->base).v_current - uVar13) *
               (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    iVar9 = (pSVar19->base).depth_current;
    DAT_00623dd8 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar9) *
                         (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    if ((_DAT_01c51d14 & 8) == 0) {
      DAT_00623e90 = 0;
      _DAT_00623e98 = 0;
    }
    else {
      DAT_00623e90 = (pSVar19->base).alpha_current;
      _DAT_00623e98 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).alpha_current - DAT_00623e90) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    if ((_DAT_01c51d14 & 0x20) != 0) {
      DAT_00623ea0 = *(int *)&pSVar19->field_0x48;
      DAT_00623ea8._0_4_ =
           (int)((ulonglong)
                 ((longlong)(*(int *)&left_vertex->field_0x48 - DAT_00623ea0) *
                 (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    }
    uVar14 = (uint)(pSVar19->base).red_current >> 1;
    uVar8 = (uint)((ulonglong)
                   ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar14) *
                   (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    DAT_00623e50._0_4_ = uVar14 & 0xffff;
    DAT_00623e70._0_4_ = uVar8 & 0xffff;
    uVar15 = (uint)pSVar19->green_current >> 1;
    uVar11 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar15) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    _DAT_00623e58 = uVar15 & 0xffff;
    _DAT_00623e78 = uVar11 & 0xffff;
    uVar16 = (uint)pSVar19->blue_current >> 1;
    uVar12 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar16) *
                    (longlong)*(int *)(&DAT_01c4f034 + DAT_00623964)) >> 0x20);
    _DAT_00623e60 = uVar16 & 0xffff;
    _DAT_00623e80 = uVar12 & 0xffff;
    uVar50 = ((CONCAT44(DAT_00623e50._4_4_,uVar14) & 0xffffffff0000ffff) << 0x10 |
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
    iVar24 = DAT_00623ea0;
    if ((_DAT_01c51d14 & 0x20) == 0) {
      uVar12 = (uint)_DAT_01c51d1c >> 0x10;
      uVar54 = (ushort)(((uint7)(byte)((uint)_DAT_01c51d1c >> 0x18) << 0x30) >> 0x28);
      uVar11 = (uint)_DAT_01c51d1c >> 8;
      bVar36 = (byte)_DAT_01c51d1c;
      if ((_DAT_01c51d14 & 8) == 0) {
        iVar18 = 0;
        _DAT_00623e98 = 0;
      }
      while( true ) {
        uVar55 = (ushort)(uVar50 >> 0x10);
        uVar56 = (ushort)(uVar50 >> 0x20);
        uVar21 = (ushort)(uVar50 >> 0x30);
        if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar8 + (int)DAT_006239cc) <= iVar9)) {
          if ((_DAT_01c51d14 & 1) == 0) {
            uVar25 = 0x00FFFFFF;
            if ((_DAT_01c51d14 & 0x200) == 0) {
              uVar25 = _DAT_01c4f020;
            }
          }
          else {
            iVar24 = (uVar10 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                     (uVar13 >> _DAT_00623ed8 & (uint)_DAT_00623f18);
            if (_DAT_01c50944 == 0) {
              uVar25 = *(uint *)(&DAT_01c4e3d4 + (uint)*(byte *)(iVar24 + _DAT_01c50930) * 4);
            }
            else {
              uVar25 = *(uint *)(iVar24 * 4 + _DAT_01c50930);
            }
          }
          uVar26 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar25 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar25 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar25 >> 8),(short)uVar25))
                                        >> 0x10),(short)uVar25) & 0xffffffff00ff00ff,4);
          uVar26 = pmulhw(uVar26,CONCAT26(uVar21 >> 3,
                                          CONCAT24(uVar56 >> 3,
                                                   CONCAT22(uVar55 >> 3,(ushort)uVar50 >> 3))));
          sVar49 = (short)uVar26;
          bVar2 = (0 < sVar49) * (sVar49 < 0x100) * (char)uVar26 - (0xff < sVar49);
          sVar49 = (short)((ulonglong)uVar26 >> 0x10);
          cVar3 = (0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar26 >> 0x10) -
                  (0xff < sVar49);
          uVar22 = CONCAT11(cVar3,bVar2);
          sVar49 = (short)((ulonglong)uVar26 >> 0x20);
          cVar4 = (0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar26 >> 0x20) -
                  (0xff < sVar49);
          sVar49 = (short)((ulonglong)uVar26 >> 0x30);
          bVar5 = (0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                  (0xff < sVar49);
          uVar25 = CONCAT13(bVar5,CONCAT12(cVar4,uVar22));
          if ((_DAT_01c51d14 & 8) != 0) {
            uVar37 = (&DAT_006247d0)[iVar18 >> 8];
            uVar40 = uVar37 ^ 0x000000FF00FF00FF;
            uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar5 << 0x30) >> 0x28),
                                                     CONCAT14(cVar4,uVar25)) >> 0x20),uVar25) >>
                           0x18);
            uVar29 = (uint5)uVar14 & 0xffffffff00;
            uVar27 = (ushort)bVar2 * (short)uVar40 + (ushort)bVar36 * (short)uVar37;
            uVar33 = ((ushort)(CONCAT43(uVar14,CONCAT12(cVar3,uVar22)) >> 0x10) & 0xff) *
                     (short)(uVar40 >> 0x10) + (ushort)(byte)uVar11 * (short)(uVar37 >> 0x10);
            uVar31 = (short)(uVar29 >> 8) * (short)(uVar40 >> 0x20) +
                     (short)CONCAT21(uVar54,(char)uVar12) * (short)(uVar37 >> 0x20);
            uVar34 = (short)(uVar29 >> 0x18) * (short)(uVar40 >> 0x30) +
                     (uVar54 >> 8) * (short)(uVar37 >> 0x30);
            uVar30 = uVar27 >> 8;
            uVar28 = uVar33 >> 8;
            uVar32 = uVar31 >> 8;
            uVar35 = uVar34 >> 8;
            uVar25 = CONCAT13((uVar35 != 0) * (uVar35 < 0x100) * (char)(uVar34 >> 8) -
                              (0xff < uVar35),
                              CONCAT12((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                                       (0xff < uVar32),
                                       CONCAT11((uVar28 != 0) * (uVar28 < 0x100) *
                                                (char)(uVar33 >> 8) - (0xff < uVar28),
                                                (uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar27 >> 8) - (0xff < uVar30))));
          }
          *(uint *)(DAT_006239c8 + uVar8) = uVar25;
          if ((_DAT_01c51d14 & 0x80) != 0) {
            *(int *)((int)DAT_006239cc + uVar8) = iVar9;
          }
        }
        uVar8 = uVar8 + 4;
        if (DAT_00623964 <= uVar8) break;
        uVar10 = uVar10 + _DAT_00623dd0;
        sVar49 = (ushort)uVar50 + (short)DAT_00623eb0;
        sVar51 = uVar55 + (short)(DAT_00623eb0 >> 0x10);
        sVar52 = uVar56 + (short)(DAT_00623eb0 >> 0x20);
        sVar53 = uVar21 + (short)(DAT_00623eb0 >> 0x30);
        uVar13 = uVar13 + _DAT_00623dd4;
        iVar9 = iVar9 + DAT_00623dd8;
        iVar18 = iVar18 + _DAT_00623e98;
        uVar50 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar53),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar52),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                     sVar51),-(ushort)((short)DAT_00623ddc < sVar49)
                                           ))) &
                 CONCAT26(sVar53,CONCAT24(sVar52,CONCAT22(sVar51,sVar49)));
      }
    }
    else {
      while( true ) {
        uVar54 = (ushort)(uVar50 >> 0x10);
        uVar55 = (ushort)(uVar50 >> 0x20);
        uVar56 = (ushort)(uVar50 >> 0x30);
        if (((_DAT_01c51d14 & 0x40) == 0) || (*(int *)(uVar8 + (int)DAT_006239cc) <= iVar9)) {
          iVar23 = (uVar10 >> _DAT_00623eb8 & (uint)_DAT_00623ef8) +
                   (uVar13 >> _DAT_00623ed8 & (uint)_DAT_00623f18);
          if (_DAT_01c50944 == 0) {
            pbVar17 = (byte *)(iVar23 + _DAT_01c50930);
            uVar25 = *(uint *)(&DAT_01c4e3d4 + (uint)*pbVar17 * 4);
            uVar37 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar25 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar25 >> 0x10),uVar25)) >>
                                                  0x20),uVar25) >> 0x18),(char)((uint)uVar25 >> 8)),
                              (ushort)(byte)uVar25) & 0xffffffff00ffffff;
            if (_DAT_01c50934 == 0) {
              uVar11 = 0xff;
            }
            else {
              uVar11 = (uint)pbVar17[_DAT_01c50934 - _DAT_01c50930];
            }
          }
          else {
            uVar11 = *(uint *)(iVar23 * 4 + _DAT_01c50930);
            uVar37 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar11 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar11 >> 0x10),uVar11)) >> 0x20),
                                                  uVar11) >> 0x18),(char)(uVar11 >> 8)),
                              (ushort)(byte)uVar11) & 0xffffffff00ffffff;
            uVar11 = uVar11 >> 0x18;
          }
          if (uVar11 != 0) {
            uVar25 = *(uint *)(uVar8 + DAT_006239c8);
            uVar12 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar25 >> 0x18) <<
                                                             0x30) >> 0x28),
                                                     CONCAT14((char)((uint)uVar25 >> 0x10),uVar25))
                                           >> 0x20),uVar25) >> 0x18);
            uVar29 = (uint5)uVar12 & 0xffffffff00;
            uVar40 = (ulonglong)CONCAT41(uVar12,(char)((uint)uVar25 >> 8)) & 0xffffffff00ff;
            uVar30 = (ushort)(byte)uVar25;
            uVar26 = psllw(uVar37,4);
            uVar26 = pmulhw(uVar26,CONCAT26(uVar56 >> 3,
                                            CONCAT24(uVar55 >> 3,
                                                     CONCAT22(uVar54 >> 3,(ushort)uVar50 >> 3))));
            sVar49 = (short)uVar26;
            sVar51 = (short)((ulonglong)uVar26 >> 0x10);
            sVar52 = (short)((ulonglong)uVar26 >> 0x20);
            sVar53 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = (ushort)(((uint7)(byte)((0 < sVar53) * (sVar53 < 0x100) *
                                             (char)((ulonglong)uVar26 >> 0x30) - (0xff < sVar53)) <<
                              0x30) >> 0x28);
            uVar6 = CONCAT21(uVar27,(0 < sVar52) * (sVar52 < 0x100) *
                                    (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar52));
            uVar7 = CONCAT41((int)(((uint7)uVar6 << 0x20) >> 0x18),
                             (0 < sVar51) * (sVar51 < 0x100) * (char)((ulonglong)uVar26 >> 0x10) -
                             (0xff < sVar51));
            uVar21 = (ushort)(byte)((0 < sVar49) * (sVar49 < 0x100) * (char)uVar26 - (0xff < sVar49)
                                   );
            uVar37 = (ulonglong)CONCAT52(uVar7,uVar21);
            if ((_DAT_01c51d14 & 8) != 0) {
              uVar37 = (&DAT_006247d0)[iVar18 >> 8];
              uVar39 = uVar37 ^ 0x000000FF00FF00FF;
              uVar33 = (ushort)(((uint7)(byte)((uint)_DAT_01c51d1c >> 0x18) << 0x30) >> 0x28);
              uVar37 = CONCAT26((ushort)((uVar27 >> 8) * (short)(uVar39 >> 0x30) +
                                        (uVar33 >> 8) * (short)(uVar37 >> 0x30)) >> 8,
                                CONCAT24((ushort)((short)uVar6 * (short)(uVar39 >> 0x20) +
                                                 (short)CONCAT21(uVar33,(char)((uint)_DAT_01c51d1c
                                                                              >> 0x10)) *
                                                 (short)(uVar37 >> 0x20)) >> 8,
                                         CONCAT22((ushort)((short)uVar7 * (short)(uVar39 >> 0x10) +
                                                          (ushort)(byte)((uint)_DAT_01c51d1c >> 8) *
                                                          (short)(uVar37 >> 0x10)) >> 8,
                                                  (ushort)(uVar21 * (short)uVar39 +
                                                          ((ushort)_DAT_01c51d1c & 0xff) *
                                                          (short)uVar37) >> 8)));
            }
            uVar39 = (&DAT_006247d0)[uVar11 * iVar24 >> 0x10];
            uVar44 = uVar39 ^ 0x000000FF00FF00FF;
            sVar49 = (short)uVar37;
            sVar38 = (short)uVar39;
            sVar41 = (short)(uVar39 >> 0x10);
            sVar42 = (short)(uVar39 >> 0x20);
            sVar43 = (short)(uVar39 >> 0x30);
            sVar51 = (short)(uVar37 >> 0x10);
            sVar52 = (short)(uVar37 >> 0x20);
            sVar53 = (short)(uVar37 >> 0x30);
            if (_DAT_01c51d0c == 1) {
              uVar26 = CONCAT26(sVar53 * sVar43,
                                CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar38)))
              ;
              uVar45 = psllw(CONCAT62((int6)uVar40,uVar30),8);
            }
            else {
              sVar46 = (short)uVar40;
              sVar47 = (short)(uVar29 >> 8);
              sVar48 = (short)(uVar29 >> 0x18);
              if (_DAT_01c51d0c == 2) {
                uVar45 = CONCAT26(sVar48 * sVar53,
                                  CONCAT24(sVar47 * sVar52,CONCAT22(sVar46 * sVar51,uVar30 * sVar49)
                                          ));
                uVar26 = CONCAT26(sVar53 * sVar43,
                                  CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar38)
                                          ));
              }
              else if (_DAT_01c51d0c == 3) {
                uVar37 = uVar37 ^ 0x000000FF00FF00FF;
                uVar45 = CONCAT26(sVar48 * (short)(uVar37 >> 0x30),
                                  CONCAT24(sVar47 * (short)(uVar37 >> 0x20),
                                           CONCAT22(sVar46 * (short)(uVar37 >> 0x10),
                                                    uVar30 * (short)uVar37)));
                uVar26 = CONCAT26(sVar53 * sVar43,
                                  CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar38)
                                          ));
              }
              else {
                uVar26 = CONCAT26(sVar53 * sVar43,
                                  CONCAT24(sVar52 * sVar42,CONCAT22(sVar51 * sVar41,sVar49 * sVar38)
                                          ));
                uVar45 = CONCAT26(sVar48 * (short)(uVar44 >> 0x30),
                                  CONCAT24(sVar47 * (short)(uVar44 >> 0x20),
                                           CONCAT22(sVar46 * (short)(uVar44 >> 0x10),
                                                    uVar30 * (short)uVar44)));
              }
            }
            uVar26 = paddusw(uVar26,uVar45);
            uVar21 = (ushort)uVar26 >> 8;
            uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 8;
            uVar30 = (ushort)((ulonglong)uVar26 >> 0x20) >> 8;
            uVar33 = (ushort)((ulonglong)uVar26 >> 0x38);
            *(uint *)(uVar8 + DAT_006239c8) =
                 CONCAT13((uVar33 != 0) * (uVar33 < 0x100) * (char)((ulonglong)uVar26 >> 0x38) -
                          (0xff < uVar33),
                          CONCAT12((uVar30 != 0) * (uVar30 < 0x100) *
                                   (char)((ulonglong)uVar26 >> 0x28) - (0xff < uVar30),
                                   CONCAT11((uVar27 != 0) * (uVar27 < 0x100) *
                                            (char)((ulonglong)uVar26 >> 0x18) - (0xff < uVar27),
                                            (uVar21 != 0) * (uVar21 < 0x100) *
                                            (char)((ulonglong)uVar26 >> 8) - (0xff < uVar21))));
            if ((_DAT_01c51d14 & 0x80) != 0) {
              *(int *)(uVar8 + (int)DAT_006239cc) = iVar9;
            }
          }
        }
        uVar8 = uVar8 + 4;
        if (DAT_00623964 <= uVar8) break;
        uVar10 = uVar10 + _DAT_00623dd0;
        sVar49 = (ushort)uVar50 + (short)DAT_00623eb0;
        sVar51 = uVar54 + (short)(DAT_00623eb0 >> 0x10);
        sVar52 = uVar55 + (short)(DAT_00623eb0 >> 0x20);
        sVar53 = uVar56 + (short)(DAT_00623eb0 >> 0x30);
        uVar13 = uVar13 + _DAT_00623dd4;
        iVar9 = iVar9 + DAT_00623dd8;
        uVar50 = CONCAT26(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x30) < sVar53),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x20) < sVar52),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_00623ddc >> 0x10) <
                                                     sVar51),-(ushort)((short)DAT_00623ddc < sVar49)
                                           ))) &
                 CONCAT26(sVar53,CONCAT24(sVar52,CONCAT22(sVar51,sVar49)));
        iVar18 = iVar18 + _DAT_00623e98;
        iVar24 = iVar24 + (int)DAT_00623ea8;
      }
    }
  }
  return;
}
