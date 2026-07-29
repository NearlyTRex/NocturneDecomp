// Name: core_teleport.cpp_FUN_00543840
// Address: 00543840
// Address Range: [[00543840, 00543857]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_00543840(CDemonActor *param_1)

#include "nocturne.h"

void core_teleport_cpp_FUN_00543840(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(param_1);
  (pCVar1->vtable)._ub = &g_CTeleportDestVTable;
  return;
}
