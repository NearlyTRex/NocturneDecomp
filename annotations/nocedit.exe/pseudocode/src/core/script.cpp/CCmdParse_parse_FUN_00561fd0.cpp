// Name: core_script.cpp_CCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
// Address Range: [[00561fd0, 005624eb]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse *this_ptr,char *input_text,char *template_text)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse *this_ptr,char *input_text,char *template_text)

{
  char cVar2;
  char *pcVar3;
  int iVar3;
  int iVar8;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar9;
  byte *pbVar8;
  char *pcVar11;
  char *pcVar9;
  char *pcVar10;
  char *pcVar13;
  CCmdParm *pCVar11;
  char *pcVar12;
  char *pcVar14;
  byte bVar13;
  char local_154 [300];
  int local_28;
  int local_24;
  CCmdParm *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  char cVar1;
  byte bVar2;
  
  bVar13 = 0;
  pcVar13 = local_154;
  pcVar14 = local_154;
  pcVar9 = local_154;
  local_28 = 0;
  this_ptr->remaining_text[0] = '\0';
  this_ptr->template_text = template_text;
  this_ptr->param_count = 0;
  iVar9 = 0;
  while ((g_CharacterClassificationTable[(byte)(input_text[local_28] + 1)] & 2) != 0) {
    pcVar11 = input_text + local_28;
    local_28 = local_28 + 1;
    this_ptr->cmd_name[iVar9] = *pcVar11;
    iVar9 = iVar9 + 1;
  }
  this_ptr->cmd_name[iVar9] = '\0';
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
      pcVar13 = input_text + local_28;
      iVar9 = -1;
      pcVar14 = this_ptr->remaining_text;
      goto code_r0x005621ce;
    }
    iVar3 = toupper((uint)*pbVar8);
    iVar8 = toupper((uint)(byte)input_text[local_28]);
    iVar9 = local_24;
    if (iVar3 != iVar8) {
      return 0;
    }
    pcVar11 = input_text + local_28;
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    this_ptr->argument_text[iVar9] = *pcVar11;
  }
  local_20 = this_ptr->params;
  local_1c = this_ptr->remaining_text;
  iVar9 = 0;
LAB_005620a2:
  while( true ) {
    while( true ) {
      while ((iVar3 = local_28, local_28 < local_14 &&
             ((g_CharacterClassificationTable[(byte)(input_text[local_28] + 1)] & 2) != 0))) {
        local_28 = local_28 + 1;
        local_154[iVar9] = input_text[iVar3];
        iVar9 = iVar9 + 1;
      }
      if ((g_CharacterClassificationTable[(byte)(template_text[local_24] + 1)] & 2) == 0) break;
      local_24 = local_24 + 1;
    }
    if (template_text[local_24] != '<') break;
    if (9 < this_ptr->param_count) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 4866;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::parse - too many parms!");
    }
    iVar4 = core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0
                      (local_20 + this_ptr->param_count,template_text,&local_24);
    if (iVar4 == 0) {
      return 2;
    }
    local_154[iVar9] = '\0';
    pCVar11 = local_20 + this_ptr->param_count;
    pcVar11 = local_154;
    do {
      cVar2 = *pcVar11;
      pCVar11->prefix_text[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pCVar11->prefix_text[1] = cVar2;
      pCVar11 = (CCmdParm *)(pCVar11->prefix_text + 2);
    } while (cVar2 != '\0');
    local_18 = local_28;
    iVar5 = core_script_cpp_CCmdParm_parseValue_FUN_00561cb0
                      (local_20 + this_ptr->param_count,input_text,&local_28,local_14);
    if (iVar5 == 0) {
      pcVar12 = this_ptr->remaining_text;
      goto LAB_0056233e;
    }
    this_ptr->param_count = this_ptr->param_count + 1;
    iVar9 = 0;
  }
  if (local_14 <= local_28) {
    local_154[iVar9] = '\0';
    pcVar14 = local_1c;
    goto LAB_00562475;
  }
  iVar6 = toupper((uint)(byte)input_text[local_28]);
  iVar7 = toupper((uint)(byte)template_text[local_24]);
  iVar3 = local_28;
  pcVar11 = local_1c;
  if (iVar6 == iVar7) {
    local_28 = local_28 + 1;
    local_24 = local_24 + 1;
    local_154[iVar9] = input_text[iVar3];
    iVar9 = iVar9 + 1;
    goto LAB_005620a2;
  }
  do {
    cVar2 = *pcVar14;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  pcVar13 = input_text + local_28;
  iVar9 = -1;
  do {
    pcVar14 = local_1c;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar14 = local_1c + (uint)bVar13 * -2 + 1;
    cVar2 = *local_1c;
    local_1c = pcVar14;
  } while (cVar2 != '\0');
  pcVar14 = pcVar14 + -1;
  do {
    cVar2 = *pcVar13;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') {
      return 2;
    }
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  return 2;
  while( true ) {
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
    if (cVar2 == '\0') break;
LAB_00562475:
    cVar2 = *pcVar13;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar13 = input_text + local_14;
  iVar9 = -1;
  do {
    pcVar14 = local_1c;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar14 = local_1c + (uint)bVar13 * -2 + 1;
    cVar2 = *local_1c;
    local_1c = pcVar14;
  } while (cVar2 != '\0');
  pcVar14 = pcVar14 + -1;
  do {
    cVar2 = *pcVar13;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  if (template_text[local_24] == '\0') {
    return 3;
  }
  return 2;
  while( true ) {
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar12[1] = cVar2;
    pcVar12 = pcVar12 + 2;
    if (cVar2 == '\0') break;
LAB_0056233e:
    cVar2 = *pcVar9;
    *pcVar12 = cVar2;
    if (cVar2 == '\0') break;
  }
  pcVar10 = input_text + local_18;
  iVar9 = -1;
  pcVar13 = this_ptr->remaining_text;
  do {
    pcVar14 = pcVar13;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar14 = pcVar13 + (uint)bVar13 * -2 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar14;
  } while (cVar2 != '\0');
  pcVar14 = pcVar14 + -1;
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
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar14 + (uint)bVar13 * -2 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar11;
    if (cVar2 == '\0') break;
code_r0x005621ce:
    pcVar11 = pcVar14;
    if (iVar9 == 0) break;
  }
  pcVar11 = pcVar11 + -1;
  do {
    cVar2 = *pcVar13;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  return 1;
}
