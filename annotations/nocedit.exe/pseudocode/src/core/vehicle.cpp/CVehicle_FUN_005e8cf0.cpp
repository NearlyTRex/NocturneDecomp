// Name: core_vehicle.cpp_CVehicle_FUN_005e8cf0
// Address: 005e8cf0
// Address Range: [[005e8cf0, 005e8cfd]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_FUN_005e8cf0(CVehicle * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8cf0(CVehicle *this_ptr)

{
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  return;
}


// Assembly code:
// 005e8cf0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_vehicle.cpp_CVehicle_FUN_005e8cf0
//   XREF to: Stack[0x4] (READ)
// 005e8cf4: PUSH EDX
// 005e8cf5: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005e8cfa: ADD ESP,0x4
// 005e8cfd: RET
