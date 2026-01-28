// Name: wincore_windll.cpp_getVideoMemory_FUN_005b7d60
// Address: 005b7d60
// Address Range: [[005b7d60, 005b7d88]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_getVideoMemory_FUN_005b7d60 (int *total_memory,int *available_memory,int *memory_type)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_getVideoMemory_FUN_005b7d60
          (int *total_memory,int *available_memory,int *memory_type)

{
  int iVar1;
  
  if (g_ExternalRendererActive == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_getVideoMemory)(total_memory,available_memory,memory_type);
  return iVar1;
}
