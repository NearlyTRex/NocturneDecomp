// Name: wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40
// Address: 0058eb40
// Address Range: [[0058eb40, 0058eb55]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40(void)

{
  return (uint)(g_InputReadIndex != g_InputWriteIndex);
}
