// Name: engine_special.cpp_FUN_005663b0
// Address: 005663b0
// Address Range: [[005663b0, 005663d8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_005663b0(int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_005663b0(int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
  if (_DAT_02cf6108 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf606c)(total_memory,available_memory,memory_type);
  return iVar1;
}
