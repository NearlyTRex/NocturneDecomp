// Name: crt_stdlib.c__fullpath_FUN_005a53f0
// Address: 005a53f0
// Address Range: [[005a53f0, 005a54af]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c__fullpath_FUN_005a53f0(char *buffer,char *path,SIZE_T buffer_size)

#include "nocturne.h"

char * __cdecl _fullpath(char *buffer,char *path,SIZE_T buffer_size)

{
  char *pcVar1;
  int iVar2;
  DWORD DVar3;
  LPSTR unaff_EBP;
  LPSTR pCStack_14;
  
  if (buffer == (char *)0x0) {
    buffer_size = 0x104;
    buffer = FUN_005a3650(0x104);
    unaff_EBP = buffer;
    if (buffer == (LPSTR)0x0) {
      setErrno(5);
      return (char *)0x0;
    }
  }
  if ((path != (char *)0x0) && (*path != '\0')) {
    iVar2 = _stricmp(path,(char *)&DAT_005da6d8);
    if (iVar2 == 0) {
      if (buffer_size < 4) {
        FUN_005a3770(unaff_EBP);
        setErrno(0xe);
        return (char *)0x0;
      }
      *(uint *)buffer = 0x006E6F63;
    }
    else {
      DVar3 = GetFullPathNameA(path,buffer_size,buffer,&pCStack_14);
      if (DVar3 == 0) {
        FUN_005ab46c();
        return (char *)0x0;
      }
    }
    return buffer;
  }
  pcVar1 = (char *)FUN_005acb10(buffer,buffer_size);
  return pcVar1;
}
