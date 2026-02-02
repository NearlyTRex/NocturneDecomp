// Name: core_script.cpp_FUN_005643d0
// Address: 005643d0
// Address Range: [[005643d0, 0056449a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005643d0(void)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_005643d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000004;
  char *in_stack_00000008;
  CCmdParm local_33c;
  int local_14;
  
  iVar3 = 0;
  local_14 = 0;
  while( true ) {
    while( true ) {
      if (in_stack_00000008[local_14] == '\0') {
        in_stack_00000004[iVar3] = '\0';
        return;
      }
      if (in_stack_00000008[local_14] == '<') break;
      pcVar4 = in_stack_00000004 + iVar3;
      iVar3 = iVar3 + 1;
      *pcVar4 = in_stack_00000008[local_14];
      local_14 = local_14 + 1;
    }
    iVar2 = core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0
                      (&local_33c,in_stack_00000008,&local_14);
    if (iVar2 == 0) break;
    iVar2 = sprintf
                      (in_stack_00000004 + iVar3,"<%s>",local_33c.default_value);
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
