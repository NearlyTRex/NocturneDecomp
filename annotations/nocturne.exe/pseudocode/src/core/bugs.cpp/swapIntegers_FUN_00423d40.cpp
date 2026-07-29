// Name: core_bugs.cpp_swapIntegers_FUN_00423d40
// Address: 00423d40
// Address Range: [[00423d40, 00423d54]]
// Convention: __cdecl
// Signature: int * __cdecl core_bugs_cpp_swapIntegers_FUN_00423d40(int *a,int *b)

#include "nocturne.h"

int * __cdecl core_bugs_cpp_swapIntegers_FUN_00423d40(int *a,int *b)

{
  int iVar1;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return b;
}
