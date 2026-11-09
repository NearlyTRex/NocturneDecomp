// Name: core_xform.cpp_FUN_00592dd0
// Address: 00592dd0
// Address Range: [[00592dd0, 0059312d] [00593156, 005931d0]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00592dd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_00592dd0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float *in_ECX;
  int iVar7;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  double in_stack_00000000;
  double dStack00000008;
  double dStack00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double dStack00000028;
  double dStack00000030;
  double dStack00000038;
  double in_stack_00000040;
  double dStack00000048;
  double dStack00000050;
  double dStack00000058;
  double dStack00000060;
  double in_stack_00000068;
  double in_stack_00000070;
  double in_stack_000000b8;
  
  dStack00000060 = (double)in_ST0;
  in_stack_00000018 = in_stack_00000018 * in_stack_000000b8;
  dStack00000008 = (double)in_ST5;
  in_stack_00000020 = in_stack_00000020 * in_stack_000000b8;
  iVar7 = 0;
  dStack00000038 = (double)in_ST2;
  dStack00000010 = (double)in_ST1;
  dStack00000028 = (double)in_ST3;
  dStack00000030 = (double)in_ST4;
  do {
    dVar1 = in_stack_00000000 * _DAT_005eed7e +
            (dStack00000010 * in_stack_00000020 - dStack00000028 * in_stack_00000018);
    dVar6 = dStack00000060 * _DAT_005eed7e +
            (dStack00000028 * dStack00000030 - dStack00000038 * in_stack_00000020);
    dVar2 = dStack00000008 * _DAT_005eed7e +
            (dStack00000038 * in_stack_00000018 - dStack00000030 * dStack00000010);
    dVar5 = dStack00000038 * _DAT_005eed7e +
            (in_stack_00000018 * dStack00000008 - in_stack_00000020 * dStack00000060);
    dVar4 = dStack00000010 * _DAT_005eed7e +
            (in_stack_00000020 * in_stack_00000000 - dStack00000030 * dStack00000008);
    dVar3 = dStack00000028 * _DAT_005eed7e +
            (dStack00000030 * dStack00000060 - in_stack_00000018 * in_stack_00000000);
    dStack00000030 =
         dStack00000030 * _DAT_005eed7e +
         (dStack00000060 * dStack00000028 - dStack00000008 * dStack00000010);
    in_stack_00000018 =
         in_stack_00000018 * _DAT_005eed7e +
         (dStack00000008 * dStack00000038 - in_stack_00000000 * dStack00000028);
    in_stack_00000020 =
         in_stack_00000020 * _DAT_005eed7e +
         (in_stack_00000000 * dStack00000010 - dStack00000060 * dStack00000038);
    dStack00000028 = 1.0 / SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5);
    dStack00000008 = 1.0 / SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1);
    in_stack_00000000 = dVar1 * dStack00000008;
    dStack00000060 = dVar6 * dStack00000008;
    dStack00000008 = dVar2 * dStack00000008;
    dStack00000038 = dVar5 * dStack00000028;
    dStack00000010 = dVar4 * dStack00000028;
    dStack00000028 = dVar3 * dStack00000028;
    dVar1 = 1.0 / SQRT(in_stack_00000020 * in_stack_00000020 +
                       in_stack_00000018 * in_stack_00000018 + dStack00000030 * dStack00000030);
    dStack00000030 = dStack00000030 * dVar1;
    in_stack_00000018 = in_stack_00000018 * dVar1;
    in_stack_00000020 = in_stack_00000020 * dVar1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  dStack00000048 = dStack00000010 * in_stack_00000020 - dStack00000028 * in_stack_00000018;
  dStack00000050 = dStack00000028 * dStack00000030 - dStack00000038 * in_stack_00000020;
  dStack00000058 = dStack00000038 * in_stack_00000018 - dStack00000030 * dStack00000010;
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    dStack00000048 = dStack00000048 * in_stack_00000040;
    dStack00000050 = dStack00000050 * in_stack_00000040;
    dStack00000058 = dStack00000058 * in_stack_00000040;
    dStack00000038 = dStack00000038 * in_stack_00000070;
    dStack00000010 = dStack00000010 * in_stack_00000070;
    dStack00000028 = dStack00000028 * in_stack_00000070;
    dStack00000030 = dStack00000030 * in_stack_00000068;
    in_stack_00000018 = in_stack_00000018 * in_stack_00000068;
    in_stack_00000020 = in_stack_00000020 * in_stack_00000068;
  }
  in_ECX[1] = (float)dStack00000050;
  in_ECX[2] = (float)dStack00000058;
  in_ECX[4] = (float)dStack00000038;
  in_ECX[5] = (float)dStack00000010;
  in_ECX[6] = (float)dStack00000028;
  in_ECX[8] = (float)dStack00000030;
  in_ECX[9] = (float)in_stack_00000018;
  in_ECX[10] = (float)in_stack_00000020;
  *in_ECX = (float)dStack00000048;
  return;
}
