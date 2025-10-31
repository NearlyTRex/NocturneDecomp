// Name: core_anvil.cpp_CAnvil_getActorType_FUN_00411cd0
// Address: 00411cd0
// Address Range: [[00411cd0, 00411cd5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_anvil.cpp_CAnvil_getActorType_FUN_00411cd0(CAnvil * this_ptr)
// Globals:
//   CDemonActorType g_CAnvilClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_anvil_cpp_CAnvil_getActorType_FUN_00411cd0(CAnvil *this_ptr)

{
  return &g_CAnvilClassInfo;
}


// Assembly code:
// 00411cd0: MOV EAX,0x8223e4
//   Label: core_anvil.cpp_CAnvil_getActorType_FUN_00411cd0
//   XREF to: 008223e4 (DATA)
// 00411cd5: RET
