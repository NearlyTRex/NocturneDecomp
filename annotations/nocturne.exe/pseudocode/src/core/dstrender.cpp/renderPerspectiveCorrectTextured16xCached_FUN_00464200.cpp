// Name: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200
// Address: 00464200
// Address Range: [[00464200, 004649dc]]
// Convention: unknown
// Signature: void core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(void)

{
  uint uVar1;
  uint uVar2;
  byte uVar7;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte uVar10;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  int unaff_ESI;
  int iVar14;
  int iVar15;
  uint uVar16;
  int unaff_EDI;
  uint *puVar17;
  
  uVar16 = *(uint *)(unaff_ESI + 8);
  uVar3 = *(uint *)(unaff_EDI + 8);
  uVar2 = uVar16;
  iVar14 = unaff_ESI;
  if (uVar3 < uVar16) {
    uVar2 = uVar3;
    uVar3 = uVar16;
    iVar14 = unaff_EDI;
    unaff_EDI = unaff_ESI;
  }
  uVar2 = uVar2 >> 0x10;
  iVar4 = (uVar3 >> 0x10) - uVar2;
  if (iVar4 != 0 && uVar2 <= uVar3 >> 0x10) {
    DAT_005b06e0 = (uint *)(*(int *)(&DAT_01bd2fa0 + unaff_EBX * 4) + uVar2 * 4);
    DAT_005b06e8 = (int *)(*(int *)(&DAT_01bd4260 + unaff_EBX * 4) + uVar2 * 4);
    DAT_005b0680 = *(uint *)(iVar14 + 0x18);
    DAT_005b0698 = *(uint *)(unaff_EDI + 0x18);
    _DAT_005b06a4 =
         (int)((ulonglong)
               ((longlong)(int)(DAT_005b0698 - DAT_005b0680) *
               (longlong)*(int *)(&DAT_01c00c84 + iVar4 * 4)) >> 0x20) << 4;
    DAT_005b0684 = *(uint *)(iVar14 + 0x20);
    DAT_005b069c = *(uint *)(unaff_EDI + 0x20);
    _DAT_005b06a8 =
         (int)((ulonglong)
               ((longlong)(int)(DAT_005b069c - DAT_005b0684) *
               (longlong)*(int *)(&DAT_01c00c84 + iVar4 * 4)) >> 0x20) << 4;
    iVar14 = *(int *)(iVar14 + 0x28);
    DAT_005b06a0 = *(int *)(unaff_EDI + 0x28);
    DAT_005b06ac = (int)((ulonglong)
                         ((longlong)(DAT_005b06a0 - iVar14) *
                         (longlong)*(int *)(&DAT_01c00c84 + iVar4 * 4)) >> 0x20) << 4;
    DAT_005b06b0 = (int)(CONCAT44(((int)DAT_005b0680 >> 0x1f) << 0x18 | DAT_005b0680 >> 8,
                                  DAT_005b0680 << 0x18) / (longlong)iVar14);
    DAT_005b06b4 = (int)(CONCAT44(((int)DAT_005b0684 >> 0x1f) << 0x18 | DAT_005b0684 >> 8,
                                  DAT_005b0684 << 0x18) / (longlong)iVar14);
    puVar17 = &DAT_005b06ec;
    DAT_005b0688 = iVar14;
    DAT_005b06e4 = iVar4;
    while (uVar7 = (byte)((uint)DAT_005b06b0 >> 0x10),
          uVar10 = (byte)((uint)DAT_005b06b4 >> 0x10), -1 < iVar4 + -0x10) {
      DAT_005b068c = DAT_005b0680 + _DAT_005b06a4;
      DAT_005b0690 = DAT_005b0684 + _DAT_005b06a8;
      DAT_005b0694 = DAT_005b0688 + DAT_005b06ac;
      DAT_005b06b8 = (int)(CONCAT44(((int)DAT_005b068c >> 0x1f) << 0x18 | DAT_005b068c >> 8,
                                    DAT_005b068c * 0x1000000) / (longlong)DAT_005b0694);
      DAT_005b06bc = (int)(CONCAT44(((int)DAT_005b0690 >> 0x1f) << 0x18 | DAT_005b0690 >> 8,
                                    DAT_005b0690 * 0x1000000) / (longlong)DAT_005b0694);
      iVar15 = DAT_005b06b8 - DAT_005b06b0 >> 0xc;
      iVar12 = DAT_005b06bc - DAT_005b06b4 >> 0xc;
      iVar5 = (DAT_005b06b0 >> 8) + iVar15;
      iVar8 = (DAT_005b06b4 >> 8) + iVar12;
      *puVar17 = *(uint *)
                  (&DAT_01c00024 + (uint)*(byte *)((uint)CONCAT11(uVar10,uVar7) + _DAT_01c02580) * 4
                  );
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[1] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar5 = iVar6 + iVar15;
      iVar8 = iVar9 + iVar12;
      puVar17[2] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[3] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar5 = iVar6 + iVar15;
      iVar8 = iVar9 + iVar12;
      puVar17[4] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[5] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar5 = iVar6 + iVar15;
      iVar8 = iVar9 + iVar12;
      puVar17[6] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[7] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar5 = iVar6 + iVar15;
      iVar8 = iVar9 + iVar12;
      puVar17[8] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),(char)((uint)iVar6 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[9] = *(uint *)
                    (&DAT_01c00024 +
                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),(char)((uint)iVar5 >> 8)
                                                  ) + _DAT_01c02580) * 4);
      iVar5 = iVar6 + iVar15;
      iVar8 = iVar9 + iVar12;
      puVar17[10] = *(uint *)
                     (&DAT_01c00024 +
                     (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                    (char)((uint)iVar6 >> 8)) + _DAT_01c02580) * 4);
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[0xb] = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                     (char)((uint)iVar5 >> 8)) + _DAT_01c02580) * 4)
      ;
      iVar5 = iVar6 + iVar15;
      iVar8 = iVar9 + iVar12;
      puVar17[0xc] = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                     (char)((uint)iVar6 >> 8)) + _DAT_01c02580) * 4)
      ;
      iVar6 = iVar5 + iVar15;
      iVar9 = iVar8 + iVar12;
      puVar17[0xd] = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar8 >> 8),
                                                     (char)((uint)iVar5 >> 8)) + _DAT_01c02580) * 4)
      ;
      puVar17[0xe] = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                     (char)((uint)iVar6 >> 8)) + _DAT_01c02580) * 4)
      ;
      puVar17[0xf] = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uint)CONCAT11((char)((uint)(iVar9 + iVar12) >> 8),
                                                     (char)((uint)(iVar6 + iVar15) >> 8)) +
                                     _DAT_01c02580) * 4);
      puVar17 = puVar17 + 0x10;
      DAT_005b0680 = DAT_005b068c;
      DAT_005b0684 = DAT_005b0690;
      DAT_005b0688 = DAT_005b0694;
      DAT_005b06b0 = DAT_005b06b8;
      DAT_005b06b4 = DAT_005b06bc;
      iVar4 = iVar4 + -0x10;
    }
    if (-1 < iVar4) {
      DAT_005b06b8 = (int)(CONCAT44(((int)DAT_005b0698 >> 0x1f) << 0x18 | DAT_005b0698 >> 8,
                                    DAT_005b0698 << 0x18) / (longlong)DAT_005b06a0);
      DAT_005b06bc = (int)(CONCAT44(((int)DAT_005b069c >> 0x1f) << 0x18 | DAT_005b069c >> 8,
                                    DAT_005b069c << 0x18) / (longlong)DAT_005b06a0);
      iVar5 = (int)((longlong)(DAT_005b06bc - DAT_005b06b4) *
                    (longlong)*(int *)(&DAT_01c00c84 + iVar4 * 4) >> 0x28);
      uVar16 = (uint)((longlong)(DAT_005b06b8 - DAT_005b06b0) *
                      (longlong)*(int *)(&DAT_01c00c84 + iVar4 * 4) >> 0x28) & 0xffff |
               iVar4 << 0x10;
      iVar4 = (DAT_005b06b0 >> 8) + uVar16;
      iVar6 = (DAT_005b06b4 >> 8) + iVar5;
      *puVar17 = *(uint *)
                  (&DAT_01c00024 + (uint)*(byte *)((uint)CONCAT11(uVar10,uVar7) + _DAT_01c02580) * 4
                  );
      if (-1 < (int)(uVar16 - 0x10000)) {
        iVar8 = iVar4 + (uVar16 - 0x10000);
        iVar9 = iVar6 + iVar5;
        puVar17[1] = *(uint *)
                      (&DAT_01c00024 +
                      (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >> 8),
                                                     (char)((uint)iVar4 >> 8)) + _DAT_01c02580) * 4)
        ;
        if (-1 < (int)(uVar16 - 0x20000)) {
          iVar4 = iVar8 + (uVar16 - 0x20000);
          iVar6 = iVar9 + iVar5;
          puVar17[2] = *(uint *)
                        (&DAT_01c00024 +
                        (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                       (char)((uint)iVar8 >> 8)) + _DAT_01c02580) *
                        4);
          if (-1 < (int)(uVar16 - 0x30000)) {
            iVar8 = iVar4 + (uVar16 - 0x30000);
            iVar9 = iVar6 + iVar5;
            puVar17[3] = *(uint *)
                          (&DAT_01c00024 +
                          (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >> 8),
                                                         (char)((uint)iVar4 >> 8)) + _DAT_01c02580)
                          * 4);
            if (-1 < (int)(uVar16 - 0x40000)) {
              iVar4 = iVar8 + (uVar16 - 0x40000);
              iVar6 = iVar9 + iVar5;
              puVar17[4] = *(uint *)
                            (&DAT_01c00024 +
                            (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                           (char)((uint)iVar8 >> 8)) + _DAT_01c02580
                                           ) * 4);
              if (-1 < (int)(uVar16 - 0x50000)) {
                iVar8 = iVar4 + (uVar16 - 0x50000);
                iVar9 = iVar6 + iVar5;
                puVar17[5] = *(uint *)
                              (&DAT_01c00024 +
                              (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >> 8),
                                                             (char)((uint)iVar4 >> 8)) +
                                             _DAT_01c02580) * 4);
                if (-1 < (int)(uVar16 - 0x60000)) {
                  iVar4 = iVar8 + (uVar16 - 0x60000);
                  iVar6 = iVar9 + iVar5;
                  puVar17[6] = *(uint *)
                                (&DAT_01c00024 +
                                (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                               (char)((uint)iVar8 >> 8)) +
                                               _DAT_01c02580) * 4);
                  if (-1 < (int)(uVar16 - 0x70000)) {
                    iVar8 = iVar4 + (uVar16 - 0x70000);
                    iVar9 = iVar6 + iVar5;
                    puVar17[7] = *(uint *)
                                  (&DAT_01c00024 +
                                  (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >> 8),
                                                                 (char)((uint)iVar4 >> 8)) +
                                                 _DAT_01c02580) * 4);
                    if (-1 < (int)(uVar16 - 0x80000)) {
                      iVar4 = iVar8 + (uVar16 - 0x80000);
                      iVar6 = iVar9 + iVar5;
                      puVar17[8] = *(uint *)
                                    (&DAT_01c00024 +
                                    (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                                   (char)((uint)iVar8 >> 8)) +
                                                   _DAT_01c02580) * 4);
                      if (-1 < (int)(uVar16 - 0x90000)) {
                        iVar8 = iVar4 + (uVar16 - 0x90000);
                        iVar9 = iVar6 + iVar5;
                        puVar17[9] = *(uint *)
                                      (&DAT_01c00024 +
                                      (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >> 8),
                                                                     (char)((uint)iVar4 >> 8)) +
                                                     _DAT_01c02580) * 4);
                        if (-1 < (int)(uVar16 - 0xa0000)) {
                          iVar4 = iVar8 + (uVar16 - 0xa0000);
                          iVar6 = iVar9 + iVar5;
                          puVar17[10] = *(uint *)
                                         (&DAT_01c00024 +
                                         (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8),
                                                                        (char)((uint)iVar8 >> 8)) +
                                                        _DAT_01c02580) * 4);
                          if (-1 < (int)(uVar16 - 0xb0000)) {
                            iVar8 = iVar4 + (uVar16 - 0xb0000);
                            iVar9 = iVar6 + iVar5;
                            puVar17[0xb] = *(uint *)
                                            (&DAT_01c00024 +
                                            (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >> 8),
                                                                           (char)((uint)iVar4 >> 8))
                                                           + _DAT_01c02580) * 4);
                            if (-1 < (int)(uVar16 - 0xc0000)) {
                              iVar4 = iVar8 + (uVar16 - 0xc0000);
                              iVar6 = iVar9 + iVar5;
                              puVar17[0xc] = *(uint *)
                                              (&DAT_01c00024 +
                                              (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9 >> 8
                                                                                   ),(char)((uint)
                                                  iVar8 >> 8)) + _DAT_01c02580) * 4);
                              if (-1 < (int)(uVar16 - 0xd0000)) {
                                iVar8 = iVar4 + (uVar16 - 0xd0000);
                                iVar9 = iVar6 + iVar5;
                                puVar17[0xd] = *(uint *)
                                                (&DAT_01c00024 +
                                                (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar6 >>
                                                                                     8),(char)((uint
                                                  )iVar4 >> 8)) + _DAT_01c02580) * 4);
                                if (-1 < (int)(uVar16 - 0xe0000)) {
                                  puVar17[0xe] = *(uint *)
                                                  (&DAT_01c00024 +
                                                  (uint)*(byte *)((uint)CONCAT11((char)((uint)iVar9
                                                                                       >> 8),
                                                                                 (char)((uint)iVar8
                                                                                       >> 8)) +
                                                                 _DAT_01c02580) * 4);
                                  if (-1 < (int)(uVar16 - 0xf0000)) {
                                    puVar17[0xf] = *(uint *)
                                                    (&DAT_01c00024 +
                                                    (uint)*(byte *)((uint)CONCAT11((char)((uint)(
                                                  iVar9 + iVar5) >> 8),
                                                  (char)(iVar8 + (uVar16 - 0xe0000) >> 8)) +
                                                  _DAT_01c02580) * 4);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar11 = &DAT_005b06ec;
    iVar5 = DAT_005b06ac >> 8;
    iVar6 = iVar14 >> 4;
    iVar4 = DAT_005b06e4;
    piVar13 = DAT_005b06e8;
    puVar17 = DAT_005b06e0;
    DAT_005b0688 = iVar14;
    while (-1 < iVar4 + -4) {
      if (*piVar13 <= iVar6) {
        uVar1 = *puVar11;
        *piVar13 = iVar6;
        *puVar17 = uVar1;
      }
      iVar6 = iVar6 + iVar5;
      if (piVar13[1] <= iVar6) {
        uVar1 = puVar11[1];
        piVar13[1] = iVar6;
        puVar17[1] = uVar1;
      }
      iVar6 = iVar6 + iVar5;
      if (piVar13[2] <= iVar6) {
        uVar1 = puVar11[2];
        piVar13[2] = iVar6;
        puVar17[2] = uVar1;
      }
      iVar6 = iVar6 + iVar5;
      if (piVar13[3] <= iVar6) {
        uVar1 = puVar11[3];
        piVar13[3] = iVar6;
        puVar17[3] = uVar1;
      }
      iVar6 = iVar6 + iVar5;
      puVar11 = puVar11 + 4;
      puVar17 = puVar17 + 4;
      piVar13 = piVar13 + 4;
      iVar4 = iVar4 + -4;
    }
    if (-1 < iVar4) {
      if (*piVar13 <= iVar6) {
        uVar1 = *puVar11;
        *piVar13 = iVar6;
        *puVar17 = uVar1;
      }
      iVar6 = iVar6 + iVar5;
      if (-1 < iVar4 + -1) {
        if (piVar13[1] <= iVar6) {
          uVar1 = puVar11[1];
          piVar13[1] = iVar6;
          puVar17[1] = uVar1;
        }
        iVar6 = iVar6 + iVar5;
        if (-1 < iVar4 + -2) {
          if (piVar13[2] <= iVar6) {
            uVar1 = puVar11[2];
            piVar13[2] = iVar6;
            puVar17[2] = uVar1;
          }
          if ((-1 < iVar4 + -3) && (piVar13[3] <= iVar6 + iVar5)) {
            uVar1 = puVar11[3];
            piVar13[3] = iVar6 + iVar5;
            puVar17[3] = uVar1;
          }
        }
      }
    }
  }
  return;
}
