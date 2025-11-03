// Name: core_fire.cpp_CExplosion_ctor_FUN_004c38c0
// Address: 004c38c0
// Address Range: [[004c38c0, 004c38cb]]
// Convention: __cdecl
// Signature: CExplosion * core_fire.cpp_CExplosion_ctor_FUN_004c38c0(CExplosion * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_init_FUN_004c6c80 (004c6c80) at 004c6d95 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_004c38c0(CExplosion *this_ptr)

{
  this_ptr->field0_0x0[0xc] = '\0';
  this_ptr->field0_0x0[0xd] = '\0';
  this_ptr->field0_0x0[0xe] = '\0';
  this_ptr->field0_0x0[0xf] = '\0';
  return this_ptr;
}


// Assembly code:
// 004c38c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CExplosion_ctor_FUN_004c38c0
//   XREF to: Stack[0x4] (READ)
// 004c38c4: MOV dword ptr [EAX + 0xc],0x0
// 004c38cb: RET
