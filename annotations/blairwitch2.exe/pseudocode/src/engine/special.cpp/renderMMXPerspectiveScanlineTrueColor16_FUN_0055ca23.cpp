// Name: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23
// Address: 0055ca23
// Address Range: [[0055ca23, 0055caf0] [0055cb00, 0055cdb0] [0055cdc0, 0055cdc8] [0055cdd0, 0055cdd7] [0055cde0, 0055ce98] [0055cea0, 0055d031] [0055d046, 0055d05d] [0055d060, 0055d06b] [0055d070, 0055d0b2]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  SSoftwareEdge *pSVar21;
  int *piVar22;
  ushort uVar23;
  ushort uVar24;
  int iVar25;
  ushort uVar29;
  int iVar26;
  uint uVar27;
  ushort uVar30;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ulonglong uVar28;
  ushort uVar35;
  uint5 uVar31;
  ushort uVar36;
  ushort uVar37;
  byte bVar38;
  ulonglong uVar39;
  short sVar40;
  short sVar42;
  short sVar43;
  ulonglong uVar41;
  short sVar44;
  ulonglong uVar45;
  short sVar48;
  short sVar49;
  uint7 uVar46;
  ulonglong uVar47;
  short sVar50;
  short sVar52;
  short sVar53;
  ulonglong uVar51;
  short sVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  char cVar3;
  char cVar4;
  char cVar5;
  
  uVar12 = (right_vertex->base).x_current;
  uVar15 = (left_vertex->base).x_current;
  uVar10 = uVar12;
  pSVar21 = right_vertex;
  if (uVar15 < uVar12) {
    uVar10 = uVar15;
    uVar15 = uVar12;
    pSVar21 = left_vertex;
    left_vertex = right_vertex;
  }
  uVar10 = uVar10 >> 0x10;
  iVar11 = (uVar15 >> 0x10) - uVar10;
  if (iVar11 != 0 && uVar10 <= uVar15 >> 0x10) {
    DAT_0061c378 = *(int *)(&DAT_01c2a38c + scanline_y * 4) + uVar10 * 2;
    DAT_0061c314 = iVar11 * 4;
    piVar22 = (int *)(*(int *)(&DAT_01c2b64c + scanline_y * 4) + uVar10 * 4);
    DAT_0061c37c = piVar22;
    if (_DAT_01c38b54 == 0x80) {
      iVar11 = (pSVar21->base).depth_current;
      iVar20 = (int)((ulonglong)
                     ((longlong)((left_vertex->base).depth_current - iVar11) *
                     (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
      uVar12 = DAT_0061c314;
      DAT_0061c35c = iVar11;
      DAT_0061c788 = iVar20;
      do {
        *piVar22 = iVar11;
        iVar11 = iVar11 + iVar20;
        piVar22 = piVar22 + 1;
        uVar15 = uVar12 - 4;
        bVar1 = 3 < (int)uVar12;
        uVar12 = uVar15;
      } while (uVar15 != 0 && bVar1);
      return;
    }
    uVar12 = (pSVar21->base).u_current;
    _DAT_0061c780 =
         (int)((ulonglong)
               ((longlong)(int)((left_vertex->base).u_current - uVar12) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    uVar15 = (pSVar21->base).v_current;
    _DAT_0061c784 =
         (int)((ulonglong)
               ((longlong)(int)((left_vertex->base).v_current - uVar15) *
               (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    iVar11 = (pSVar21->base).depth_current;
    DAT_0061c788 = (int)((ulonglong)
                         ((longlong)((left_vertex->base).depth_current - iVar11) *
                         (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    if ((_DAT_01c38b54 & 8) == 0) {
      DAT_0061c840 = 0;
      _DAT_0061c848 = 0;
    }
    else {
      DAT_0061c840 = (pSVar21->base).alpha_current;
      _DAT_0061c848 =
           (int)((ulonglong)
                 ((longlong)((left_vertex->base).alpha_current - DAT_0061c840) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    if ((_DAT_01c38b54 & 0x20) != 0) {
      DAT_0061c850 = *(int *)&pSVar21->field_0x48;
      DAT_0061c858._0_4_ =
           (int)((ulonglong)
                 ((longlong)(*(int *)&left_vertex->field_0x48 - DAT_0061c850) *
                 (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    }
    uVar16 = (uint)(pSVar21->base).red_current >> 1;
    uVar10 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)(left_vertex->base).red_current >> 1) - uVar16) *
                    (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    DAT_0061c800._0_4_ = uVar16 & 0xffff;
    DAT_0061c820._0_4_ = uVar10 & 0xffff;
    uVar17 = (uint)pSVar21->green_current >> 1;
    uVar13 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)left_vertex->green_current >> 1) - uVar17) *
                    (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    _DAT_0061c808 = uVar17 & 0xffff;
    _DAT_0061c828 = uVar13 & 0xffff;
    uVar18 = (uint)pSVar21->blue_current >> 1;
    uVar14 = (uint)((ulonglong)
                    ((longlong)(int)(((uint)left_vertex->blue_current >> 1) - uVar18) *
                    (longlong)*(int *)(&DAT_01c35e74 + DAT_0061c314)) >> 0x20);
    _DAT_0061c810 = uVar18 & 0xffff;
    _DAT_0061c830 = uVar14 & 0xffff;
    uVar51 = ((CONCAT44(DAT_0061c800._4_4_,uVar16) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(uRam0061c80c,uVar17) & 0xffffffff0000ffff) << 0x10 |
             CONCAT44(uRam0061c814,uVar18) & 0xffffffff0000ffff;
    DAT_0061c860 = ((CONCAT44(DAT_0061c820._4_4_,uVar10) & 0xffffffff0000ffff) << 0x10 |
                   CONCAT44(uRam0061c82c,uVar13) & 0xffffffff0000ffff) << 0x10 |
                   CONCAT44(uRam0061c834,uVar14) & 0xffffffff0000ffff;
    uVar10 = 0;
    iVar20 = DAT_0061c840;
    DAT_0061c350 = uVar12;
    DAT_0061c354 = uVar15;
    DAT_0061c35c = iVar11;
    iVar26 = DAT_0061c850;
    if ((_DAT_01c38b54 & 0x20) == 0) {
      uVar14 = (uint)_DAT_01c38b5c >> 0x10;
      uVar55 = (ushort)(((uint7)(byte)((uint)_DAT_01c38b5c >> 0x18) << 0x30) >> 0x28);
      uVar13 = (uint)_DAT_01c38b5c >> 8;
      bVar38 = (byte)_DAT_01c38b5c;
      if ((_DAT_01c38b54 & 8) == 0) {
        iVar20 = 0;
        _DAT_0061c848 = 0;
      }
      while( true ) {
        uVar56 = (ushort)(uVar51 >> 0x10);
        uVar57 = (ushort)(uVar51 >> 0x20);
        uVar23 = (ushort)(uVar51 >> 0x30);
        if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar10 + (int)DAT_0061c37c) <= iVar11)) {
          if ((_DAT_01c38b54 & 1) == 0) {
            uVar27 = 0x00FFFFFF;
            if ((_DAT_01c38b54 & 0x200) == 0) {
              uVar27 = _DAT_01c35e60;
            }
          }
          else {
            iVar26 = (uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                     (uVar15 >> _DAT_0061c888 & (uint)_DAT_0061c8c8);
            if (_DAT_01c37784 == 0) {
              uVar27 = *(uint *)(&DAT_01c35214 + (uint)*(byte *)(iVar26 + _DAT_01c37770) * 4);
            }
            else {
              uVar27 = *(uint *)(iVar26 * 4 + _DAT_01c37770);
            }
          }
          uVar28 = psllw((ulonglong)
                         CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  uint)uVar27 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)uVar27 >> 0x10)) << 0x20) >> 0x18),
                                                  CONCAT12((char)((uint)uVar27 >> 8),(short)uVar27))
                                        >> 0x10),(short)uVar27) & 0xffffffff00ff00ff,4);
          uVar28 = pmulhw(uVar28,CONCAT26(uVar23 >> 3,
                                          CONCAT24(uVar57 >> 3,
                                                   CONCAT22(uVar56 >> 3,(ushort)uVar51 >> 3))));
          sVar50 = (short)uVar28;
          bVar2 = (0 < sVar50) * (sVar50 < 0x100) * (char)uVar28 - (0xff < sVar50);
          sVar50 = (short)((ulonglong)uVar28 >> 0x10);
          cVar3 = (0 < sVar50) * (sVar50 < 0x100) * (char)((ulonglong)uVar28 >> 0x10) -
                  (0xff < sVar50);
          uVar24 = CONCAT11(cVar3,bVar2);
          sVar50 = (short)((ulonglong)uVar28 >> 0x20);
          cVar4 = (0 < sVar50) * (sVar50 < 0x100) * (char)((ulonglong)uVar28 >> 0x20) -
                  (0xff < sVar50);
          sVar50 = (short)((ulonglong)uVar28 >> 0x30);
          cVar5 = (0 < sVar50) * (sVar50 < 0x100) * (char)((ulonglong)uVar28 >> 0x30) -
                  (0xff < sVar50);
          uVar16 = CONCAT13(cVar5,CONCAT12(cVar4,uVar24));
          uVar39 = (ulonglong)(uint6)uVar16;
          if ((_DAT_01c38b54 & 8) != 0) {
            uVar39 = (&DAT_0061d180)[iVar20 >> 8];
            uVar41 = uVar39 ^ 0x000000FF00FF00FF;
            uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(CONCAT16(cVar5,(uint6)uVar16) >> 0x28),
                                                     CONCAT14(cVar4,uVar16)) >> 0x20),uVar16) >>
                           0x18);
            uVar31 = (uint5)uVar16 & 0xffff00ff00;
            uVar29 = (ushort)bVar2 * (short)uVar41 + (ushort)bVar38 * (short)uVar39;
            uVar35 = ((ushort)(CONCAT43(uVar16,CONCAT12(cVar3,uVar24)) >> 0x10) & 0xff) *
                     (short)(uVar41 >> 0x10) + (ushort)(byte)uVar13 * (short)(uVar39 >> 0x10);
            uVar33 = (short)(uVar31 >> 8) * (short)(uVar41 >> 0x20) +
                     (short)CONCAT21(uVar55,(char)uVar14) * (short)(uVar39 >> 0x20);
            uVar36 = (short)(uVar31 >> 0x18) * (short)(uVar41 >> 0x30) +
                     (uVar55 >> 8) * (short)(uVar39 >> 0x30);
            uVar32 = uVar29 >> 8;
            uVar30 = uVar35 >> 8;
            uVar34 = uVar33 >> 8;
            uVar37 = uVar36 >> 8;
            uVar39 = (ulonglong)
                     CONCAT13((uVar37 != 0) * (uVar37 < 0x100) * (char)(uVar36 >> 8) -
                              (0xff < uVar37),
                              CONCAT12((uVar34 != 0) * (uVar34 < 0x100) * (char)(uVar33 >> 8) -
                                       (0xff < uVar34),
                                       CONCAT11((uVar30 != 0) * (uVar30 < 0x100) *
                                                (char)(uVar35 >> 8) - (0xff < uVar30),
                                                (uVar32 != 0) * (uVar32 < 0x100) *
                                                (char)(uVar29 >> 8) - (0xff < uVar32))));
          }
          *(ushort *)((uVar10 >> 1) + DAT_0061c378) =
               (ushort)((uVar39 & _DAT_0061c928) >> _DAT_0061c970) |
               (ushort)((uVar39 & _DAT_0061c908) >> _DAT_0061c950) |
               (ushort)((uVar39 & _DAT_0061c8e8) >> _DAT_0061c930);
          if ((_DAT_01c38b54 & 0x80) != 0) {
            *(int *)((int)DAT_0061c37c + uVar10) = iVar11;
          }
        }
        uVar10 = uVar10 + 4;
        if (DAT_0061c314 <= uVar10) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar50 = (ushort)uVar51 + (short)DAT_0061c860;
        sVar52 = uVar56 + (short)(DAT_0061c860 >> 0x10);
        sVar53 = uVar57 + (short)(DAT_0061c860 >> 0x20);
        sVar54 = uVar23 + (short)(DAT_0061c860 >> 0x30);
        uVar15 = uVar15 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        iVar20 = iVar20 + _DAT_0061c848;
        uVar51 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar54),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar53),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar52),-(ushort)((short)DAT_0061c78c < sVar50)
                                           ))) &
                 CONCAT26(sVar54,CONCAT24(sVar53,CONCAT22(sVar52,sVar50)));
      }
    }
    else {
      while( true ) {
        uVar55 = (ushort)(uVar51 >> 0x10);
        uVar56 = (ushort)(uVar51 >> 0x20);
        uVar57 = (ushort)(uVar51 >> 0x30);
        if (((_DAT_01c38b54 & 0x40) == 0) || (*(int *)(uVar10 + (int)DAT_0061c37c) <= iVar11)) {
          iVar25 = (uVar12 >> _DAT_0061c868 & (uint)_DAT_0061c8a8) +
                   (uVar15 >> _DAT_0061c888 & (uint)_DAT_0061c8c8);
          if (_DAT_01c37784 == 0) {
            pbVar19 = (byte *)(iVar25 + _DAT_01c37770);
            uVar27 = *(uint *)(&DAT_01c35214 + (uint)*pbVar19 * 4);
            uVar39 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar27 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar27 >> 0x10),uVar27)) >>
                                                  0x20),uVar27) >> 0x18),(char)((uint)uVar27 >> 8)),
                              (ushort)(byte)uVar27) & 0xffffffff00ffffff;
            if (_DAT_01c37774 == 0) {
              uVar13 = 0xff;
            }
            else {
              uVar13 = (uint)pbVar19[_DAT_01c37774 - _DAT_01c37770];
            }
          }
          else {
            uVar13 = *(uint *)(iVar25 * 4 + _DAT_01c37770);
            uVar39 = (ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar13 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar13 >> 0x10),uVar13)) >> 0x20),
                                                  uVar13) >> 0x18),(char)(uVar13 >> 8)),
                              (ushort)(byte)uVar13) & 0xffffffff00ffffff;
            uVar13 = uVar13 >> 0x18;
          }
          if (uVar13 != 0) {
            uVar14 = (uint)*(ushort *)((uVar10 >> 1) + DAT_0061c378);
            uVar46 = (uint7)((uVar14 & _DAT_0061c8e0) << _DAT_0061c970) |
                     (uint7)((uVar14 & _DAT_0061c8d8) << _DAT_0061c950) |
                     (uint7)((uVar14 & _DAT_0061c8d0) << _DAT_0061c930);
            uVar23 = (ushort)(((uVar46 >> 0x18) << 0x30) >> 0x28);
            uVar6 = CONCAT21(uVar23,(char)(uVar46 >> 0x10));
            uVar7 = CONCAT41((int)(((uint7)uVar6 << 0x20) >> 0x18),(char)(uVar46 >> 8));
            uVar35 = (ushort)(byte)uVar46;
            uVar28 = psllw(uVar39,4);
            uVar28 = pmulhw(uVar28,CONCAT26(uVar57 >> 3,
                                            CONCAT24(uVar56 >> 3,
                                                     CONCAT22(uVar55 >> 3,(ushort)uVar51 >> 3))));
            sVar50 = (short)uVar28;
            sVar52 = (short)((ulonglong)uVar28 >> 0x10);
            sVar53 = (short)((ulonglong)uVar28 >> 0x20);
            sVar54 = (short)((ulonglong)uVar28 >> 0x30);
            uVar32 = (ushort)(((uint7)(byte)((0 < sVar54) * (sVar54 < 0x100) *
                                             (char)((ulonglong)uVar28 >> 0x30) - (0xff < sVar54)) <<
                              0x30) >> 0x28);
            uVar8 = CONCAT21(uVar32,(0 < sVar53) * (sVar53 < 0x100) *
                                    (char)((ulonglong)uVar28 >> 0x20) - (0xff < sVar53));
            uVar9 = CONCAT41((int)(((uint7)uVar8 << 0x20) >> 0x18),
                             (0 < sVar52) * (sVar52 < 0x100) * (char)((ulonglong)uVar28 >> 0x10) -
                             (0xff < sVar52));
            uVar29 = (ushort)(byte)((0 < sVar50) * (sVar50 < 0x100) * (char)uVar28 - (0xff < sVar50)
                                   );
            uVar39 = (ulonglong)CONCAT52(uVar9,uVar29);
            if ((_DAT_01c38b54 & 8) != 0) {
              uVar39 = (&DAT_0061d180)[iVar20 >> 8];
              uVar41 = uVar39 ^ 0x000000FF00FF00FF;
              uVar30 = (ushort)(((uint7)(byte)((uint)_DAT_01c38b5c >> 0x18) << 0x30) >> 0x28);
              uVar39 = CONCAT26((ushort)((uVar32 >> 8) * (short)(uVar41 >> 0x30) +
                                        (uVar30 >> 8) * (short)(uVar39 >> 0x30)) >> 8,
                                CONCAT24((ushort)((short)uVar8 * (short)(uVar41 >> 0x20) +
                                                 (short)CONCAT21(uVar30,(char)((uint)_DAT_01c38b5c
                                                                              >> 0x10)) *
                                                 (short)(uVar39 >> 0x20)) >> 8,
                                         CONCAT22((ushort)((short)uVar9 * (short)(uVar41 >> 0x10) +
                                                          (ushort)(byte)((uint)_DAT_01c38b5c >> 8) *
                                                          (short)(uVar39 >> 0x10)) >> 8,
                                                  (ushort)(uVar29 * (short)uVar41 +
                                                          ((ushort)_DAT_01c38b5c & 0xff) *
                                                          (short)uVar39) >> 8)));
            }
            uVar41 = (&DAT_0061d180)[uVar13 * iVar26 >> 0x10];
            uVar45 = uVar41 ^ 0x000000FF00FF00FF;
            sVar50 = (short)uVar39;
            sVar40 = (short)uVar41;
            sVar42 = (short)(uVar41 >> 0x10);
            sVar43 = (short)(uVar41 >> 0x20);
            sVar44 = (short)(uVar41 >> 0x30);
            sVar52 = (short)(uVar39 >> 0x10);
            sVar53 = (short)(uVar39 >> 0x20);
            sVar54 = (short)(uVar39 >> 0x30);
            if (_DAT_01c38b4c == 1) {
              uVar28 = CONCAT26(sVar54 * sVar44,
                                CONCAT24(sVar53 * sVar43,CONCAT22(sVar52 * sVar42,sVar50 * sVar40)))
              ;
              uVar47 = psllw((ulonglong)CONCAT52(uVar7,uVar35),8);
            }
            else {
              sVar48 = (short)uVar7;
              sVar49 = (short)uVar6;
              uVar23 = uVar23 >> 8;
              if (_DAT_01c38b4c == 2) {
                uVar47 = CONCAT26(uVar23 * sVar54,
                                  CONCAT24(sVar49 * sVar53,CONCAT22(sVar48 * sVar52,uVar35 * sVar50)
                                          ));
                uVar28 = CONCAT26(sVar54 * sVar44,
                                  CONCAT24(sVar53 * sVar43,CONCAT22(sVar52 * sVar42,sVar50 * sVar40)
                                          ));
              }
              else if (_DAT_01c38b4c == 3) {
                uVar39 = uVar39 ^ 0x000000FF00FF00FF;
                uVar47 = CONCAT26(uVar23 * (short)(uVar39 >> 0x30),
                                  CONCAT24(sVar49 * (short)(uVar39 >> 0x20),
                                           CONCAT22(sVar48 * (short)(uVar39 >> 0x10),
                                                    uVar35 * (short)uVar39)));
                uVar28 = CONCAT26(sVar54 * sVar44,
                                  CONCAT24(sVar53 * sVar43,CONCAT22(sVar52 * sVar42,sVar50 * sVar40)
                                          ));
              }
              else {
                uVar28 = CONCAT26(sVar54 * sVar44,
                                  CONCAT24(sVar53 * sVar43,CONCAT22(sVar52 * sVar42,sVar50 * sVar40)
                                          ));
                uVar47 = CONCAT26(uVar23 * (short)(uVar45 >> 0x30),
                                  CONCAT24(sVar49 * (short)(uVar45 >> 0x20),
                                           CONCAT22(sVar48 * (short)(uVar45 >> 0x10),
                                                    uVar35 * (short)uVar45)));
              }
            }
            uVar28 = paddusw(uVar28,uVar47);
            uVar23 = (ushort)uVar28 >> 8;
            uVar29 = (ushort)((ulonglong)uVar28 >> 0x10) >> 8;
            uVar32 = (ushort)((ulonglong)uVar28 >> 0x20) >> 8;
            uVar35 = (ushort)((ulonglong)uVar28 >> 0x38);
            uVar39 = (ulonglong)
                     CONCAT13((uVar35 != 0) * (uVar35 < 0x100) * (char)((ulonglong)uVar28 >> 0x38) -
                              (0xff < uVar35),
                              CONCAT12((uVar32 != 0) * (uVar32 < 0x100) *
                                       (char)((ulonglong)uVar28 >> 0x28) - (0xff < uVar32),
                                       CONCAT11((uVar29 != 0) * (uVar29 < 0x100) *
                                                (char)((ulonglong)uVar28 >> 0x18) - (0xff < uVar29),
                                                (uVar23 != 0) * (uVar23 < 0x100) *
                                                (char)((ulonglong)uVar28 >> 8) - (0xff < uVar23))));
            *(ushort *)((uVar10 >> 1) + DAT_0061c378) =
                 (ushort)((uVar39 & _DAT_0061c928) >> _DAT_0061c970) |
                 (ushort)((uVar39 & _DAT_0061c908) >> _DAT_0061c950) |
                 (ushort)((uVar39 & _DAT_0061c8e8) >> _DAT_0061c930);
            if ((_DAT_01c38b54 & 0x80) != 0) {
              *(int *)(uVar10 + (int)DAT_0061c37c) = iVar11;
            }
          }
        }
        uVar10 = uVar10 + 4;
        if (DAT_0061c314 <= uVar10) break;
        uVar12 = uVar12 + _DAT_0061c780;
        sVar50 = (ushort)uVar51 + (short)DAT_0061c860;
        sVar52 = uVar55 + (short)(DAT_0061c860 >> 0x10);
        sVar53 = uVar56 + (short)(DAT_0061c860 >> 0x20);
        sVar54 = uVar57 + (short)(DAT_0061c860 >> 0x30);
        uVar15 = uVar15 + _DAT_0061c784;
        iVar11 = iVar11 + DAT_0061c788;
        uVar51 = CONCAT26(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x30) < sVar54),
                          CONCAT24(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x20) < sVar53),
                                   CONCAT22(-(ushort)((short)((ulonglong)DAT_0061c78c >> 0x10) <
                                                     sVar52),-(ushort)((short)DAT_0061c78c < sVar50)
                                           ))) &
                 CONCAT26(sVar54,CONCAT24(sVar53,CONCAT22(sVar52,sVar50)));
        iVar20 = iVar20 + _DAT_0061c848;
        iVar26 = iVar26 + (int)DAT_0061c858;
      }
    }
  }
  return;
}
