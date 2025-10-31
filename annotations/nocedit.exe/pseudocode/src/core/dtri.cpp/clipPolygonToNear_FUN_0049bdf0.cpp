// Name: core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0
// Address: 0049bdf0
// Address Range: [[0049bdf0, 0049bf40]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0(float z_near)
// Globals:
//   void* PTR_caseD_1_0049bde4 = 0049bea4
//   void* PTR_caseD_3_0049bdec = 0049be89
//   int g_ClipBuffer4VertexCount
//   CVector3f[16] g_ClipBuffer4Vertices
//   undefined4 g_ClipBuffer4Vertices[0].y
//   undefined4 g_ClipBuffer4Vertices[0].z
//   undefined4 DAT_02cee8f4
//   undefined4 g_ClipBuffer4Vertices[2].x
//   undefined4 DAT_02cee900
//   int g_ClipBuffer5VertexCount
//   CVector3f[16] g_ClipBuffer5Vertices
//   undefined4 g_ClipBuffer5Vertices[0].y
//   undefined4 g_ClipBuffer5Vertices[0].z
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0049bdf0(float z_near)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer4VertexCount) {
    point1_ptr = g_ClipBuffer4Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer4VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer4VertexCount;
      }
      bVar1 = point1_ptr->z < z_near;
      if (g_ClipBuffer4Vertices[uVar2].z < z_near) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != point1_ptr) {
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].x = point1_ptr->x;
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].y = point1_ptr->y;
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (g_ClipBuffer4Vertices + uVar2,point1_ptr,
                   g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,(double)z_near);
        break;
      case 2:
        if (g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount != point1_ptr) {
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].x = point1_ptr->x;
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].y = point1_ptr->y;
          g_ClipBuffer5Vertices[g_ClipBuffer5VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,g_ClipBuffer4Vertices + uVar2,
                   g_ClipBuffer5Vertices + g_ClipBuffer5VertexCount,0.0,0.0,-1.0,(double)z_near);
        break;
      default:
        goto switchD_0049be64_caseD_3;
      }
      g_ClipBuffer5VertexCount = g_ClipBuffer5VertexCount + 1;
switchD_0049be64_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer4VertexCount);
  }
  return;
}


// Assembly code:
// 0049bdf0: PUSH EBX
//   Label: core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0
// 0049bdf1: PUSH ESI
// 0049bdf2: PUSH EDI
// 0049bdf3: PUSH EBP
// 0049bdf4: MOV EBP,ESP
// 0049bdf6: SUB ESP,0x8
// 0049bdf9: AND ESP,0xfffffff8
// 0049bdfc: MOV EBX,dword ptr [0x02cee9a0]
//   XREF to: 02cee9a0 (READ)
// 0049be02: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049be05: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0049be08: MOV EDX,dword ptr [0x02cee8dc]
//   XREF to: 02cee8dc (READ)
// 0049be0e: XOR EDI,EDI
// 0049be10: TEST EDX,EDX
// 0049be12: JLE 0x0049be97
//   XREF to: 0049be97 (CONDITIONAL_JUMP)
// 0049be18: MOV ESI,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049be1d: MOV EAX,[0x02cee8dc]
//   Label: LAB_0049be1d
//   XREF to: 02cee8dc (READ)
// 0049be22: LEA ECX,[EDI + 0x1]
// 0049be25: CMP ECX,EAX
// 0049be27: JNZ 0x0049be2b
//   XREF to: 0049be2b (CONDITIONAL_JUMP)
// 0049be29: XOR ECX,EAX
// 0049be2b: IMUL ECX,ECX,0xc
//   Label: LAB_0049be2b
// 0049be2e: MOV EAX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049be33: FLD float ptr [ESI + 0x8]
//   XREF to: 02cee8e8 (READ)
//   XREF to: 02cee8f4 (READ)
// 0049be36: ADD EAX,ECX
// 0049be38: MOV EDX,ESI
//   XREF to: 02cee8e0 (PARAM)
// 0049be3a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: 02cee8f8 (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 0049be3e: XOR ECX,ECX
// 0049be40: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049be43: FNSTSW AX
// 0049be45: SAHF
// 0049be46: JNC 0x0049be4d
//   XREF to: 0049be4d (CONDITIONAL_JUMP)
// 0049be48: MOV ECX,0x1
// 0049be4d: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0049be4d
//   XREF to: Stack[-0x14] (READ)
// 0049be51: FLD float ptr [EAX + 0x8]
//   XREF to: 02cee8e8 (DATA)
//   XREF to: 02cee900 (READ)
// 0049be54: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049be57: FNSTSW AX
// 0049be59: SAHF
// 0049be5a: JNC 0x0049be5f
//   XREF to: 0049be5f (CONDITIONAL_JUMP)
// 0049be5c: OR CL,0x2
// 0049be5f: CMP ECX,0x3
//   Label: LAB_0049be5f
// 0049be62: JA 0x0049be89
//   XREF to: 0049be89 (CONDITIONAL_JUMP)
// 0049be64: JMP dword ptr [ECX*0x4 + 0x49bde0]
//   Label: switchD
//   XREF to: 0049be6b (COMPUTED_JUMP)
//   XREF to: 0049bea4 (COMPUTED_JUMP)
//   XREF to: 0049bee2 (COMPUTED_JUMP)
//   XREF to: 0049be89 (COMPUTED_JUMP)
//   XREF to: 0049bdec (READ)
//   XREF to: 0049bde4 (READ)
// 0049be6b: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 0049be6e: ADD ECX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049be74: CMP ECX,EDX
// 0049be76: JZ 0x0049be88
//   XREF to: 0049be88 (CONDITIONAL_JUMP)
// 0049be78: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee8e0 (READ)
// 0049be7a: MOV dword ptr [ECX],EAX
//   XREF to: 02cee9a4 (DATA)
// 0049be7c: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee8e4 (READ)
// 0049be7f: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee9a8 (DATA)
// 0049be82: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee8e8 (READ)
// 0049be85: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee9ac (DATA)
// 0049be88: INC EBX
//   Label: LAB_0049be88
// 0049be89: MOV ECX,dword ptr [0x02cee8dc]
//   Label: caseD_3
//   XREF to: 02cee8dc (READ)
// 0049be8f: INC EDI
// 0049be90: ADD ESI,0xc
// 0049be93: CMP EDI,ECX
// 0049be95: JL 0x0049be1d
//   XREF to: 0049be1d (CONDITIONAL_JUMP)
// 0049be97: MOV dword ptr [0x02cee9a0],EBX
//   Label: LAB_0049be97
//   XREF to: 02cee9a0 (WRITE)
// 0049be9d: MOV ESP,EBP
// 0049be9f: POP EBP
// 0049bea0: POP EDI
// 0049bea1: POP ESI
// 0049bea2: POP EBX
// 0049bea3: RET
// 0049bea4: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 0049bea7: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049beaa: SUB ESP,0x8
// 0049bead: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049beb0: PUSH 0xbff00000
// 0049beb5: PUSH 0x0
// 0049beb7: PUSH 0x0
// 0049beb9: PUSH 0x0
// 0049bebb: PUSH 0x0
// 0049bebd: PUSH 0x0
// 0049bebf: ADD ECX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049bec5: PUSH ECX
// 0049bec6: PUSH EDX
//   XREF to: 02cee8e0 (DATA)
// 0049bec7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0049becb: PUSH EAX
// 0049becc: MOV dword ptr [0x02cee9a0],EBX
//   XREF to: 02cee9a0 (WRITE)
// 0049bed2: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bed7: MOV EBX,dword ptr [0x02cee9a0]
//   XREF to: 02cee9a0 (READ)
// 0049bedd: ADD ESP,0x2c
// 0049bee0: JMP 0x0049be88
//   XREF to: 0049be88 (UNCONDITIONAL_JUMP)
// 0049bee2: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 0049bee5: ADD ECX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049beeb: CMP ECX,EDX
// 0049beed: JZ 0x0049beff
//   XREF to: 0049beff (CONDITIONAL_JUMP)
// 0049beef: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee8e0 (READ)
// 0049bef1: MOV dword ptr [ECX],EAX
//   XREF to: 02cee9a4 (DATA)
// 0049bef3: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee8e4 (READ)
// 0049bef6: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee9a8 (DATA)
// 0049bef9: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee8e8 (READ)
// 0049befc: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee9ac (DATA)
// 0049beff: INC EBX
//   Label: LAB_0049beff
// 0049bf00: IMUL ECX,EBX,0xc
// 0049bf03: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bf06: SUB ESP,0x8
// 0049bf09: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049bf0c: PUSH 0xbff00000
// 0049bf11: PUSH 0x0
// 0049bf13: PUSH 0x0
// 0049bf15: PUSH 0x0
// 0049bf17: PUSH 0x0
// 0049bf19: PUSH 0x0
// 0049bf1b: ADD ECX,0x2cee9a4
//   XREF to: 02cee9a4 (DATA)
// 0049bf21: PUSH ECX
// 0049bf22: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0049bf26: PUSH ECX
// 0049bf27: PUSH EDX
//   XREF to: 02cee8e0 (DATA)
// 0049bf28: MOV dword ptr [0x02cee9a0],EBX
//   XREF to: 02cee9a0 (WRITE)
// 0049bf2e: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bf33: MOV EBX,dword ptr [0x02cee9a0]
//   XREF to: 02cee9a0 (READ)
// 0049bf39: ADD ESP,0x2c
// 0049bf3c: JMP 0x0049be88
//   XREF to: 0049be88 (UNCONDITIONAL_JUMP)
