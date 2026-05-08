// Name: core_script.cpp_expandTemplateText_FUN_005643d0
// Address: 005643d0
// MANUAL RECONSTRUCTION
// Address Range: [[005643d0, 0056449a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_expandTemplateText_FUN_005643d0(char *buffer,char *template_text)

#include "nocturne.h"

void __cdecl core_script_cpp_expandTemplateText_FUN_005643d0(char *buffer,char *template_text)

{
  char *pcVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  CCmdParm local_33c;
  int local_14;

  iVar3 = 0;
  local_14 = 0;
  while( true ) {
    while( true ) {
      if (template_text[local_14] == '\0') {
        buffer[iVar3] = '\0';
        return;
      }
      if (template_text[local_14] == '<') break;
      pcVar1 = buffer + iVar3;
      iVar3 = iVar3 + 1;
      *pcVar1 = template_text[local_14];
      local_14 = local_14 + 1;
    }
    iVar2 = core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0
                      (&local_33c,template_text,&local_14);
    if (iVar2 == 0) break;
    iVar4 = _sprintf(buffer + iVar3,"<%s>",local_33c.default_value);
    iVar3 = iVar3 + iVar4;
  }
  strcpy(buffer, "Template bug, can't show usage");
  return;
}
