// Name: engine_special.cpp_getVideoMemory_FUN_00560090
// Address: 00560090
// Address Range: [[00560090, 005600b8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_getVideoMemory_FUN_00560090(int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_getVideoMemory_FUN_00560090(int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
  if (_DAT_0264bcdc == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc40)(total_memory,available_memory,memory_type);
  return iVar1;
}
