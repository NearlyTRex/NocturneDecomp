// Name: wincore_winrun.cpp_enqueueInput_FUN_00558ba0
// Address: 00558ba0
// Address Range: [[00558ba0, 00558bd9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00558ba0(int input_value)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00558ba0(int input_value)

{
  g_INT_02de084c = g_INT_02de084c + 1;
  (&g_BOOL_02de07f4)[g_INT_02de084c] = input_value;
  if (0x13 < g_INT_02de084c) {
    g_INT_02de084c = 0;
  }
  if ((g_INT_02de084c == g_INT_02de0848) &&
     (g_INT_02de0848 = g_INT_02de0848 + 1, 0x13 < g_INT_02de0848)) {
    g_INT_02de0848 = 0;
  }
  return;
}
