// Name: core_script.cpp_CScript_parseCommandList_FUN_00567010
// Address: 00567010
// Address Range: [[00567010, 00567076]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_parseCommandList_FUN_00567010(CScript *this_ptr,char *commands,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_parseCommandList_FUN_00567010(CScript *this_ptr,char *commands,SScriptXRef *xref_data)

{
  char cVar2;
  char *pcVar2;
  char local_200 [500];
  char cVar1;
  
  cVar1 = *commands;
  while (cVar1 != '\0') {
    cVar2 = *commands;
    pcVar2 = local_200;
    while ((cVar2 != ';' && (*commands != '\0'))) {
      cVar2 = *commands;
      commands = commands + 1;
      *pcVar2 = cVar2;
      cVar2 = *commands;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    core_script_cpp_CScript_parseCommand_FUN_00567080(this_ptr,local_200,xref_data);
    if (*commands == ';') {
      commands = commands + 1;
    }
    cVar1 = *commands;
  }
  return;
}
