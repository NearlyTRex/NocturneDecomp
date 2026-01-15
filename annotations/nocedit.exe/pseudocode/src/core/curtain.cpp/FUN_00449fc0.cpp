// Name: core_curtain.cpp_FUN_00449fc0
// Address: 00449fc0
// Address Range: [[00449fc0, 0044a912]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449fc0()

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_00449fc0(uint param_1, uint
   param_2) */

void core_curtain_cpp_FUN_00449fc0(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int in_stack_00000004;
  int in_stack_00000008;
  float local_14c [3];
  float local_140 [15];
  float local_104 [2];
  float local_fc;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4 [40];
  int local_34;
  float *local_1c;
  int local_18;
  
  if ((*(int *)(in_stack_00000004 + 0x65b2c) != 0) &&
     (*(float *)(in_stack_00000008 + 0x24) < *(float *)(in_stack_00000004 + 0x65b28))) {
    *(uint *)(in_stack_00000008 + 0x34) = 0;
    *(uint *)(in_stack_00000008 + 0x30) = *(uint *)(in_stack_00000008 + 0x34);
    *(uint *)(in_stack_00000008 + 0x2c) = *(uint *)(in_stack_00000008 + 0x30);
    *(uint *)(in_stack_00000008 + 0x24) = *(uint *)(in_stack_00000004 + 0x65b28);
    *(uint *)(in_stack_00000008 + 0x6c) = 1;
  }
  local_18 = 0;
  if (0 < DAT_008879bc) {
    pfVar1 = (float *)(in_stack_00000008 + 0x20);
    pfVar2 = (float *)(in_stack_00000008 + 0x2c);
    iVar11 = 0;
    pfVar13 = (float *)(in_stack_00000004 + 0x1c728);
    local_1c = &DAT_00887e70[0].cylinder_radius;
    do {
      if (((((float)-0.5 <= *(float *)(in_stack_00000008 + 0x30)) ||
           (fVar6 = *(float *)((int)&DAT_008879c0[0].y + iVar11) +
                    DAT_00887e70[local_18].cylinder_top_y,
           fVar6 <= *(float *)(in_stack_00000008 + 0x24))) ||
          (*(float *)(in_stack_00000008 + 0x24) <= *(float *)((int)&DAT_008879c0[0].y + iVar11))) ||
         (fVar5 = *(float *)(in_stack_00000008 + 0x20) -
                  *(float *)((int)&DAT_008879c0[0].x + iVar11),
         fVar3 = *(float *)(in_stack_00000008 + 0x28) - *(float *)((int)&DAT_008879c0[0].z + iVar11)
         , DAT_00887e70[local_18].cylinder_radius <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))) {
        if ((*(float *)((int)&DAT_008879c0[0].y + iVar11) <= *(float *)(in_stack_00000008 + 0x24))
           && (fVar6 = *(float *)((int)&DAT_008879c0[0].y + iVar11) +
                       DAT_00887e70[local_18].cylinder_top_y,
              *(float *)(in_stack_00000008 + 0x24) <= fVar6)) {
          local_104[0] = *(float *)(in_stack_00000008 + 0x20) -
                         *(float *)((int)&DAT_008879c0[0].x + iVar11);
          local_fc = *(float *)(in_stack_00000008 + 0x28) -
                     *(float *)((int)&DAT_008879c0[0].z + iVar11);
          fVar5 = SQRT(local_104[0] * local_104[0] + local_fc * local_fc);
          if (fVar5 <= DAT_00887e70[local_18].cylinder_radius) {
            if (*(float *)(in_stack_00000008 + 0x3c) < fVar6) {
              if (*(float *)((int)&DAT_008879c0[0].y + iVar11) <
                  *(float *)(in_stack_00000008 + 0x3c)) {
                if (fVar5 <= 0.0) {
                  local_104[0] = 0.0;
                  local_fc = 0.0;
                }
                else {
                  local_104[0] = local_104[0] * (1.0 / fVar5);
                  local_fc = local_fc * (1.0 / fVar5);
                }
                fVar3 = local_104[0] * *local_1c + *(float *)((int)&DAT_008879c0[0].x + iVar11);
                fVar4 = local_fc * *local_1c + *(float *)((int)&DAT_008879c0[0].z + iVar11);
                fVar6 = *pfVar13;
                fVar5 = *pfVar13;
                *pfVar2 = *pfVar2 + (fVar3 - *pfVar1) * *pfVar13;
                *(float *)(in_stack_00000008 + 0x30) =
                     *(float *)(in_stack_00000008 + 0x30) +
                     (*(float *)(in_stack_00000008 + 0x24) - *(float *)(in_stack_00000008 + 0x24)) *
                     fVar6;
                *(float *)(in_stack_00000008 + 0x34) =
                     *(float *)(in_stack_00000008 + 0x34) +
                     (fVar4 - *(float *)(in_stack_00000008 + 0x28)) * fVar5;
                if (pfVar1 != local_104) {
                  *pfVar1 = fVar3;
                  *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24);
                  *(float *)(in_stack_00000008 + 0x28) = fVar4;
                }
                *(uint *)(in_stack_00000008 + 0x6c) = 1;
              }
              else {
                fVar3 = *(float *)(in_stack_00000008 + 0x28);
                fVar4 = *(float *)((int)&DAT_008879c0[0].y + iVar11);
                fVar6 = *pfVar13;
                fVar5 = *pfVar13;
                *pfVar2 = *pfVar2 + (*pfVar1 - *pfVar1) * *pfVar13;
                *(float *)(in_stack_00000008 + 0x30) =
                     *(float *)(in_stack_00000008 + 0x30) +
                     (fVar4 - *(float *)(in_stack_00000008 + 0x24)) * fVar6;
                *(float *)(in_stack_00000008 + 0x34) =
                     *(float *)(in_stack_00000008 + 0x34) +
                     (fVar3 - *(float *)(in_stack_00000008 + 0x28)) * fVar5;
                if (pfVar1 != local_140) {
                  *pfVar1 = *pfVar1;
                  *(float *)(in_stack_00000008 + 0x24) = fVar4;
                  *(float *)(in_stack_00000008 + 0x28) = fVar3;
                }
              }
            }
            else {
              fVar4 = *(float *)(in_stack_00000008 + 0x28);
              fVar5 = *pfVar13;
              fVar3 = *pfVar13;
              *pfVar2 = *pfVar2 + (*pfVar1 - *pfVar1) * *pfVar13;
              *(float *)(in_stack_00000008 + 0x30) =
                   *(float *)(in_stack_00000008 + 0x30) +
                   (fVar6 - *(float *)(in_stack_00000008 + 0x24)) * fVar5;
              *(float *)(in_stack_00000008 + 0x34) =
                   *(float *)(in_stack_00000008 + 0x34) +
                   (fVar4 - *(float *)(in_stack_00000008 + 0x28)) * fVar3;
              if (pfVar1 != local_d4) {
                *pfVar1 = *pfVar1;
                *(float *)(in_stack_00000008 + 0x24) = fVar6;
                *(float *)(in_stack_00000008 + 0x28) = fVar4;
              }
            }
          }
        }
      }
      else {
        *(uint *)(in_stack_00000008 + 0x30) = 0;
        *(uint *)(in_stack_00000008 + 0x6c) = 1;
        *(float *)(in_stack_00000008 + 0x24) = fVar6;
      }
      local_1c = local_1c + 10;
      local_18 = local_18 + 1;
      iVar11 = iVar11 + 0xc;
    } while (local_18 < DAT_008879bc);
  }
  local_34 = 0;
  if (0 < *(int *)(in_stack_00000008 + 0x44)) {
    pfVar1 = (float *)(in_stack_00000008 + 0x20);
    pfVar13 = (float *)(in_stack_00000004 + 0x65b1c);
    pfVar12 = (float *)(in_stack_00000004 + 0x1c728);
    pfVar2 = (float *)(in_stack_00000008 + 0x2c);
    iVar11 = in_stack_00000008;
    do {
      iVar10 = in_stack_00000004 + 0x208 + *(int *)(iVar11 + 0x48) * 0x74;
      if (&local_e0 != local_14c) {
        local_e0 = *pfVar1 - *(float *)(iVar10 + 0x20);
        local_dc = *(float *)(in_stack_00000008 + 0x24) - *(float *)(iVar10 + 0x24);
        local_d8 = *(float *)(in_stack_00000008 + 0x28) - *(float *)(iVar10 + 0x28);
      }
      fVar5 = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
      fVar6 = *(float *)(iVar11 + 0x58);
      if (fVar6 < fVar5) {
        fVar3 = fVar5 - fVar6;
        fVar7 = 1.0 / fVar5;
        fVar8 = local_e0 * fVar3 * fVar7;
        fVar9 = local_dc * fVar3 * fVar7;
        fVar7 = local_d8 * fVar3 * fVar7;
        *pfVar1 = *pfVar1 - fVar8;
        *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24) - fVar9;
        *(float *)(in_stack_00000008 + 0x28) = *(float *)(in_stack_00000008 + 0x28) - fVar7;
        fVar3 = *pfVar12;
        fVar4 = *pfVar12;
        *pfVar2 = *pfVar2 - fVar8 * *pfVar12;
        *(float *)(in_stack_00000008 + 0x30) = *(float *)(in_stack_00000008 + 0x30) - fVar9 * fVar3;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) - fVar7 * fVar4;
      }
      if ((fVar5 < fVar6) && ((float)0.01 < fVar5)) {
        fVar6 = fVar6 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = local_e0 * fVar6 * fVar5 * *pfVar13;
        fVar4 = local_dc * fVar6 * fVar5 * *pfVar13;
        fVar7 = local_d8 * fVar6 * fVar5 * *pfVar13;
        *pfVar1 = *pfVar1 + fVar3;
        *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24) + fVar4;
        *(float *)(in_stack_00000008 + 0x28) = *(float *)(in_stack_00000008 + 0x28) + fVar7;
        fVar6 = *pfVar12;
        fVar5 = *pfVar12;
        *pfVar2 = *pfVar2 + fVar3 * *pfVar12;
        *(float *)(in_stack_00000008 + 0x30) = *(float *)(in_stack_00000008 + 0x30) + fVar4 * fVar6;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) + fVar7 * fVar5;
      }
      local_34 = local_34 + 1;
      iVar11 = iVar11 + 4;
    } while (local_34 < *(int *)(in_stack_00000008 + 0x44));
  }
  return;
}
