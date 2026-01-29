// Name: core_script.cpp_SCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
// Address Range: [[00561fd0, 005624eb]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_SCmdParse_parse_FUN_00561fd0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_SCmdParse_parse(CScriptCmdParse* param_1, uint
   param_2, uint param_3) */

uint core_script_cpp_SCmdParse_parse_FUN_00561fd0(void)

{
  byte *puVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  char *pcVar14;
  byte bVar15;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  char local_154 [300];
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  pcVar11 = local_154;
  pcVar14 = local_154;
  pcVar10 = local_154;
  local_28 = 0;
  *(byte *)(in_stack_00000004 + 0x818) = 0;
  *in_stack_00000004 = in_stack_0000000c;
  in_stack_00000004[0x33] = 0;
  iVar6 = 0;
  while ((g_CharacterClassificationTable[(byte)(*(char *)(local_28 + in_stack_00000008) + 1)] & 2U)
         != 0) {
    puVar1 = (byte *)(local_28 + in_stack_00000008);
    local_28 = local_28 + 1;
    *(byte *)((int)in_stack_00000004 + iVar6 + 4) = *puVar1;
    iVar6 = iVar6 + 1;
  }
  *(byte *)(iVar6 + 4 + (int)in_stack_00000004) = 0;
  local_14 = local_28;
  pcVar4 = (char *)(local_28 + in_stack_00000008);
  cVar2 = *pcVar4;
  for (; (cVar2 != '\0' && ((*pcVar4 != '/' || (pcVar4[1] != '/')))); pcVar4 = pcVar4 + 1) {
    cVar2 = pcVar4[1];
    local_14 = local_14 + 1;
  }
  local_24 = 0;
  while( true ) {
    *(byte *)((int)in_stack_00000004 + local_24 + 0x68) = 0;
    pbVar9 = (byte *)(in_stack_0000000c + local_24);
    bVar3 = *pbVar9;
    if ((((bVar3 == 0x28) || (bVar3 == 0x3c)) ||
        ((g_CharacterClassificationTable[(byte)(bVar3 + 1)] & 2U) != 0)) || (*pbVar9 == 0)) break;
    if (local_14 <= local_28) {
      pcVar10 = (char *)(local_28 + in_stack_00000008);
      iVar6 = -1;
      piVar12 = in_stack_00000004 + 0x818;
      goto code_r0x005621ce;
    }
    iVar5 = toupper((uint)*pbVar9);
    iVar7 = toupper((uint)*(byte *)(local_28 + in_stack_00000008));
    iVar6 = local_24;
    if (iVar5 != iVar7) {
      return 0;
    }
    puVar1 = (byte *)(local_28 + in_stack_00000008);
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    *(byte *)((int)in_stack_00000004 + iVar6 + 0x68) = *puVar1;
  }
  local_20 = in_stack_00000004 + 0x34;
  local_1c = in_stack_00000004 + 0x818;
  iVar6 = 0;
LAB_005620a2:
  while( true ) {
    while( true ) {
      while ((iVar5 = local_28, local_28 < local_14 &&
             ((g_CharacterClassificationTable[(byte)(*(char *)(local_28 + in_stack_00000008) + 1)] &
              2U) != 0))) {
        local_28 = local_28 + 1;
        local_154[iVar6] = *(char *)(iVar5 + in_stack_00000008);
        iVar6 = iVar6 + 1;
      }
      if ((g_CharacterClassificationTable[(byte)(*(char *)(in_stack_0000000c + local_24) + 1)] & 2U)
          == 0) break;
      local_24 = local_24 + 1;
    }
    if (*(char *)(in_stack_0000000c + local_24) != '<') break;
    if (9 < in_stack_00000004[0x33]) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0x1302;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::parse - too many parms!");
    }
    iVar5 = core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0();
    if (iVar5 == 0) {
      return 2;
    }
    local_154[iVar6] = '\0';
    piVar12 = local_20 + in_stack_00000004[0x33] * 0xca;
    pcVar4 = local_154;
    do {
      cVar2 = *pcVar4;
      *(char *)piVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      *(char *)((int)piVar12 + 1) = cVar2;
      piVar12 = (int *)((int)piVar12 + 2);
    } while (cVar2 != '\0');
    local_18 = local_28;
    iVar6 = core_script_cpp_FUN_00561cb0();
    if (iVar6 == 0) {
      piVar12 = in_stack_00000004 + 0x818;
      goto LAB_0056233e;
    }
    in_stack_00000004[0x33] = in_stack_00000004[0x33] + 1;
    iVar6 = 0;
  }
  if (local_14 <= local_28) {
    local_154[iVar6] = '\0';
    piVar12 = local_1c;
    goto LAB_00562475;
  }
  iVar7 = toupper((uint)*(byte *)(local_28 + in_stack_00000008));
  iVar8 = toupper((uint)*(byte *)(in_stack_0000000c + local_24));
  iVar5 = local_28;
  piVar12 = local_1c;
  if (iVar7 == iVar8) {
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    local_154[iVar6] = *(char *)(iVar5 + in_stack_00000008);
    iVar6 = iVar6 + 1;
    goto LAB_005620a2;
  }
  do {
    cVar2 = *pcVar14;
    *(char *)piVar12 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    *(char *)((int)piVar12 + 1) = cVar2;
    piVar12 = (int *)((int)piVar12 + 2);
  } while (cVar2 != '\0');
  pcVar10 = (char *)(local_28 + in_stack_00000008);
  iVar6 = -1;
  do {
    piVar12 = local_1c;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    piVar12 = (int *)((int)local_1c + (uint)bVar15 * -2 + 1);
    iVar5 = *local_1c;
    local_1c = piVar12;
  } while ((char)iVar5 != '\0');
  pcVar14 = (char *)((int)piVar12 + -1);
  do {
    cVar2 = *pcVar10;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 2;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 2;
  while( true ) {
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    *(char *)((int)piVar12 + 1) = cVar2;
    piVar12 = (int *)((int)piVar12 + 2);
    if (cVar2 == '\0') break;
LAB_00562475:
    cVar2 = *pcVar11;
    *(char *)piVar12 = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar10 = (char *)(local_14 + in_stack_00000008);
  iVar6 = -1;
  do {
    piVar12 = local_1c;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    piVar12 = (int *)((int)local_1c + (uint)bVar15 * -2 + 1);
    iVar5 = *local_1c;
    local_1c = piVar12;
  } while ((char)iVar5 != '\0');
  pcVar14 = (char *)((int)piVar12 + -1);
  do {
    cVar2 = *pcVar10;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  if (*(char *)(in_stack_0000000c + local_24) == '\0') {
    return 3;
  }
  return 2;
  while( true ) {
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    *(char *)((int)piVar12 + 1) = cVar2;
    piVar12 = (int *)((int)piVar12 + 2);
    if (cVar2 == '\0') break;
LAB_0056233e:
    cVar2 = *pcVar10;
    *(char *)piVar12 = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar10 = (char *)(local_18 + in_stack_00000008);
  iVar6 = -1;
  piVar12 = in_stack_00000004 + 0x818;
  do {
    piVar13 = piVar12;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    piVar13 = (int *)((int)piVar12 + (uint)bVar15 * -2 + 1);
    iVar5 = *piVar12;
    piVar12 = piVar13;
  } while ((char)iVar5 != '\0');
  pcVar14 = (char *)((int)piVar13 + -1);
  do {
    cVar2 = *pcVar10;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 2;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 2;
  while( true ) {
    iVar6 = iVar6 + -1;
    piVar13 = (int *)((int)piVar12 + (uint)bVar15 * -2 + 1);
    iVar5 = *piVar12;
    piVar12 = piVar13;
    if ((char)iVar5 == '\0') break;
code_r0x005621ce:
    piVar13 = piVar12;
    if (iVar6 == 0) break;
  }
  pcVar14 = (char *)((int)piVar13 + -1);
  do {
    cVar2 = *pcVar10;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 1;
}
