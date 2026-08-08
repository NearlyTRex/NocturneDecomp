// Name: engine_special.cpp_getVideoMemory_FUN_00532cd0
// Address: 00532cd0
// Address Range: [[00532cd0, 00532cf8]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_getVideoMemory_FUN_00532cd0(int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

int __cdecl engine_special_cpp_getVideoMemory_FUN_00532cd0(int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
  if (g_LoadedExternalDLLRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_getVideoMemory)(total_memory,available_memory,memory_type);
  return iVar1;
}
