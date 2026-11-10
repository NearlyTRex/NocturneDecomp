// Name: engine_pod.cpp_qsortByFilename_FUN_0053b230
// Address: 0053b230
// Address Range: [[0053b230, 0053b246]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_qsortByFilename_FUN_0053b230(char **filename1_ptr,char **filename2_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_qsortByFilename_FUN_0053b230(char **filename1_ptr,char **filename2_ptr)

{
  int iVar1;
  
  iVar1 = _stricmp(*filename1_ptr,*filename2_ptr);
  return iVar1;
}
