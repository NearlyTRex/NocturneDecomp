// Name: core_event.cpp_setEventError_FUN_004aa270
// Address: 004aa270
// MANUAL RECONSTRUCTION
// Address Range: [[004aa270, 004aa29c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_setEventError_FUN_004aa270(char *source_file,int source_line,char *error_message)

#include "nocturne.h"

int __cdecl core_event_cpp_setEventError_FUN_004aa270(char *source_file,int source_line,char *error_message)

{
  strcpy(g_EventErrorMessageBuffer, error_message);
  return -1;
}
