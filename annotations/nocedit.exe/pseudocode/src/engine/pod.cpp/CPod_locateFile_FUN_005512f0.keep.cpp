// Name: engine_pod.cpp_CPod_locateFile_FUN_005512f0
// Address: 005512f0
// MANUAL RECONSTRUCTION
// Address Range: [[005512f0, 00551372]]
// Convention: __cdecl
// Signature: CPodFile * __cdecl engine_pod_cpp_CPod_locateFile_FUN_005512f0(CPod *this_ptr,char *base_path,char *filename,int *file_index_out)

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPod_locateFile_FUN_005512f0(CPod *this_ptr,char *base_path,char *filename,int *file_index_out)

{
  int iVar1;
  int iVar2;
  char local_224 [532];

  iVar2 = 0;
  engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(local_224,base_path,filename);
  if (0 < this_ptr->pod_file_count) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr->pod_files[iVar2],local_224);
      if (-1 < iVar1) {
        if (file_index_out != (int *)0x0) {
          *file_index_out = iVar1;
        }
        return this_ptr->pod_files[iVar2];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return (CPodFile *)0x0;
}
