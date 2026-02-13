// Name: core_script.cpp_CCmdParse_getParamTextLengthAt_FUN_00562760
// Address: 00562760
// Address Range: [[00562760, 005627e9]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_pointer,int param_index)

#include "nocturne.h"

int __cdecl
core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_pointer,int param_index)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CCmdParm *pCVar7;
  char *pcVar8;
  
  if (this_pointer->param_count <= param_index) {
    param_index = this_pointer->param_count + -1;
  }
  uVar2 = 0xffffffff;
  pcVar6 = this_pointer->cmd_name;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  uVar3 = 0xffffffff;
  pcVar6 = this_pointer->argument_text;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (-1 < param_index) {
    pcVar6 = this_pointer->params[0].parsed_value;
    do {
      uVar2 = 0xffffffff;
      pCVar7 = this_pointer->params + iVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar8 = pCVar7->prefix_text;
        pCVar7 = (CCmdParm *)(pCVar7->prefix_text + 1);
      } while (*pcVar8 != '\0');
      iVar5 = iVar5 + 1;
      uVar3 = 0xffffffff;
      pcVar8 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + 0x328;
      iVar4 = iVar4 + ~uVar2 + (~uVar3 - 2);
    } while (iVar5 <= param_index);
  }
  return iVar4;
}
