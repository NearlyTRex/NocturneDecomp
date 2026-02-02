// Name: core_script.cpp_CCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
// Address Range: [[00561fd0, 005624eb]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_parse_FUN_00561fd0 (CCmdParse *this_ptr,char *input_text,char *template_text)

#include "nocturne.h"

int __cdecl
core_script_cpp_CCmdParse_parse_FUN_00561fd0
          (CCmdParse *this_ptr,char *input_text,char *template_text)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  CCmdParm *pCVar11;
  char *pcVar12;
  byte bVar13;
  char local_154 [300];
  int local_28;
  int local_24;
  CCmdParm *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  pcVar12 = local_154;
  pcVar10 = local_154;
  pcVar9 = local_154;
  local_28 = 0;
  this_ptr->remaining_text[0] = '\0';
  this_ptr->template_text = template_text;
  this_ptr->param_count = 0;
  iVar5 = 0;
  while ((g_CharacterClassificationTable[(byte)(input_text[local_28] + 1)] & 2) != 0) {
    pcVar3 = input_text + local_28;
    local_28 = local_28 + 1;
    this_ptr->cmd_name[iVar5] = *pcVar3;
    iVar5 = iVar5 + 1;
  }
  this_ptr->cmd_name[iVar5] = '\0';
  local_14 = local_28;
  pcVar3 = input_text + local_28;
  cVar1 = *pcVar3;
  for (; (cVar1 != '\0' && ((*pcVar3 != '/' || (pcVar3[1] != '/')))); pcVar3 = pcVar3 + 1) {
    cVar1 = pcVar3[1];
    local_14 = local_14 + 1;
  }
  local_24 = 0;
  while( true ) {
    this_ptr->argument_text[local_24] = '\0';
    pbVar8 = (byte *)(template_text + local_24);
    bVar2 = *pbVar8;
    if ((((bVar2 == 0x28) || (bVar2 == 0x3c)) ||
        ((g_CharacterClassificationTable[(byte)(bVar2 + 1)] & 2) != 0)) || (*pbVar8 == 0)) break;
    if (local_14 <= local_28) {
      pcVar12 = input_text + local_28;
      iVar5 = -1;
      pcVar10 = this_ptr->remaining_text;
      goto code_r0x005621ce;
    }
    iVar4 = toupper((uint)*pbVar8);
    iVar6 = toupper((uint)(byte)input_text[local_28]);
    iVar5 = local_24;
    if (iVar4 != iVar6) {
      return 0;
    }
    pcVar3 = input_text + local_28;
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    this_ptr->argument_text[iVar5] = *pcVar3;
  }
  local_20 = this_ptr->params;
  local_1c = this_ptr->remaining_text;
  iVar5 = 0;
LAB_005620a2:
  while( true ) {
    while( true ) {
      while ((iVar4 = local_28, local_28 < local_14 &&
             ((g_CharacterClassificationTable[(byte)(input_text[local_28] + 1)] & 2) != 0))) {
        local_28 = local_28 + 1;
        local_154[iVar5] = input_text[iVar4];
        iVar5 = iVar5 + 1;
      }
      if ((g_CharacterClassificationTable[(byte)(template_text[local_24] + 1)] & 2) == 0) break;
      local_24 = local_24 + 1;
    }
    if (template_text[local_24] != '<') break;
    if (9 < this_ptr->param_count) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0x1302;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::parse - too many parms!");
    }
    iVar4 = core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0
                      (local_20 + this_ptr->param_count,template_text,&local_24);
    if (iVar4 == 0) {
      return 2;
    }
    local_154[iVar5] = '\0';
    pCVar11 = local_20 + this_ptr->param_count;
    pcVar3 = local_154;
    do {
      cVar1 = *pcVar3;
      pCVar11->prefix_text[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pCVar11->prefix_text[1] = cVar1;
      pCVar11 = (CCmdParm *)(pCVar11->prefix_text + 2);
    } while (cVar1 != '\0');
    local_18 = local_28;
    iVar5 = core_script_cpp_CCmdParm_parseValue_FUN_00561cb0
                      (local_20 + this_ptr->param_count,input_text,&local_28,local_14);
    if (iVar5 == 0) {
      pcVar12 = this_ptr->remaining_text;
      goto LAB_0056233e;
    }
    this_ptr->param_count = this_ptr->param_count + 1;
    iVar5 = 0;
  }
  if (local_14 <= local_28) {
    local_154[iVar5] = '\0';
    pcVar10 = local_1c;
    goto LAB_00562475;
  }
  iVar6 = toupper((uint)(byte)input_text[local_28]);
  iVar7 = toupper((uint)(byte)template_text[local_24]);
  iVar4 = local_28;
  pcVar3 = local_1c;
  if (iVar6 == iVar7) {
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    local_154[iVar5] = input_text[iVar4];
    iVar5 = iVar5 + 1;
    goto LAB_005620a2;
  }
  do {
    cVar1 = *pcVar10;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar12 = input_text + local_28;
  iVar5 = -1;
  do {
    pcVar10 = local_1c;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = local_1c + (uint)bVar13 * -2 + 1;
    cVar1 = *local_1c;
    local_1c = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return 2;
    }
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return 2;
  while( true ) {
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
    if (cVar1 == '\0') break;
LAB_00562475:
    cVar1 = *pcVar12;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar12 = input_text + local_14;
  iVar5 = -1;
  do {
    pcVar10 = local_1c;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = local_1c + (uint)bVar13 * -2 + 1;
    cVar1 = *local_1c;
    local_1c = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  if (template_text[local_24] == '\0') {
    return 3;
  }
  return 2;
  while( true ) {
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
    if (cVar1 == '\0') break;
LAB_0056233e:
    cVar1 = *pcVar9;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar10 = input_text + local_18;
  iVar5 = -1;
  pcVar12 = this_ptr->remaining_text;
  do {
    pcVar9 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar12 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') {
      return 2;
    }
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  return 2;
  while( true ) {
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar10 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x005621ce:
    pcVar9 = pcVar10;
    if (iVar5 == 0) break;
  }
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar12;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  return 1;
}
