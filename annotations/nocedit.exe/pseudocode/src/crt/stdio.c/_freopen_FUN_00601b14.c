// Name: crt_stdio.c__freopen_FUN_00601b14
// Address: 00601b14
// Address Range: [[00601b14, 00601ba5]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c__freopen_FUN_00601b14(char *filename,char *mode,_FILE *stream)

#include "nocturne.h"

_FILE * __cdecl _freopen(char *filename,char *mode,_FILE *stream)

{
  int file_index;
  int parsed_mode_flags;
  _FILE *file_struct;
  _FILE *p_Var1;
  int iStack_14;
  
  parsed_mode_flags = OpenModeStringParser(mode,(char *)&iStack_14);
  p_Var1 = (_FILE *)0x0;
  if (parsed_mode_flags != 0) {
    file_index = stream->_handle;
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_index);
    if (g_SpecialDeviceCleanupFunc != (SPECIAL_DEVICE_CLEANUP_FUNC *)0x0) {
      (*g_SpecialDeviceCleanupFunc)(file_index);
    }
    file_struct = (_FILE *)MultipleDoNothingCalls(stream);
    p_Var1 = (_FILE *)0x0;
    if (file_struct != (_FILE *)0x0) {
      file_struct->_flag = file_struct->_flag & 0x4000;
      p_Var1 = OpenFileAndInitialize
                         (filename,*mode,parsed_mode_flags,iStack_14,0,file_struct);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_index);
  }
  return p_Var1;
}
