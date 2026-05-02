// Name: core_script.cpp_parseConditionExpression_FUN_00561a30
// Address: 00561a30
// MANUAL RECONSTRUCTION
// Address Range: [[00561a30, 00561c69]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseConditionExpression_FUN_00561a30(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out)

#include "nocturne.h"

int __cdecl core_script_cpp_parseConditionExpression_FUN_00561a30(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out)

{
  char cVar2;
  int iVar3;
  char *pcVar2;
  char *cmd_name_out_00;
  char *input_text_00;
  char *pcVar4;
  uint uVar5;
  uint uVar4;
  int iVar6;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar7;
  CStrList local_30;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  char **templates;
  int iVar8;
  char cVar1;
  
  bVar7 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_30);
  local_20 = cursor_position;
  local_1c = core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310
                       (g_CScriptPtr,input_text,&local_30,(int *)&local_20);
  local_14 = local_1c;
  memset(parm_out,0,0x328);
  if (local_14 < 0) {
    uVar5 = 0xffffffff;
    pcVar4 = input_text;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar5 - 1 < (uint)cursor_position) {
      uVar5 = 0xffffffff;
      pcVar4 = input_text;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
      } while (cVar2 != '\0');
      cursor_position = ~uVar5 - 1;
    }
    memcpy(cmd_name_out,input_text,cursor_position);
    cmd_name_out[cursor_position] = '\0';
    pcVar4 = input_text + cursor_position;
    *prefix_out = '\0';
    do {
      cVar2 = *pcVar4;
      *suffix_out = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      suffix_out[1] = cVar2;
      suffix_out = suffix_out + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_30,0);
    return 0x20;
  }
  memcpy(cmd_name_out,input_text,local_20);
  cmd_name_out[local_20] = '\0';
  local_18 = -1;
  pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,local_14);
  do {
    pcVar6 = pcVar2;
    if (*pcVar2 == '(') goto LAB_00561ae9;
    if (*pcVar2 == '\0') break;
    pcVar6 = pcVar2 + 1;
    if (*pcVar6 == '(') goto LAB_00561ae9;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00561ae9:
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
    do {
      cVar1 = *pcVar4;
      *prefix_out = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      prefix_out[1] = cVar2;
      prefix_out = prefix_out + 2;
    } while (cVar2 != '\0');
    local_18 = 0x20;
    *suffix_out = '\0';
  }
  uVar5 = local_20;
  pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_30,local_1c);
  iVar3 = local_18;
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
  } while (cVar2 != '\0');
  pcVar4 = input_text + (~uVar4 - 1) + uVar5;
  iVar6 = -1;
  do {
    pcVar7 = suffix_out;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = suffix_out + (uint)bVar7 * -2 + 1;
    cVar2 = *suffix_out;
    suffix_out = pcVar7;
  } while (cVar2 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_30,0);
  return iVar3;
}
