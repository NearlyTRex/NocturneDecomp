// Name: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
// Address: 004b1fe0
// Address Range: [[004b1fe0, 004b2025]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_formatSystemError_FUN_004b1fe0(char * dest_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_formatSystemError_FUN_004b1fe0(char *dest_buffer)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)crt_errno_c_errno_FUN_00601450();
  pcVar2 = crt_string_c_strerror_FUN_00601470(*piVar1);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  do {
    pcVar2 = dest_buffer;
    if (*dest_buffer == '\0') goto LAB_004b201b;
    if (*dest_buffer == '\0') break;
    pcVar2 = dest_buffer + 1;
    if (*pcVar2 == '\0') goto LAB_004b201b;
    dest_buffer = dest_buffer + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004b201b:
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar2,"\n%s");
  return;
}
