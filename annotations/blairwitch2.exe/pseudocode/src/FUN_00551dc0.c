// Name: FUN_00551dc0
// Address: 00551dc0
// Address Range: [[00551dc0, 005523cc]]
// Convention: unknown
// Signature: short * FUN_00551dc0(int param_1,int param_2,short *param_3,int param_4,short *param_5,int param_6,int param_7,short *param_8,int param_9,short *param_10,int param_11)

#include "nocturne.h"

short * FUN_00551dc0(int param_1,int param_2,short *param_3,int param_4,short *param_5,int param_6,int param_7,short *param_8,int param_9,short *param_10,int param_11)

{
  byte uVar1;
  float fVar2;
  short *psVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  byte *puVar7;
  float10 fVar8;
  float10 fVar9;
  ulonglong uVar10;
  byte local_18;
  
  if (0 < param_11) {
    if (((param_3 == param_8) && (param_1 == param_6)) && (param_2 == param_7)) {
      if (param_5 != param_10) {
        param_8 = (short *)(((int)((param_1 + (param_1 >> 0x1f) * -8) -
                                  (uint)((param_1 >> 0x1f) << 2 < 0)) >> 3) * param_11 * param_7);
        psVar3 = param_10;
        for (uVar5 = (uint)param_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)psVar3 = *(uint *)param_5;
          param_5 = param_5 + 2;
          psVar3 = psVar3 + 2;
        }
        for (uVar5 = (uint)param_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)psVar3 = (char)*param_5;
          param_5 = (short *)((int)param_5 + 1);
          psVar3 = (short *)((int)psVar3 + 1);
        }
      }
    }
    else {
      fVar2 = (float)(int)param_3 / (float)(int)param_8;
      param_8 = param_5;
      if (param_1 == 8) {
        if (param_6 == 8) {
          if (param_2 == 1) {
            if (param_7 == 1) {
              iVar6 = 0;
              if (0 < param_11) {
                fVar8 = (float10)fVar2;
                psVar3 = param_10;
                do {
                  fVar9 = (float10)iVar6 * fVar8;
                  uVar10 = FUN_005b7ff0();
                  param_8 = (short *)uVar10;
                  iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
                  *(byte *)psVar3 = *(byte *)((int)ROUND(fVar9) + (int)param_8);
                  psVar3 = (short *)((int)psVar3 + 1);
                } while (iVar6 < param_11);
              }
            }
            else {
              iVar6 = 0;
              if (0 < param_11) {
                fVar8 = (float10)fVar2;
                do {
                  fVar9 = (float10)iVar6 * fVar8;
                  uVar10 = FUN_005b7ff0();
                  puVar7 = (byte *)((ulonglong)uVar10 >> 0x20);
                  param_8 = (short *)uVar10;
                  uVar1 = *(byte *)((int)ROUND(fVar9) + (int)param_8);
                  puVar7[1] = uVar1;
                  iVar6 = iVar6 + 1;
                  *puVar7 = uVar1;
                } while (iVar6 < param_11);
              }
            }
          }
          else if (param_7 == 1) {
            iVar6 = 0;
            if (0 < param_11) {
              fVar8 = (float10)fVar2;
              psVar3 = param_10;
              do {
                fVar9 = (float10)iVar6 * fVar8;
                uVar10 = FUN_005b7ff0();
                param_8 = (short *)uVar10;
                local_18 = (byte)
                           ((int)(char)param_8[(int)ROUND(fVar9)] +
                            (int)*(char *)((int)param_8 + (int)ROUND(fVar9) * 2 + 1) >> 1);
                iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
                *(byte *)psVar3 = local_18;
                psVar3 = (short *)((int)psVar3 + 1);
              } while (iVar6 < param_11);
            }
          }
          else {
            iVar6 = 0;
            if (0 < param_11) {
              fVar8 = (float10)fVar2;
              psVar3 = param_10;
              do {
                fVar9 = (float10)iVar6 * fVar8;
                uVar10 = FUN_005b7ff0();
                param_8 = (short *)uVar10;
                *(char *)psVar3 = (char)param_8[(int)ROUND(fVar9)];
                iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
                *(byte *)((int)psVar3 + 1) =
                     *(byte *)((int)param_8 + (int)ROUND(fVar9) * 2 + 1);
                psVar3 = psVar3 + 1;
              } while (iVar6 < param_11);
            }
          }
        }
        else if (param_2 == 1) {
          if (param_7 == 1) {
            iVar6 = 0;
            if (0 < param_11) {
              fVar8 = (float10)fVar2;
              psVar3 = param_10;
              do {
                fVar9 = (float10)iVar6 * fVar8;
                uVar10 = FUN_005b7ff0();
                param_8 = (short *)uVar10;
                iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
                *psVar3 = (short)*(char *)((int)ROUND(fVar9) + (int)param_8) << 8;
                psVar3 = psVar3 + 1;
              } while (iVar6 < param_11);
            }
          }
          else {
            iVar6 = 0;
            if (0 < param_11) {
              fVar8 = (float10)fVar2;
              do {
                fVar9 = (float10)iVar6 * fVar8;
                uVar10 = FUN_005b7ff0();
                psVar3 = (short *)((ulonglong)uVar10 >> 0x20);
                param_8 = (short *)uVar10;
                sVar4 = (short)*(char *)((int)ROUND(fVar9) + (int)param_8) << 8;
                psVar3[1] = sVar4;
                iVar6 = iVar6 + 1;
                *psVar3 = sVar4;
              } while (iVar6 < param_11);
            }
          }
        }
        else if (param_7 == 1) {
          iVar6 = 0;
          if (0 < param_11) {
            fVar8 = (float10)fVar2;
            psVar3 = param_10;
            do {
              fVar9 = (float10)iVar6 * fVar8;
              uVar10 = FUN_005b7ff0();
              param_8 = (short *)uVar10;
              iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
              *psVar3 = (char)param_8[(int)ROUND(fVar9)] * 0x80 +
                        *(char *)((int)param_8 + (int)ROUND(fVar9) * 2 + 1) * 0x80;
              psVar3 = psVar3 + 1;
            } while (iVar6 < param_11);
          }
        }
        else {
          iVar6 = 0;
          if (0 < param_11) {
            fVar8 = (float10)fVar2;
            do {
              fVar9 = (float10)iVar6 * fVar8;
              uVar10 = FUN_005b7ff0();
              psVar3 = (short *)((ulonglong)uVar10 >> 0x20);
              param_8 = (short *)uVar10;
              *psVar3 = (short)(char)param_8[(int)ROUND(fVar9)] << 8;
              iVar6 = iVar6 + 1;
              psVar3[1] = (short)*(char *)((int)param_8 + (int)ROUND(fVar9) * 2 + 1) << 8;
            } while (iVar6 < param_11);
          }
        }
      }
      else if (param_6 == 8) {
        if (param_2 == 1) {
          if (param_7 == 1) {
            iVar6 = 0;
            if (0 < param_11) {
              fVar8 = (float10)fVar2;
              psVar3 = param_10;
              do {
                fVar9 = (float10)iVar6 * fVar8;
                uVar10 = FUN_005b7ff0();
                param_8 = (short *)uVar10;
                iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
                *(char *)psVar3 = (char)((ushort)param_8[(int)ROUND(fVar9)] >> 8);
                psVar3 = (short *)((int)psVar3 + 1);
              } while (iVar6 < param_11);
            }
          }
          else {
            iVar6 = 0;
            if (0 < param_11) {
              fVar8 = (float10)fVar2;
              do {
                fVar9 = (float10)iVar6 * fVar8;
                uVar10 = FUN_005b7ff0();
                puVar7 = (byte *)((ulonglong)uVar10 >> 0x20);
                param_8 = (short *)uVar10;
                local_18 = (byte)((ushort)param_8[(int)ROUND(fVar9)] >> 8);
                puVar7[1] = local_18;
                iVar6 = iVar6 + 1;
                *puVar7 = local_18;
              } while (iVar6 < param_11);
            }
          }
        }
        else if (param_7 == 1) {
          iVar6 = 0;
          if (0 < param_11) {
            fVar8 = (float10)fVar2;
            psVar3 = param_10;
            do {
              fVar9 = (float10)iVar6 * fVar8;
              uVar10 = FUN_005b7ff0();
              param_8 = (short *)uVar10;
              iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
              *(char *)psVar3 =
                   (char)((int)param_8[(int)ROUND(fVar9) * 2] +
                          (*(int *)(param_8 + (int)ROUND(fVar9) * 2) >> 0x10) >> 9);
              psVar3 = (short *)((int)psVar3 + 1);
            } while (iVar6 < param_11);
          }
        }
        else {
          iVar6 = 0;
          if (0 < param_11) {
            fVar8 = (float10)fVar2;
            psVar3 = param_10;
            do {
              fVar9 = (float10)iVar6 * fVar8;
              uVar10 = FUN_005b7ff0();
              param_8 = (short *)uVar10;
              local_18 = (byte)((ushort)param_8[(int)ROUND(fVar9) * 2] >> 8);
              *(byte *)psVar3 = local_18;
              local_18 = (byte)
                         ((uint)*(uint *)(param_8 + (int)ROUND(fVar9) * 2) >> 0x18);
              iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
              *(byte *)((int)psVar3 + 1) = local_18;
              psVar3 = psVar3 + 1;
            } while (iVar6 < param_11);
          }
        }
      }
      else if (param_2 == 1) {
        if (param_7 == 1) {
          iVar6 = 0;
          if (0 < param_11) {
            fVar8 = (float10)fVar2;
            psVar3 = param_10;
            do {
              fVar9 = (float10)iVar6 * fVar8;
              uVar10 = FUN_005b7ff0();
              param_8 = (short *)uVar10;
              iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
              *psVar3 = param_8[(int)ROUND(fVar9)];
              psVar3 = psVar3 + 1;
            } while (iVar6 < param_11);
          }
        }
        else {
          iVar6 = 0;
          if (0 < param_11) {
            fVar8 = (float10)fVar2;
            do {
              fVar9 = (float10)iVar6 * fVar8;
              uVar10 = FUN_005b7ff0();
              psVar3 = (short *)((ulonglong)uVar10 >> 0x20);
              param_8 = (short *)uVar10;
              sVar4 = param_8[(int)ROUND(fVar9)];
              psVar3[1] = sVar4;
              iVar6 = iVar6 + 1;
              *psVar3 = sVar4;
            } while (iVar6 < param_11);
          }
        }
      }
      else if (param_7 == 1) {
        iVar6 = 0;
        if (0 < param_11) {
          fVar8 = (float10)fVar2;
          psVar3 = param_10;
          do {
            fVar9 = (float10)iVar6 * fVar8;
            uVar10 = FUN_005b7ff0();
            param_8 = (short *)uVar10;
            iVar6 = (int)((ulonglong)uVar10 >> 0x20) + 1;
            *psVar3 = (short)((int)param_8[(int)ROUND(fVar9) * 2] +
                              (*(int *)(param_8 + (int)ROUND(fVar9) * 2) >> 0x10) >> 1);
            psVar3 = psVar3 + 1;
          } while (iVar6 < param_11);
        }
      }
      else {
        iVar6 = 0;
        if (0 < param_11) {
          fVar8 = (float10)fVar2;
          do {
            fVar9 = (float10)iVar6 * fVar8;
            uVar10 = FUN_005b7ff0();
            psVar3 = (short *)((ulonglong)uVar10 >> 0x20);
            param_8 = (short *)uVar10;
            *psVar3 = param_8[(int)ROUND(fVar9) * 2];
            iVar6 = iVar6 + 1;
            psVar3[1] = param_8[(int)ROUND(fVar9) * 2 + 1];
          } while (iVar6 < param_11);
        }
      }
    }
    if (((param_4 != 0) && (param_9 == 0)) || ((param_4 == 0 && (param_9 != 0)))) {
      if (param_6 != 8) {
        psVar3 = (short *)FUN_00551da0(param_10,param_11);
        return psVar3;
      }
      param_8 = (short *)FUN_00551d80(param_10,param_11);
    }
  }
  return param_8;
}
