// Name: crt_file.c_splitpath_s_FUN_00610460
// Address: 00610460
// Address Range: [[00610460, 00610597]]
// Convention: __cdecl
// Signature: void __cdecl crt_file_c_splitpath_s_FUN_00610460(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)

#include "nocturne.h"

void __cdecl splitpath_s(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)

{
  char cVar2;
  wchar_t wVar2;
  char *pcVar3;
  char *pcVar4;
  char *str;
  char *buffer_end;
  char *buffer_end_00;
  int iVar3;
  char cVar1;
  
  if (((*path == '\\') || (*path == '/')) && ((path[1] == '\\' || (path[1] == '/')))) {
    cVar1 = path[2];
    pcVar4 = path + 2;
    while ((((cVar1 != '\0' && (cVar2 = *pcVar4, cVar2 != '\\')) && (cVar2 != '/')) &&
           (cVar2 != '.'))) {
      pcVar4 = mbtowc_next(pcVar4);
      cVar1 = *pcVar4;
    }
    buffer = extract_path_component((char **)drive,buffer,path,pcVar4);
    pcVar3 = pcVar4;
  }
  else if ((*path == '\0') || (path[1] != ':')) {
    pcVar3 = path;
    pcVar4 = path;
    if (drive != (char *)0x0) {
      *(char **)drive = buffer;
      *buffer = '\0';
      pcVar3 = path;
      buffer = buffer + 1;
    }
  }
  else {
    if (drive != (char *)0x0) {
      *(char **)drive = buffer;
      cVar2 = *path;
      buffer[1] = ':';
      buffer[2] = '\0';
      *buffer = cVar2;
      buffer = buffer + 3;
    }
    pcVar4 = path + 2;
    pcVar3 = pcVar4;
  }
  do {
    buffer_end = pcVar3;
    buffer_end_00 = (char *)0x0;
    pcVar3 = buffer_end;
    do {
      while( true ) {
        str = pcVar3;
        _wVar2 = mbtowc_peek(str);
        if (_wVar2 == 0) {
          pcVar3 = extract_path_component
                             ((char **)dir,buffer,pcVar4,buffer_end);
          if (buffer_end_00 == (char *)0x0) {
            buffer_end_00 = str;
          }
          pcVar3 = extract_path_component
                             ((char **)fname,pcVar3,buffer_end,buffer_end_00);
          extract_path_component((char **)ext,pcVar3,buffer_end_00,str);
          return;
        }
        if (_wVar2 != 0x2e) break;
        pcVar3 = str + 1;
        buffer_end_00 = str;
      }
      pcVar3 = mbtowc_next(str);
    } while ((_wVar2 != 0x5c) && (_wVar2 != 0x2f));
  } while( true );
}
