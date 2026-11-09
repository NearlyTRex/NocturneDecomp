// Name: core_event.cpp_setEventError_FUN_00488b70
// Address: 00488b70
// Address Range: [[00488b70, 00488b9c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_setEventError_FUN_00488b70(char *source_file,int source_line,char *error_message)

#include "nocturne.h"

int __cdecl core_event_cpp_setEventError_FUN_00488b70(char *source_file,int source_line,char *error_message)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01c3dd10;
  do {
    cVar1 = *error_message;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return -1;
    }
    cVar1 = error_message[1];
    error_message = error_message + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return -1;
}
