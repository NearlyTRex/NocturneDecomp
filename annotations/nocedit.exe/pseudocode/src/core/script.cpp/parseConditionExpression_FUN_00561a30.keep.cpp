// Name: core_script.cpp_parseConditionExpression_FUN_00561a30
// Address: 00561a30
// MANUAL RECONSTRUCTION
// Address Range: [[00561a30, 00561c69]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseConditionExpression_FUN_00561a30(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out)

#include "nocturne.h"

int __cdecl core_script_cpp_parseConditionExpression_FUN_00561a30(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out)

{
  int iVar3;
  char *pcVar2;
  char *cmd_name_out_00;
  char *input_text_00;
  char *pcVar4;
  uint uVar5;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  CStrList local_30;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  char **templates;
  int iVar8;

  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_30);
  local_20 = cursor_position;
  local_1c = core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310
                       (g_CScriptPtr,input_text,&local_30,(int *)&local_20);
  local_14 = local_1c;
  memset(parm_out,0,0x328);
  if (local_14 < 0) {
    if (strlen(input_text) < (uint)cursor_position) {
      cursor_position = strlen(input_text);
    }
    memcpy(cmd_name_out,input_text,cursor_position);
    cmd_name_out[cursor_position] = '\0';
    *prefix_out = '\0';
    strcpy(suffix_out,input_text + cursor_position);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_30,0);
    return 0x20;
  }
  memcpy(cmd_name_out,input_text,local_20);
  cmd_name_out[local_20] = '\0';
  local_18 = -1;
  pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,local_14);
  pcVar6 = strchr(pcVar2,'(');
  if (pcVar6 != (char *)0x0) {
    iVar8 = 0x15;
    templates = g_CommandTemplates + 0x78;
    iVar5 = cursor_position - local_20;
    cmd_name_out_00 = cmd_name_out + local_20;
    pcVar4 = prefix_out;
    pcVar7 = suffix_out;
    input_text_00 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,local_14);
    local_18 = core_script_cpp_parseCommandWithTemplates_FUN_00561690
                         (input_text_00,cmd_name_out_00,pcVar4,pcVar7,iVar5,parm_out,parse_out,
                          templates,iVar8);
  }
  if (local_18 < 0) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,local_1c);
    strcpy(prefix_out,pcVar4);
    local_18 = 0x20;
    *suffix_out = '\0';
  }
  uVar5 = local_20;
  pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,local_1c);
  iVar3 = local_18;
  pcVar4 = input_text + strlen(pcVar4) + uVar5;
  strcat(suffix_out,pcVar4);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_30,0);
  return iVar3;
}
