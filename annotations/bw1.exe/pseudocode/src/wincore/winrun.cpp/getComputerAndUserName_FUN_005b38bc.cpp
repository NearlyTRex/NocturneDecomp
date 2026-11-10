// Name: wincore_winrun.cpp_getComputerAndUserName_FUN_005b38bc
// Address: 005b38bc
// Address Range: [[005b38bc, 005b3988]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_getComputerAndUserName_FUN_005b38bc(char *param_1)

#include "nocturne.h"

void wincore_winrun_cpp_getComputerAndUserName_FUN_005b38bc(char *param_1)

{
  char cVar1;
  char *pcVar2;
  LPSTR lpBuffer;
  DWORD DStack_10;
  
  memset(param_1,0,0x200);
  lpBuffer = param_1 + 0x100;
  DStack_10 = 0x100;
  GetComputerNameA(lpBuffer,&DStack_10);
  DStack_10 = 0x100;
  GetUserNameA(param_1,&DStack_10);
  if ((param_1[0x100] == '\0') &&
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
    if (*param_1 != '\0') {
      return;
    }
  }
  else if (*param_1 != '\0') {
    return;
  }
  pcVar2 = getenv("USERNAME");
  if (pcVar2 == (char *)0x0) {
    return;
  }
  do {
    cVar1 = *pcVar2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return;
}
