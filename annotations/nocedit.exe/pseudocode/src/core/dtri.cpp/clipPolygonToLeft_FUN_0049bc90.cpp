// Name: core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90
// Address: 0049bc90
// Address Range: [[0049bc90, 0049bdde]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90(float x_min)
// Globals:
//   void* PTR_caseD_1_0049bc80 = 0049bd42
//   void* PTR_caseD_3_0049bc88 = 0049bd27
//   int g_ClipBuffer3VertexCount
//   CVector3f[16] g_ClipBuffer3Vertices
//   undefined4 g_ClipBuffer3Vertices[0].y
//   undefined4 g_ClipBuffer3Vertices[0].z
//   undefined4 DAT_02cee828
//   undefined4 DAT_02cee834
//   int g_ClipBuffer4VertexCount
//   CVector3f[16] g_ClipBuffer4Vertices
//   undefined4 g_ClipBuffer4Vertices[0].y
//   undefined4 g_ClipBuffer4Vertices[0].z
// Function calls:
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0049bc90(float x_min)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_ClipBuffer3VertexCount) {
    point1_ptr = g_ClipBuffer3Vertices;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_ClipBuffer3VertexCount) {
        uVar2 = uVar2 ^ g_ClipBuffer3VertexCount;
      }
      point2_ptr = g_ClipBuffer3Vertices + uVar2;
      bVar1 = point1_ptr->x < x_min;
      if (point2_ptr->x < x_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != point1_ptr) {
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = point1_ptr->x;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].y = point1_ptr->y;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point2_ptr,point1_ptr,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                   0.0,(double)x_min);
        break;
      case 2:
        if (g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount != point1_ptr) {
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].x = point1_ptr->x;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].y = point1_ptr->y;
          g_ClipBuffer4Vertices[g_ClipBuffer4VertexCount].z = point1_ptr->z;
        }
        g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
                  (point1_ptr,point2_ptr,g_ClipBuffer4Vertices + g_ClipBuffer4VertexCount,-1.0,0.0,
                   0.0,(double)x_min);
        break;
      default:
        goto switchD_0049bd02_caseD_3;
      }
      g_ClipBuffer4VertexCount = g_ClipBuffer4VertexCount + 1;
switchD_0049bd02_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_ClipBuffer3VertexCount);
  }
  return;
}


// Assembly code:
// 0049bc90: PUSH EBX
//   Label: core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90
// 0049bc91: PUSH ESI
// 0049bc92: PUSH EDI
// 0049bc93: PUSH EBP
// 0049bc94: MOV EBP,ESP
// 0049bc96: SUB ESP,0x8
// 0049bc99: AND ESP,0xfffffff8
// 0049bc9c: MOV EBX,dword ptr [0x02cee8dc]
//   XREF to: 02cee8dc (READ)
// 0049bca2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049bca5: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0049bca8: MOV EDX,dword ptr [0x02cee818]
//   XREF to: 02cee818 (READ)
// 0049bcae: XOR EDI,EDI
// 0049bcb0: TEST EDX,EDX
// 0049bcb2: JLE 0x0049bd35
//   XREF to: 0049bd35 (CONDITIONAL_JUMP)
// 0049bcb8: MOV ESI,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049bcbd: MOV EAX,[0x02cee818]
//   Label: LAB_0049bcbd
//   XREF to: 02cee818 (READ)
// 0049bcc2: LEA ECX,[EDI + 0x1]
// 0049bcc5: CMP ECX,EAX
// 0049bcc7: JNZ 0x0049bccb
//   XREF to: 0049bccb (CONDITIONAL_JUMP)
// 0049bcc9: XOR ECX,EAX
// 0049bccb: IMUL ECX,ECX,0xc
//   Label: LAB_0049bccb
// 0049bcce: MOV EAX,0x2cee81c
//   XREF to: 02cee81c (DATA)
// 0049bcd3: FLD float ptr [ESI]
//   XREF to: 02cee81c (READ)
//   XREF to: 02cee828 (READ)
// 0049bcd5: ADD EAX,ECX
// 0049bcd7: MOV EDX,ESI
//   XREF to: 02cee81c (PARAM)
// 0049bcd9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: 02cee834 (DATA)
//   XREF to: Stack[-0x14] (WRITE)
// 0049bcdd: XOR ECX,ECX
// 0049bcdf: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bce2: FNSTSW AX
// 0049bce4: SAHF
// 0049bce5: JNC 0x0049bcec
//   XREF to: 0049bcec (CONDITIONAL_JUMP)
// 0049bce7: MOV ECX,0x1
// 0049bcec: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0049bcec
//   XREF to: Stack[-0x14] (READ)
// 0049bcf0: FLD float ptr [EAX]
//   XREF to: 02cee81c (DATA)
//   XREF to: 02cee834 (READ)
// 0049bcf2: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bcf5: FNSTSW AX
// 0049bcf7: SAHF
// 0049bcf8: JNC 0x0049bcfd
//   XREF to: 0049bcfd (CONDITIONAL_JUMP)
// 0049bcfa: OR CL,0x2
// 0049bcfd: CMP ECX,0x3
//   Label: LAB_0049bcfd
// 0049bd00: JA 0x0049bd27
//   XREF to: 0049bd27 (CONDITIONAL_JUMP)
// 0049bd02: JMP dword ptr [ECX*0x4 + 0x49bc7c]
//   Label: switchD
//   XREF to: 0049bd09 (COMPUTED_JUMP)
//   XREF to: 0049bd42 (COMPUTED_JUMP)
//   XREF to: 0049bd80 (COMPUTED_JUMP)
//   XREF to: 0049bd27 (COMPUTED_JUMP)
//   XREF to: 0049bc88 (READ)
//   XREF to: 0049bc80 (READ)
// 0049bd09: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 0049bd0c: ADD ECX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049bd12: CMP ECX,EDX
// 0049bd14: JZ 0x0049bd26
//   XREF to: 0049bd26 (CONDITIONAL_JUMP)
// 0049bd16: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee81c (READ)
// 0049bd18: MOV dword ptr [ECX],EAX
//   XREF to: 02cee8e0 (DATA)
// 0049bd1a: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee820 (READ)
// 0049bd1d: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee8e4 (DATA)
// 0049bd20: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee824 (READ)
// 0049bd23: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee8e8 (DATA)
// 0049bd26: INC EBX
//   Label: LAB_0049bd26
// 0049bd27: MOV ECX,dword ptr [0x02cee818]
//   Label: caseD_3
//   XREF to: 02cee818 (READ)
// 0049bd2d: INC EDI
// 0049bd2e: ADD ESI,0xc
// 0049bd31: CMP EDI,ECX
// 0049bd33: JL 0x0049bcbd
//   XREF to: 0049bcbd (CONDITIONAL_JUMP)
// 0049bd35: MOV dword ptr [0x02cee8dc],EBX
//   Label: LAB_0049bd35
//   XREF to: 02cee8dc (WRITE)
// 0049bd3b: MOV ESP,EBP
// 0049bd3d: POP EBP
// 0049bd3e: POP EDI
// 0049bd3f: POP ESI
// 0049bd40: POP EBX
// 0049bd41: RET
// 0049bd42: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 0049bd45: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bd48: SUB ESP,0x8
// 0049bd4b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049bd4e: PUSH 0x0
// 0049bd50: PUSH 0x0
// 0049bd52: PUSH 0x0
// 0049bd54: PUSH 0x0
// 0049bd56: PUSH 0xbff00000
// 0049bd5b: PUSH 0x0
// 0049bd5d: ADD ECX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049bd63: PUSH ECX
// 0049bd64: PUSH EDX
//   XREF to: 02cee81c (DATA)
// 0049bd65: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0049bd69: PUSH EAX
// 0049bd6a: MOV dword ptr [0x02cee8dc],EBX
//   XREF to: 02cee8dc (WRITE)
// 0049bd70: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bd75: MOV EBX,dword ptr [0x02cee8dc]
//   XREF to: 02cee8dc (READ)
// 0049bd7b: ADD ESP,0x2c
// 0049bd7e: JMP 0x0049bd26
//   XREF to: 0049bd26 (UNCONDITIONAL_JUMP)
// 0049bd80: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 0049bd83: ADD ECX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049bd89: CMP ECX,EDX
// 0049bd8b: JZ 0x0049bd9d
//   XREF to: 0049bd9d (CONDITIONAL_JUMP)
// 0049bd8d: MOV EAX,dword ptr [EDX]
//   XREF to: 02cee81c (READ)
// 0049bd8f: MOV dword ptr [ECX],EAX
//   XREF to: 02cee8e0 (DATA)
// 0049bd91: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 02cee820 (READ)
// 0049bd94: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02cee8e4 (DATA)
// 0049bd97: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 02cee824 (READ)
// 0049bd9a: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02cee8e8 (DATA)
// 0049bd9d: INC EBX
//   Label: LAB_0049bd9d
// 0049bd9e: IMUL ECX,EBX,0xc
// 0049bda1: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049bda4: SUB ESP,0x8
// 0049bda7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049bdaa: PUSH 0x0
// 0049bdac: PUSH 0x0
// 0049bdae: PUSH 0x0
// 0049bdb0: PUSH 0x0
// 0049bdb2: PUSH 0xbff00000
// 0049bdb7: PUSH 0x0
// 0049bdb9: ADD ECX,0x2cee8e0
//   XREF to: 02cee8e0 (DATA)
// 0049bdbf: PUSH ECX
// 0049bdc0: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0049bdc4: PUSH ECX
// 0049bdc5: PUSH EDX
//   XREF to: 02cee81c (DATA)
// 0049bdc6: MOV dword ptr [0x02cee8dc],EBX
//   XREF to: 02cee8dc (WRITE)
// 0049bdcc: CALL core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
//   XREF to: 0049b6c0 (UNCONDITIONAL_CALL)
// 0049bdd1: MOV EBX,dword ptr [0x02cee8dc]
//   XREF to: 02cee8dc (READ)
// 0049bdd7: ADD ESP,0x2c
// 0049bdda: JMP 0x0049bd26
//   XREF to: 0049bd26 (UNCONDITIONAL_JUMP)
