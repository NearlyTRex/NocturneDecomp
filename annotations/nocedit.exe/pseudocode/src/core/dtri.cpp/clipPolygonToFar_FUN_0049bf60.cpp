// Name: core_dtri.cpp_clipPolygonToFar_FUN_0049bf60
// Address: 0049bf60
// Address Range: [[0049bf60, 0049c0b0]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToFar_FUN_0049bf60(float z_far)
// Globals:
//   void* PTR_caseD_1_0049bf48 = 0049c014
//   void* PTR_caseD_3_0049bf50 = 0049bff9
//   int g_ClipBuffer5VertexCount
//   CVector3f[16] g_ClipBuffer5Vertices
//   undefined4 g_ClipBuffer5Vertices[0].y
//   undefined4 g_ClipBuffer5Vertices[0].z
//   undefined4 DAT_02cee9b8
//   undefined4 g_ClipBuffer5Vertices[2].x
//   undefined4 DAT_02cee9c4
//   int g_ClipOutputVertexCount
//   CVector3f[16] g_ClipOutputVertices
//   undefined4 DAT_02ceea6c
//   undefined4 DAT_02ceea70
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0049bf60(float z_far)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer5VertexCount) {
    point1_ptr = g_ClipBuffer5Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer5VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer5VertexCount;
      }
      bVar1 = z_far < point1_ptr->z;
      if (z_far < g_ClipBuffer5Vertices[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipOutputVertices + g_ClipOutputVertexCount != point1_ptr) {
          g_ClipOutputVertices[g_ClipOutputVertexCount].x = point1_ptr->x;
          g_ClipOutputVertices[g_ClipOutputVertexCount].y = point1_ptr->y;
          g_ClipOutputVertices[g_ClipOutputVertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipBuffer5Vertices + uVar2,point1_ptr,
                   g_ClipOutputVertices + g_ClipOutputVertexCount,0.0,0.0,-1.0,(double)z_far);
        break;
      case 2:
        if (g_ClipOutputVertices + g_ClipOutputVertexCount != point1_ptr) {
          g_ClipOutputVertices[g_ClipOutputVertexCount].x = point1_ptr->x;
          g_ClipOutputVertices[g_ClipOutputVertexCount].y = point1_ptr->y;
          g_ClipOutputVertices[g_ClipOutputVertexCount].z = point1_ptr->z;
        }
        g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipBuffer5Vertices + uVar2,
                   g_ClipOutputVertices + g_ClipOutputVertexCount,0.0,0.0,-1.0,(double)z_far);
        break;
      default:
        goto switchD_0049bfd4_caseD_3;
      }
      g_ClipOutputVertexCount = g_ClipOutputVertexCount + 1;
switchD_0049bfd4_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer5VertexCount);
  }
  return;
}


// Assembly code:
// 0049bf60: PUSH EBX
//   Label: core_dtri.cpp_clipPolygonToFar_FUN_0049bf60
// 0049bf61: PUSH ESI
// 0049bf62: PUSH EDI
// 0049bf63: PUSH EBP
// 0049bf64: MOV EBP,ESP
// 0049bf66: SUB ESP,0x8
// 0049bf69: AND ESP,0xfffffff8
// 0049bf6c: MOV EBX,dword ptr [0x02ceea64]
//   XREF to: 02ceea64 (READ)
// 0049bf72: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049bf75: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0049bf78: MOV EDX,dword ptr [0x02cee9a0]
//   XREF to: 02cee9a0 (READ)
// 0049bf7e: XOR EDI,EDI
// 0049bf80: TEST EDX,EDX
// 0049bf82: JLE 0x0049c007
//   XREF to: 0049c007 (CONDITIONAL_JUMP)
// 0049bf88: MOV ESI,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049bf8d: MOV EAX,[0x02cee9a0]
//   Label: LAB_0049bf8d
//   XREF to: 02cee9a0 (READ)
// 0049bf92: LEA ECX,[EDI + 0x1]
// 0049bf95: CMP ECX,EAX
// 0049bf97: JNZ 0x0049bf9b
//   XREF to: 0049bf9b (CONDITIONAL_JUMP)
// 0049bf99: XOR ECX,EAX
// 0049bf9b: IMUL ECX,ECX,0xc
//   Label: LAB_0049bf9b
// 0049bf9e: MOV EAX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049bfa3: FLD float ptr [ESI + 0x8]
//   XREF to: 02cee9ac (READ)
//   XREF to: 02cee9b8 (READ)
// 0049bfa6: ADD EAX,ECX
// 0049bfa8: MOV EDX,ESI
//   XREF to: 02cee9a4 (PARAM)
// 0049bfaa: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: 02cee9bc (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 0049bfae: XOR ECX,ECX
// 0049bfb0: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bfb3: FNSTSW AX
// 0049bfb5: SAHF
// 0049bfb6: JBE 0x0049bfbd
//   XREF to: 0049bfbd (CONDITIONAL_JUMP)
// 0049bfb8: MOV ECX,0x1
// 0049bfbd: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0049bfbd
//   XREF to: Stack[-0x14] (READ)
// 0049bfc1: FLD float ptr [EAX + 0x8]
//   XREF to: 02cee9ac (DATA)
//   XREF to: 02cee9c4 (READ)
// 0049bfc4: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bfc7: FNSTSW AX
// 0049bfc9: SAHF
// 0049bfca: JBE 0x0049bfcf
//   XREF to: 0049bfcf (CONDITIONAL_JUMP)
// 0049bfcc: OR CL,0x2
// 0049bfcf: CMP ECX,0x3
//   Label: LAB_0049bfcf
// 0049bfd2: JA 0x0049bff9
//   XREF to: 0049bff9 (CONDITIONAL_JUMP)
// 0049bfd4: JMP dword ptr [ECX*0x4 + 0x49bf44]
//   Label: switchD
//   XREF to: 0049bfdb (COMPUTED_JUMP)
//   XREF to: 0049c014 (COMPUTED_JUMP)
//   XREF to: 0049c052 (COMPUTED_JUMP)
//   XREF to: 0049bff9 (COMPUTED_JUMP)
//   XREF to: 0049bf50 (READ)
//   XREF to: 0049bf48 (READ)
// 0049bfdb: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 0049bfde: ADD ECX,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049bfe4: CMP ECX,EDX
// 0049bfe6: JZ 0x0049bff8
//   XREF to: 0049bff8 (CONDITIONAL_JUMP)
// 0049bfe8: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee9a4 (READ)
// 0049bfea: MOV dword ptr [ECX],EAX
//   XREF to: 02ceea68 (DATA)
// 0049bfec: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee9a8 (READ)
// 0049bfef: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceea6c (DATA)
// 0049bff2: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee9ac (READ)
// 0049bff5: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceea70 (DATA)
// 0049bff8: INC EBX
//   Label: LAB_0049bff8
// 0049bff9: MOV ECX,dword ptr [0x02cee9a0]
//   Label: caseD_3
//   XREF to: 02cee9a0 (READ)
// 0049bfff: INC EDI
// 0049c000: ADD ESI,0xc
// 0049c003: CMP EDI,ECX
// 0049c005: JL 0x0049bf8d
//   XREF to: 0049bf8d (CONDITIONAL_JUMP)
// 0049c007: MOV dword ptr [0x02ceea64],EBX
//   Label: LAB_0049c007
//   XREF to: 02ceea64 (WRITE)
// 0049c00d: MOV ESP,EBP
// 0049c00f: POP EBP
// 0049c010: POP EDI
// 0049c011: POP ESI
// 0049c012: POP EBX
// 0049c013: RET
// 0049c014: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 0049c017: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049c01a: SUB ESP,0x8
// 0049c01d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049c020: PUSH 0xbff00000
// 0049c025: PUSH 0x0
// 0049c027: PUSH 0x0
// 0049c029: PUSH 0x0
// 0049c02b: PUSH 0x0
// 0049c02d: PUSH 0x0
// 0049c02f: ADD ECX,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049c035: PUSH ECX
// 0049c036: PUSH EDX
//   XREF to: 02cee9a4 (DATA)
// 0049c037: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0049c03b: PUSH EAX
// 0049c03c: MOV dword ptr [0x02ceea64],EBX
//   XREF to: 02ceea64 (WRITE)
// 0049c042: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c047: MOV EBX,dword ptr [0x02ceea64]
//   XREF to: 02ceea64 (READ)
// 0049c04d: ADD ESP,0x2c
// 0049c050: JMP 0x0049bff8
//   XREF to: 0049bff8 (UNCONDITIONAL_JUMP)
// 0049c052: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 0049c055: ADD ECX,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049c05b: CMP ECX,EDX
// 0049c05d: JZ 0x0049c06f
//   XREF to: 0049c06f (CONDITIONAL_JUMP)
// 0049c05f: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee9a4 (READ)
// 0049c061: MOV dword ptr [ECX],EAX
//   XREF to: 02ceea68 (DATA)
// 0049c063: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee9a8 (READ)
// 0049c066: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02ceea6c (DATA)
// 0049c069: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee9ac (READ)
// 0049c06c: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02ceea70 (DATA)
// 0049c06f: INC EBX
//   Label: LAB_0049c06f
// 0049c070: IMUL ECX,EBX,0xc
// 0049c073: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049c076: SUB ESP,0x8
// 0049c079: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049c07c: PUSH 0xbff00000
// 0049c081: PUSH 0x0
// 0049c083: PUSH 0x0
// 0049c085: PUSH 0x0
// 0049c087: PUSH 0x0
// 0049c089: PUSH 0x0
// 0049c08b: ADD ECX,0x2ceea68
//   XREF to: 02ceea68 (DATA)
// 0049c091: PUSH ECX
// 0049c092: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0049c096: PUSH ECX
// 0049c097: PUSH EDX
//   XREF to: 02cee9a4 (DATA)
// 0049c098: MOV dword ptr [0x02ceea64],EBX
//   XREF to: 02ceea64 (WRITE)
// 0049c09e: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049c0a3: MOV EBX,dword ptr [0x02ceea64]
//   XREF to: 02ceea64 (READ)
// 0049c0a9: ADD ESP,0x2c
// 0049c0ac: JMP 0x0049bff8
//   XREF to: 0049bff8 (UNCONDITIONAL_JUMP)
