// Name: engine_pod.cpp_qsortByFilename_FUN_0054f630
// Address: 0054f630
// Address Range: [[0054f630, 0054f646]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_qsortByFilename_FUN_0054f630(char **filename1_ptr,char **filename2_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_qsortByFilename_FUN_0054f630(char **filename1_ptr,char **filename2_ptr)

{
  int iVar1;
  
  iVar1 = stricmp(*filename1_ptr,*filename2_ptr);
  return iVar1;
}
