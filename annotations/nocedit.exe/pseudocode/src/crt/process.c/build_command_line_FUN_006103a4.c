// Name: crt_process.c_build_command_line_FUN_006103a4
// Address: 006103a4
// Address Range: [[006103a4, 006103f8]]
// Convention: __cdecl
// Signature: void __cdecl crt_process_c_build_command_line_FUN_006103a4 (char *program_name,char **argv,char *buffer,int skip_program_name)

#include "nocturne.h"

void __cdecl
crt_process_c_build_command_line_FUN_006103a4
          (char *program_name,char **argv,char *buffer,int skip_program_name)

{
  char *pcVar1;
  char **ppcVar2;
  
  if (skip_program_name == 0) {
    pcVar1 = crt_string_c_strcpy_advance_FUN_00610240(buffer,program_name);
    *pcVar1 = ' ';
    buffer = pcVar1 + 1;
  }
  if ((*argv != (char *)0x0) && (ppcVar2 = argv + 1, argv[1] != (char *)0x0)) {
    while( true ) {
      pcVar1 = *ppcVar2;
      ppcVar2 = ppcVar2 + 1;
      buffer = crt_string_c_strcpy_advance_FUN_00610240(buffer,pcVar1);
      if (*ppcVar2 == (char *)0x0) break;
      *buffer = ' ';
      buffer = buffer + 1;
    }
  }
  *buffer = '\0';
  return;
}
