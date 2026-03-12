// Name: core_script.cpp_CCmdParse_toString_FUN_005624f0
// Address: 005624f0
// Address Range: [[005624f0, 00562615]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)

#include "nocturne.h"

void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)

{
  char cVar2;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar4;
  char *pcVar8;
  CCmdParm *pCVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar9;
  char cVar1;
  
  pcVar4 = this_ptr->cmd_name;
  pcVar6 = output_buffer;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar8 = this_ptr->argument_text;
  iVar2 = -1;
  pcVar5 = output_buffer;
  do {
    pcVar7 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar2 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar2 = *pcVar8;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  iVar6 = 0;
  if (0 < this_ptr->param_count) {
    pcVar5 = this_ptr->params[0].parsed_value;
    do {
      pCVar5 = this_ptr->params + iVar6;
      iVar3 = -1;
      pcVar8 = output_buffer;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar2 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar2 = pCVar5->prefix_text[0];
        *pcVar9 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pCVar5->prefix_text[1];
        pCVar5 = (CCmdParm *)(pCVar5->prefix_text + 2);
        pcVar9[1] = cVar2;
        pcVar9 = pcVar9 + 2;
      } while (cVar2 != '\0');
      iVar4 = -1;
      pcVar8 = output_buffer;
      do {
        pcVar9 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar9 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar2 != '\0');
      pcVar9 = pcVar9 + -1;
      pcVar8 = pcVar5;
      do {
        cVar2 = *pcVar8;
        *pcVar9 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar2;
        pcVar9 = pcVar9 + 2;
      } while (cVar2 != '\0');
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x328;
    } while (iVar6 < this_ptr->param_count);
  }
  pcVar5 = this_ptr->remaining_text;
  iVar6 = -1;
  do {
    pcVar8 = output_buffer;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = output_buffer + 1;
    cVar2 = *output_buffer;
    output_buffer = pcVar8;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar5;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  return;
}
