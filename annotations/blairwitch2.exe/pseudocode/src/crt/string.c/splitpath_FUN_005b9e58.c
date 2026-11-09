// Name: crt_string.c_splitpath_FUN_005b9e58
// Address: 005b9e58
// Address Range: [[005b9e58, 005b9f24]]
// Convention: __cdecl
// Signature: void __cdecl crt_string_c_splitpath_FUN_005b9e58(char *path,char *drive,char *dir,char *fname,char *ext)

#include "nocturne.h"

void __cdecl splitpath(char *path,char *drive,char *dir,char *fname,char *ext)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
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
  pcVar6 = (char *)0x0;
  cVar1 = *path;
  pcVar2 = path;
  pcVar5 = path;
  while (cVar1 != '\0') {
    iVar3 = FUN_005c0dc0(pcVar2);
    if (iVar3 == 0x2e) {
      pcVar4 = pcVar2 + 1;
      pcVar6 = pcVar2;
    }
    else {
      pcVar4 = (char *)FUN_005c0e00(pcVar2);
      if ((iVar3 == 0x5c) || (iVar3 == 0x2f)) {
        pcVar6 = (char *)0x0;
        pcVar5 = pcVar4;
      }
    }
    pcVar2 = pcVar4;
    cVar1 = *pcVar4;
  }
  FUN_005b9e10(dir,path,(int)pcVar5 - (int)path,0xff);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar2;
  }
  FUN_005b9e10(fname,pcVar5,(int)pcVar6 - (int)pcVar5,0xff);
  FUN_005b9e10(ext,pcVar6,(int)pcVar2 - (int)pcVar6,0xff);
  return;
}
