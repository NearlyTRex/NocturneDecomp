// Name: core_teleport.cpp_FUN_005da850
// Address: 005da850
// Address Range: [[005da850, 005da868]]
// Convention: unknown
// Signature: undefined core_teleport.cpp_FUN_005da850()
// Cross-references:
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da8a4 [DATA]

#include "nocturne.h"

bool core_teleport_cpp_FUN_005da850(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return *(int *)(in_stack_00000008 + 0x164) == in_stack_00000004;
}


// Assembly code:
// 005da850: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_teleport.cpp_FUN_005da850
//   XREF to: Stack[0x8] (READ)
// 005da854: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005da858: MOV EAX,dword ptr [EAX + 0x164]
// 005da85e: CMP EAX,EDX
// 005da860: SETZ AL
// 005da863: AND EAX,0xff
// 005da868: RET
