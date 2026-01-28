// Name: core_script.cpp_FUN_00561690
// Address: 00561690
// Address Range: [[00561690, 00561a28]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00561690(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00561690(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6, uint
   param_7, uint param_8, uint param_9) */

uint core_script_cpp_FUN_00561690(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  uint *in_stack_00000018;
  uint *in_stack_0000001c;
  uint local_2148;
  char local_2144 [100];
  char local_20e0 [100];
  int local_207c;
  char local_2078 [100];
  char local_2014 [500];
  uint auStack_1e20 [1870];
  char local_e8 [200];
  int local_20;
  uint local_1c;
  int local_18;
  char *local_14;
  
  bVar9 = 0;
  local_18 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
  if (local_18 < 0) {
    return 0xffffffff;
  }
  if (in_stack_0000001c != (uint *)0x0) {
    puVar4 = &local_2148;
    for (iVar2 = 0x84a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_0000001c = *puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
      in_stack_0000001c = in_stack_0000001c + (uint)bVar9 * -2 + 1;
    }
  }
  pcVar5 = local_2144;
  pcVar6 = in_stack_00000008;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = local_20e0;
  iVar2 = -1;
  pcVar6 = in_stack_00000008;
  do {
    pcVar7 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar6 + (uint)bVar9 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < local_18) {
    local_14 = local_2014;
    do {
      pcVar6 = local_2078 + iVar2 * 0x328;
      iVar3 = -1;
      pcVar5 = in_stack_00000008;
      do {
        pcVar7 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar5 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar5 = in_stack_00000008;
      do {
        pcVar6 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar5 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      pcVar5 = local_14;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 0x328;
    } while (iVar2 < local_18);
  }
  local_20 = local_18 * 0x328;
  pcVar6 = local_2078 + local_20;
  iVar2 = -1;
  pcVar5 = in_stack_00000008;
  do {
    pcVar7 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar5 + (uint)bVar9 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_1c = auStack_1e20[local_18 * 0xca];
  switch(auStack_1e20[local_18 * 0xca]) {
  default:
    iVar2 = 0xca;
    pcVar5 = local_2014 + local_18 * 0x328;
    *in_stack_00000010 = '\0';
    do {
      cVar1 = *pcVar5;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    pcVar5 = local_2078 + local_18 * 0x328;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_00000018 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
      in_stack_00000018 = in_stack_00000018 + (uint)bVar9 * -2 + 1;
    }
    break;
  case 4:
    iVar2 = -1;
    pcVar5 = in_stack_00000008;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    local_1c = core_script_cpp_FUN_00561a30();
    break;
  case 0x14:
    pcVar5 = local_2014 + local_20;
    *in_stack_00000010 = '\0';
    do {
      cVar1 = *pcVar5;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    pcVar5 = local_2078 + local_20;
    for (iVar2 = 0xca; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_00000018 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
      in_stack_00000018 = in_stack_00000018 + (uint)bVar9 * -2 + 1;
    }
    local_1c = 0x20;
  }
  local_18 = local_18 + 1;
  if (local_18 < local_207c) {
    pcVar5 = local_2014 + local_18 * 0x328;
    do {
      pcVar7 = local_2078 + local_18 * 0x328;
      iVar2 = -1;
      pcVar6 = in_stack_00000010;
      do {
        pcVar8 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar8 = pcVar6 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      local_18 = local_18 + 1;
      iVar2 = -1;
      pcVar6 = in_stack_00000010;
      do {
        pcVar7 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar6 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      pcVar6 = pcVar5;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + 0x328;
    } while (local_18 < local_207c);
  }
  pcVar5 = local_e8;
  iVar2 = -1;
  do {
    pcVar6 = in_stack_00000010;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    cVar1 = *in_stack_00000010;
    in_stack_00000010 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return local_1c;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return local_1c;
}
