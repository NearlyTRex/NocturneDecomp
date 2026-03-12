// Name: core_script.cpp_CCmdParse_getParamTextLengthAt_FUN_00562760
// Address: 00562760
// Address Range: [[00562760, 005627e9]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_pointer,int param_index)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_pointer,int param_index)

{
  char cVar2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  CCmdParm *pCVar7;
  char *pcVar8;
  char cVar1;
  
  if (this_pointer->param_count <= param_index) {
    param_index = this_pointer->param_count + -1;
  }
  uVar2 = 0xffffffff;
  pcVar7 = this_pointer->cmd_name;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  uVar3 = 0xffffffff;
  pcVar7 = this_pointer->argument_text;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (-1 < param_index) {
    pcVar6 = this_pointer->params[0].parsed_value;
    do {
      uVar4 = 0xffffffff;
      pCVar7 = this_pointer->params + iVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pCVar7->prefix_text;
        pCVar7 = (CCmdParm *)(pCVar7->prefix_text + 1);
      } while (*pcVar7 != '\0');
      iVar5 = iVar5 + 1;
      uVar5 = 0xffffffff;
      pcVar8 = pcVar6;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      pcVar6 = pcVar6 + 0x328;
      iVar4 = iVar4 + ~uVar4 + (~uVar5 - 2);
    } while (iVar5 <= param_index);
  }
  return iVar4;
}
