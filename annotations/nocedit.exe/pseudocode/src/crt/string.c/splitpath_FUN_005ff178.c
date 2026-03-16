// Name: crt_string.c_splitpath_FUN_005ff178
// Address: 005ff178
// Address Range: [[005ff178, 005ff244]]
// Convention: __cdecl
// Signature: void __cdecl crt_string_c_splitpath_FUN_005ff178(char *path,char *drive,char *dir,char *fname,char *ext)

#include "nocturne.h"

void __cdecl splitpath(char *path,char *drive,char *dir,char *fname,char *ext)

{
  char cVar2;
  wchar_t wVar2;
  char *pcVar4;
  char *src;
  char *src_00;
  char cVar1;
  int iVar3;
  char *str;
  
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
  cVar2 = *path;
  str = path;
  src = path;
  while (cVar2 != '\0') {
    _wVar2 = mbtowc_peek(str);
    if (_wVar2 == 0x2e) {
      pcVar4 = str + 1;
      src_00 = str;
    }
    else {
      pcVar4 = mbtowc_next(str);
      if ((_wVar2 == 0x5c) || (_wVar2 == 0x2f)) {
        src_00 = (char *)0x0;
        src = pcVar4;
      }
    }
    str = pcVar4;
    cVar2 = *pcVar4;
  }
  strncpy_safe(dir,path,(int)src - (int)path,0xff);
  if (src_00 == (char *)0x0) {
    src_00 = str;
  }
  strncpy_safe(fname,src,(int)src_00 - (int)src,0xff);
  strncpy_safe(ext,src_00,(int)str - (int)src_00,0xff);
  return;
}
