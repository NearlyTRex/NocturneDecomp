// Name: core_event.cpp_setEventError_FUN_0048b7c0
// Address: 0048b7c0
// Address Range: [[0048b7c0, 0048b7ec]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_setEventError_FUN_0048b7c0(char *source_file,int source_line,char *error_message)

#include "nocturne.h"

int __cdecl core_event_cpp_setEventError_FUN_0048b7c0(char *source_file,int source_line,char *error_message)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01c734b0;
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
