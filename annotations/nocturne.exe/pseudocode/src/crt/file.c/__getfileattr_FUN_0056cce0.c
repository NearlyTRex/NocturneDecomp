// Name: crt_file.c___getfileattr_FUN_0056cce0
// Address: 0056cce0
// Address Range: [[0056cce0, 0056cd51]]
// Convention: __cdecl
// Signature: DWORD __cdecl crt_file_c___getfileattr_FUN_0056cce0(char *filename)

#include "nocturne.h"

DWORD __cdecl __getfileattr(char *filename)

{
  HANDLE pvVar1;
  char *pcVar2;
  char *pcVar3;
  _WIN32_FIND_DATAA local_148;
  
  pcVar3 = filename;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '*') goto LAB_0056cd0b;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '*') goto LAB_0056cd0b;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_0056cd0b:
  pcVar3 = filename;
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = pcVar3;
      if (*pcVar3 == '?') goto LAB_0056cd2b;
      if (*pcVar3 == '\0') break;
      pcVar2 = pcVar3 + 1;
      if (*pcVar2 == '?') goto LAB_0056cd2b;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_0056cd2b:
    if (pcVar2 == (char *)0x0) {
      pvVar1 = FindFirstFileA(filename,&local_148);
      if (pvVar1 == (HANDLE)0xffffffff) {
        return 0xffffffff;
      }
      return local_148.dwFileAttributes;
    }
  }
  return 0xffffffff;
}
