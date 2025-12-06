// Name: crt_file.c_splitpath_FUN_00610460
// Address: 00610460
// Address Range: [[00610460, 00610597]]
// Convention: __cdecl
// Signature: void crt_file.c_splitpath_FUN_00610460(char * path, char * buffer, char * * components)

#include "nocturne.h"

void __cdecl crt_file_c_splitpath_FUN_00610460(char *path,char *buffer,char **components)

{
  char cVar1;
  wchar_t wVar2;
  ushort extraout_var;
  char *pcVar4;
  char *pcVar5;
  char *str;
  char *pcStack00000010;
  char **in_stack_00000014;
  char **in_stack_0000001c;
  char **in_stack_00000024;
  int iVar3;
  
  if (((*path == '\\') || (*path == '/')) && ((path[1] == '\\' || (path[1] == '/')))) {
    cVar1 = path[2];
    pcVar5 = path + 2;
    while ((((cVar1 != '\0' && (cVar1 = *pcVar5, cVar1 != '\\')) && (cVar1 != '/')) &&
           (cVar1 != '.'))) {
      pcVar5 = crt_string_c_mbtowc_next_FUN_00605a70(pcVar5);
      cVar1 = *pcVar5;
    }
    crt_file_c_extract_path_component_FUN_00610400(components,buffer,path,pcVar5);
    path = pcVar5;
  }
  else if ((*path == '\0') || (path[1] != ':')) {
    if (components != (char **)0x0) {
      *components = buffer;
      *buffer = '\0';
    }
  }
  else {
    if (components != (char **)0x0) {
      *components = buffer;
      cVar1 = *path;
      buffer[1] = ':';
      buffer[2] = '\0';
      *buffer = cVar1;
    }
    path = path + 2;
  }
  do {
    pcVar4 = path;
    path = pcVar4;
    pcVar5 = (char *)0x0;
    do {
      while( true ) {
        str = path;
        wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
        iVar3 = CONCAT22 /* combine 2-byte values */(extraout_var,wVar2);
        if (iVar3 == 0) {
          pcStack00000010 =
               crt_file_c_extract_path_component_FUN_00610400
                         (in_stack_00000014,(char *)components,pcVar4,pcVar4);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = str;
          }
          pcVar4 = crt_file_c_extract_path_component_FUN_00610400
                             (in_stack_0000001c,pcStack00000010,pcVar4,pcVar5);
          crt_file_c_extract_path_component_FUN_00610400(in_stack_00000024,pcVar4,pcVar5,str);
          return;
        }
        if (iVar3 != 0x2e) break;
        path = str + 1;
        pcVar5 = str;
      }
      path = crt_string_c_mbtowc_next_FUN_00605a70(str);
    } while ((iVar3 != 0x5c) && (iVar3 != 0x2f));
  } while( true );
}
