// Name: APIDLLgetVideoMemory
// Address: 10005280
// Address Range: [[10005280, 100052b8]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLgetVideoMemory(int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

int __cdecl APIDLLgetVideoMemory(int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
                    /* 0x5280  18  APIDLLgetVideoMemory */
  iVar1 = DAT_10014208;
  if (((total_memory != (int *)0x0) && (available_memory != (int *)0x0)) &&
     (memory_type != (int *)0x0)) {
    *memory_type = 0;
    *total_memory = iVar1;
    *available_memory = DAT_1001420c;
    return 1;
  }
  return 0;
}
