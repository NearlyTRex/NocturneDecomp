// Name: FUN_00409290
// Address: 00409290
// Address Range: [[00409290, 0040950d]]
// Convention: unknown
// Signature: void FUN_00409290(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

#include "nocturne.h"

void FUN_00409290(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  uint in_stack_00000044;
  uint local_40 [12];
  
  bVar5 = 0;
  if (((param_5 & in_stack_00000044 & 0x80000000) == 0) ||
     ((char)(param_5 & in_stack_00000044) == '\0')) {
    iVar2 = 0;
    do {
      if (in_stack_0000003c < in_stack_00000034) {
        FUN_00431530(&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-in_stack_00000034 != in_stack_0000003c && in_stack_00000034 <= -in_stack_0000003c) {
        FUN_00431630(&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (in_stack_0000003c < in_stack_00000038) {
        FUN_00431730(&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-in_stack_00000038 != in_stack_0000003c && in_stack_00000038 <= -in_stack_0000003c) {
        FUN_00431830(&param_1,&stack0x00000034,local_40);
        puVar3 = local_40;
        puVar4 = &stack0x00000034;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (param_3 < param_1) {
        FUN_00431530(&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-param_1 != param_3 && param_1 <= -param_3) {
        FUN_00431630(&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (param_3 < param_2) {
        FUN_00431730(&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      if (-param_2 != param_3 && param_2 <= -param_3) {
        FUN_00431830(&stack0x00000034,&param_1,local_40);
        puVar3 = local_40;
        puVar4 = &param_1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if ((((((param_1 <= param_3) && (-param_1 == param_3 || -param_3 < param_1)) &&
          (param_2 <= param_3)) &&
         ((-param_2 == param_3 || -param_3 < param_2 && (in_stack_00000034 <= in_stack_0000003c))))
        && ((-in_stack_00000034 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000034 &&
            ((in_stack_00000038 <= in_stack_0000003c &&
             (-in_stack_00000038 == in_stack_0000003c || -in_stack_0000003c < in_stack_00000038)))))
        ) && ((0 < param_3 && (0 < in_stack_0000003c)))) {
      puVar3 = &param_1;
      puVar4 = &DAT_006af5b4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puVar3 = &stack0x00000034;
      puVar4 = &DAT_006af5e4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_004cd300(0x4e1e);
      FUN_004cd300(19999);
      FUN_004015a0(DAT_006af5c4 >> 0x10,DAT_006af5c8 >> 0x10,DAT_006af5f4 >> 0x10,
                   DAT_006af5f8 >> 0x10);
      return;
    }
  }
  return;
}
