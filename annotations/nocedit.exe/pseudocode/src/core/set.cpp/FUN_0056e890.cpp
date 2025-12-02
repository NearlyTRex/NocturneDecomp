// Name: core_set.cpp_FUN_0056e890
// Address: 0056e890
// Address Range: [[0056e890, 0056e959]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_0056e890()
// Cross-references:
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 (0056eac0) at 0056ee64 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ
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

void core_set_cpp_FUN_0056e890(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int *in_stack_00000004;
  
  iVar1 = g_CameraOriginY +
          ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)*in_stack_00000004) >> 0x20
               ) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10);
  iVar2 = g_CameraOriginZ +
          ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)*in_stack_00000004) >> 0x20
               ) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10);
  *unaff_ESI = g_CameraOriginX +
               ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)in_stack_00000004[2]) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)in_stack_00000004[2])
                    >> 0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)*in_stack_00000004) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)*in_stack_00000004) >>
                    0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)in_stack_00000004[1]) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)in_stack_00000004[1])
                    >> 0x20) << 0x10);
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar2;
  return;
}


// Assembly code:
// 0056e890: PUSH EBX
//   Label: core_set.cpp_FUN_0056e890
// 0056e891: PUSH EDI
// 0056e892: SUB ESP,0xc
// 0056e895: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0056e899: MOV EBX,ESI
// 0056e89b: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0056e8a0: MOV EDX,dword ptr [ECX]
// 0056e8a2: IMUL EDX
// 0056e8a4: SHRD EAX,EDX,0x10
// 0056e8a8: MOV ESI,EAX
// 0056e8aa: MOV EDX,dword ptr [ECX + 0x4]
// 0056e8ad: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0056e8b2: IMUL EDX
// 0056e8b4: SHRD EAX,EDX,0x10
// 0056e8b8: MOV EDX,dword ptr [ECX + 0x8]
// 0056e8bb: ADD ESI,EAX
// 0056e8bd: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0056e8c2: IMUL EDX
// 0056e8c4: SHRD EAX,EDX,0x10
// 0056e8c8: MOV EDX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 0056e8ce: ADD EAX,ESI
// 0056e8d0: ADD EDX,EAX
// 0056e8d2: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0056e8d7: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0056e8da: MOV EDX,dword ptr [ECX]
// 0056e8dc: IMUL EDX
// 0056e8de: SHRD EAX,EDX,0x10
// 0056e8e2: MOV ESI,EAX
// 0056e8e4: MOV EDX,dword ptr [ECX + 0x4]
// 0056e8e7: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0056e8ec: IMUL EDX
// 0056e8ee: SHRD EAX,EDX,0x10
// 0056e8f2: MOV EDX,dword ptr [ECX + 0x8]
// 0056e8f5: ADD ESI,EAX
// 0056e8f7: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0056e8fc: IMUL EDX
// 0056e8fe: SHRD EAX,EDX,0x10
// 0056e902: MOV EDX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 0056e908: ADD EAX,ESI
// 0056e90a: ADD EDX,EAX
// 0056e90c: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0056e911: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0056e915: MOV EDX,dword ptr [ECX]
// 0056e917: IMUL EDX
// 0056e919: SHRD EAX,EDX,0x10
// 0056e91d: MOV ESI,EAX
// 0056e91f: MOV EDX,dword ptr [ECX + 0x4]
// 0056e922: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0056e927: IMUL EDX
// 0056e929: SHRD EAX,EDX,0x10
// 0056e92d: MOV EDX,dword ptr [ECX + 0x8]
// 0056e930: ADD ESI,EAX
// 0056e932: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0056e937: IMUL EDX
// 0056e939: SHRD EAX,EDX,0x10
// 0056e93d: MOV EDX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 0056e943: ADD EAX,ESI
// 0056e945: MOV EDI,EBX
// 0056e947: ADD EDX,EAX
// 0056e949: MOV ESI,ESP
// 0056e94b: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0056e94f: MOVSD ES:EDI,ESI
// 0056e950: MOVSD ES:EDI,ESI
// 0056e951: MOVSD ES:EDI,ESI
// 0056e952: MOV EAX,EBX
// 0056e954: ADD ESP,0xc
// 0056e957: POP EDI
// 0056e958: POP EBX
// 0056e959: RET
