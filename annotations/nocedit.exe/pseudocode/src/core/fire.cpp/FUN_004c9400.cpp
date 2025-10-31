// Name: core_fire.cpp_FUN_004c9400
// Address: 004c9400
// Address Range: [[004c9400, 004c9440]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c9400()
// Globals:
//   float FLOAT_0065dca8 = 256
// Function calls:
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void core_fire_cpp_FUN_004c9400(void)

{
  BADSPACEBASE *in_ESP;
  SProjectedVertex *in_stack_00000008;
  float *in_stack_0000000c;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_0000000c * FLOAT_0065dca8);
  local_10.y = (int)ROUND(in_stack_0000000c[1] * FLOAT_0065dca8);
  local_10.z = (int)ROUND(in_stack_0000000c[2] * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(in_stack_00000008,&local_10);
  return;
}


// Assembly code:
// 004c9400: PUSH EBX
//   Label: core_fire.cpp_FUN_004c9400
// 004c9401: SUB ESP,0xc
// 004c9404: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c9408: MOV EBX,ESP
// 004c940a: FLD float ptr [EAX]
// 004c940c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c9412: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 004c9414: FLD float ptr [EAX + 0x4]
// 004c9417: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c941d: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 004c9420: FLD float ptr [EAX + 0x8]
// 004c9423: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c9429: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 004c942c: MOV EBX,ESP
// 004c942e: PUSH EBX
// 004c942f: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004c9433: PUSH EDX
// 004c9434: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c9439: ADD ESP,0x8
// 004c943c: ADD ESP,0xc
// 004c943f: POP EBX
// 004c9440: RET
