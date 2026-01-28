// Name: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
// Address: 004b2640
// Address Range: [[004b2640, 004b2760]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(char *filename)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(char *filename)

{
  int *piVar1;
  STimestampRecord *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *in_stack_00000008;
  FILE *local_18;
  STimestampRecord *local_14;
  
  iVar4 = 0;
  do {
    local_18 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (in_stack_00000008,(char *)0x0,"rt","..\\engine\\fileio.cpp",
                          0x153);
    if (local_18 != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(local_18,(char *)0x0,0,0x400);
      goto LAB_004b2681;
    }
    piVar1 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar1 != 6) break;
    iVar4 = iVar4 + 1;
    (*g_SleepFunc)(500);
  } while (iVar4 < 10);
  local_18 = (FILE *)0x0;
LAB_004b2681:
  if (local_18 == (FILE *)0x0) {
    return 0;
  }
  local_14 = (STimestampRecord *)0x0;
  iVar4 = engine_fileio_cpp_readTimestampFile_FUN_004b23a0
                    ((FILE *)&local_18,&local_14,(int *)filename);
  if (local_18 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
    local_18 = (FILE *)0x0;
  }
  iVar5 = -1;
  if (-1 < iVar4) {
    iVar3 = 0;
    iVar5 = 0;
    pSVar2 = local_14;
    if (0 < iVar4) {
      do {
        if (iVar5 < *(int *)(pSVar2->unk1 + 0xfc)) {
          iVar5 = *(int *)(pSVar2->unk1 + 0xfc);
        }
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
      } while (iVar3 < iVar4);
    }
  }
  if (local_14 != (STimestampRecord *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\engine\\fileio.cpp",0x201);
  }
  return iVar5;
}
