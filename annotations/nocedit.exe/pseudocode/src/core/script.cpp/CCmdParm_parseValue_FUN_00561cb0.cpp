// Name: core_script.cpp_CCmdParm_parseValue_FUN_00561cb0
// Address: 00561cb0
// Address Range: [[00561cb0, 00561da0]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParm_parseValue_FUN_00561cb0(CCmdParm *this_ptr,char *input_text,int *cursor,int end_position)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParm_parseValue_FUN_00561cb0(CCmdParm *this_ptr,char *input_text,int *cursor,int end_position)

{
  int iVar3;
  char *pcVar4;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar5;
  CCmdParm *pCVar6;
  int iVar1;
  
  uVar3 = 0xffffffff;
  pCVar6 = this_ptr;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar4 = pCVar6->prefix_text;
    pCVar6 = (CCmdParm *)(pCVar6->prefix_text + 1);
  } while (*pcVar4 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar1 = *cursor;
  while ((iVar1 < end_position &&
         ((g_CharacterClassificationTable[(byte)(input_text[*cursor] + 1)] & 2) != 0))) {
    iVar3 = *cursor;
    *cursor = iVar3 + 1;
    this_ptr->prefix_text[iVar4] = input_text[iVar3];
    iVar1 = *cursor;
    iVar4 = iVar4 + 1;
  }
  this_ptr->prefix_text[iVar4] = '\0';
  iVar5 = 0;
  iVar3 = *cursor;
  iVar2 = 0;
  while ((iVar3 < end_position &&
         (((input_text[*cursor] != ',' || (iVar5 != 0)) || (this_ptr->param_type == PARM_TYPE_TEXT))
         ))) {
    if (input_text[*cursor] == '(') {
      iVar5 = iVar5 + 1;
    }
    if (input_text[*cursor] == ')') {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
    }
    iVar3 = *cursor;
    *cursor = iVar3 + 1;
    this_ptr->parsed_value[iVar2] = input_text[iVar3];
    iVar3 = *cursor;
    iVar2 = iVar2 + 1;
  }
  pcVar5 = this_ptr->prefix_text + iVar2;
  while ((0 < iVar2 && ((g_CharacterClassificationTable[(byte)(pcVar5[99] + 1)] & 2) != 0))) {
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar5 + -1;
    *cursor = *cursor + -1;
  }
  this_ptr->parsed_value[iVar2] = '\0';
  return 1;
}
