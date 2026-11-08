// Name: FUN_00571420
// Address: 00571420
// Address Range: [[00571420, 00571d60]]
// Convention: unknown
// Signature: void FUN_00571420(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571420(int param_1)

{
  float *pfVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar10;
  double dVar11;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  ulonglong local_d0;
  int local_c8;
  int aiStack_c4 [7];
  float afStack_a8 [9];
  float local_84 [4];
  ulonglong local_74;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xb9d;
    FUN_005030e0();
  }
  if (*(int *)(param_1 + 100) != 0) {
    local_64 = in_stack_00000028;
    local_68 = 1;
    if ((*(int *)(param_1 + 0x68) != 0) && (iVar7 = 0, iVar8 = param_1, 0 < in_stack_0000002c)) {
      do {
        if (0x3c000000 < *(int *)(iVar8 + 0x90)) {
          local_68 = 0;
          break;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar7 < in_stack_0000002c);
    }
    iVar7 = 0;
    iVar8 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        if ((local_68 != 0) || (*(int *)(iVar8 + 0xd0) < 0)) {
          *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xb0);
        }
        iVar6 = iVar7 * 4;
        *(int *)(&stack0x00000008 + iVar6) =
             *(int *)(&stack0x00000008 + iVar6) + *(int *)(iVar8 + 0xd0) * 4;
        uVar5 = *(int *)(iVar8 + 0xd0) - *(int *)(iVar8 + 0xb0);
        uVar9 = (int)uVar5 >> 0x1f;
        if ((int)((uVar5 ^ uVar9) - uVar9) < 2) {
          aiStack_c4[iVar7] = 0;
        }
        else {
          aiStack_c4[iVar7] = *(int *)(&stack0x00000008 + iVar6);
          *(uint *)(&stack0x00000008 + iVar6) = *(uint *)(iVar6 + 0x2c80674);
          FUN_005bfb70(*(uint *)(&stack0x00000008 + iVar6),0,in_stack_00000028 << 2);
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar7 < in_stack_0000002c);
    }
    local_18 = 1 << ((char)*(uint *)(*(int *)(param_1 + 0x68) + 0x104) - 1U & 0x1f);
    fVar3 = 1.0 / (float)local_18;
    iVar7 = 0;
    local_6c = fVar3;
    iVar8 = param_1;
    if (0 < in_stack_0000002c) {
      do {
        iVar7 = iVar7 + 1;
        afStack_a8[iVar7] = *(float *)(iVar8 + 0x90) * fVar3;
        iVar8 = iVar8 + 4;
      } while (iVar7 < in_stack_0000002c);
    }
    while (((iVar8 = in_stack_00000028, *(int *)(param_1 + 100) != 0 &&
            (iVar7 = *(int *)(param_1 + 0x68), iVar7 != 0)) && (0.0 <= *(double *)(param_1 + 0x50)))
          ) {
      if ((in_stack_00000028 < 1) ||
         (dVar2 = (double)(((float)*(int *)(iVar7 + 0x10c) / (float)in_stack_00000030) *
                          *(float *)(param_1 + 0x6c)), dVar2 <= 0.0)) goto LAB_0057156d;
      dVar4 = (double)*(int *)(iVar7 + 0x164);
      local_5c = 0;
      local_c8 = in_stack_00000028;
      if (0 < *(int *)(iVar7 + 0x110)) {
        dVar11 = (double)FUN_005c0880(((double)*(int *)(iVar7 + 0x128 +
                                                       *(int *)(param_1 + 0x114) * 4) -
                                      *(double *)(param_1 + 0x50)) / dVar2);
        fVar10 = (float10)dVar11;
        local_74 = dVar11;
        FUN_005c03a0();
        local_54 = (int)ROUND(fVar10);
        if (local_54 < 0) {
          local_54 = 0;
        }
        if (local_54 < iVar8) {
          local_c8 = local_54;
          local_5c = 1;
        }
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      local_d0 = *(double *)(param_1 + 0x10c);
      local_58 = 0;
      dVar11 = (double)FUN_005c0880((dVar4 - local_d0) / dVar2);
      fVar10 = (float10)dVar11;
      local_74 = dVar11;
      FUN_005c03a0();
      local_4c = (int)ROUND(fVar10);
      if (local_4c < 1) {
        local_d0 = local_d0 - dVar4;
        if (local_d0 < 0.0) {
          local_d0 = 0.0;
        }
        dVar11 = (double)FUN_005c0880((dVar4 - local_d0) / dVar2);
        fVar10 = (float10)dVar11;
        local_74 = dVar11;
        FUN_005c03a0();
        local_4c = (int)ROUND(fVar10);
      }
      if (local_4c < local_c8) {
        local_c8 = local_4c;
        local_5c = 0;
        local_58 = 1;
      }
      else if (local_4c == local_c8) {
        local_58 = 1;
      }
      if (local_c8 < 0) {
        local_c8 = 0;
      }
      if (local_68 == 0) {
        iVar8 = *(int *)(param_1 + 0x68);
        iVar7 = local_c8 << 2;
        if (*(int *)(iVar8 + 0x104) == 8) {
          if (*(int *)(iVar8 + 0x108) == 2) {
            if (0 < local_c8) {
              local_28 = 0;
              local_40 = iVar7;
              do {
                fVar10 = (float10)local_d0;
                FUN_005c03a0();
                local_84[0] = (float)(int)(*(byte *)(*(int *)(extraout_EDX + 0x120) +
                                                    (int)ROUND(fVar10) * 2) - 0x80);
                local_18 = *(byte *)(*(int *)(*(int *)(param_1 + 0x68) + 0x120) + 1 +
                                    (int)ROUND(fVar10) * 2) - 0x80;
                local_84[1] = (float)local_18;
                uVar5 = 0;
                if (0 < in_stack_0000002c) {
                  iVar8 = 0;
                  do {
                    uVar9 = uVar5 & 1;
                    uVar5 = uVar5 + 1;
                    *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_28) =
                         local_84[uVar9] * *(float *)((int)afStack_a8 + iVar8 + 4U) +
                         *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_28);
                    iVar8 = iVar8 + 4;
                  } while ((int)uVar5 < in_stack_0000002c);
                }
                local_d0 = local_d0 + dVar2;
                local_28 = local_28 + 4;
              } while (local_28 < local_40);
            }
          }
          else if (0 < local_c8) {
            iVar8 = 0;
            local_3c = iVar7;
            do {
              fVar10 = (float10)local_d0;
              FUN_005c03a0();
              local_18 = *(byte *)(*(int *)(*(int *)(param_1 + 0x68) + 0x120) + (int)ROUND(fVar10))
                         - 0x80;
              iVar7 = 0;
              local_20 = (float)local_18;
              if (0 < in_stack_0000002c) {
                iVar6 = 0;
                do {
                  iVar7 = iVar7 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar8) =
                       local_20 * *(float *)((int)afStack_a8 + iVar6 + 4U) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar8);
                  iVar6 = iVar6 + 4;
                } while (iVar7 < in_stack_0000002c);
              }
              local_d0 = local_d0 + dVar2;
              iVar8 = iVar8 + 4;
            } while (iVar8 < local_3c);
          }
        }
        else if (*(int *)(iVar8 + 0x108) == 2) {
          if (in_stack_0000002c == 2) {
            local_d0 = (double)FUN_0056fcd0(*(uint *)(iVar8 + 0x120),&stack0x00000008,
                                            afStack_a8 + 1,(uint)local_d0,local_d0._4_4_,dVar2
                                            ,local_c8);
            local_74 = local_d0;
          }
          else if (0 < local_c8) {
            local_24 = 0;
            local_38 = iVar7;
            do {
              fVar10 = (float10)local_d0;
              FUN_005c03a0();
              local_18 = (int)ROUND(fVar10);
              local_84[2] = (float)*(short *)(*(int *)(extraout_EDX_00 + 0x120) + local_18 * 4);
              local_84[3] = (float)*(short *)(*(int *)(*(int *)(param_1 + 0x68) + 0x120) + 2 +
                                             local_18 * 4);
              uVar5 = 0;
              if (0 < in_stack_0000002c) {
                iVar8 = 0;
                do {
                  uVar9 = uVar5 & 1;
                  uVar5 = uVar5 + 1;
                  *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_24) =
                       local_84[uVar9 + 2] * *(float *)((int)afStack_a8 + iVar8 + 4U) +
                       *(float *)(*(int *)(&stack0x00000008 + iVar8) + local_24);
                  iVar8 = iVar8 + 4;
                } while ((int)uVar5 < in_stack_0000002c);
              }
              local_d0 = local_d0 + dVar2;
              local_24 = local_24 + 4;
            } while (local_24 < local_38);
          }
        }
        else if (in_stack_0000002c == 2) {
          local_d0 = (double)FUN_0056fb90(*(uint *)(iVar8 + 0x120),&stack0x00000008,
                                          afStack_a8 + 1,(uint)local_d0,local_d0._4_4_,dVar2,
                                          local_c8);
          local_74 = local_d0;
        }
        else if (0 < local_c8) {
          iVar8 = 0;
          local_44 = iVar7;
          do {
            fVar10 = (float10)local_d0;
            FUN_005c03a0();
            local_18 = (int)ROUND(fVar10);
            local_1c = (float)*(short *)(*(int *)(*(int *)(param_1 + 0x68) + 0x120) +
                                        (int)ROUND(fVar10) * 2);
            iVar7 = 0;
            if (0 < in_stack_0000002c) {
              iVar6 = 0;
              do {
                iVar7 = iVar7 + 1;
                *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar8) =
                     local_1c * *(float *)((int)afStack_a8 + iVar6 + 4U) +
                     *(float *)(*(int *)(&stack0x00000008 + iVar6) + iVar8);
                iVar6 = iVar6 + 4;
              } while (iVar7 < in_stack_0000002c);
            }
            local_d0 = local_d0 + dVar2;
            iVar8 = iVar8 + 4;
          } while (iVar8 < local_44);
        }
      }
      else {
        local_18 = local_c8;
        local_d0 = (double)local_c8 * dVar2 + local_d0;
      }
      if (local_58 != 0) {
        local_d0 = 0.0;
      }
      if (dVar4 <= local_d0) {
        local_d0 = local_d0 - dVar4;
      }
      FUN_00572030(param_1,(uint)local_d0,(int)((ulonglong)local_d0 >> 0x20));
      if (local_5c != 0) {
        iVar7 = *(int *)(param_1 + 0x114) + 1;
        iVar8 = *(int *)(*(int *)(param_1 + 0x68) + 0x13c + *(int *)(param_1 + 0x114) * 4);
        *(int *)(param_1 + 0x114) = iVar7;
        *(double *)(param_1 + 0x50) = (double)iVar8;
        if (*(int *)(*(int *)(param_1 + 0x68) + 0x124) <= iVar7) {
          *(uint *)(param_1 + 0x114) = 0;
        }
      }
      iVar8 = 0;
      in_stack_00000028 = in_stack_00000028 - local_c8;
      if (0 < in_stack_0000002c) {
        iVar7 = 0;
        do {
          *(int *)(&stack0x00000008 + iVar7) = *(int *)(&stack0x00000008 + iVar7) + local_c8 * 4;
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar8 < in_stack_0000002c);
      }
    }
    FUN_00571d70();
LAB_0057156d:
    local_60 = 0;
    if (0 < in_stack_0000002c) {
      local_50 = 0;
      do {
        if (*(int *)((int)aiStack_c4 + local_50) != 0) {
          local_2c = local_50;
          local_48 = local_64;
          iVar8 = 0;
          local_34 = (local_64 + *(int *)(param_1 + 0xb0 + local_50)) -
                     *(int *)(param_1 + 0xd0 + local_50);
          local_30 = local_34 * 4;
          iVar7 = 0;
          if (0 < local_30) {
            do {
              local_18 = (iVar8 / local_34) * 4;
              pfVar1 = (float *)(*(int *)((int)aiStack_c4 + local_50) + iVar7);
              iVar7 = iVar7 + 4;
              *(float *)(*(int *)((int)aiStack_c4 + local_50) + -4 + iVar7) =
                   *(float *)(*(int *)(local_50 + 0x2c80674) + local_18) + *pfVar1;
              iVar8 = iVar8 + local_64;
            } while (iVar7 < local_30);
          }
          *(uint *)(param_1 + 0xd0 + local_50) = *(uint *)(param_1 + 0xb0 + local_50);
        }
        local_60 = local_60 + 1;
        local_50 = local_50 + 4;
      } while (local_60 < in_stack_0000002c);
    }
  }
  return;
}
