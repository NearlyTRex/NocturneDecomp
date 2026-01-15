// Name: crt_stdio.c_fopenThreadSafe_FUN_00601b14
// Address: 00601b14
// Address Range: [[00601b14, 00601ba5]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_fopenThreadSafe_FUN_00601b14(char * filename, char * mode, FILE * * output_file_ptr)

#include "nocturne.h"

FILE * __cdecl
crt_stdio_c_fopenThreadSafe_FUN_00601b14(char *filename,char *mode,FILE **output_file_ptr)

{
  FILE *file_index;
  int parsed_mode_flags;
  FILE *file_struct;
  FILE *pFVar1;
  int unaff_EDI;
  char *in_stack_00000010;
  
  parsed_mode_flags = crt_stdio_c_OpenModeStringParser_FUN_006017d0(mode,&stack0xffffffec);
  pFVar1 = (FILE *)0x0;
  if (parsed_mode_flags != 0) {
    file_index = output_file_ptr[4];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)((int)file_index);
    if (g_SpecialDeviceCleanupFunc != (SPECIAL_DEVICE_CLEANUP_FUNC *)0x0) {
      (*g_SpecialDeviceCleanupFunc)((int)file_index);
    }
    file_struct = (FILE *)crt_unknown_c_MultipleDoNothingCalls_FUN_00601a94();
    pFVar1 = (FILE *)0x0;
    if (file_struct != (FILE *)0x0) {
      file_struct->_flag = file_struct->_flag & 0x4000;
      pFVar1 = crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
                         ((char *)output_file_ptr,*in_stack_00000010,parsed_mode_flags,unaff_EDI,0,
                          file_struct);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)((int)file_index);
  }
  return pFVar1;
}
