// Name: crt_stdio.c_fopenWithFlags_FUN_00601a20
// Address: 00601a20
// Address Range: [[00601a20, 00601a78]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopenWithFlags_FUN_00601a20(char *filename,char *mode,int flags)

#include "nocturne.h"

_FILE * __cdecl fopenWithFlags(char *filename,char *mode,int flags)

{
  int parsed_mode_flags;
  _FILE *file_struct;
  _FILE *p_Var1;
  int local_10;
  
  parsed_mode_flags = OpenModeStringParser(mode,(char *)&local_10);
  p_Var1 = (_FILE *)0x0;
  if (parsed_mode_flags != 0) {
    file_struct = __allocfp(0);
    p_Var1 = (_FILE *)0x0;
    if (file_struct != (_FILE *)0x0) {
      p_Var1 = OpenFileAndInitialize
                         (filename,*mode,parsed_mode_flags,local_10,flags,file_struct);
    }
  }
  return p_Var1;
}
