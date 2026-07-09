// Name: core_script.cpp_parseCommandWithTemplates_FUN_00561690
// Address: 00561690
// MANUAL RECONSTRUCTION
// Address Range: [[00561690, 00561a28]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)

#include "nocturne.h"

int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)

{
  int iVar4;
  int iVar5;
  uint uVar5;
  char *pcVar8;
  CCmdParm *pCVar8;
  CCmdParm *pCVar10;
  CCmdParse local_2148;
  ECmdParmType local_1c;
  char *local_14;

  iVar4 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                    (&local_2148,input_text,cursor_position,templates,template_count);
  if (iVar4 < 0) {
    return -1;
  }
  if (parse_out != (CCmdParse *)0x0) {
    *parse_out = local_2148;
  }
  strcpy(cmd_name_out,local_2148.cmd_name);
  strcat(cmd_name_out,local_2148.argument_text);
  iVar5 = 0;
  if (0 < iVar4) {
    local_14 = local_2148.params[0].parsed_value;
    do {
      pCVar10 = local_2148.params + iVar5;
      strcat(cmd_name_out,pCVar10->prefix_text);
      strcat(cmd_name_out,local_14);
      iVar5 = iVar5 + 1;
      local_14 = local_14 + sizeof(CCmdParm);
    } while (iVar5 < iVar4);
  }
  pCVar10 = local_2148.params + iVar4;
  strcat(cmd_name_out,pCVar10->prefix_text);
  local_1c = local_2148.params[iVar4].param_type;
  switch(local_1c) {
  default:
    *suffix_out = '\0';
    strcpy(prefix_out,local_2148.params[iVar4].parsed_value);
    *parm_out = local_2148.params[iVar4];
    break;
  case PARM_TYPE_CONDITION:
    uVar5 = strlen(cmd_name_out);
    local_1c = core_script_cpp_parseConditionExpression_FUN_00561a30
                         (local_2148.params[iVar4].parsed_value,cmd_name_out + uVar5,
                          prefix_out,suffix_out,cursor_position - uVar5,parm_out,parse_out);
    break;
  case PARM_TYPE_EVENT_COMMAND:
    *suffix_out = '\0';
    strcpy(prefix_out,local_2148.params[iVar4].parsed_value);
    *parm_out = local_2148.params[iVar4];
    local_1c = 0x20;
  }
  iVar5 = iVar4 + 1;
  if (iVar5 < local_2148.param_count) {
    pcVar8 = local_2148.params[iVar4 + 1].parsed_value;
    do {
      pCVar8 = local_2148.params + iVar5;
      strcat(suffix_out,pCVar8->prefix_text);
      iVar5 = iVar5 + 1;
      strcat(suffix_out,pcVar8);
      pcVar8 = pcVar8 + sizeof(CCmdParm);
    } while (iVar5 < local_2148.param_count);
  }
  strcat(suffix_out,local_2148.remaining_text);
  return local_1c;
}
