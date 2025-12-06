// Name: shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
// Address: 0050f1f0
// Address Range: [[0050f1f0, 0050f209]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(int size,char *filename,int line_number)

{
  void *pvVar1;
  
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,filename,line_number);
  return pvVar1;
}
