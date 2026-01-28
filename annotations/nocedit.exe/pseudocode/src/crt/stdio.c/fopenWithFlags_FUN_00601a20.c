// Name: crt_stdio.c_fopenWithFlags_FUN_00601a20
// Address: 00601a20
// Address Range: [[00601a20, 00601a78]]
// Convention: __cdecl
// Signature: FILE * __cdecl crt_stdio_c_fopenWithFlags_FUN_00601a20(char *filename,char *mode,int flags)

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_fopenWithFlags_FUN_00601a20(char *filename,char *mode,int flags)

{
  int parsed_mode_flags;
  FILE *file_struct;
  FILE *pFVar1;
  int local_10;
  
  parsed_mode_flags = crt_stdio_c_OpenModeStringParser_FUN_006017d0(mode,(char *)&local_10);
  pFVar1 = (FILE *)0x0;
  if (parsed_mode_flags != 0) {
    file_struct = crt_stdio_c_AllocateFileStruct_FUN_006092f0(0);
    pFVar1 = (FILE *)0x0;
    if (file_struct != (FILE *)0x0) {
      pFVar1 = crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
                         (filename,*mode,parsed_mode_flags,local_10,flags,file_struct);
    }
  }
  return pFVar1;
}
