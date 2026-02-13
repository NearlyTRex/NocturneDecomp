// Name: core_script.cpp_CCmdParse_getParamTextLength_FUN_005626d0
// Address: 005626d0
// Address Range: [[005626d0, 00562758]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_getParamTextLength_FUN_005626d0(CCmdParse *this_ptr,int param_count)

#include "nocturne.h"

int __cdecl
core_script_cpp_CCmdParse_getParamTextLength_FUN_005626d0(CCmdParse *this_ptr,int param_count)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CCmdParm *pCVar7;
  char *pcVar8;
  
  uVar2 = 0xffffffff;
  pcVar6 = this_ptr->cmd_name;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = this_ptr->argument_text;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (this_ptr->param_count < param_count) {
    param_count = this_ptr->param_count;
  }
  iVar5 = 0;
  if (0 < param_count) {
    pcVar6 = this_ptr->params[0].parsed_value;
    do {
      uVar2 = 0xffffffff;
      pCVar7 = this_ptr->params + iVar5;
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
    } while (iVar5 < param_count);
  }
  return iVar4;
}
