// Name: shape_meshlod.cpp_FUN_0051ee30
// Address: 0051ee30
// Address Range: [[0051ee30, 0051ee4c]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051ee30()
// Function calls:
//   shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90

#include "nocturne.h"

bool shape_meshlod_cpp_FUN_0051ee30(void)

{
  int iVar1;
  SLodTriangle *in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = shape_meshlod_cpp_findVertexIndexInTriangle_FUN_00515e90
                    (in_stack_00000004,in_stack_00000008);
  return -1 < iVar1;
}


// Assembly code:
// 0051ee30: MOV EDX,dword ptr [ESP + 0x8]
//   Label: shape_meshlod.cpp_FUN_0051ee30
//   XREF to: Stack[0x8] (READ)
// 0051ee34: PUSH EDX
// 0051ee35: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0051ee39: PUSH ECX
// 0051ee3a: CALL shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 0051ee3f: ADD ESP,0x8
// 0051ee42: TEST EAX,EAX
// 0051ee44: SETGE AL
// 0051ee47: AND EAX,0xff
// 0051ee4c: RET
