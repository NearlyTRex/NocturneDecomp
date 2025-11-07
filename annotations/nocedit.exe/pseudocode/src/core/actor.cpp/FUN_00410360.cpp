// Name: core_actor.cpp_FUN_00410360
// Address: 00410360
// Address Range: [[00410360, 0041037d]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_00410360()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_0051b570 (0051b570) at 0051b6aa [DATA]
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051bf37 [DATA]
//   shape_meshlod.cpp_FUN_0051efe0 (0051efe0) at 0051f033 [DATA]

#include "nocturne.h"

void core_actor_cpp_FUN_00410360(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000004 == in_stack_00000008) {
    return;
  }
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  return;
}


// Assembly code:
// 00410360: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_FUN_00410360
//   XREF to: Stack[0x4] (READ)
// 00410364: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00410368: CMP EAX,EDX
// 0041036a: JNZ 0x0041036d
//   XREF to: 0041036d (CONDITIONAL_JUMP)
// 0041036c: RET
// 0041036d: MOV ECX,dword ptr [EDX]
//   Label: LAB_0041036d
// 0041036f: MOV dword ptr [EAX],ECX
// 00410371: MOV ECX,dword ptr [EDX + 0x4]
// 00410374: MOV dword ptr [EAX + 0x4],ECX
// 00410377: MOV ECX,dword ptr [EDX + 0x8]
// 0041037a: MOV dword ptr [EAX + 0x8],ECX
// 0041037d: RET
