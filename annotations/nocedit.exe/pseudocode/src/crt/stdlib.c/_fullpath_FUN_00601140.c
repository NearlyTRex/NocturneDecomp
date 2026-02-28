// Name: crt_stdlib.c__fullpath_FUN_00601140
// Address: 00601140
// Address Range: [[00601140, 006011ff]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdlib_c__fullpath_FUN_00601140(char *buffer,char *path,SIZE_T buffer_size)

#include "nocturne.h"

char * __cdecl _fullpath(char *buffer,char *path,SIZE_T buffer_size)

{
  char *pcVar1;
  int iVar2;
  DWORD DVar3;
  char (*unaff_EBP) [4];
  LPSTR pCStack_14;
  
  if (buffer == (char *)0x0) {
    buffer_size = 0x104;
    buffer = malloc(0x104);
    unaff_EBP = (char (*) [4])buffer;
    if ((char (*) [4])buffer == (char (*) [4])0x0) {
      setErrno(5);
      return (char *)0x0;
    }
  }
  if ((path != (char *)0x0) && (*path != '\0')) {
    iVar2 = _stricmp(path,"con");
    if (iVar2 == 0) {
      if (buffer_size < 4) {
        free(unaff_EBP);
        setErrno(0xe);
        return (char *)0x0;
      }
      *(char (*) [4])buffer = "con";
    }
    else {
      DVar3 = (*g_GetFullPathNameAFunc)(path,buffer_size,buffer,&pCStack_14);
      if (DVar3 == 0) {
        __set_errno();
        return (char *)0x0;
      }
    }
    return buffer;
  }
  pcVar1 = getcwd(buffer,buffer_size);
  return pcVar1;
}
