// Name: core_shovel.cpp_CShovel_fire_FUN_00588c20
// Address: 00588c20
// MANUAL RECONSTRUCTION
// Address Range: [[00588c20, 00588c3b]]
// Convention: __cdecl
// Signature: int __cdecl core_shovel_cpp_CShovel_fire_FUN_00588c20(CShovel *this_ptr)

#include "nocturne.h"

int __cdecl core_shovel_cpp_CShovel_fire_FUN_00588c20(CShovel *this_ptr)

{
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Warning: called fire() for melee weapon %s\n",this_ptr->base.base.actor_name);
  return 0;
}
