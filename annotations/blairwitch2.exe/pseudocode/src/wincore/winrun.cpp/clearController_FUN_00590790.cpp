// Name: wincore_winrun.cpp_clearController_FUN_00590790
// Address: 00590790
// Address Range: [[00590790, 005907ad]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearController_FUN_00590790(int controller_index)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearController_FUN_00590790(int controller_index)

{
  memset((void *)(controller_index * 0xac + 0x26656c4),0,0xac);
  return;
}
