// Name: core_fire.cpp_CFireEffect_FUN_004c6c60
// Address: 004c6c60
// Address Range: [[004c6c60, 004c6c71]]
// Convention: __cdecl
// Signature: CFireEffect * core_fire.cpp_CFireEffect_FUN_004c6c60(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_staticInit_FUN_004bef20 (004bef20) at 004bef25 [UNCONDITIONAL_CALL]
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c6c80

#include "nocturne.h"

CFireEffect * __cdecl core_fire_cpp_CFireEffect_FUN_004c6c60(CFireEffect *this_ptr)

{
  core_fire_cpp_CFireEffect_FUN_004c6c80(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004c6c60: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c6c60
// 004c6c61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c6c65: PUSH EBX
// 004c6c66: CALL core_fire.cpp_CFireEffect_FUN_004c6c80
//   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
// 004c6c6b: ADD ESP,0x4
// 004c6c6e: MOV EAX,EBX
// 004c6c70: POP EBX
// 004c6c71: RET
