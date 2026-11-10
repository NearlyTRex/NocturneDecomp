// Name: engine_pod.cpp_qsortByFilename_FUN_00519ee0
// Address: 00519ee0
// Address Range: [[00519ee0, 00519ef6]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_qsortByFilename_FUN_00519ee0(char **filename1_ptr,char **filename2_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_qsortByFilename_FUN_00519ee0(char **filename1_ptr,char **filename2_ptr)

{
  int iVar1;
  
  iVar1 = _stricmp(*filename1_ptr,*filename2_ptr);
  return iVar1;
}
