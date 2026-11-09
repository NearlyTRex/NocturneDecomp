// Name: core_actor.cpp_FUN_00408a50
// Address: 00408a50
// Address Range: [[00408a50, 00408a7b]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_00408a50(int param_1)

#include "nocturne.h"

void core_actor_cpp_FUN_00408a50(int param_1)

{
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s::getClassName()\n",param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xd4))(param_1);
  return;
}
