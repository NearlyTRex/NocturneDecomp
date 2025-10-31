// Name: core_dtri.cpp_clipPolygonToRight_FUN_0049bb30
// Address: 0049bb30
// Address Range: [[0049bb30, 0049bc7a]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToRight_FUN_0049bb30(float x_max)
// Globals:
//   void* PTR_caseD_1_0049bb18 = 0049bbda
//   void* PTR_caseD_3_0049bb20 = 0049bbbf
//   int g_ClipBuffer2VertexCount
//   CVector3f[16] g_ClipBuffer2Vertices
//   undefined4 g_ClipBuffer2Vertices[0].y
//   undefined4 g_ClipBuffer2Vertices[0].z
//   undefined4 DAT_02cee764
//   undefined4 DAT_02cee770
//   int g_ClipBuffer3VertexCount
//   CVector3f[16] g_ClipBuffer3Vertices
//   undefined4 g_ClipBuffer3Vertices[0].y
//   undefined4 g_ClipBuffer3Vertices[0].z
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_0049bb30(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer2VertexCount) {
    point1_ptr = g_ClipBuffer2Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer2VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer2VertexCount;
      }
      point2_ptr = g_ClipBuffer2Vertices + uVar2;
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != point1_ptr) {
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].x = point1_ptr->x;
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].y = point1_ptr->y;
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point2_ptr,point1_ptr,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,
                   0.0,(double)-x_max);
        break;
      case 2:
        if (g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount != point1_ptr) {
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].x = point1_ptr->x;
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].y = point1_ptr->y;
          g_ClipBuffer3Vertices[g_ClipBuffer3VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,point2_ptr,g_ClipBuffer3Vertices + g_ClipBuffer3VertexCount,1.0,0.0,
                   0.0,(double)-x_max);
        break;
      default:
        goto switchD_0049bb9a_caseD_3;
      }
      g_ClipBuffer3VertexCount = g_ClipBuffer3VertexCount + 1;
switchD_0049bb9a_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer2VertexCount);
  }
  return;
}


// Assembly code:
// 0049bb30: PUSH EBX
//   Label: core_dtri.cpp_clipPolygonToRight_FUN_0049bb30
// 0049bb31: PUSH ESI
// 0049bb32: PUSH EDI
// 0049bb33: PUSH EBP
// 0049bb34: MOV EBP,ESP
// 0049bb36: SUB ESP,0x4
// 0049bb39: AND ESP,0xfffffff8
// 0049bb3c: MOV EBX,dword ptr [0x02cee818]
//   XREF to: 02cee818 (READ)
// 0049bb42: MOV EDX,dword ptr [0x02cee754]
//   XREF to: 02cee754 (READ)
// 0049bb48: XOR ESI,ESI
// 0049bb4a: TEST EDX,EDX
// 0049bb4c: JLE 0x0049bbcd
//   XREF to: 0049bbcd (CONDITIONAL_JUMP)
// 0049bb52: MOV EDI,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049bb57: MOV EAX,[0x02cee754]
//   Label: LAB_0049bb57
//   XREF to: 02cee754 (READ)
// 0049bb5c: LEA ECX,[ESI + 0x1]
// 0049bb5f: CMP ECX,EAX
// 0049bb61: JNZ 0x0049bb65
//   XREF to: 0049bb65 (CONDITIONAL_JUMP)
// 0049bb63: XOR ECX,EAX
// 0049bb65: IMUL ECX,ECX,0xc
//   Label: LAB_0049bb65
// 0049bb68: MOV EAX,0x2cee758
//   XREF to: 02cee758 (DATA)
// 0049bb6d: FLD float ptr [EDI]
//   XREF to: 02cee758 (READ)
//   XREF to: 02cee764 (READ)
// 0049bb6f: ADD EAX,ECX
// 0049bb71: MOV EDX,EDI
//   XREF to: 02cee758 (PARAM)
// 0049bb73: MOV dword ptr [ESP],EAX
//   XREF to: 02cee770 (DATA)
//   XREF to: Stack[-0x18] (DATA)
// 0049bb76: XOR ECX,ECX
// 0049bb78: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049bb7b: FNSTSW AX
// 0049bb7d: SAHF
// 0049bb7e: JBE 0x0049bb85
//   XREF to: 0049bb85 (CONDITIONAL_JUMP)
// 0049bb80: MOV ECX,0x1
// 0049bb85: MOV EAX,dword ptr [ESP]
//   Label: LAB_0049bb85
//   XREF to: Stack[-0x18] (DATA)
// 0049bb88: FLD float ptr [EAX]
//   XREF to: 02cee758 (DATA)
//   XREF to: 02cee770 (READ)
// 0049bb8a: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049bb8d: FNSTSW AX
// 0049bb8f: SAHF
// 0049bb90: JBE 0x0049bb95
//   XREF to: 0049bb95 (CONDITIONAL_JUMP)
// 0049bb92: OR CL,0x2
// 0049bb95: CMP ECX,0x3
//   Label: LAB_0049bb95
// 0049bb98: JA 0x0049bbbf
//   XREF to: 0049bbbf (CONDITIONAL_JUMP)
// 0049bb9a: JMP dword ptr [ECX*0x4 + 0x49bb14]
//   Label: switchD
//   XREF to: 0049bba1 (COMPUTED_JUMP)
//   XREF to: 0049bbda (COMPUTED_JUMP)
//   XREF to: 0049bc1a (COMPUTED_JUMP)
//   XREF to: 0049bbbf (COMPUTED_JUMP)
//   XREF to: 0049bb20 (READ)
//   XREF to: 0049bb18 (READ)
// 0049bba1: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 0049bba4: ADD ECX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049bbaa: CMP ECX,EDX
// 0049bbac: JZ 0x0049bbbe
//   XREF to: 0049bbbe (CONDITIONAL_JUMP)
// 0049bbae: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee758 (READ)
// 0049bbb0: MOV dword ptr [ECX],EAX
//   XREF to: 02cee81c (DATA)
// 0049bbb2: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee75c (READ)
// 0049bbb5: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee820 (DATA)
// 0049bbb8: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee760 (READ)
// 0049bbbb: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee824 (DATA)
// 0049bbbe: INC EBX
//   Label: LAB_0049bbbe
// 0049bbbf: MOV ECX,dword ptr [0x02cee754]
//   Label: caseD_3
//   XREF to: 02cee754 (READ)
// 0049bbc5: INC ESI
// 0049bbc6: ADD EDI,0xc
// 0049bbc9: CMP ESI,ECX
// 0049bbcb: JL 0x0049bb57
//   XREF to: 0049bb57 (CONDITIONAL_JUMP)
// 0049bbcd: MOV dword ptr [0x02cee818],EBX
//   Label: LAB_0049bbcd
//   XREF to: 02cee818 (WRITE)
// 0049bbd3: MOV ESP,EBP
// 0049bbd5: POP EBP
// 0049bbd6: POP EDI
// 0049bbd7: POP ESI
// 0049bbd8: POP EBX
// 0049bbd9: RET
// 0049bbda: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 0049bbdd: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049bbe0: SUB ESP,0x8
// 0049bbe3: FCHS
// 0049bbe5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049bbe8: PUSH 0x0
// 0049bbea: PUSH 0x0
// 0049bbec: PUSH 0x0
// 0049bbee: PUSH 0x0
// 0049bbf0: PUSH 0x3ff00000
// 0049bbf5: PUSH 0x0
// 0049bbf7: ADD ECX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049bbfd: PUSH ECX
// 0049bbfe: PUSH EDX
//   XREF to: 02cee758 (DATA)
// 0049bbff: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0049bc03: PUSH EAX
// 0049bc04: MOV dword ptr [0x02cee818],EBX
//   XREF to: 02cee818 (WRITE)
// 0049bc0a: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bc0f: MOV EBX,dword ptr [0x02cee818]
//   XREF to: 02cee818 (READ)
// 0049bc15: ADD ESP,0x2c
// 0049bc18: JMP 0x0049bbbe
//   XREF to: 0049bbbe (UNCONDITIONAL_JUMP)
// 0049bc1a: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 0049bc1d: ADD ECX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049bc23: CMP ECX,EDX
// 0049bc25: JZ 0x0049bc37
//   XREF to: 0049bc37 (CONDITIONAL_JUMP)
// 0049bc27: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee758 (READ)
// 0049bc29: MOV dword ptr [ECX],EAX
//   XREF to: 02cee81c (DATA)
// 0049bc2b: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee75c (READ)
// 0049bc2e: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee820 (DATA)
// 0049bc31: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee760 (READ)
// 0049bc34: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee824 (DATA)
// 0049bc37: INC EBX
//   Label: LAB_0049bc37
// 0049bc38: IMUL ECX,EBX,0xc
// 0049bc3b: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049bc3e: SUB ESP,0x8
// 0049bc41: FCHS
// 0049bc43: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049bc46: PUSH 0x0
// 0049bc48: PUSH 0x0
// 0049bc4a: PUSH 0x0
// 0049bc4c: PUSH 0x0
// 0049bc4e: PUSH 0x3ff00000
// 0049bc53: PUSH 0x0
// 0049bc55: ADD ECX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049bc5b: PUSH ECX
// 0049bc5c: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0049bc60: PUSH ECX
// 0049bc61: PUSH EDX
//   XREF to: 02cee758 (DATA)
// 0049bc62: MOV dword ptr [0x02cee818],EBX
//   XREF to: 02cee818 (WRITE)
// 0049bc68: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bc6d: MOV EBX,dword ptr [0x02cee818]
//   XREF to: 02cee818 (READ)
// 0049bc73: ADD ESP,0x2c
// 0049bc76: JMP 0x0049bbbe
//   XREF to: 0049bbbe (UNCONDITIONAL_JUMP)
