// Name: core_set.cpp_FUN_0056e960
// Address: 0056e960
// Address Range: [[0056e960, 0056eab0]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_0056e960()
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

#include "nocturne.h"

void core_set_cpp_FUN_0056e960(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *unaff_ESI;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_stack_00000004;
  
  iVar7 = ((uint)((longlong)g_TransformMatrix.m[0].x * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[0].x * (longlong)*in_stack_00000004) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[1].x * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[1].x * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[2].x * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[2].x * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10);
  iVar8 = ((uint)((longlong)g_TransformMatrix.m[0].y * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[0].y * (longlong)*in_stack_00000004) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[1].y * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[1].y * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[2].y * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[2].y * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10);
  iVar9 = ((uint)((longlong)g_TransformMatrix.m[0].z * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[0].z * (longlong)*in_stack_00000004) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[1].z * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[1].z * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[2].z * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[2].z * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10);
  lVar1 = (longlong)g_InverseMatrix.m[0].y;
  lVar2 = (longlong)g_InverseMatrix.m[1].y;
  lVar3 = (longlong)g_InverseMatrix.m[2].y;
  lVar4 = (longlong)g_InverseMatrix.m[0].z;
  lVar5 = (longlong)g_InverseMatrix.m[1].z;
  lVar6 = (longlong)g_InverseMatrix.m[2].z;
  *unaff_ESI = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >> 0x20
                            ) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar9) >> 0x20) <<
               0x10);
  unaff_ESI[1] = ((uint)(lVar1 * iVar7) >> 0x10 | (int)((ulonglong)(lVar1 * iVar7) >> 0x20) << 0x10)
                 + ((uint)(lVar2 * iVar8) >> 0x10 |
                   (int)((ulonglong)(lVar2 * iVar8) >> 0x20) << 0x10) +
                 ((uint)(lVar3 * iVar9) >> 0x10 | (int)((ulonglong)(lVar3 * iVar9) >> 0x20) << 0x10)
  ;
  unaff_ESI[2] = ((uint)(lVar4 * iVar7) >> 0x10 | (int)((ulonglong)(lVar4 * iVar7) >> 0x20) << 0x10)
                 + ((uint)(lVar5 * iVar8) >> 0x10 |
                   (int)((ulonglong)(lVar5 * iVar8) >> 0x20) << 0x10) +
                 ((uint)(lVar6 * iVar9) >> 0x10 | (int)((ulonglong)(lVar6 * iVar9) >> 0x20) << 0x10)
  ;
  return;
}


// Assembly code:
// 0056e960: PUSH EBX
//   Label: core_set.cpp_FUN_0056e960
// 0056e961: PUSH EDI
// 0056e962: SUB ESP,0x18
// 0056e965: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0056e969: MOV EBX,ESI
// 0056e96b: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0056e970: MOV EDX,dword ptr [ECX]
// 0056e972: IMUL EDX
// 0056e974: SHRD EAX,EDX,0x10
// 0056e978: MOV ESI,EAX
// 0056e97a: MOV EDX,dword ptr [ECX + 0x4]
// 0056e97d: MOV EAX,[0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0056e982: IMUL EDX
// 0056e984: SHRD EAX,EDX,0x10
// 0056e988: MOV EDX,dword ptr [ECX + 0x8]
// 0056e98b: ADD ESI,EAX
// 0056e98d: MOV EAX,[0x02d05300]
//   XREF to: 02d05300 (READ)
// 0056e992: IMUL EDX
// 0056e994: SHRD EAX,EDX,0x10
// 0056e998: MOV EDX,dword ptr [ECX]
// 0056e99a: ADD ESI,EAX
// 0056e99c: MOV EAX,[0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0056e9a1: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0056e9a5: IMUL EDX
// 0056e9a7: SHRD EAX,EDX,0x10
// 0056e9ab: MOV ESI,EAX
// 0056e9ad: MOV EDX,dword ptr [ECX + 0x4]
// 0056e9b0: MOV EAX,[0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0056e9b5: IMUL EDX
// 0056e9b7: SHRD EAX,EDX,0x10
// 0056e9bb: MOV EDX,dword ptr [ECX + 0x8]
// 0056e9be: ADD ESI,EAX
// 0056e9c0: MOV EAX,[0x02d05304]
//   XREF to: 02d05304 (READ)
// 0056e9c5: IMUL EDX
// 0056e9c7: SHRD EAX,EDX,0x10
// 0056e9cb: MOV EDX,dword ptr [ECX]
// 0056e9cd: ADD ESI,EAX
// 0056e9cf: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0056e9d4: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0056e9d8: IMUL EDX
// 0056e9da: SHRD EAX,EDX,0x10
// 0056e9de: MOV ESI,EAX
// 0056e9e0: MOV EDX,dword ptr [ECX + 0x4]
// 0056e9e3: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0056e9e8: IMUL EDX
// 0056e9ea: SHRD EAX,EDX,0x10
// 0056e9ee: MOV EDX,dword ptr [ECX + 0x8]
// 0056e9f1: ADD ESI,EAX
// 0056e9f3: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0056e9f8: IMUL EDX
// 0056e9fa: SHRD EAX,EDX,0x10
// 0056e9fe: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0056ea02: ADD ESI,EAX
// 0056ea04: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0056ea09: IMUL EDX
// 0056ea0b: SHRD EAX,EDX,0x10
// 0056ea0f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0056ea13: MOV ECX,EAX
// 0056ea15: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0056ea1a: IMUL EDX
// 0056ea1c: SHRD EAX,EDX,0x10
// 0056ea20: MOV EDX,ESI
// 0056ea22: ADD ECX,EAX
// 0056ea24: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0056ea29: IMUL EDX
// 0056ea2b: SHRD EAX,EDX,0x10
// 0056ea2f: ADD ECX,EAX
// 0056ea31: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0xc] (WRITE)
// 0056ea35: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 0056ea38: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0056ea3c: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0056ea41: IMUL EDX
// 0056ea43: SHRD EAX,EDX,0x10
// 0056ea47: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0056ea4b: MOV ECX,EAX
// 0056ea4d: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0056ea52: IMUL EDX
// 0056ea54: SHRD EAX,EDX,0x10
// 0056ea58: MOV EDX,ESI
// 0056ea5a: ADD ECX,EAX
// 0056ea5c: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0056ea61: IMUL EDX
// 0056ea63: SHRD EAX,EDX,0x10
// 0056ea67: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0056ea6b: ADD ECX,EAX
// 0056ea6d: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0056ea72: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056ea76: IMUL EDX
// 0056ea78: SHRD EAX,EDX,0x10
// 0056ea7c: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0056ea80: MOV ECX,EAX
// 0056ea82: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0056ea87: IMUL EDX
// 0056ea89: SHRD EAX,EDX,0x10
// 0056ea8d: MOV EDX,ESI
// 0056ea8f: ADD ECX,EAX
// 0056ea91: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0056ea96: MOV EDI,EBX
// 0056ea98: IMUL EDX
// 0056ea9a: SHRD EAX,EDX,0x10
// 0056ea9e: ADD ECX,EAX
// 0056eaa0: MOV ESI,ESP
// 0056eaa2: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0056eaa6: MOVSD ES:EDI,ESI
// 0056eaa7: MOVSD ES:EDI,ESI
// 0056eaa8: MOVSD ES:EDI,ESI
// 0056eaa9: MOV EAX,EBX
// 0056eaab: ADD ESP,0x18
// 0056eaae: POP EDI
// 0056eaaf: POP EBX
// 0056eab0: RET
