// Name: crt_file.c_splitpath_s_FUN_00610460
// Address: 00610460
// Address Range: [[00610460, 00610597]]
// Convention: __cdecl
// Signature: void __cdecl crt_file_c_splitpath_s_FUN_00610460(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)

#include "nocturne.h"

void __cdecl splitpath_s(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)

{
  char cVar1;
  wchar_t wVar2;
  ushort extraout_var;
  char *pcVar4;
  char *str;
  char *buffer_end;
  char *buffer_end_00;
  int iVar3;
  
  if (((*path == '\\') || (*path == '/')) && ((path[1] == '\\' || (path[1] == '/')))) {
    cVar1 = path[2];
    pcVar4 = path + 2;
    while ((((cVar1 != '\0' && (cVar1 = *pcVar4, cVar1 != '\\')) && (cVar1 != '/')) &&
           (cVar1 != '.'))) {
      pcVar4 = mbtowc_next(pcVar4);
      cVar1 = *pcVar4;
    }
    buffer = extract_path_component((char **)drive,buffer,path,pcVar4);
    path = pcVar4;
  }
  else if ((*path == '\0') || (path[1] != ':')) {
    pcVar4 = path;
    if (drive != (char *)0x0) {
      *(char **)drive = buffer;
      *buffer = '\0';
      buffer = buffer + 1;
    }
  }
  else {
    if (drive != (char *)0x0) {
      *(char **)drive = buffer;
      cVar1 = *path;
      buffer[1] = ':';
      buffer[2] = '\0';
      *buffer = cVar1;
      buffer = buffer + 3;
    }
    path = path + 2;
    pcVar4 = path;
  }
  do {
    buffer_end = pcVar4;
    pcVar4 = buffer_end;
    buffer_end_00 = (char *)0x0;
    do {
      while( true ) {
        str = pcVar4;
        wVar2 = mbtowc_peek(str);
        iVar3 = CONCAT22(extraout_var,wVar2);
        if (iVar3 == 0) {
          pcVar4 = extract_path_component
                             ((char **)dir,buffer,path,buffer_end);
          if (buffer_end_00 == (char *)0x0) {
            buffer_end_00 = str;
          }
          pcVar4 = extract_path_component
                             ((char **)fname,pcVar4,buffer_end,buffer_end_00);
          extract_path_component((char **)ext,pcVar4,buffer_end_00,str);
          return;
        }
        if (iVar3 != 0x2e) break;
        pcVar4 = str + 1;
        buffer_end_00 = str;
      }
      pcVar4 = mbtowc_next(str);
    } while ((iVar3 != 0x5c) && (iVar3 != 0x2f));
  } while( true );
}
