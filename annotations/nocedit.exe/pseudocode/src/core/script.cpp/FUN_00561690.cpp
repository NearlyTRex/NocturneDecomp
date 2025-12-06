// Name: core_script.cpp_FUN_00561690
// Address: 00561690
// Address Range: [[00561690, 00561a28]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561690()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00561690(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6, uint
   param_7, uint param_8, uint param_9) */

int core_script_cpp_FUN_00561690(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char *in_stack_00000008;
  char *in_stack_00000010;
  uint *in_stack_0000001c;
  uint *in_stack_00000020;
  char *local_2144;
  char acStack_2140 [100];
  char acStack_20dc [104];
  int iStack_2074;
  char acStack_2070 [96];
  char acStack_2010 [4];
  char acStack_200c [496];
  uint auStack_1e1c [1871];
  char acStack_e0 [196];
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar10 = 0;
  local_14 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
  if (local_14 < 0) {
    return -1;
  }
  if (in_stack_00000020 != (uint *)0x0) {
    ppcVar4 = &local_2144;
    for (iVar2 = 0x84a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_00000020 = *ppcVar4;
      ppcVar4 = ppcVar4 + (uint)bVar10 * -2 + 1;
      in_stack_00000020 = in_stack_00000020 + (uint)bVar10 * -2 + 1;
    }
  }
  pcVar5 = acStack_2140;
  pcVar7 = in_stack_00000008;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_20dc;
  iVar2 = -1;
  pcVar7 = in_stack_00000008;
  do {
    pcVar8 = pcVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < local_14) {
    unaff_EBP = acStack_2010;
    do {
      pcVar7 = acStack_2070 + iVar2 * 0x328 + -4;
      iVar3 = -1;
      pcVar5 = in_stack_00000008;
      do {
        pcVar8 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar5 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar8;
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
      iVar3 = -1;
      pcVar5 = in_stack_00000008;
      do {
        pcVar7 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar5 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      pcVar5 = unaff_EBP;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      unaff_EBP = unaff_EBP + 0x328;
    } while (iVar2 < local_14);
  }
  local_1c = local_14 * 0x328;
  pcVar7 = acStack_2070 + local_1c + -4;
  iVar2 = -1;
  pcVar5 = in_stack_00000008;
  do {
    pcVar8 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar5 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar8;
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
  local_18 = auStack_1e1c[local_14 * 0xca];
  switch(auStack_1e1c[local_14 * 0xca]) {
  default:
    iVar2 = 0xca;
    pcVar5 = acStack_2010 + local_14 * 0x328;
    *in_stack_00000010 = '\0';
    pcVar7 = in_stack_00000010;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar5 = acStack_2070 + local_14 * 0x328 + -4;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_0000001c = *(uint *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar10 * -2 + 1) * 4;
      in_stack_0000001c = in_stack_0000001c + (uint)bVar10 * -2 + 1;
    }
    break;
  case 4:
    iVar2 = -1;
    pcVar5 = in_stack_00000008;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    local_14 = core_script_cpp_FUN_00561a30();
    break;
  case 0x14:
    pcVar5 = acStack_2010 + local_1c;
    *in_stack_00000010 = '\0';
    pcVar7 = in_stack_00000010;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar5 = acStack_2070 + local_1c + -4;
    for (iVar2 = 0xca; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_0000001c = *(uint *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar10 * -2 + 1) * 4;
      in_stack_0000001c = in_stack_0000001c + (uint)bVar10 * -2 + 1;
    }
    local_18 = 0x20;
  }
  pcVar5 = unaff_EBP + 1;
  if ((int)pcVar5 < iStack_2074) {
    pcVar7 = acStack_200c + (int)pcVar5 * 0x328;
    do {
      pcVar6 = acStack_2070 + (int)pcVar5 * 0x328;
      local_2144 = in_stack_00000010;
      iVar2 = -1;
      pcVar8 = in_stack_00000010;
      do {
        pcVar9 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar8 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + 1;
      iVar2 = -1;
      pcVar8 = in_stack_00000010;
      do {
        pcVar6 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar8 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      pcVar8 = pcVar7;
      do {
        cVar1 = *pcVar8;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + 0x328;
    } while ((int)pcVar5 < iStack_2074);
  }
  pcVar5 = acStack_e0;
  local_2144 = in_stack_00000010;
  iVar2 = -1;
  do {
    pcVar7 = in_stack_00000010;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = in_stack_00000010 + (uint)bVar10 * -2 + 1;
    cVar1 = *in_stack_00000010;
    in_stack_00000010 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return local_14;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return local_14;
}
