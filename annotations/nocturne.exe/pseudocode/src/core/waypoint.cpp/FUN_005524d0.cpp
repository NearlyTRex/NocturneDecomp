// Name: core_waypoint.cpp_FUN_005524d0
// Address: 005524d0
// Address Range: [[005524d0, 0055250f]]
// Convention: unknown
// Signature: void core_waypoint_cpp_FUN_005524d0(CTrigger *param_1)

#include "nocturne.h"

void core_waypoint_cpp_FUN_005524d0(CTrigger *param_1)

{
  CTrigger *pCVar1;
  
  pCVar1 = core_trigger_cpp_CTrigger_ctor_FUN_005478b0(param_1);
  (pCVar1->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_waypoint_cpp_CWaypoint_setup_FUN_00552510_005a4034;
  (pCVar1->trigger_size).x = 0.5;
  (pCVar1->trigger_size).y = 1.0;
  (pCVar1->trigger_size).z = 0.5;
  pCVar1[1].base.actor_name[0] = '\0';
  pCVar1[1].base.actor_name[1] = '\0';
  pCVar1[1].base.actor_name[2] = '\0';
  pCVar1[1].base.actor_name[3] = '\0';
  return;
}
