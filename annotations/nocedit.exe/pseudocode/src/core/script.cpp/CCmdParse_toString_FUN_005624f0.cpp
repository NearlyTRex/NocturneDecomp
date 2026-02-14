// Name: core_script.cpp_CCmdParse_toString_FUN_005624f0
// Address: 005624f0
// Address Range: [[005624f0, 00562615]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)

#include "nocturne.h"

void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CCmdParm *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar4 = this_ptr->cmd_name;
  pcVar6 = output_buffer;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar4 = this_ptr->argument_text;
  iVar2 = -1;
  pcVar6 = output_buffer;
  do {
    pcVar7 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < this_ptr->param_count) {
    pcVar6 = this_ptr->params[0].parsed_value;
    do {
      pCVar5 = this_ptr->params + iVar2;
      iVar3 = -1;
      pcVar4 = output_buffer;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = pCVar5->prefix_text[0];
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pCVar5->prefix_text[1];
        pCVar5 = (CCmdParm *)(pCVar5->prefix_text + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar4 = output_buffer;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      pcVar4 = pcVar6;
      do {
        cVar1 = *pcVar4;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      pcVar6 = pcVar6 + 0x328;
    } while (iVar2 < this_ptr->param_count);
  }
  pcVar6 = this_ptr->remaining_text;
  iVar2 = -1;
  do {
    pcVar4 = output_buffer;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = output_buffer + 1;
    cVar1 = *output_buffer;
    output_buffer = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
