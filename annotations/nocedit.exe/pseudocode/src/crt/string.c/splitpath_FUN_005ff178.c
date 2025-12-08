// Name: crt_string.c_splitpath_FUN_005ff178
// Address: 005ff178
// Address Range: [[005ff178, 005ff244]]
// Convention: __cdecl
// Signature: void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, char * ext)

#include "nocturne.h"

void __cdecl
crt_string_c_splitpath_FUN_005ff178(char *path,char *drive,char *dir,char *fname,char *ext)

{
  char cVar1;
  char *str;
  wchar_t wVar2;
  ushort extraout_var;
  char *pcVar4;
  char *src;
  char *in_stack_0000001c;
  char *src_00;
  int iVar3;
  
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
  src = (char *)0x0;
  cVar1 = *path;
  str = path;
  src_00 = path;
  while (cVar1 != '\0') {
    wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    iVar3 = CONCAT22 /* combine 2-byte values */(extraout_var,wVar2);
    if (iVar3 == 0x2e) {
      pcVar4 = str + 1;
      src = str;
    }
    else {
      pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(str);
      if ((iVar3 == 0x5c) || (iVar3 == 0x2f)) {
        src = (char *)0x0;
        path = pcVar4;
      }
    }
    str = pcVar4;
    cVar1 = *pcVar4;
  }
  crt_string_c_strncpy_safe_FUN_005ff130(dir,src_00,(int)path - (int)src_00,0xff);
  if (src == (char *)0x0) {
    src = str;
  }
  crt_string_c_strncpy_safe_FUN_005ff130(ext,path,(int)src - (int)path,0xff);
  crt_string_c_strncpy_safe_FUN_005ff130(in_stack_0000001c,src,(int)str - (int)src,0xff);
  return;
}
