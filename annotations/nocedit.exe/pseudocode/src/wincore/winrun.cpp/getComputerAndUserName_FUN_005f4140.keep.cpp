// Name: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
// Address: 005f4140
// MANUAL RECONSTRUCTION
// Address Range: [[005f4140, 005f4208]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char *buffer)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char *buffer)

{
  char *pcVar3;
  char *pcVar2;
  LPSTR lpBuffer;
  DWORD local_10;

  memset(buffer,0,0x200);
  lpBuffer = buffer + 0x100;
  local_10 = 0x100;
  (*g_GetComputerNameAFunc)(lpBuffer,&local_10);
  local_10 = 0x100;
  (*g_GetUserNameAFunc)(buffer,&local_10);
  if ((buffer[0x100] == '\0') &&
     (pcVar3 = getenv("COMPUTERNAME"), pcVar3 != (char *)0x0)) {
    strcpy(lpBuffer,pcVar3);
    if (*buffer != '\0') {
      return;
    }
  }
  else if (*buffer != '\0') {
    return;
  }
  pcVar2 = getenv("USERNAME");
  if (pcVar2 == (char *)0x0) {
    return;
  }
  strcpy(buffer,pcVar2);
  return;
}
