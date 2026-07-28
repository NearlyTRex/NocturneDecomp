// Name: crt_stdio.c_freopen_FUN_00565724
// Address: 00565724
// Address Range: [[00565724, 005657b5]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_freopen_FUN_00565724(char *filename,char *mode,_FILE *stream)

#include "nocturne.h"

_FILE * __cdecl _freopen(char *filename,char *mode,_FILE *stream)

{
  int iVar1;
  int parsed_mode_flags;
  _FILE *file_struct;
  _FILE *p_Var2;
  int iStack_14;
  
  parsed_mode_flags = OpenModeStringParser(mode,&iStack_14);
  p_Var2 = (_FILE *)0x0;
  if (parsed_mode_flags != 0) {
    iVar1 = stream->_handle;
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(iVar1);
    if (DAT_005c1d58 != (code *)0x0) {
      (*DAT_005c1d58)(iVar1);
    }
    file_struct = (_FILE *)FUN_005656a4(stream);
    p_Var2 = (_FILE *)0x0;
    if (file_struct != (_FILE *)0x0) {
      file_struct->_flag = file_struct->_flag & 0x4000;
      p_Var2 = OpenFileAndInitialize
                         (filename,*mode,parsed_mode_flags,iStack_14,0,file_struct);
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(iVar1);
  }
  return p_Var2;
}
