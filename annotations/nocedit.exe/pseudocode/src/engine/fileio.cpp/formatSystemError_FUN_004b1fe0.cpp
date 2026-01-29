// Name: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
// Address: 004b1fe0
// Address Range: [[004b1fe0, 004b2025]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_formatSystemError_FUN_004b1fe0(char *dest_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_formatSystemError_FUN_004b1fe0(char *dest_buffer)

{
  int *piVar1;
  char *pcVar2;
  char *buffer;
  
  piVar1 = (int *)_errno();
  pcVar2 = strerror(*piVar1);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  do {
    buffer = dest_buffer;
    if (*dest_buffer == '\0') goto LAB_004b201b;
    if (*dest_buffer == '\0') break;
    buffer = dest_buffer + 1;
    if (*buffer == '\0') goto LAB_004b201b;
    dest_buffer = dest_buffer + 2;
  } while (*buffer != '\0');
  buffer = (char *)0x0;
LAB_004b201b:
  sprintf(buffer,"\n%s",pcVar2);
  return;
}
