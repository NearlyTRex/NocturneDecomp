// Name: core_script.cpp_SCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
// Address Range: [[00561fd0, 005624eb]]
// Convention: unknown
// Signature: undefined core_script.cpp_SCmdParse_parse_FUN_00561fd0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_SCmdParse_parse(CScriptCmdParse* param_1, uint
   param_2, uint param_3) */

uint core_script_cpp_SCmdParse_parse_FUN_00561fd0(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  byte bVar11;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint uStack_150;
  byte auStack_14c [292];
  char *local_28;
  char *local_24;
  int *local_20;
  int *local_1c;
  char *local_14;
  
  bVar11 = 0;
  local_28 = (char *)0x0;
  *(byte *)(in_stack_00000004 + 0x818) = 0;
  *in_stack_00000004 = in_stack_0000000c;
  in_stack_00000004[0x33] = 0;
  iVar5 = 0;
  while ((g_CharacterClassificationTable[(byte)(local_28[in_stack_00000008] + 1)] & 2U) != 0) {
    pcVar3 = local_28 + in_stack_00000008;
    local_28 = local_28 + 1;
    *(char *)((int)in_stack_00000004 + iVar5 + 4) = *pcVar3;
    iVar5 = iVar5 + 1;
  }
  *(byte *)(iVar5 + 4 + (int)in_stack_00000004) = 0;
  local_14 = local_28;
  pcVar3 = local_28 + in_stack_00000008;
  cVar1 = *pcVar3;
  for (; (cVar1 != '\0' && ((*pcVar3 != '/' || (pcVar3[1] != '/')))); pcVar3 = pcVar3 + 1) {
    cVar1 = pcVar3[1];
    local_14 = local_14 + 1;
  }
  local_24 = (char *)0x0;
  while( true ) {
    *(char *)((int)(in_stack_00000004 + 0x1a) + (int)local_24) = '\0';
    pbVar7 = (byte *)(local_24 + in_stack_0000000c);
    bVar2 = *pbVar7;
    if ((((bVar2 == 0x28) || (bVar2 == 0x3c)) ||
        ((g_CharacterClassificationTable[(byte)(bVar2 + 1)] & 2U) != 0)) || (*pbVar7 == 0)) break;
    if ((int)local_14 <= (int)local_28) {
      local_28 = local_28 + in_stack_00000008;
      iVar5 = -1;
      piVar9 = in_stack_00000004 + 0x818;
      goto code_r0x005621ce;
    }
    iVar5 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar7);
    iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)local_24[in_stack_00000008]);
    if (iVar5 != iVar4) {
      return 0;
    }
    *(byte *)((int)in_stack_00000004 + (int)local_1c + 0x68) =
         *(byte *)((int)local_20 + in_stack_00000008);
    local_20 = (int *)((int)local_20 + 1);
    local_1c = (int *)((int)local_1c + 1);
  }
  local_20 = in_stack_00000004 + 0x34;
  local_1c = in_stack_00000004 + 0x818;
  iVar5 = 0;
LAB_005620a2:
  while( true ) {
    while( true ) {
      while ((pcVar3 = local_28, pcVar10 = &stack0xfffffeac, (int)local_28 < (int)local_14 &&
             ((g_CharacterClassificationTable[(byte)(local_28[in_stack_00000008] + 1)] & 2U) != 0)))
      {
        local_28 = local_28 + 1;
        auStack_14c[iVar5 + -8] = pcVar3[in_stack_00000008];
        iVar5 = iVar5 + 1;
      }
      if ((g_CharacterClassificationTable[(byte)(local_24[in_stack_0000000c] + 1)] & 2U) == 0)
      break;
      local_24 = local_24 + 1;
    }
    if (local_24[in_stack_0000000c] != '<') break;
    if (9 < in_stack_00000004[0x33]) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0x1302;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::parse - too many parms!");
    }
    iVar4 = core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0();
    pcVar3 = (char *)&uStack_150;
    if (iVar4 == 0) {
      return 2;
    }
    auStack_14c[iVar5 + -4] = 0;
    piVar9 = local_1c + in_stack_00000004[0x33] * 0xca;
    do {
      cVar1 = *pcVar3;
      *(char *)piVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)piVar9 + 1) = cVar1;
      piVar9 = (int *)((int)piVar9 + 2);
    } while (cVar1 != '\0');
    local_14 = local_24;
    iVar5 = core_script_cpp_FUN_00561cb0();
    pcVar3 = &stack0xfffffeac;
    if (iVar5 == 0) {
      uStack_150 = in_stack_00000004 + 0x818;
      piVar9 = uStack_150;
      goto LAB_0056233e;
    }
    in_stack_00000004[0x33] = in_stack_00000004[0x33] + 1;
    iVar5 = 0;
  }
  if ((int)local_14 <= (int)local_28) {
    auStack_14c[iVar5 + -8] = 0;
    piVar9 = local_1c;
    goto LAB_00562475;
  }
  iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)local_28[in_stack_00000008]);
  iVar6 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*(byte *)(in_stack_00000010 + (int)local_20));
  piVar9 = local_20;
  pcVar3 = &stack0xfffffeac;
  if (iVar4 == iVar6) {
    local_20 = (int *)((int)local_20 + 1);
    local_1c = (int *)((int)local_1c + 1);
    auStack_14c[iVar5] = *(byte *)((int)piVar9 + in_stack_00000008);
    iVar5 = iVar5 + 1;
    goto LAB_005620a2;
  }
  uStack_150 = (int *)local_14;
  pcVar10 = local_14;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)((int)local_20 + in_stack_00000008);
  iVar5 = -1;
  do {
    pcVar10 = local_14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = local_14 + (uint)bVar11 * -2 + 1;
    cVar1 = *local_14;
    local_14 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return 2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return 2;
  while( true ) {
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    *(char *)((int)piVar9 + 1) = cVar1;
    piVar9 = (int *)((int)piVar9 + 2);
    if (cVar1 == '\0') break;
LAB_00562475:
    cVar1 = *pcVar10;
    *(char *)piVar9 = cVar1;
    if (cVar1 == '\0') break;
  }
  local_14 = local_14 + in_stack_00000008;
  iVar5 = -1;
  do {
    piVar9 = local_1c;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    piVar9 = (int *)((int)local_1c + (uint)bVar11 * -2 + 1);
    iVar4 = *local_1c;
    local_1c = piVar9;
  } while ((char)iVar4 != '\0');
  pcVar3 = (char *)((int)piVar9 + -1);
  do {
    cVar1 = *local_14;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = local_14[1];
    local_14 = local_14 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  if (local_24[in_stack_0000000c] == '\0') {
    return 3;
  }
  return 2;
  while( true ) {
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar9 + 1) = cVar1;
    piVar9 = (int *)((int)piVar9 + 2);
    if (cVar1 == '\0') break;
LAB_0056233e:
    cVar1 = *pcVar3;
    *(char *)piVar9 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar3 = (char *)(unaff_EBP + in_stack_00000008);
  iVar5 = -1;
  do {
    piVar9 = uStack_150;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    piVar9 = (int *)((int)uStack_150 + (uint)bVar11 * -2 + 1);
    iVar4 = *uStack_150;
    uStack_150 = piVar9;
  } while ((char)iVar4 != '\0');
  pcVar10 = (char *)((int)piVar9 + -1);
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return 2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return 2;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar8 = (int *)((int)piVar9 + (uint)bVar11 * -2 + 1);
    iVar4 = *piVar9;
    piVar9 = piVar8;
    if ((char)iVar4 == '\0') break;
code_r0x005621ce:
    piVar8 = piVar9;
    if (iVar5 == 0) break;
  }
  pcVar3 = (char *)((int)piVar8 + -1);
  do {
    cVar1 = *local_28;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = local_28[1];
    local_28 = local_28 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return 1;
}
