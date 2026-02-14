// Name: core_script.cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620
// Address: 00562620
// Address Range: [[00562620, 005626c4]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse *this_ptr,int cursor_position)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse *this_ptr,int cursor_position)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CCmdParm *pCVar5;
  int iVar6;
  CCmdParm *pCVar7;
  char *pcVar8;
  
  uVar2 = 0xffffffff;
  pcVar8 = this_ptr->cmd_name;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar8 = this_ptr->argument_text;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  iVar6 = 0;
  if (0 < this_ptr->param_count) {
    pCVar5 = this_ptr->params;
    do {
      uVar2 = 0xffffffff;
      pCVar7 = pCVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar8 = pCVar7->prefix_text;
        pCVar7 = (CCmdParm *)(pCVar7->prefix_text + 1);
      } while (*pcVar8 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (cursor_position < iVar4) goto LAB_00562676;
      uVar2 = 0xffffffff;
      pcVar8 = pCVar5->parsed_value;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar4 = iVar4 + (~uVar2 - 1);
      if (cursor_position <= iVar4) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 1;
    } while (iVar6 < this_ptr->param_count);
  }
  if (iVar4 + 1 < cursor_position) {
LAB_00562676:
    iVar4 = -1;
  }
  else {
    iVar4 = this_ptr->param_count + -1;
  }
  return iVar4;
}
