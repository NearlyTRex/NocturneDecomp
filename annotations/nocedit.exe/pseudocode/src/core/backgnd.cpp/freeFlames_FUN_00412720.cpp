// Name: core_backgnd.cpp_freeFlames_FUN_00412720
// Address: 00412720
// Address Range: [[00412720, 00412734]]
// Convention: __cdecl
// Signature: int __cdecl core_backgnd_cpp_freeFlames_FUN_00412720(CFlame **array)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_freeFlames_FUN_00412720(CFlame **array)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(array,0x32,&g_CFlameTypeInfo);
  return iVar1;
}
