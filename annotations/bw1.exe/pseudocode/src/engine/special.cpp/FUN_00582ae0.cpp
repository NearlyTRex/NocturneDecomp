// Name: engine_special.cpp_FUN_00582ae0
// Address: 00582ae0
// Address Range: [[00582ae0, 00582b08]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00582ae0(int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00582ae0(int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
  if (_DAT_02c834ac == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c83410)(total_memory,available_memory,memory_type);
  return iVar1;
}
