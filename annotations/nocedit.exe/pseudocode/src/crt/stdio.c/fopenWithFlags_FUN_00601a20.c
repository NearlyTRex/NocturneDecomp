// Name: crt_stdio.c_fopenWithFlags_FUN_00601a20
// Address: 00601a20
// Address Range: [[00601a20, 00601a78]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_fopenWithFlags_FUN_00601a20(char * filename, char * mode, int flags)

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_fopenWithFlags_FUN_00601a20(char *filename,char *mode,int flags)

{
  FILE *parsed_mode_flags;
  FILE *file_struct;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *in_stack_00000010;
  int in_stack_00000014;
  
  parsed_mode_flags = (FILE *)crt_stdio_c_OpenModeStringParser_FUN_006017d0(mode,&stack0xfffffff0);
  file_struct = parsed_mode_flags;
  if ((parsed_mode_flags != (FILE *)0x0) &&
     (file_struct = crt_stdio_c_AllocateFileStruct_FUN_006092f0(0), file_struct != (FILE *)0x0)) {
    file_struct = crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
                            ((char *)flags,*in_stack_00000010,(int)parsed_mode_flags,unaff_ESI,
                             in_stack_00000014,file_struct);
  }
  return file_struct;
}
