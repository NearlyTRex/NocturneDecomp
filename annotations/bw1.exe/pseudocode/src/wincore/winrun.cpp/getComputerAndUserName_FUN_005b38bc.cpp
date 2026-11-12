// Name: wincore_winrun.cpp_getComputerAndUserName_FUN_005b38bc
// Address: 005b38bc
// Address Range: [[005b38bc, 005b3988]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005b38bc(char *buffer)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005b38bc(char *buffer)

{
  char cVar1;
  char *pcVar2;
  LPSTR lpBuffer;
  DWORD DStack_10;
  
  memset(buffer,0,0x200);
  lpBuffer = buffer + 0x100;
  DStack_10 = 0x100;
  GetComputerNameA(lpBuffer,&DStack_10);
  DStack_10 = 0x100;
  GetUserNameA(buffer,&DStack_10);
  if ((buffer[0x100] == '\0') &&
     (pcVar2 = getenv("@COMPUTERNAME" + 1), pcVar2 != (char *)0x0)) {
    do {
      cVar1 = *pcVar2;
      *lpBuffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      lpBuffer[1] = cVar1;
      lpBuffer = lpBuffer + 2;
    } while (cVar1 != '\0');
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
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    buffer[1] = cVar1;
    buffer = buffer + 2;
  } while (cVar1 != '\0');
  return;
}
