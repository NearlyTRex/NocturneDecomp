// Name: dll_dx7.cpp_APIDLLgetVideoMemory_FUN_10005280
// Address: 10005280
// Address Range: [[10005280, 100052b8]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLgetVideoMemory_FUN_10005280(int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLgetVideoMemory_FUN_10005280(int *total_memory,int *available_memory,int *memory_type)

{
  uint uVar1;
  
                    /* 0x5280  18  APIDLLgetVideoMemory */
  uVar1 = g_LocalVideoMem;
  if (((total_memory != (int *)0x0) && (available_memory != (int *)0x0)) &&
     (memory_type != (int *)0x0)) {
    *memory_type = 0;
    *total_memory = uVar1;
    *available_memory = g_NonLocalVideoMem;
    return 1;
  }
  return 0;
}
