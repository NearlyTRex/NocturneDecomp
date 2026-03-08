// Name: core_bugs.cpp_swapIntegers_FUN_00427b80
// Address: 00427b80
// Address Range: [[00427b80, 00427b94]]
// Convention: __cdecl
// Signature: int * __cdecl core_bugs_cpp_swapIntegers_FUN_00427b80(int *a,int *b)

#include "nocturne.h"

int * __cdecl core_bugs_cpp_swapIntegers_FUN_00427b80(int *a,int *b)

{
  int iVar1;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return b;
}
