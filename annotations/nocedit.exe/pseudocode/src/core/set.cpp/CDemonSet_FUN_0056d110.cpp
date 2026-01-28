// Name: core_set.cpp_CDemonSet_FUN_0056d110
// Address: 0056d110
// Address Range: [[0056d110, 0056d13d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0056d110(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d110(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  
  if ((0xff < *(int *)(in_stack_00000008 + 0xc)) && (g_CoronaGlobeCount < 100)) {
    (&g_CoronaGlobeCount)[g_CoronaGlobeCount + 1] = in_stack_00000008;
    g_CoronaGlobeCount = g_CoronaGlobeCount + 1;
    return;
  }
  return;
}
