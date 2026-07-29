// Name: core_teleport.cpp_FUN_005438d0
// Address: 005438d0
// Address Range: [[005438d0, 0054390f]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_005438d0(CDemonActor *param_1)

#include "nocturne.h"

void core_teleport_cpp_FUN_005438d0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(param_1);
  (pCVar1->vtable)._ub = &g_CTeleportVTable;
  pCVar1[1].actor_name[0] = '\0';
  pCVar1[1].actor_name[1] = '\0';
  pCVar1[1].actor_name[2] = -0x60;
  pCVar1[1].actor_name[3] = '@';
  pCVar1[1].actor_name[4] = '\0';
  pCVar1[1].actor_name[5] = '\0';
  pCVar1[1].actor_name[6] = '\x10';
  pCVar1[1].actor_name[7] = 'A';
  pCVar1[1].actor_name[8] = '\0';
  pCVar1[1].actor_name[9] = '\0';
  pCVar1[1].actor_name[10] = -0x60;
  pCVar1[1].actor_name[0xb] = '@';
  pCVar1[1].actor_name[0xc] = '\0';
  pCVar1[1].actor_name[0xd] = '\0';
  pCVar1[1].actor_name[0xe] = '\0';
  pCVar1[1].actor_name[0xf] = '\0';
  return;
}
