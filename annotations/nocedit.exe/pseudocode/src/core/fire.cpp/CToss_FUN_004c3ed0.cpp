// Name: core_fire.cpp_CToss_FUN_004c3ed0
// Address: 004c3ed0
// Address Range: [[004c3ed0, 004c3ede]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_FUN_004c3ed0(CToss * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c6c80 (004c6c80) at 004c6db8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_FUN_004c3ed0(CToss *this_ptr)

{
  this_ptr->field0_0x0[0x3dc] = '\0';
  this_ptr->field0_0x0[0x3dd] = '\0';
  this_ptr->field0_0x0[0x3de] = '\0';
  this_ptr->field0_0x0[0x3df] = '\0';
  return;
}


// Assembly code:
// 004c3ed0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CToss_FUN_004c3ed0
//   XREF to: Stack[0x4] (READ)
// 004c3ed4: MOV dword ptr [EAX + 0x3dc],0x0
// 004c3ede: RET
