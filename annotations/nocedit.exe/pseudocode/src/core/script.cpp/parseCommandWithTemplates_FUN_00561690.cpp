// Name: core_script.cpp_parseCommandWithTemplates_FUN_00561690
// Address: 00561690
// Address Range: [[00561690, 00561a28]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)

#include "nocturne.h"

int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)

{
  char cVar2;
  int iVar4;
  int iVar2;
  int iVar5;
  int iVar3;
  int iVar6;
  uint uVar4;
  uint uVar5;
  CCmdParse *pCVar6;
  char *pcVar7;
  char *pcVar8;
  CCmdParm *pCVar8;
  CCmdParm *pCVar10;
  CCmdParse *pCVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar12;
  CCmdParse local_2148;
  int local_20;
  ECmdParmType local_1c;
  int local_18;
  char *local_14;
  char cVar1;
  
  bVar12 = 0;
  iVar4 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                    (&local_2148,input_text,cursor_position,templates,template_count);
  if (iVar4 < 0) {
    return -1;
  }
  if (parse_out != (CCmdParse *)0x0) {
    pCVar6 = &local_2148;
    pCVar9 = parse_out;
    for (iVar2 = 0x84a; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar9 = (CCmdParse *)((int)pCVar9 + (uint)bVar12 * -8 + 4);
      pCVar6 = (CCmdParse *)((int)pCVar6 + (uint)bVar12 * -8 + 4);
      pCVar9->template_text = pCVar6->template_text;
      pCVar6 = pCVar6;
      pCVar9 = pCVar9;
    }
  }
  pcVar7 = local_2148.cmd_name;
  pcVar10 = cmd_name_out;
  do {
    cVar1 = *pcVar7;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar10[1] = cVar2;
    pcVar10 = pcVar10 + 2;
  } while (cVar2 != '\0');
  pcVar8 = local_2148.argument_text;
  iVar5 = -1;
  pcVar11 = cmd_name_out;
  do {
    pcVar11 = pcVar11;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11;
  } while (cVar2 != '\0');
  pcVar12 = pcVar11 + -1;
  do {
    cVar2 = *pcVar8;
    *pcVar12 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar2;
    pcVar12 = pcVar12 + 2;
  } while (cVar2 != '\0');
  iVar5 = 0;
  if (0 < iVar4) {
    local_14 = local_2148.params[0].parsed_value;
    do {
      pCVar10 = local_2148.params + iVar5;
      iVar3 = -1;
      pcVar8 = cmd_name_out;
      do {
        pcVar12 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar12 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar2 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar2 = pCVar10->prefix_text[0];
        *pcVar12 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pCVar10->prefix_text[1];
        pCVar10 = (CCmdParm *)(pCVar10->prefix_text + 2);
        pcVar12[1] = cVar2;
        pcVar12 = pcVar12 + 2;
      } while (cVar2 != '\0');
      iVar6 = -1;
      pcVar8 = cmd_name_out;
      do {
        pcVar12 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar12 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar2 != '\0');
      pcVar12 = pcVar12 + -1;
      pcVar8 = local_14;
      do {
        cVar2 = *pcVar8;
        *pcVar12 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar12[1] = cVar2;
        pcVar12 = pcVar12 + 2;
      } while (cVar2 != '\0');
      iVar5 = iVar5 + 1;
      local_14 = local_14 + 0x328;
    } while (iVar5 < iVar4);
  }
  pCVar10 = local_2148.params + iVar4;
  iVar5 = -1;
  pcVar8 = cmd_name_out;
  do {
    pcVar12 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar12 = pcVar8 + (uint)bVar12 * -2 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar12;
  } while (cVar2 != '\0');
  pcVar12 = pcVar12 + -1;
  do {
    cVar2 = pCVar10->prefix_text[0];
    *pcVar12 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar10->prefix_text[1];
    pCVar10 = (CCmdParm *)(pCVar10->prefix_text + 2);
    pcVar12[1] = cVar2;
    pcVar12 = pcVar12 + 2;
  } while (cVar2 != '\0');
  local_1c = local_2148.params[iVar4].param_type;
  switch(local_1c) {
  default:
    iVar5 = 0xca;
    pcVar8 = local_2148.params[iVar4].parsed_value;
    *suffix_out = '\0';
    do {
      cVar2 = *pcVar8;
      *prefix_out = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      prefix_out[1] = cVar2;
      prefix_out = prefix_out + 2;
    } while (cVar2 != '\0');
    pCVar10 = local_2148.params + iVar4;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)parm_out->prefix_text = *(uint *)pCVar10->prefix_text;
      pCVar10 = (CCmdParm *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
      parm_out = (CCmdParm *)((int)parm_out + (uint)bVar12 * -8 + 4);
    }
    break;
  case PARM_TYPE_CONDITION:
    uVar4 = 0xffffffff;
    pcVar8 = cmd_name_out;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    uVar5 = 0xffffffff;
    pcVar8 = cmd_name_out;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
    } while (cVar2 != '\0');
    local_1c = core_script_cpp_parseConditionExpression_FUN_00561a30
                         (local_2148.params[iVar4].parsed_value,cmd_name_out + (~uVar5 - 1),
                          prefix_out,suffix_out,cursor_position - (~uVar4 - 1),parm_out,parse_out);
    break;
  case PARM_TYPE_EVENT_COMMAND:
    pcVar8 = local_2148.params[iVar4].parsed_value;
    *suffix_out = '\0';
    do {
      cVar2 = *pcVar8;
      *prefix_out = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      prefix_out[1] = cVar2;
      prefix_out = prefix_out + 2;
    } while (cVar2 != '\0');
    pCVar10 = local_2148.params + iVar4;
    for (iVar5 = 0xca; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)parm_out->prefix_text = *(uint *)pCVar10->prefix_text;
      pCVar10 = (CCmdParm *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
      parm_out = (CCmdParm *)((int)parm_out + (uint)bVar12 * -8 + 4);
    }
    local_1c = 0x20;
  }
  iVar5 = iVar4 + 1;
  if (iVar5 < local_2148.param_count) {
    pcVar8 = local_2148.params[iVar4 + 1].parsed_value;
    do {
      pCVar8 = local_2148.params + iVar5;
      iVar4 = -1;
      pcVar12 = suffix_out;
      do {
        pcVar13 = pcVar12;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar13 = pcVar12 + (uint)bVar12 * -2 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar2 = pCVar8->prefix_text[0];
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pCVar8->prefix_text[1];
        pCVar8 = (CCmdParm *)(pCVar8->prefix_text + 2);
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      iVar5 = iVar5 + 1;
      iVar4 = -1;
      pcVar12 = suffix_out;
      do {
        pcVar13 = pcVar12;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar13 = pcVar12 + (uint)bVar12 * -2 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 != '\0');
      pcVar13 = pcVar13 + -1;
      pcVar12 = pcVar8;
      do {
        cVar2 = *pcVar12;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      pcVar8 = pcVar8 + 0x328;
    } while (iVar5 < local_2148.param_count);
  }
  pcVar8 = local_2148.remaining_text;
  iVar4 = -1;
  do {
    pcVar12 = suffix_out;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar12 = suffix_out + (uint)bVar12 * -2 + 1;
    cVar2 = *suffix_out;
    suffix_out = pcVar12;
  } while (cVar2 != '\0');
  pcVar12 = pcVar12 + -1;
  do {
    cVar2 = *pcVar8;
    *pcVar12 = cVar2;
    if (cVar2 == '\0') {
      return local_1c;
    }
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar2;
    pcVar12 = pcVar12 + 2;
  } while (cVar2 != '\0');
  return local_1c;
}
