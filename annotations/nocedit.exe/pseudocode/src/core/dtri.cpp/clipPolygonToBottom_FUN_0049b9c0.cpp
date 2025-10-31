// Name: core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0
// Address: 0049b9c0
// Address Range: [[0049b9c0, 0049bb10]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0(float y_min)
// Globals:
//   void* PTR_caseD_1_0049b9b4 = 0049ba74
//   void* PTR_caseD_3_0049b9bc = 0049ba59
//   int g_ClipBuffer1VertexCount
//   CVector3f[16] g_ClipBuffer1Vertices
//   undefined4 g_ClipBuffer1Vertices[0].y
//   undefined4 g_ClipBuffer1Vertices[0].z
//   undefined4 DAT_02cee6a4
//   undefined4 g_ClipBuffer1Vertices[2].x
//   undefined4 DAT_02cee6b0
//   int g_ClipBuffer2VertexCount
//   CVector3f[16] g_ClipBuffer2Vertices
//   undefined4 g_ClipBuffer2Vertices[0].y
//   undefined4 g_ClipBuffer2Vertices[0].z
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_0049b9c0(float y_min)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer1VertexCount) {
    point1_ptr = g_ClipBuffer1Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer1VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer1VertexCount;
      }
      bVar1 = point1_ptr->y < y_min;
      if (g_ClipBuffer1Vertices[uVar2].y < y_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != point1_ptr) {
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = point1_ptr->x;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].y = point1_ptr->y;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipBuffer1Vertices + uVar2,point1_ptr,
                   g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)y_min);
        break;
      case 2:
        if (g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount != point1_ptr) {
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].x = point1_ptr->x;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].y = point1_ptr->y;
          g_ClipBuffer2Vertices[g_ClipBuffer2VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipBuffer1Vertices + uVar2,
                   g_ClipBuffer2Vertices + g_ClipBuffer2VertexCount,0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_0049ba34_caseD_3;
      }
      g_ClipBuffer2VertexCount = g_ClipBuffer2VertexCount + 1;
switchD_0049ba34_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer1VertexCount);
  }
  return;
}


// Assembly code:
// 0049b9c0: PUSH EBX
//   Label: core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0
// 0049b9c1: PUSH ESI
// 0049b9c2: PUSH EDI
// 0049b9c3: PUSH EBP
// 0049b9c4: MOV EBP,ESP
// 0049b9c6: SUB ESP,0x8
// 0049b9c9: AND ESP,0xfffffff8
// 0049b9cc: MOV EBX,dword ptr [0x02cee754]
//   XREF to: 02cee754 (READ)
// 0049b9d2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b9d5: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0049b9d8: MOV EDX,dword ptr [0x02cee690]
//   XREF to: 02cee690 (READ)
// 0049b9de: XOR EDI,EDI
// 0049b9e0: TEST EDX,EDX
// 0049b9e2: JLE 0x0049ba67
//   XREF to: 0049ba67 (CONDITIONAL_JUMP)
// 0049b9e8: MOV ESI,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049b9ed: MOV EAX,[0x02cee690]
//   Label: LAB_0049b9ed
//   XREF to: 02cee690 (READ)
// 0049b9f2: LEA ECX,[EDI + 0x1]
// 0049b9f5: CMP ECX,EAX
// 0049b9f7: JNZ 0x0049b9fb
//   XREF to: 0049b9fb (CONDITIONAL_JUMP)
// 0049b9f9: XOR ECX,EAX
// 0049b9fb: IMUL ECX,ECX,0xc
//   Label: LAB_0049b9fb
// 0049b9fe: MOV EAX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049ba03: FLD float ptr [ESI + 0x4]
//   XREF to: 02cee698 (READ)
//   XREF to: 02cee6a4 (READ)
// 0049ba06: ADD EAX,ECX
// 0049ba08: MOV EDX,ESI
//   XREF to: 02cee694 (PARAM)
// 0049ba0a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: 02cee6ac (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 0049ba0e: XOR ECX,ECX
// 0049ba10: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049ba13: FNSTSW AX
// 0049ba15: SAHF
// 0049ba16: JNC 0x0049ba1d
//   XREF to: 0049ba1d (CONDITIONAL_JUMP)
// 0049ba18: MOV ECX,0x1
// 0049ba1d: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0049ba1d
//   XREF to: Stack[-0x14] (READ)
// 0049ba21: FLD float ptr [EAX + 0x4]
//   XREF to: 02cee698 (DATA)
//   XREF to: 02cee6b0 (READ)
// 0049ba24: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049ba27: FNSTSW AX
// 0049ba29: SAHF
// 0049ba2a: JNC 0x0049ba2f
//   XREF to: 0049ba2f (CONDITIONAL_JUMP)
// 0049ba2c: OR CL,0x2
// 0049ba2f: CMP ECX,0x3
//   Label: LAB_0049ba2f
// 0049ba32: JA 0x0049ba59
//   XREF to: 0049ba59 (CONDITIONAL_JUMP)
// 0049ba34: JMP dword ptr [ECX*0x4 + 0x49b9b0]
//   Label: switchD
//   XREF to: 0049ba3b (COMPUTED_JUMP)
//   XREF to: 0049ba74 (COMPUTED_JUMP)
//   XREF to: 0049bab2 (COMPUTED_JUMP)
//   XREF to: 0049ba59 (COMPUTED_JUMP)
//   XREF to: 0049b9bc (READ)
//   XREF to: 0049b9b4 (READ)
// 0049ba3b: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 0049ba3e: ADD ECX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049ba44: CMP ECX,EDX
// 0049ba46: JZ 0x0049ba58
//   XREF to: 0049ba58 (CONDITIONAL_JUMP)
// 0049ba48: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee694 (READ)
// 0049ba4a: MOV dword ptr [ECX],EAX
//   XREF to: 02cee758 (DATA)
// 0049ba4c: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee698 (READ)
// 0049ba4f: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee75c (DATA)
// 0049ba52: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee69c (READ)
// 0049ba55: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee760 (DATA)
// 0049ba58: INC EBX
//   Label: LAB_0049ba58
// 0049ba59: MOV ECX,dword ptr [0x02cee690]
//   Label: caseD_3
//   XREF to: 02cee690 (READ)
// 0049ba5f: INC EDI
// 0049ba60: ADD ESI,0xc
// 0049ba63: CMP EDI,ECX
// 0049ba65: JL 0x0049b9ed
//   XREF to: 0049b9ed (CONDITIONAL_JUMP)
// 0049ba67: MOV dword ptr [0x02cee754],EBX
//   Label: LAB_0049ba67
//   XREF to: 02cee754 (WRITE)
// 0049ba6d: MOV ESP,EBP
// 0049ba6f: POP EBP
// 0049ba70: POP EDI
// 0049ba71: POP ESI
// 0049ba72: POP EBX
// 0049ba73: RET
// 0049ba74: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 0049ba77: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049ba7a: SUB ESP,0x8
// 0049ba7d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049ba80: PUSH 0x0
// 0049ba82: PUSH 0x0
// 0049ba84: PUSH 0xbff00000
// 0049ba89: PUSH 0x0
// 0049ba8b: PUSH 0x0
// 0049ba8d: PUSH 0x0
// 0049ba8f: ADD ECX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049ba95: PUSH ECX
// 0049ba96: PUSH EDX
//   XREF to: 02cee694 (DATA)
// 0049ba97: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0049ba9b: PUSH EAX
// 0049ba9c: MOV dword ptr [0x02cee754],EBX
//   XREF to: 02cee754 (WRITE)
// 0049baa2: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049baa7: MOV EBX,dword ptr [0x02cee754]
//   XREF to: 02cee754 (READ)
// 0049baad: ADD ESP,0x2c
// 0049bab0: JMP 0x0049ba58
//   XREF to: 0049ba58 (UNCONDITIONAL_JUMP)
// 0049bab2: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 0049bab5: ADD ECX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049babb: CMP ECX,EDX
// 0049babd: JZ 0x0049bacf
//   XREF to: 0049bacf (CONDITIONAL_JUMP)
// 0049babf: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee694 (READ)
// 0049bac1: MOV dword ptr [ECX],EAX
//   XREF to: 02cee758 (DATA)
// 0049bac3: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee698 (READ)
// 0049bac6: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee75c (DATA)
// 0049bac9: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee69c (READ)
// 0049bacc: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee760 (DATA)
// 0049bacf: INC EBX
//   Label: LAB_0049bacf
// 0049bad0: IMUL ECX,EBX,0xc
// 0049bad3: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bad6: SUB ESP,0x8
// 0049bad9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049badc: PUSH 0x0
// 0049bade: PUSH 0x0
// 0049bae0: PUSH 0xbff00000
// 0049bae5: PUSH 0x0
// 0049bae7: PUSH 0x0
// 0049bae9: PUSH 0x0
// 0049baeb: ADD ECX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049baf1: PUSH ECX
// 0049baf2: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0049baf6: PUSH ECX
// 0049baf7: PUSH EDX
//   XREF to: 02cee694 (DATA)
// 0049baf8: MOV dword ptr [0x02cee754],EBX
//   XREF to: 02cee754 (WRITE)
// 0049bafe: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bb03: MOV EBX,dword ptr [0x02cee754]
//   XREF to: 02cee754 (READ)
// 0049bb09: ADD ESP,0x2c
// 0049bb0c: JMP 0x0049ba58
//   XREF to: 0049ba58 (UNCONDITIONAL_JUMP)
