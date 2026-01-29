// Name: crt_stdio.c_fopenThreadSafe_FUN_00601b14
// Address: 00601b14
// Address Range: [[00601b14, 00601ba5]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_fopenThreadSafe_FUN_00601b14(char *filename,char *mode,_FILE **output_file_ptr)

#include "nocturne.h"

_FILE * __cdecl
fopenThreadSafe(char *filename,char *mode,_FILE **output_file_ptr)

{
  _FILE *file_index;
  int parsed_mode_flags;
  _FILE *file_struct;
  _FILE *p_Var1;
  int unaff_EDI;
  char *in_stack_00000010;
  
  parsed_mode_flags = OpenModeStringParser(mode,&stack0xffffffec);
  p_Var1 = (_FILE *)0x0;
  if (parsed_mode_flags != 0) {
    file_index = output_file_ptr[4];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)((int)file_index);
    if (g_SpecialDeviceCleanupFunc != (SPECIAL_DEVICE_CLEANUP_FUNC *)0x0) {
      (*g_SpecialDeviceCleanupFunc)((int)file_index);
    }
    file_struct = (_FILE *)MultipleDoNothingCalls();
    p_Var1 = (_FILE *)0x0;
    if (file_struct != (_FILE *)0x0) {
      file_struct->_flag = file_struct->_flag & 0x4000;
      p_Var1 = OpenFileAndInitialize
                         ((char *)output_file_ptr,*in_stack_00000010,parsed_mode_flags,unaff_EDI,0,
                          file_struct);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)((int)file_index);
  }
  return p_Var1;
}
