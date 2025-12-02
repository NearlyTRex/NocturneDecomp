// Name: engine_matrix.c_calculateTransformedZ_FUN_0050cd10
// Address: 0050cd10
// Address Range: [[0050cd10, 0050cd67]]
// Convention: __cdecl
// Signature: int engine_matrix.c_calculateTransformedZ_FUN_0050cd10(int * input_coords)
// Globals:
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][2]

#include "nocturne.h"

int __cdecl engine_matrix_c_calculateTransformedZ_FUN_0050cd10(int *input_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (longlong)g_TransformMatrix.m[0].z * (longlong)(*input_coords - g_RelativeX);
  lVar2 = (longlong)g_TransformMatrix.m[1].z * (longlong)(input_coords[1] - g_RelativeY);
  lVar3 = (longlong)g_TransformMatrix.m[2].z * (longlong)(input_coords[2] - g_RelativeZ);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}


// Assembly code:
// 0050cd10: PUSH EBX
//   Label: engine_matrix.c_calculateTransformedZ_FUN_0050cd10
// 0050cd11: PUSH ESI
// 0050cd12: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050cd16: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050cd1c: MOV EAX,dword ptr [EBX]
// 0050cd1e: SUB EAX,EDX
// 0050cd20: MOV ECX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050cd26: MOV EDX,EAX
// 0050cd28: MOV EAX,dword ptr [EBX + 0x4]
// 0050cd2b: MOV ESI,dword ptr [EBX + 0x8]
// 0050cd2e: SUB EAX,ECX
// 0050cd30: MOV EBX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050cd36: MOV ECX,EAX
// 0050cd38: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050cd3d: SUB ESI,EBX
// 0050cd3f: IMUL EDX
// 0050cd41: SHRD EAX,EDX,0x10
// 0050cd45: MOV EBX,EAX
// 0050cd47: MOV EDX,ECX
// 0050cd49: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050cd4e: IMUL EDX
// 0050cd50: SHRD EAX,EDX,0x10
// 0050cd54: MOV EDX,ESI
// 0050cd56: ADD EBX,EAX
// 0050cd58: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050cd5d: IMUL EDX
// 0050cd5f: SHRD EAX,EDX,0x10
// 0050cd63: ADD EAX,EBX
// 0050cd65: POP ESI
// 0050cd66: POP EBX
// 0050cd67: RET
