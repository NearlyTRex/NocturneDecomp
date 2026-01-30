// Name: core_script.cpp_FUN_00561690
// Address: 00561690
// Address Range: [[00561690, 00561a28]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00561690(void)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00561690(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CCmdParse *pCVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_00000014;
  uint *in_stack_00000018;
  uint *in_stack_0000001c;
  int *in_stack_00000020;
  int in_stack_00000024;
  CCmdParse local_2148;
  char local_2144 [100];
  char local_20e0 [100];
  int local_207c;
  char local_2078 [100];
  char local_2014 [500];
  int aiStack_1e20 [1870];
  char local_e8 [200];
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar12 = 0;
  local_18 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                       (&local_2148,in_stack_00000004,in_stack_00000014,in_stack_00000020,
                        in_stack_00000024);
  if (local_18 < 0) {
    return -1;
  }
  if (in_stack_0000001c != (uint *)0x0) {
    pCVar6 = &local_2148;
    puVar8 = in_stack_0000001c;
    for (iVar2 = 0x84a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = (int)*pCVar6;
      pCVar6 = pCVar6 + (uint)bVar12 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
    }
  }
  pcVar7 = local_2144;
  pcVar9 = in_stack_00000008;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar7 = local_20e0;
  iVar2 = -1;
  pcVar9 = in_stack_00000008;
  do {
    pcVar10 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar7;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < local_18) {
    local_14 = local_2014;
    do {
      pcVar9 = local_2078 + iVar2 * 0x328;
      iVar3 = -1;
      pcVar7 = in_stack_00000008;
      do {
        pcVar10 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar7 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar7 = in_stack_00000008;
      do {
        pcVar9 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar7 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      pcVar7 = local_14;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 0x328;
    } while (iVar2 < local_18);
  }
  local_20 = local_18 * 0x328;
  pcVar9 = local_2078 + local_20;
  iVar2 = -1;
  pcVar7 = in_stack_00000008;
  do {
    pcVar10 = pcVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = pcVar7 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_1c = aiStack_1e20[local_18 * 0xca];
  switch(aiStack_1e20[local_18 * 0xca]) {
  default:
    iVar2 = 0xca;
    pcVar7 = local_2014 + local_18 * 0x328;
    *in_stack_00000010 = '\0';
    do {
      cVar1 = *pcVar7;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    pcVar7 = local_2078 + local_18 * 0x328;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_00000018 = *(uint *)pcVar7;
      pcVar7 = pcVar7 + ((uint)bVar12 * -2 + 1) * 4;
      in_stack_00000018 = in_stack_00000018 + (uint)bVar12 * -2 + 1;
    }
    break;
  case 4:
    uVar4 = 0xffffffff;
    pcVar7 = in_stack_00000008;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar7 = in_stack_00000008;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    local_1c = core_script_cpp_FUN_00561a30
                         (local_2014 + local_20,in_stack_00000008 + (~uVar5 - 1),in_stack_0000000c,
                          in_stack_00000010,in_stack_00000014 - (~uVar4 - 1),in_stack_00000018,
                          (int)in_stack_0000001c);
    break;
  case 0x14:
    pcVar7 = local_2014 + local_20;
    *in_stack_00000010 = '\0';
    do {
      cVar1 = *pcVar7;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    pcVar7 = local_2078 + local_20;
    for (iVar2 = 0xca; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_00000018 = *(uint *)pcVar7;
      pcVar7 = pcVar7 + ((uint)bVar12 * -2 + 1) * 4;
      in_stack_00000018 = in_stack_00000018 + (uint)bVar12 * -2 + 1;
    }
    local_1c = 0x20;
  }
  local_18 = local_18 + 1;
  if (local_18 < local_207c) {
    pcVar7 = local_2014 + local_18 * 0x328;
    do {
      pcVar10 = local_2078 + local_18 * 0x328;
      iVar2 = -1;
      pcVar9 = in_stack_00000010;
      do {
        pcVar11 = pcVar9;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar11 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar10;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      local_18 = local_18 + 1;
      iVar2 = -1;
      pcVar9 = in_stack_00000010;
      do {
        pcVar10 = pcVar9;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      pcVar9 = pcVar7;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + 0x328;
    } while (local_18 < local_207c);
  }
  pcVar7 = local_e8;
  iVar2 = -1;
  do {
    pcVar9 = in_stack_00000010;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = in_stack_00000010 + (uint)bVar12 * -2 + 1;
    cVar1 = *in_stack_00000010;
    in_stack_00000010 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') {
      return local_1c;
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  return local_1c;
}
