// Name: engine_pod.cpp_qsortByFilename_FUN_00512f90
// Address: 00512f90
// Address Range: [[00512f90, 00512fa6]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_qsortByFilename_FUN_00512f90(char **filename1_ptr,char **filename2_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_qsortByFilename_FUN_00512f90(char **filename1_ptr,char **filename2_ptr)

{
  int iVar1;
  
  iVar1 = _stricmp(*filename1_ptr,*filename2_ptr);
  return iVar1;
}
