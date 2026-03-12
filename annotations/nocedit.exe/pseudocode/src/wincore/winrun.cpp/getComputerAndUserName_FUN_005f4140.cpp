// Name: wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
// Address: 005f4140
// Address Range: [[005f4140, 005f4208]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char *buffer)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char *buffer)

{
  char cVar2;
  char *pcVar3;
  char *pcVar2;
  LPSTR lpBuffer;
  DWORD local_10;
  char cVar1;
  
  memset(buffer,0,0x200);
  lpBuffer = buffer + 0x100;
  local_10 = 0x100;
  (*g_GetComputerNameAFunc)(lpBuffer,&local_10);
  local_10 = 0x100;
  (*g_GetUserNameAFunc)(buffer,&local_10);
  if ((buffer[0x100] == '\0') &&
     (pcVar3 = getenv("COMPUTERNAME"), pcVar3 != (char *)0x0)) {
    do {
      cVar2 = *pcVar3;
      *lpBuffer = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      lpBuffer[1] = cVar2;
      lpBuffer = lpBuffer + 2;
    } while (cVar2 != '\0');
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
  do {
    cVar1 = *pcVar2;
    *buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar2 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    buffer[1] = cVar2;
    buffer = buffer + 2;
  } while (cVar2 != '\0');
  return;
}
