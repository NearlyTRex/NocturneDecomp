// Name: FUN_0045d310
// Address: 0045d310
// Address Range: [[0045d310, 0045d6cd]]
// Convention: unknown
// Signature: void FUN_0045d310(int param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d310(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  int aiStackY_1818 [1483];
  char *pcStack_e0;
  int local_dc;
  int aiStack_d8 [39];
  uint local_3c;
  int aiStack_38 [4];
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  if (2 < param_2) {
    iVar8 = param_2 + -1;
    local_24 = 0;
    local_20 = 0;
    if (0 < param_2) {
      local_28 = param_3;
      piVar9 = (int *)&DAT_01b4d490;
      do {
        iVar7 = param_3[iVar8 * 2] + *(int *)(param_1 + 8);
        iVar3 = *local_28 + *(int *)(param_1 + 8);
        iVar8 = param_3[iVar8 * 2 + 1] + *(int *)(param_1 + 0xc);
        iVar5 = local_28[1] + *(int *)(param_1 + 0xc);
        aiStack_38[3] = iVar3;
        piVar12 = piVar9;
        if (iVar8 != iVar5) {
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            aiStack_38[3] = iVar7;
            iVar6 = iVar8;
            iVar7 = iVar3;
            iVar8 = iVar5;
          }
          if ((*(int *)(param_1 + 0x14) <= iVar6) && (iVar8 <= *(int *)(param_1 + 0x1c))) {
            if (0x27 < local_20) {
              pcStack_e0 = "CDrawSurface::fillPoly - too many edges!";
              _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
              _DAT_01cc4804 = 0x578;
              FUN_004c8440();
            }
            piVar9[2] = iVar7 << 0x10;
            piVar9[1] = iVar6;
            local_20 = local_20 + 1;
            *piVar9 = iVar8;
            piVar9[3] = (int)((longlong)
                              ((((longlong)(aiStack_38[3] - iVar7) & 0xffffffffffffU) >> 0x10) <<
                               0x20 | (longlong)(aiStack_38[3] - iVar7) * 0x10000 & 0xffffffffU) /
                             (longlong)(iVar6 - iVar8));
            piVar12 = piVar9 + 4;
            if (*piVar9 < *(int *)(param_1 + 0x14)) {
              piVar9[2] = piVar9[2] + (*(int *)(param_1 + 0x14) - *piVar9) * piVar9[3];
              *piVar9 = *(int *)(param_1 + 0x14);
            }
            if (*(int *)(param_1 + 0x1c) < piVar9[1]) {
              piVar9[1] = *(int *)(param_1 + 0x1c);
            }
          }
        }
        iVar8 = local_24;
        local_24 = local_24 + 1;
        local_28 = local_28 + 2;
        piVar9 = piVar12;
      } while (local_24 < param_2);
    }
    iVar8 = local_20;
    if (1 < local_20) {
      while (iVar8 = iVar8 + -1, 0 < iVar8) {
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (*(int *)(iVar7 + 0x1b4d4a0) < *(int *)(&DAT_01b4d490 + iVar7)) {
              piVar9 = (int *)(&DAT_01b4d494 + (uint)bVar14 * -8 + iVar7);
              local_3c = *(uint *)(&DAT_01b4d490 + iVar7);
              aiStack_38[(uint)bVar14 * -2] = *piVar9;
              aiStack_38[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] = piVar9[(uint)bVar14 * -2 + 1];
              (aiStack_38 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                   (piVar9 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
              puVar13 = (uint *)(&DAT_01b4d494 + (uint)bVar14 * -8 + iVar7);
              puVar10 = (uint *)(iVar7 + 0x1b4d4a4 + (uint)bVar14 * -8);
              *(uint *)(&DAT_01b4d490 + iVar7) = *(uint *)(iVar7 + 0x1b4d4a0);
              puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
              *puVar13 = *puVar10;
              puVar13[(uint)bVar14 * -2 + 1] = *puVar11;
              (puVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                   puVar11[(uint)bVar14 * -2 + 1];
              piVar9 = (int *)(iVar7 + 0x1b4d4a4 + (uint)bVar14 * -8);
              *(uint *)(iVar7 + 0x1b4d4a0) = local_3c;
              piVar12 = piVar9 + (uint)bVar14 * -2 + 1;
              *piVar9 = aiStack_38[(uint)bVar14 * -2];
              *piVar12 = aiStack_38[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
              piVar12[(uint)bVar14 * -2 + 1] =
                   (aiStack_38 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
            }
            iVar7 = iVar7 + 0x10;
          } while (iVar7 < iVar8 * 0x10);
        }
      }
      iVar7 = 0;
      iVar8 = 0;
      local_14 = _DAT_01b4d490;
      if (0 < local_20) {
        do {
          local_18 = iVar8 << 4;
          do {
            for (; (iVar8 < local_20 && (*(int *)(&DAT_01b4d490 + local_18) <= local_14));
                local_18 = local_18 + 0x10) {
              aiStack_d8[iVar7 + -1] = iVar8;
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + 1;
            }
            local_1c = iVar7 + -1;
            do {
              iVar3 = 0;
              iVar5 = local_1c * 4;
              bVar2 = false;
              if (0 < iVar5) {
                do {
                  if (*(int *)(&DAT_01b4d498 + *(int *)((int)aiStack_d8 + iVar3) * 0x10) <
                      *(int *)(&DAT_01b4d498 + *(int *)((int)aiStack_d8 + iVar3 + -4) * 0x10)) {
                    uVar1 = *(uint *)((int)aiStack_d8 + iVar3 + -4);
                    *(uint *)((int)aiStack_d8 + iVar3 + -4) =
                         *(uint *)((int)aiStack_d8 + iVar3);
                    bVar2 = true;
                    *(uint *)((int)aiStack_d8 + iVar3) = uVar1;
                  }
                  iVar3 = iVar3 + 4;
                } while (iVar3 < iVar5);
              }
            } while (bVar2);
            if (1 < iVar7) {
              iVar3 = 4;
              do {
                pcStack_e0 = (char *)((*(int *)(&DAT_01b4d498 +
                                               *(int *)((int)aiStack_d8 + iVar3 + -4) * 0x10) >>
                                      0x10) - *(int *)(param_1 + 8));
                piVar9 = (int *)((int)&pcStack_e0 + iVar3);
                iVar3 = iVar3 + 8;
                cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
                          (param_1,(*(int *)(&DAT_01b4d498 + *piVar9 * 0x10) >> 0x10) -
                                   *(int *)(param_1 + 8),local_14 - *(int *)(param_1 + 0xc));
              } while (iVar3 < iVar7 * 4);
            }
            iVar3 = 0;
            local_14 = local_14 + 1;
            if (0 < iVar7) {
              iVar5 = 0;
              do {
                iVar4 = *(int *)((int)aiStack_d8 + iVar5 + -4) * 0x10;
                iVar6 = iVar5 + 4;
                if (local_14 < *(int *)(&DAT_01b4d494 + iVar4)) {
                  iVar3 = iVar3 + 1;
                  *(int *)(&DAT_01b4d498 + iVar4) =
                       *(int *)(&DAT_01b4d498 + iVar4) + *(int *)(&DAT_01b4d49c + iVar4);
                }
                else {
                  iVar7 = iVar7 + -1;
                  pcStack_e0 = (char *)((iVar7 - iVar3) * 4);
                  memmove
                            ((int)aiStack_d8 + iVar5 + -4,(int)aiStack_d8 + iVar5);
                  iVar6 = iVar5;
                }
                iVar5 = iVar6;
              } while (iVar3 < iVar7);
            }
          } while (0 < iVar7);
        } while (iVar8 < local_20);
      }
    }
  }
  return;
}
