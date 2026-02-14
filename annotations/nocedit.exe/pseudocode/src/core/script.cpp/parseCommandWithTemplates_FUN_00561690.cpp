// Name: core_script.cpp_parseCommandWithTemplates_FUN_00561690
// Address: 00561690
// Address Range: [[00561690, 00561a28]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CCmdParse *pCVar6;
  char *pcVar7;
  CCmdParm *pCVar8;
  CCmdParse *pCVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  CCmdParse local_2148;
  int local_20;
  ECmdParmType local_1c;
  int local_18;
  char *local_14;
  
  bVar12 = 0;
  local_18 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                       (&local_2148,input_text,cursor_position,templates,template_count);
  if (local_18 < 0) {
    return -1;
  }
  if (parse_out != (CCmdParse *)0x0) {
    pCVar6 = &local_2148;
    pCVar9 = parse_out;
    for (iVar2 = 0x84a; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar9->template_text = pCVar6->template_text;
      pCVar6 = (CCmdParse *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar9 = (CCmdParse *)((int)pCVar9 + (uint)bVar12 * -8 + 4);
    }
  }
  pcVar7 = local_2148.cmd_name;
  pcVar10 = cmd_name_out;
  do {
    cVar1 = *pcVar7;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar7 = local_2148.argument_text;
  iVar2 = -1;
  pcVar10 = cmd_name_out;
  do {
    pcVar11 = pcVar10;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  pcVar11 = pcVar11 + -1;
  do {
    cVar1 = *pcVar7;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < local_18) {
    local_14 = local_2148.params[0].parsed_value;
    do {
      pCVar8 = local_2148.params + iVar2;
      iVar3 = -1;
      pcVar7 = cmd_name_out;
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
        cVar1 = pCVar8->prefix_text[0];
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pCVar8->prefix_text[1];
        pCVar8 = (CCmdParm *)(pCVar8->prefix_text + 2);
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar7 = cmd_name_out;
      do {
        pcVar10 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar7 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      pcVar7 = local_14;
      do {
        cVar1 = *pcVar7;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 0x328;
    } while (iVar2 < local_18);
  }
  pCVar8 = local_2148.params + local_18;
  local_20 = local_18 * 0x328;
  iVar2 = -1;
  pcVar7 = cmd_name_out;
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
    cVar1 = pCVar8->prefix_text[0];
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar8->prefix_text[1];
    pCVar8 = (CCmdParm *)(pCVar8->prefix_text + 2);
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_1c = local_2148.params[local_18].param_type;
  switch(local_1c) {
  default:
    iVar2 = 0xca;
    pcVar7 = local_2148.params[local_18].parsed_value;
    *suffix_out = '\0';
    do {
      cVar1 = *pcVar7;
      *prefix_out = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      prefix_out[1] = cVar1;
      prefix_out = prefix_out + 2;
    } while (cVar1 != '\0');
    pCVar8 = local_2148.params + local_18;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)parm_out->prefix_text = *(uint *)pCVar8->prefix_text;
      pCVar8 = (CCmdParm *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
      parm_out = (CCmdParm *)((int)parm_out + (uint)bVar12 * -8 + 4);
    }
    break;
  case PARM_TYPE_CONDITION:
    uVar4 = 0xffffffff;
    pcVar7 = cmd_name_out;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar7 = cmd_name_out;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    local_1c = core_script_cpp_parseConditionExpression_FUN_00561a30
                         (local_2148.params[local_18].parsed_value,cmd_name_out + (~uVar5 - 1),
                          prefix_out,suffix_out,cursor_position - (~uVar4 - 1),parm_out,parse_out);
    break;
  case PARM_TYPE_EVENT_COMMAND:
    pcVar7 = local_2148.params[local_18].parsed_value;
    *suffix_out = '\0';
    do {
      cVar1 = *pcVar7;
      *prefix_out = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      prefix_out[1] = cVar1;
      prefix_out = prefix_out + 2;
    } while (cVar1 != '\0');
    pCVar8 = local_2148.params + local_18;
    for (iVar2 = 0xca; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)parm_out->prefix_text = *(uint *)pCVar8->prefix_text;
      pCVar8 = (CCmdParm *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
      parm_out = (CCmdParm *)((int)parm_out + (uint)bVar12 * -8 + 4);
    }
    local_1c = 0x20;
  }
  iVar2 = local_18 + 1;
  if (iVar2 < local_2148.param_count) {
    pcVar7 = local_2148.params[local_18 + 1].parsed_value;
    do {
      pCVar8 = local_2148.params + iVar2;
      iVar3 = -1;
      pcVar10 = suffix_out;
      do {
        pcVar11 = pcVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = pCVar8->prefix_text[0];
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pCVar8->prefix_text[1];
        pCVar8 = (CCmdParm *)(pCVar8->prefix_text + 2);
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      iVar3 = -1;
      pcVar10 = suffix_out;
      do {
        pcVar11 = pcVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar10 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      pcVar10 = pcVar7;
      do {
        cVar1 = *pcVar10;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + 0x328;
    } while (iVar2 < local_2148.param_count);
  }
  pcVar7 = local_2148.remaining_text;
  iVar2 = -1;
  do {
    pcVar10 = suffix_out;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar10 = suffix_out + (uint)bVar12 * -2 + 1;
    cVar1 = *suffix_out;
    suffix_out = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar7;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return local_1c;
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return local_1c;
}
