// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// Address: 00453950
// Address Range: [[00453950, 00453a63]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera * this_ptr, int alpha_index)
// Globals:
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]
// Function calls:
//   engine_matrix.c_getCameraOrigin_FUN_0050e2c0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
          (CDemonCamera *this_ptr,int alpha_index)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_0000000c;
  undefined4 auStack_ff8 [1017];
  CVector3i CStack_14;
  
  bVar4 = 0;
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  iVar1 = in_stack_0000000c * 0xc + alpha_index;
  iVar2 = in_stack_0000000c * 4 + alpha_index;
  puVar3 = (undefined4 *)(iVar1 + 0x11f0 + (uint)bVar4 * -8);
  *(int *)(iVar1 + 0x11ec) = CStack_14.y;
  *puVar3 = *(undefined4 *)((int)&CStack_14 + (uint)bVar4 * -8 + 8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  *(int *)(iVar2 + 0x124c) = g_TransformMatrix.m[0].x;
  *(int *)(iVar2 + 0x126c) = g_TransformMatrix.m[0].y;
  *(int *)(iVar2 + 0x128c) = g_TransformMatrix.m[0].z;
  *(int *)(iVar2 + 0x12ac) = g_TransformMatrix.m[1].x;
  *(int *)(iVar2 + 0x12cc) = g_TransformMatrix.m[1].y;
  *(int *)(iVar2 + 0x12ec) = g_TransformMatrix.m[1].z;
  *(int *)(iVar2 + 0x130c) = g_TransformMatrix.m[2].x;
  *(int *)(iVar2 + 0x132c) = g_TransformMatrix.m[2].y;
  *(int *)(iVar2 + 0x134c) = g_TransformMatrix.m[2].z;
  *(int *)(iVar2 + 0x136c) = g_InverseMatrix.m[0].x;
  *(int *)(iVar2 + 0x138c) = g_InverseMatrix.m[0].y;
  *(int *)(iVar2 + 0x13ac) = g_InverseMatrix.m[0].z;
  *(int *)(iVar2 + 0x13cc) = g_InverseMatrix.m[1].x;
  *(int *)(iVar2 + 0x13ec) = g_InverseMatrix.m[1].y;
  *(int *)(iVar2 + 0x140c) = g_InverseMatrix.m[1].z;
  *(int *)(iVar2 + 0x142c) = g_InverseMatrix.m[2].x;
  *(int *)(iVar2 + 0x144c) = g_InverseMatrix.m[2].y;
  *(int *)(iVar2 + 0x146c) = g_InverseMatrix.m[2].z;
  return;
}


// Assembly code:
// 00453950: PUSH ESI
//   Label: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// 00453951: PUSH EDI
// 00453952: SUB ESP,0xc
// 00453955: MOV ESI,ESP
// 00453957: CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0
//   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)
// 0045395c: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00453960: LEA EAX,[EDX*0x4 + 0x0]
// 00453967: SUB EAX,EDX
// 00453969: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0045396d: SHL EAX,0x2
// 00453970: ADD EAX,EDX
// 00453972: LEA EDI,[EAX + 0x11ec]
// 00453978: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0045397c: SHL EAX,0x2
// 0045397f: MOV ESI,ESP
// 00453981: ADD EAX,EDX
// 00453983: MOVSD ES:EDI,ESI
// 00453984: MOVSD ES:EDI,ESI
// 00453985: MOVSD ES:EDI,ESI
// 00453986: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0045398c: MOV dword ptr [EAX + 0x124c],EDX
// 00453992: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 00453998: MOV dword ptr [EAX + 0x126c],EDX
// 0045399e: MOV EDX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 004539a4: MOV dword ptr [EAX + 0x128c],EDX
// 004539aa: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 004539b0: MOV dword ptr [EAX + 0x12ac],EDX
// 004539b6: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 004539bc: MOV dword ptr [EAX + 0x12cc],EDX
// 004539c2: MOV EDX,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 004539c8: MOV dword ptr [EAX + 0x12ec],EDX
// 004539ce: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 004539d4: MOV dword ptr [EAX + 0x130c],EDX
// 004539da: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 004539e0: MOV dword ptr [EAX + 0x132c],EDX
// 004539e6: MOV EDX,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 004539ec: MOV dword ptr [EAX + 0x134c],EDX
// 004539f2: MOV EDX,dword ptr [0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 004539f8: MOV dword ptr [EAX + 0x136c],EDX
// 004539fe: MOV EDX,dword ptr [0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 00453a04: MOV dword ptr [EAX + 0x138c],EDX
// 00453a0a: MOV EDX,dword ptr [0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 00453a10: MOV dword ptr [EAX + 0x13ac],EDX
// 00453a16: MOV EDX,dword ptr [0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 00453a1c: MOV dword ptr [EAX + 0x13cc],EDX
// 00453a22: MOV EDX,dword ptr [0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 00453a28: MOV dword ptr [EAX + 0x13ec],EDX
// 00453a2e: MOV EDX,dword ptr [0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 00453a34: MOV dword ptr [EAX + 0x140c],EDX
// 00453a3a: MOV EDX,dword ptr [0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 00453a40: MOV dword ptr [EAX + 0x142c],EDX
// 00453a46: MOV EDX,dword ptr [0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 00453a4c: MOV dword ptr [EAX + 0x144c],EDX
// 00453a52: MOV EDX,dword ptr [0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 00453a58: MOV dword ptr [EAX + 0x146c],EDX
// 00453a5e: ADD ESP,0xc
// 00453a61: POP EDI
// 00453a62: POP ESI
// 00453a63: RET
