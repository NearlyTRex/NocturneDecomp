// Name: engine_pod.cpp_CPod_locateFile_FUN_005512f0
// Address: 005512f0
// Address Range: [[005512f0, 00551372]]
// Convention: __cdecl
// Signature: CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)

#include "nocturne.h"

CPodFile * __cdecl
engine_pod_cpp_CPod_locateFile_FUN_005512f0
          (CPod *this_ptr,char *base_path,char *filename,int *file_index_out)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CPod *pCVar3;
  int *in_stack_00000018;
  char acStack_220 [528];
  
  iVar2 = 0;
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffddc,base_path,filename);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(pCVar3->pod_files[0],acStack_220);
      if (-1 < iVar1) {
        if (in_stack_00000018 != (int *)0x0) {
          *in_stack_00000018 = iVar1;
        }
        return this_ptr->pod_files[iVar2];
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return (CPodFile *)0x0;
}
