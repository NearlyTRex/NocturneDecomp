// Name: shape_superopt.cpp_FUN_005cbb40
// Address: 005cbb40
// Address Range: [[005cbb40, 005cbe16]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cbb40()

#include "nocturne.h"

double * shape_superopt_cpp_FUN_005cbb40(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  ulonglong local_110;
  uint local_100;
  uint uStack_fc;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  uint local_18;
  double *local_14;
  
  local_18 = 0;
  local_100 = 0;
  uStack_fc = 0x3ff00000;
  if (in_stack_00000010 != 0) {
    pdVar7 = (double *)(in_stack_0000000c + 0x10);
    do {
      uVar4 = local_18 + 1;
      if (in_stack_00000010 <= uVar4) {
        uVar4 = 0;
      }
      local_a8 = pdVar7[3] - *pdVar7;
      local_a0 = pdVar7[4] - pdVar7[1];
      iVar5 = uVar4 * 0x60 + in_stack_0000000c;
      local_98 = pdVar7[5] - pdVar7[2];
      pdVar8 = &local_a8;
      pdVar9 = &local_90;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_14 = (double *)(iVar5 + 0x28);
      dVar1 = 1.0 / SQRT(local_80 * local_80 + local_90 * local_90 + local_88 * local_88);
      dVar2 = local_90 * dVar1;
      dVar3 = local_88 * dVar1;
      dVar1 = local_80 * dVar1;
      local_c0 = *(double *)(iVar5 + 0x28) - pdVar7[3];
      local_b8 = *(double *)(iVar5 + 0x30) - pdVar7[4];
      local_b0 = *(double *)(iVar5 + 0x38) - pdVar7[5];
      pdVar8 = &local_c0;
      pdVar9 = &local_60;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_68 = 1.0 / SQRT(local_50 * local_50 + local_60 * local_60 + local_58 * local_58);
      local_78 = local_60 * local_68;
      local_70 = local_58 * local_68;
      local_68 = local_50 * local_68;
      local_110 = dVar2 * local_78 + dVar3 * local_70 + dVar1 * local_68;
      if (local_110 < 0.0) {
        local_110 = -local_110;
      }
      if (local_110 < (double)CONCAT44 /* combine 2-byte values */(uStack_fc,local_100)) {
        local_100 = (uint)local_110;
        uStack_fc = local_110._4_4_;
        *in_stack_00000008 = dVar3 * local_68 - dVar1 * local_70;
        in_stack_00000008[1] = dVar1 * local_78 - dVar2 * local_68;
        in_stack_00000008[2] = dVar2 * local_70 - dVar3 * local_78;
      }
      local_18 = local_18 + 1;
      pdVar7 = pdVar7 + 0xc;
    } while (local_18 < in_stack_00000010);
  }
  dVar1 = 1.0 / SQRT(in_stack_00000008[2] * in_stack_00000008[2] +
                     *in_stack_00000008 * *in_stack_00000008 +
                     in_stack_00000008[1] * in_stack_00000008[1]);
  *in_stack_00000008 = *in_stack_00000008 * dVar1;
  in_stack_00000008[1] = in_stack_00000008[1] * dVar1;
  in_stack_00000008[2] = in_stack_00000008[2] * dVar1;
  return in_stack_00000008;
}
