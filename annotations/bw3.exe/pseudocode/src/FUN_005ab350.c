// Name: FUN_005ab350
// Address: 005ab350
// Address Range: [[005ab350, 005ab3c1]]
// Convention: unknown
// Signature: undefined4 FUN_005ab350(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005ab350(LPCSTR param_1)

{
  HANDLE pvVar1;
  char *pcVar2;
  LPCSTR pCVar3;
  char *pcVar4;
  _WIN32_FIND_DATAA local_148;
  
  pCVar3 = param_1;
  do {
    pcVar2 = pCVar3;
    if (*pCVar3 == '*') goto LAB_005ab37b;
    if (*pCVar3 == '\0') break;
    pcVar2 = pCVar3 + 1;
    if (*pcVar2 == '*') goto LAB_005ab37b;
    pCVar3 = pCVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_005ab37b:
  pcVar4 = param_1;
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = pcVar4;
      if (*pcVar4 == '?') goto LAB_005ab39b;
      if (*pcVar4 == '\0') break;
      pcVar2 = pcVar4 + 1;
      if (*pcVar2 == '?') goto LAB_005ab39b;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_005ab39b:
    if (pcVar2 == (char *)0x0) {
      pvVar1 = FindFirstFileA(param_1,&local_148);
      if (pvVar1 == (HANDLE)0xffffffff) {
        return 0xffffffff;
      }
      return local_148.dwFileAttributes;
    }
  }
  return 0xffffffff;
}
