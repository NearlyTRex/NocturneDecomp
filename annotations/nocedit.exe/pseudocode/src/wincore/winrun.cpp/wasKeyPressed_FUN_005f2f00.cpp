// Name: wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
// Address: 005f2f00
// Address Range: [[005f2f00, 005f2f15]]
// Convention: __cdecl
// Signature: bool wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00(void)

#include "nocturne.h"

bool __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(void)

{
  return g_InputReadIndex != g_InputWriteIndex;
}
