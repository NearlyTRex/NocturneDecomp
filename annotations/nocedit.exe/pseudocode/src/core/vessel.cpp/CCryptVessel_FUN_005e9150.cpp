// Name: core_vessel.cpp_CCryptVessel_FUN_005e9150
// Address: 005e9150
// Address Range: [[005e9150, 005e916c]]
// Convention: __cdecl
// Signature: void core_vessel.cpp_CCryptVessel_FUN_005e9150(CCryptVessel * this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9150(CCryptVessel *this_ptr)

{
  (this_ptr->base_actor).orient.pitch = 0.0;
  (this_ptr->base_actor).orient.heading = 0.0;
  this_ptr->field3_0x2d4 = 0;
  return;
}


// Assembly code:
// 005e9150: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9150
//   XREF to: Stack[0x4] (READ)
// 005e9154: MOV dword ptr [EAX + 0x30],0x0
// 005e915b: MOV dword ptr [EAX + 0x38],0x0
// 005e9162: MOV dword ptr [EAX + 0x2d4],0x0
// 005e916c: RET
