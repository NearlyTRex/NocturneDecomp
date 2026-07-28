// Name: crt_string.c_splitpath_FUN_00566498
// Address: 00566498
// Address Range: [[00566498, 00566564]]
// Convention: __cdecl
// Signature: void __cdecl crt_string_c_splitpath_FUN_00566498(char *path,char *drive,char *dir,char *fname,char *ext)

#include "nocturne.h"

void __cdecl splitpath(char *path,char *drive,char *dir,char *fname,char *ext)

{
  char cVar1;
  char *str;
  int iVar2;
  char *pcVar3;
  char *src;
  char *src_00;
  
  cVar1 = *path;
  if ((cVar1 == '\0') || (path[1] != ':')) {
    if (drive != (char *)0x0) {
      *drive = '\0';
    }
  }
  else {
    if (drive != (char *)0x0) {
      drive[2] = '\0';
      *drive = cVar1;
      drive[1] = ':';
    }
    path = path + 2;
  }
  src_00 = (char *)0x0;
  cVar1 = *path;
  str = path;
  src = path;
  while (cVar1 != '\0') {
    iVar2 = mbtowc_peek(str);
    if (iVar2 == 0x2e) {
      pcVar3 = str + 1;
      src_00 = str;
    }
    else {
      pcVar3 = (char *)mbtowc_next(str);
      if ((iVar2 == 0x5c) || (iVar2 == 0x2f)) {
        src_00 = (char *)0x0;
        src = pcVar3;
      }
    }
    str = pcVar3;
    cVar1 = *pcVar3;
  }
  strncpy_safe(dir,path,(int)src - (int)path,0xff);
  if (src_00 == (char *)0x0) {
    src_00 = str;
  }
  strncpy_safe(fname,src,(int)src_00 - (int)src,0xff);
  strncpy_safe(ext,src_00,(int)str - (int)src_00,0xff);
  return;
}
