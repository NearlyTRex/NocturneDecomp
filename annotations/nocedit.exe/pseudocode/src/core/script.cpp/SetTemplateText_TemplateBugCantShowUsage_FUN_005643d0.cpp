// Name: core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0
// Address: 005643d0
// Address Range: [[005643d0, 0056449a]]
// Convention: unknown
// Signature: void core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_SetTemplateText_TemplateBugCantShowUsage(uint
   param_1, uint param_2) */

void core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000004;
  int in_stack_00000008;
  byte local_7c [104];
  int local_14;
  
  iVar3 = 0;
  local_14 = 0;
  while( true ) {
    while( true ) {
      if (*(char *)(local_14 + in_stack_00000008) == '\0') {
        in_stack_00000004[iVar3] = '\0';
        return;
      }
      if (*(char *)(local_14 + in_stack_00000008) == '<') break;
      pcVar4 = in_stack_00000004 + iVar3;
      iVar3 = iVar3 + 1;
      *pcVar4 = *(char *)(in_stack_00000008 + local_14);
      local_14 = local_14 + 1;
    }
    iVar2 = core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0();
    if (iVar2 == 0) break;
    iVar2 = sprintf(in_stack_00000004 + iVar3,"<%s>",local_7c);
    iVar3 = iVar3 + iVar2;
  }
  pcVar4 = "Template bug, can't show usage";
  do {
    cVar1 = *pcVar4;
    *in_stack_00000004 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_00000004[1] = cVar1;
    in_stack_00000004 = in_stack_00000004 + 2;
  } while (cVar1 != '\0');
  return;
}
