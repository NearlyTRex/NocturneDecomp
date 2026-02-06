// Name: core_curtain.cpp_CCurtain_FUN_00449fc0
// Address: 00449fc0
// Address Range: [[00449fc0, 0044a912]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_FUN_00449fc0(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_FUN_00449fc0(CCurtain *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  char *pcVar13;
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
  
  if ((this_ptr->hit_floor != 0) &&
     (*(float *)(in_stack_00000008 + 0x24) < *(float *)this_ptr->unk5)) {
    *(uint *)(in_stack_00000008 + 0x34) = 0;
    *(uint *)(in_stack_00000008 + 0x30) = *(uint *)(in_stack_00000008 + 0x34);
    *(uint *)(in_stack_00000008 + 0x2c) = *(uint *)(in_stack_00000008 + 0x30);
    *(uint *)(in_stack_00000008 + 0x24) = *(uint *)this_ptr->unk5;
    *(uint *)(in_stack_00000008 + 0x6c) = 1;
  }
  local_18 = 0;
  if (0 < DAT_008879bc) {
    pfVar1 = (float *)(in_stack_00000008 + 0x20);
    pfVar2 = (float *)(in_stack_00000008 + 0x2c);
    iVar12 = 0;
    pcVar13 = this_ptr->unk4;
    local_1c = &DAT_00887e70[0].cylinder_radius;
    do {
      if (((((float)-0.5 <= *(float *)(in_stack_00000008 + 0x30)) ||
           (fVar7 = *(float *)((int)&DAT_008879c0[0].y + iVar12) +
                    DAT_00887e70[local_18].cylinder_top_y,
           fVar7 <= *(float *)(in_stack_00000008 + 0x24))) ||
          (*(float *)(in_stack_00000008 + 0x24) <= *(float *)((int)&DAT_008879c0[0].y + iVar12))) ||
         (fVar5 = *(float *)(in_stack_00000008 + 0x20) -
                  *(float *)((int)&DAT_008879c0[0].x + iVar12),
         fVar3 = *(float *)(in_stack_00000008 + 0x28) - *(float *)((int)&DAT_008879c0[0].z + iVar12)
         , DAT_00887e70[local_18].cylinder_radius <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))) {
        if ((*(float *)((int)&DAT_008879c0[0].y + iVar12) <= *(float *)(in_stack_00000008 + 0x24))
           && (fVar7 = *(float *)((int)&DAT_008879c0[0].y + iVar12) +
                       DAT_00887e70[local_18].cylinder_top_y,
              *(float *)(in_stack_00000008 + 0x24) <= fVar7)) {
          local_104[0] = *(float *)(in_stack_00000008 + 0x20) -
                         *(float *)((int)&DAT_008879c0[0].x + iVar12);
          local_fc = *(float *)(in_stack_00000008 + 0x28) -
                     *(float *)((int)&DAT_008879c0[0].z + iVar12);
          fVar5 = SQRT(local_104[0] * local_104[0] + local_fc * local_fc);
          if (fVar5 <= DAT_00887e70[local_18].cylinder_radius) {
            if (*(float *)(in_stack_00000008 + 0x3c) < fVar7) {
              if (*(float *)((int)&DAT_008879c0[0].y + iVar12) <
                  *(float *)(in_stack_00000008 + 0x3c)) {
                if (fVar5 <= 0.0) {
                  local_104[0] = 0.0;
                  local_fc = 0.0;
                }
                else {
                  local_104[0] = local_104[0] * (1.0 / fVar5);
                  local_fc = local_fc * (1.0 / fVar5);
                }
                fVar3 = local_104[0] * *local_1c + *(float *)((int)&DAT_008879c0[0].x + iVar12);
                fVar4 = local_fc * *local_1c + *(float *)((int)&DAT_008879c0[0].z + iVar12);
                fVar7 = *(float *)pcVar13;
                fVar5 = *(float *)pcVar13;
                *pfVar2 = *pfVar2 + (fVar3 - *pfVar1) * *(float *)pcVar13;
                *(float *)(in_stack_00000008 + 0x30) =
                     *(float *)(in_stack_00000008 + 0x30) +
                     (*(float *)(in_stack_00000008 + 0x24) - *(float *)(in_stack_00000008 + 0x24)) *
                     fVar7;
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
                fVar4 = *(float *)((int)&DAT_008879c0[0].y + iVar12);
                fVar7 = *(float *)pcVar13;
                fVar5 = *(float *)pcVar13;
                *pfVar2 = *pfVar2 + (*pfVar1 - *pfVar1) * *(float *)pcVar13;
                *(float *)(in_stack_00000008 + 0x30) =
                     *(float *)(in_stack_00000008 + 0x30) +
                     (fVar4 - *(float *)(in_stack_00000008 + 0x24)) * fVar7;
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
              fVar5 = *(float *)pcVar13;
              fVar3 = *(float *)pcVar13;
              *pfVar2 = *pfVar2 + (*pfVar1 - *pfVar1) * *(float *)pcVar13;
              *(float *)(in_stack_00000008 + 0x30) =
                   *(float *)(in_stack_00000008 + 0x30) +
                   (fVar7 - *(float *)(in_stack_00000008 + 0x24)) * fVar5;
              *(float *)(in_stack_00000008 + 0x34) =
                   *(float *)(in_stack_00000008 + 0x34) +
                   (fVar4 - *(float *)(in_stack_00000008 + 0x28)) * fVar3;
              if (pfVar1 != local_d4) {
                *pfVar1 = *pfVar1;
                *(float *)(in_stack_00000008 + 0x24) = fVar7;
                *(float *)(in_stack_00000008 + 0x28) = fVar4;
              }
            }
          }
        }
      }
      else {
        *(uint *)(in_stack_00000008 + 0x30) = 0;
        *(uint *)(in_stack_00000008 + 0x6c) = 1;
        *(float *)(in_stack_00000008 + 0x24) = fVar7;
      }
      local_1c = local_1c + 10;
      local_18 = local_18 + 1;
      iVar12 = iVar12 + 0xc;
    } while (local_18 < DAT_008879bc);
  }
  local_34 = 0;
  if (0 < *(int *)(in_stack_00000008 + 0x44)) {
    pfVar1 = (float *)(in_stack_00000008 + 0x20);
    pfVar11 = &this_ptr->spring;
    pcVar13 = this_ptr->unk4;
    pfVar2 = (float *)(in_stack_00000008 + 0x2c);
    iVar12 = in_stack_00000008;
    do {
      iVar6 = *(int *)(iVar12 + 0x48);
      if (&local_e0 != local_14c) {
        local_e0 = *pfVar1 - *(float *)(this_ptr->unk3[iVar6].unk + 0x20);
        local_dc = *(float *)(in_stack_00000008 + 0x24) -
                   *(float *)(this_ptr->unk3[iVar6].unk + 0x24);
        local_d8 = *(float *)(in_stack_00000008 + 0x28) -
                   *(float *)(this_ptr->unk3[iVar6].unk + 0x28);
      }
      fVar5 = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
      fVar7 = *(float *)(iVar12 + 0x58);
      if (fVar7 < fVar5) {
        fVar3 = fVar5 - fVar7;
        fVar8 = 1.0 / fVar5;
        fVar9 = local_e0 * fVar3 * fVar8;
        fVar10 = local_dc * fVar3 * fVar8;
        fVar8 = local_d8 * fVar3 * fVar8;
        *pfVar1 = *pfVar1 - fVar9;
        *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24) - fVar10;
        *(float *)(in_stack_00000008 + 0x28) = *(float *)(in_stack_00000008 + 0x28) - fVar8;
        fVar3 = *(float *)pcVar13;
        fVar4 = *(float *)pcVar13;
        *pfVar2 = *pfVar2 - fVar9 * *(float *)pcVar13;
        *(float *)(in_stack_00000008 + 0x30) = *(float *)(in_stack_00000008 + 0x30) - fVar10 * fVar3
        ;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) - fVar8 * fVar4;
      }
      if ((fVar5 < fVar7) && ((float)0.01 < fVar5)) {
        fVar7 = fVar7 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = local_e0 * fVar7 * fVar5 * *pfVar11;
        fVar4 = local_dc * fVar7 * fVar5 * *pfVar11;
        fVar8 = local_d8 * fVar7 * fVar5 * *pfVar11;
        *pfVar1 = *pfVar1 + fVar3;
        *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24) + fVar4;
        *(float *)(in_stack_00000008 + 0x28) = *(float *)(in_stack_00000008 + 0x28) + fVar8;
        fVar7 = *(float *)pcVar13;
        fVar5 = *(float *)pcVar13;
        *pfVar2 = *pfVar2 + fVar3 * *(float *)pcVar13;
        *(float *)(in_stack_00000008 + 0x30) = *(float *)(in_stack_00000008 + 0x30) + fVar4 * fVar7;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) + fVar8 * fVar5;
      }
      local_34 = local_34 + 1;
      iVar12 = iVar12 + 4;
    } while (local_34 < *(int *)(in_stack_00000008 + 0x44));
  }
  return;
}
