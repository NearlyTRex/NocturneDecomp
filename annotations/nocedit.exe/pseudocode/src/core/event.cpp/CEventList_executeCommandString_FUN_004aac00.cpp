// Name: core_event.cpp_CEventList_executeCommandString_FUN_004aac00
// Address: 004aac00
// Address Range: [[004aac00, 004aacb7]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_executeCommandString_FUN_004aac00 (CEventList *this_ptr,char *command_string)

#include "nocturne.h"

int __cdecl
core_event_cpp_CEventList_executeCommandString_FUN_004aac00
          (CEventList *this_ptr,char *command_string)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_6c [100];
  
  do {
    while ((g_CharacterClassificationTable[(byte)(*command_string + 1)] & 2) != 0) {
      command_string = command_string + 1;
    }
    cVar1 = *command_string;
    pcVar2 = local_6c;
    pcVar4 = command_string;
    if (cVar1 == '\0') {
      return 1;
    }
    while (cVar1 != ';') {
      *pcVar2 = *pcVar4;
      pcVar2 = pcVar2 + 1;
      if (pcVar4[1] == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    }
    while ((command_string = pcVar4 + 1, local_6c < pcVar2 &&
           ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
      pcVar2 = pcVar2 + -1;
    }
    if (local_6c < pcVar2) {
      *pcVar2 = '\0';
      iVar3 = core_event_cpp_CEventList_executeCommand_FUN_004aacc0(this_ptr,local_6c);
      if (iVar3 == 0) {
        if (g_EventDryRun != 0) {
          return 0;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s\n",g_EventErrorMessageBuffer);
      }
    }
  } while( true );
}
