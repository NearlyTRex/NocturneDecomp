// Name: engine_matrix.c_calculate3DDistance_FUN_0050d830
// Address: 0050d830
// Address Range: [[0050d830, 0050d889]]
// Convention: __cdecl
// Signature: int engine_matrix.c_calculate3DDistance_FUN_0050d830(int x1, int y1, int z1, int x2, int y2, int z2)
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl
engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1,int y1,int z1,int x2,int y2,int z2)

{
  float10 fVar1;
  
  fVar1 = (float10)(z1 - z2);
  fVar1 = SQRT(fVar1 * fVar1 +
               (float10)(y1 - y2) * (float10)(y1 - y2) + (float10)(x1 - x2) * (float10)(x1 - x2));
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(x2,z1 - z2));
  return (int)ROUND(fVar1);
}


// Assembly code:
// 0050d830: PUSH EBX
//   Label: engine_matrix.c_calculate3DDistance_FUN_0050d830
// 0050d831: SUB ESP,0x14
// 0050d834: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0050d838: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0050d83c: SUB EAX,EDX
// 0050d83e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0050d842: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0050d846: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 0050d84a: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0050d84e: FLD ST0
// 0050d850: SUB EAX,ECX
// 0050d852: FMULP
// 0050d854: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0050d858: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 0050d85c: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 0050d860: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0050d864: FLD ST0
// 0050d866: SUB EAX,EBX
// 0050d868: FMULP
// 0050d86a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0050d86e: FADDP
// 0050d870: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 0050d874: FMUL ST0
// 0050d876: FADDP
// 0050d878: FSQRT
// 0050d87a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050d87f: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0050d882: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0050d885: ADD ESP,0x14
// 0050d888: POP EBX
// 0050d889: RET
