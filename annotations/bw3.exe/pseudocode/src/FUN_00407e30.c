// Name: FUN_00407e30
// Address: 00407e30
// Address Range: [[00407e30, 004080da]]
// Convention: unknown
// Signature: uint FUN_00407e30(uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00407e30(uint param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint in_stack_00000034;
  uint in_stack_00000038;
  int in_stack_0000003c;
  uint in_stack_00000044;
  uint auStack_40 [12];
  
  bVar6 = 0;
  uVar1 = param_5 & in_stack_00000044;
  if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
    iVar3 = 0;
    do {
      if (in_stack_0000003c < (int)in_stack_00000034) {
        FUN_004390c0(&param_1,&stack0x00000034,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &stack0x00000034;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-in_stack_00000034 != in_stack_0000003c && (int)in_stack_00000034 <= -in_stack_0000003c) {
        FUN_004391c0(&param_1,&stack0x00000034,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &stack0x00000034;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (in_stack_0000003c < (int)in_stack_00000038) {
        FUN_004392c0(&param_1,&stack0x00000034,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &stack0x00000034;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-in_stack_00000038 != in_stack_0000003c && (int)in_stack_00000038 <= -in_stack_0000003c) {
        FUN_004393c0(&param_1,&stack0x00000034,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &stack0x00000034;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (param_3 < (int)param_1) {
        FUN_004390c0(&stack0x00000034,&param_1,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &param_1;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-param_1 != param_3 && (int)param_1 <= -param_3) {
        FUN_004391c0(&stack0x00000034,&param_1,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &param_1;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (param_3 < (int)param_2) {
        FUN_004392c0(&stack0x00000034,&param_1,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &param_1;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-param_2 != param_3 && (int)param_2 <= -param_3) {
        FUN_004393c0(&stack0x00000034,&param_1,auStack_40);
        puVar4 = auStack_40;
        puVar5 = &param_1;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    uVar1 = param_1;
    if (((((((int)param_1 <= param_3) && (-param_1 == param_3 || -param_3 < (int)param_1)) &&
          (uVar1 = param_2, (int)param_2 <= param_3)) &&
         ((-param_2 == param_3 || -param_3 < (int)param_2 &&
          (uVar1 = in_stack_00000034, (int)in_stack_00000034 <= in_stack_0000003c)))) &&
        ((-in_stack_00000034 == in_stack_0000003c || -in_stack_0000003c < (int)in_stack_00000034 &&
         ((uVar1 = in_stack_00000038, (int)in_stack_00000038 <= in_stack_0000003c &&
          (-in_stack_00000038 == in_stack_0000003c || -in_stack_0000003c < (int)in_stack_00000038)))
         ))) && ((0 < param_3 && (0 < in_stack_0000003c)))) {
      puVar4 = &param_1;
      puVar5 = &DAT_0072ff34;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      puVar4 = &stack0x00000034;
      puVar5 = &DAT_0072ff64;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_004e5630(0x61a6);
      FUN_004e5630(24999);
      FUN_00515920(&DAT_0072ff34,2);
      uVar1 = FUN_00401310(DAT_0072ff44 >> 0x10,DAT_0072ff48 >> 0x10,_DAT_0072ff3c,
                           DAT_0072ff74 >> 0x10,DAT_0072ff78 >> 0x10,_DAT_0072ff6c);
      return uVar1;
    }
  }
  return uVar1;
}
