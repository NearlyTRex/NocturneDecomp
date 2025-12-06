// Name: crt_file.c_get_file_attributes_FUN_006082e0
// Address: 006082e0
// Address Range: [[006082e0, 00608351]]
// Convention: __cdecl
// Signature: DWORD crt_file.c_get_file_attributes_FUN_006082e0(char * filename)

#include "nocturne.h"

DWORD __cdecl crt_file_c_get_file_attributes_FUN_006082e0(char *filename)

{
  HANDLE pvVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  _WIN32_FIND_DATAA _Stack_148;
  
  pcVar3 = filename;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '*') goto LAB_0060830b;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '*') goto LAB_0060830b;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_0060830b:
  pcVar3 = filename;
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = pcVar3;
      if (*pcVar3 == '?') goto LAB_0060832b;
      if (*pcVar3 == '\0') break;
      pcVar2 = pcVar3 + 1;
      if (*pcVar2 == '?') goto LAB_0060832b;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_0060832b:
    if (pcVar2 == (char *)0x0) {
      pvVar1 = (*PTR_FindFirstFileA_0061154c)(filename,&_Stack_148);
      if (pvVar1 == (HANDLE)0xffffffff) {
        return 0xffffffff;
      }
      return _Stack_148.ftLastAccessTime.dwLowDateTime;
    }
  }
  return 0xffffffff;
}
