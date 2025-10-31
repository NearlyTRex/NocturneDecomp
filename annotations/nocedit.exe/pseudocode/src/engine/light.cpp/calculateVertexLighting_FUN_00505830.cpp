// Name: engine_light.cpp_calculateVertexLighting_FUN_00505830
// Address: 00505830
// Address Range: [[00505830, 00505849]]
// Convention: __cdecl
// Signature: int engine_light.cpp_calculateVertexLighting_FUN_00505830(int unused_param, CVector3i * vertex_position)
// Function calls:
//   engine_light.cpp_calculatePhongLighting_FUN_00505530

#include "nocturne.h"

int __cdecl
engine_light_cpp_calculateVertexLighting_FUN_00505830(int unused_param,CVector3i *vertex_position)

{
  int iVar1;
  
  iVar1 = engine_light_cpp_calculatePhongLighting_FUN_00505530
                    (vertex_position->x,vertex_position->y,vertex_position->z);
  return iVar1;
}


// Assembly code:
// 00505830: PUSH EBX
//   Label: engine_light.cpp_calculateVertexLighting_FUN_00505830
// 00505831: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00505835: MOV EDX,dword ptr [EAX + 0x8]
// 00505838: PUSH EDX
// 00505839: MOV ECX,dword ptr [EAX + 0x4]
// 0050583c: PUSH ECX
// 0050583d: MOV EBX,dword ptr [EAX]
// 0050583f: PUSH EBX
// 00505840: CALL engine_light.cpp_calculatePhongLighting_FUN_00505530
//   XREF to: 00505530 (UNCONDITIONAL_CALL)
// 00505845: ADD ESP,0xc
// 00505848: POP EBX
// 00505849: RET
