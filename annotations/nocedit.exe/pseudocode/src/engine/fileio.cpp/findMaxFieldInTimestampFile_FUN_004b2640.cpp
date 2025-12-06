// Name: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
// Address: 004b2640
// Address Range: [[004b2640, 004b2760]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640(char * filename)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(char *filename)

{
  FILE *stream_ptr;
  int *piVar1;
  void *pvVar2;
  void *unaff_EBX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  char *in_stack_00000008;
  int *in_stack_0000000c;
  STimestampRecord *file_ptr;
  
  iVar4 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (in_stack_00000008,(char *)0x0,"rt","..\\engine\\fileio.cpp"
                            ,0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b2681;
    }
    piVar1 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar1 != 6) break;
    iVar4 = iVar4 + 1;
    (*Sleep)(500);
  } while (iVar4 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b2681:
  if (stream_ptr == (FILE *)0x0) {
    return 0;
  }
  file_ptr = (STimestampRecord *)0x0;
  iVar4 = engine_fileio_cpp_readTimestampFile_FUN_004b23a0
                    ((FILE *)&stack0xfffffff0,(STimestampRecord **)&stack0xfffffff4,
                     in_stack_0000000c);
  if (file_ptr != (STimestampRecord *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)file_ptr,"..\\engine\\fileio.cpp",0xc4);
  }
  iVar5 = -1;
  if (-1 < iVar4) {
    iVar3 = 0;
    iVar5 = 0;
    pvVar2 = unaff_EBX;
    if (0 < iVar4) {
      do {
        if (iVar5 < *(int *)((int)pvVar2 + 0x100)) {
          iVar5 = *(int *)((int)pvVar2 + 0x100);
        }
        iVar3 = iVar3 + 1;
        pvVar2 = (void *)((int)pvVar2 + 0x148);
      } while (iVar3 < iVar4);
    }
  }
  if (unaff_EBX != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_EBX,"..\\engine\\fileio.cpp",0x201);
  }
  return iVar5;
}
