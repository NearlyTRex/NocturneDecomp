// Name: core_shovel.cpp_CShovel_fire_FUN_00516a90
// Address: 00516a90
// Address Range: [[00516a90, 00516aab]]
// Convention: __cdecl
// Signature: int __cdecl core_shovel_cpp_CShovel_fire_FUN_00516a90(CShovel *this_ptr)

#include "nocturne.h"

int __cdecl core_shovel_cpp_CShovel_fire_FUN_00516a90(CShovel *this_ptr)

{
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"Warning: called fire() for melee weapon %s\n",this_ptr);
  return 0;
}
