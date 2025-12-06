// Name: core_event.cpp_CEventList_FUN_004aac00
// Address: 004aac00
// Address Range: [[004aac00, 004aacb7]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004aac00(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004aac00(CEventList *this_ptr)

{
  char cVar1;
  char *pcVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  uint local_6c;
  
  do {
    pcVar2 = (char *)&local_6c;
    while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    cVar1 = *in_stack_00000008;
    pcVar4 = in_stack_00000008;
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
    while ((in_stack_00000008 = pcVar4 + 1, &local_6c < pcVar2 &&
           ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) != 0))) {
      pcVar2 = pcVar2 + -1;
    }
    if (&local_6c < pcVar2) {
      *pcVar2 = '\0';
      pCVar3 = core_event_cpp_CEventList_FUN_004aacc0(this_ptr);
      if (pCVar3 == (CDemonActor *)0x0) {
        if (DAT_02d0a45c != 0) {
          return 0;
        }
        local_6c = &DAT_02d0a460;
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n");
      }
    }
  } while( true );
}
