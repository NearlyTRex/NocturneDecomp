// Name: crt_file.c_splitpath_s_FUN_00610460
// Address: 00610460
// Address Range: [[00610460, 00610597]]
// Convention: __cdecl
// Signature: void __cdecl crt_file_c_splitpath_s_FUN_00610460 (char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)

#include "nocturne.h"

void __cdecl
crt_file_c_splitpath_s_FUN_00610460
          (char *path,char *buffer,char *drive,char *dir,char *fname,char *ext)

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
      pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(pcVar4);
      cVar1 = *pcVar4;
    }
    buffer = crt_file_c_extract_path_component_FUN_00610400((char **)drive,buffer,path,pcVar4);
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
        wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
        iVar3 = CONCAT22(extraout_var,wVar2);
        if (iVar3 == 0) {
          pcVar4 = crt_file_c_extract_path_component_FUN_00610400
                             ((char **)dir,buffer,path,buffer_end);
          if (buffer_end_00 == (char *)0x0) {
            buffer_end_00 = str;
          }
          pcVar4 = crt_file_c_extract_path_component_FUN_00610400
                             ((char **)fname,pcVar4,buffer_end,buffer_end_00);
          crt_file_c_extract_path_component_FUN_00610400((char **)ext,pcVar4,buffer_end_00,str);
          return;
        }
        if (iVar3 != 0x2e) break;
        pcVar4 = str + 1;
        buffer_end_00 = str;
      }
      pcVar4 = crt_string_c_mbtowc_next_FUN_00605a70(str);
    } while ((iVar3 != 0x5c) && (iVar3 != 0x2f));
  } while( true );
}
