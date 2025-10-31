// Name: core_dtri.cpp_clipPolygonToTop_FUN_0049b860
// Address: 0049b860
// Address Range: [[0049b860, 0049b9ac]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToTop_FUN_0049b860(float y_max)
// Globals:
//   void* PTR_caseD_1_0049b854 = 0049b90c
//   void* PTR_caseD_3_0049b85c = 0049b8f1
//   int g_ClipInputVertexCount
//   CVector3f[16] g_ClipInputVertices
//   undefined4 DAT_02cee5d4
//   undefined4 g_ClipInputVertices[0].z
//   undefined4 g_ClipInputVertices[1].y
//   undefined4 g_ClipInputVertices[2].x
//   undefined4 g_ClipInputVertices[2].y
//   int g_ClipBuffer1VertexCount
//   CVector3f[16] g_ClipBuffer1Vertices
//   undefined4 g_ClipBuffer1Vertices[0].y
//   undefined4 g_ClipBuffer1Vertices[0].z
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0049b860(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_ClipInputVertexCount) {
    point1_ptr = g_ClipInputVertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipInputVertexCount) {
        uVar2 = uVar2 ^ g_ClipInputVertexCount;
      }
      bVar1 = y_max < point1_ptr->y;
      if (y_max < g_ClipInputVertices[uVar2].y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != point1_ptr) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = point1_ptr->x;
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].y = point1_ptr->y;
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipInputVertices + uVar2,point1_ptr,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        if (g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount != point1_ptr) {
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].x = point1_ptr->x;
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].y = point1_ptr->y;
          g_ClipBuffer1Vertices[g_ClipBuffer1VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipInputVertices + uVar2,
                   g_ClipBuffer1Vertices + g_ClipBuffer1VertexCount,0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_0049b8cc_caseD_3;
      }
      g_ClipBuffer1VertexCount = g_ClipBuffer1VertexCount + 1;
switchD_0049b8cc_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipInputVertexCount);
  }
  return;
}


// Assembly code:
// 0049b860: PUSH EBX
//   Label: core_dtri.cpp_clipPolygonToTop_FUN_0049b860
// 0049b861: PUSH ESI
// 0049b862: PUSH EDI
// 0049b863: PUSH EBP
// 0049b864: MOV EBP,ESP
// 0049b866: SUB ESP,0x4
// 0049b869: AND ESP,0xfffffff8
// 0049b86c: MOV EBX,dword ptr [0x02cee690]
//   XREF to: 02cee690 (READ)
// 0049b872: MOV EDX,dword ptr [0x02cee5cc]
//   XREF to: 02cee5cc (READ)
// 0049b878: XOR ESI,ESI
// 0049b87a: TEST EDX,EDX
// 0049b87c: JLE 0x0049b8ff
//   XREF to: 0049b8ff (CONDITIONAL_JUMP)
// 0049b882: MOV EDI,0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049b887: MOV EAX,[0x02cee5cc]
//   Label: LAB_0049b887
//   XREF to: 02cee5cc (READ)
// 0049b88c: LEA ECX,[ESI + 0x1]
// 0049b88f: CMP ECX,EAX
// 0049b891: JNZ 0x0049b895
//   XREF to: 0049b895 (CONDITIONAL_JUMP)
// 0049b893: XOR ECX,EAX
// 0049b895: IMUL ECX,ECX,0xc
//   Label: LAB_0049b895
// 0049b898: MOV EAX,0x2cee5d0
//   XREF to: 02cee5d0 (DATA)
// 0049b89d: FLD float ptr [EDI + 0x4]
//   XREF to: 02cee5d4 (READ)
//   XREF to: 02cee5e0 (READ)
// 0049b8a0: ADD EAX,ECX
// 0049b8a2: MOV EDX,EDI
//   XREF to: 02cee5d0 (PARAM)
// 0049b8a4: MOV dword ptr [ESP],EAX
//   XREF to: 02cee5e8 (DATA)
//   XREF to: Stack[-0x18] (DATA)
// 0049b8a7: XOR ECX,ECX
// 0049b8a9: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b8ac: FNSTSW AX
// 0049b8ae: SAHF
// 0049b8af: JBE 0x0049b8b6
//   XREF to: 0049b8b6 (CONDITIONAL_JUMP)
// 0049b8b1: MOV ECX,0x1
// 0049b8b6: MOV EAX,dword ptr [ESP]
//   Label: LAB_0049b8b6
//   XREF to: Stack[-0x18] (DATA)
// 0049b8b9: FLD float ptr [EAX + 0x4]
//   XREF to: 02cee5d4 (DATA)
//   XREF to: 02cee5ec (READ)
// 0049b8bc: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b8bf: FNSTSW AX
// 0049b8c1: SAHF
// 0049b8c2: JBE 0x0049b8c7
//   XREF to: 0049b8c7 (CONDITIONAL_JUMP)
// 0049b8c4: OR CL,0x2
// 0049b8c7: CMP ECX,0x3
//   Label: LAB_0049b8c7
// 0049b8ca: JA 0x0049b8f1
//   XREF to: 0049b8f1 (CONDITIONAL_JUMP)
// 0049b8cc: JMP dword ptr [ECX*0x4 + 0x49b850]
//   Label: switchD
//   XREF to: 0049b8d3 (COMPUTED_JUMP)
//   XREF to: 0049b90c (COMPUTED_JUMP)
//   XREF to: 0049b94c (COMPUTED_JUMP)
//   XREF to: 0049b8f1 (COMPUTED_JUMP)
//   XREF to: 0049b85c (READ)
//   XREF to: 0049b854 (READ)
// 0049b8d3: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 0049b8d6: ADD ECX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049b8dc: CMP ECX,EDX
// 0049b8de: JZ 0x0049b8f0
//   XREF to: 0049b8f0 (CONDITIONAL_JUMP)
// 0049b8e0: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee5d0 (READ)
// 0049b8e2: MOV dword ptr [ECX],EAX
//   XREF to: 02cee694 (DATA)
// 0049b8e4: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee5d4 (READ)
// 0049b8e7: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee698 (DATA)
// 0049b8ea: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee5d8 (READ)
// 0049b8ed: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee69c (DATA)
// 0049b8f0: INC EBX
//   Label: LAB_0049b8f0
// 0049b8f1: MOV ECX,dword ptr [0x02cee5cc]
//   Label: caseD_3
//   XREF to: 02cee5cc (READ)
// 0049b8f7: INC ESI
// 0049b8f8: ADD EDI,0xc
// 0049b8fb: CMP ESI,ECX
// 0049b8fd: JL 0x0049b887
//   XREF to: 0049b887 (CONDITIONAL_JUMP)
// 0049b8ff: MOV dword ptr [0x02cee690],EBX
//   Label: LAB_0049b8ff
//   XREF to: 02cee690 (WRITE)
// 0049b905: MOV ESP,EBP
// 0049b907: POP EBP
// 0049b908: POP EDI
// 0049b909: POP ESI
// 0049b90a: POP EBX
// 0049b90b: RET
// 0049b90c: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 0049b90f: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b912: SUB ESP,0x8
// 0049b915: FCHS
// 0049b917: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049b91a: PUSH 0x0
// 0049b91c: PUSH 0x0
// 0049b91e: PUSH 0x3ff00000
// 0049b923: PUSH 0x0
// 0049b925: PUSH 0x0
// 0049b927: PUSH 0x0
// 0049b929: ADD ECX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049b92f: PUSH ECX
// 0049b930: PUSH EDX
//   XREF to: 02cee5d0 (DATA)
// 0049b931: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 0049b935: PUSH EAX
// 0049b936: MOV dword ptr [0x02cee690],EBX
//   XREF to: 02cee690 (WRITE)
// 0049b93c: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049b941: MOV EBX,dword ptr [0x02cee690]
//   XREF to: 02cee690 (READ)
// 0049b947: ADD ESP,0x2c
// 0049b94a: JMP 0x0049b8f0
//   XREF to: 0049b8f0 (UNCONDITIONAL_JUMP)
// 0049b94c: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 0049b94f: ADD ECX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049b955: CMP ECX,EDX
// 0049b957: JZ 0x0049b969
//   XREF to: 0049b969 (CONDITIONAL_JUMP)
// 0049b959: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee5d0 (READ)
// 0049b95b: MOV dword ptr [ECX],EAX
//   XREF to: 02cee694 (DATA)
// 0049b95d: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee5d4 (READ)
// 0049b960: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee698 (DATA)
// 0049b963: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee5d8 (READ)
// 0049b966: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee69c (DATA)
// 0049b969: INC EBX
//   Label: LAB_0049b969
// 0049b96a: IMUL ECX,EBX,0xc
// 0049b96d: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b970: SUB ESP,0x8
// 0049b973: FCHS
// 0049b975: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049b978: PUSH 0x0
// 0049b97a: PUSH 0x0
// 0049b97c: PUSH 0x3ff00000
// 0049b981: PUSH 0x0
// 0049b983: PUSH 0x0
// 0049b985: PUSH 0x0
// 0049b987: ADD ECX,0x2cee694
//   XREF to: 02cee694 (DATA)
// 0049b98d: PUSH ECX
// 0049b98e: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0049b992: PUSH ECX
// 0049b993: PUSH EDX
//   XREF to: 02cee5d0 (DATA)
// 0049b994: MOV dword ptr [0x02cee690],EBX
//   XREF to: 02cee690 (WRITE)
// 0049b99a: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049b99f: MOV EBX,dword ptr [0x02cee690]
//   XREF to: 02cee690 (READ)
// 0049b9a5: ADD ESP,0x2c
// 0049b9a8: JMP 0x0049b8f0
//   XREF to: 0049b8f0 (UNCONDITIONAL_JUMP)
