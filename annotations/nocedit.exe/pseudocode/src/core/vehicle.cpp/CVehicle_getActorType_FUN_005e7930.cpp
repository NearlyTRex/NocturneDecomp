// Name: core_vehicle.cpp_CVehicle_getActorType_FUN_005e7930
// Address: 005e7930
// Address Range: [[005e7930, 005e7935]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vehicle.cpp_CVehicle_getActorType_FUN_005e7930(CVehicle * this_ptr)
// Globals:
//   CDemonActorType g_CVehicleClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_vehicle_cpp_CVehicle_getActorType_FUN_005e7930(CVehicle *this_ptr)

{
  return &g_CVehicleClassInfo;
}


// Assembly code:
// 005e7930: MOV EAX,0x3f87564
//   Label: core_vehicle.cpp_CVehicle_getActorType_FUN_005e7930
//   XREF to: 03f87564 (DATA)
// 005e7935: RET
