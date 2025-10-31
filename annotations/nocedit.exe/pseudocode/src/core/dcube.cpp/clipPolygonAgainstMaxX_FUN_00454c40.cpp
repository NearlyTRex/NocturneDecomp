// Name: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
// Address: 00454c40
// Address Range: [[00454c40, 00454d8a]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)
// Cross-references:
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 (00456af0) at 00456d21 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 (00456400) at 00456649 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00454c28 = 00454cea
//   void* PTR_caseD_3_00454c30 = 00454ccf
//   uint g_CubeClipStage2Count
//   CVector3f[16] g_ClipStageMinYBuffer
//   undefined4 DAT_015c4434
//   undefined4 DAT_015c4438
//   undefined4 DAT_015c443c
//   undefined4 DAT_015c4448
//   uint g_CubeClipStage3Count
//   CVector3f[16] g_ClipStageMaxXBuffer
//   undefined4 DAT_015c44f8
//   undefined4 DAT_015c44fc
// Function calls:
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage2Count) {
    vertex1 = g_ClipStageMinYBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage2Count) {
        uVar2 = uVar2 ^ g_CubeClipStage2Count;
      }
      vertex2 = g_ClipStageMinYBuffer + uVar2;
      bVar1 = max_x_plane < vertex1->x;
      if (max_x_plane < vertex2->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMaxXBuffer + g_CubeClipStage3Count != vertex1) {
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].x = vertex1->x;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].y = vertex1->y;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex2,vertex1,g_ClipStageMaxXBuffer + g_CubeClipStage3Count,1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      case 2:
        if (g_ClipStageMaxXBuffer + g_CubeClipStage3Count != vertex1) {
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].x = vertex1->x;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].y = vertex1->y;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].z = vertex1->z;
        }
        g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,vertex2,g_ClipStageMaxXBuffer + g_CubeClipStage3Count,1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      default:
        goto switchD_00454caa_caseD_3;
      }
      g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
switchD_00454caa_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage2Count);
  }
  return;
}


// Assembly code:
// 00454c40: PUSH EBX
//   Label: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
// 00454c41: PUSH ESI
// 00454c42: PUSH EDI
// 00454c43: PUSH EBP
// 00454c44: MOV EBP,ESP
// 00454c46: SUB ESP,0x4
// 00454c49: AND ESP,0xfffffff8
// 00454c4c: MOV EBX,dword ptr [0x015c44f0]
//   XREF to: 015c44f0 (READ)
// 00454c52: MOV EDX,dword ptr [0x015c442c]
//   XREF to: 015c442c (READ)
// 00454c58: XOR ESI,ESI
// 00454c5a: TEST EDX,EDX
// 00454c5c: JLE 0x00454cdd
//   XREF to: 00454cdd (CONDITIONAL_JUMP)
// 00454c62: MOV EDI,0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454c67: MOV EAX,[0x015c442c]
//   Label: LAB_00454c67
//   XREF to: 015c442c (READ)
// 00454c6c: LEA ECX,[ESI + 0x1]
// 00454c6f: CMP ECX,EAX
// 00454c71: JNZ 0x00454c75
//   XREF to: 00454c75 (CONDITIONAL_JUMP)
// 00454c73: XOR ECX,EAX
// 00454c75: IMUL ECX,ECX,0xc
//   Label: LAB_00454c75
// 00454c78: MOV EAX,0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454c7d: FLD float ptr [EDI]
//   XREF to: 015c4430 (READ)
//   XREF to: 015c443c (READ)
// 00454c7f: ADD EAX,ECX
// 00454c81: MOV EDX,EDI
//   XREF to: 015c4430 (PARAM)
// 00454c83: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
//   XREF to: 015c4448 (DATA)
// 00454c86: XOR ECX,ECX
// 00454c88: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454c8b: FNSTSW AX
// 00454c8d: SAHF
// 00454c8e: JBE 0x00454c95
//   XREF to: 00454c95 (CONDITIONAL_JUMP)
// 00454c90: MOV ECX,0x1
// 00454c95: MOV EAX,dword ptr [ESP]
//   Label: LAB_00454c95
//   XREF to: Stack[-0x18] (DATA)
// 00454c98: FLD float ptr [EAX]
//   XREF to: 015c4430 (DATA)
//   XREF to: 015c4448 (READ)
// 00454c9a: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454c9d: FNSTSW AX
// 00454c9f: SAHF
// 00454ca0: JBE 0x00454ca5
//   XREF to: 00454ca5 (CONDITIONAL_JUMP)
// 00454ca2: OR CL,0x2
// 00454ca5: CMP ECX,0x3
//   Label: LAB_00454ca5
// 00454ca8: JA 0x00454ccf
//   XREF to: 00454ccf (CONDITIONAL_JUMP)
// 00454caa: JMP dword ptr [ECX*0x4 + 0x454c24]
//   Label: switchD
//   XREF to: 00454cb1 (COMPUTED_JUMP)
//   XREF to: 00454ccf (COMPUTED_JUMP)
//   XREF to: 00454cea (COMPUTED_JUMP)
//   XREF to: 00454d2a (COMPUTED_JUMP)
//   XREF to: 00454c28 (READ)
//   XREF to: 00454c30 (READ)
//   XREF to: 00454ccf (COMPUTED_JUMP)
//   XREF to: 00454cea (COMPUTED_JUMP)
// 00454cb1: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 00454cb4: ADD ECX,0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454cba: CMP ECX,EDX
// 00454cbc: JZ 0x00454cce
//   XREF to: 00454cce (CONDITIONAL_JUMP)
// 00454cbe: MOV EAX,dword ptr [EDX]
//   XREF to: 015c4430 (READ)
// 00454cc0: MOV dword ptr [ECX],EAX
//   XREF to: 015c44f4 (DATA)
// 00454cc2: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c4434 (READ)
// 00454cc5: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c44f8 (DATA)
// 00454cc8: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c4438 (READ)
// 00454ccb: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c44fc (DATA)
// 00454cce: INC EBX
//   Label: LAB_00454cce
// 00454ccf: MOV ECX,dword ptr [0x015c442c]
//   Label: caseD_3
//   XREF to: 015c442c (READ)
// 00454cd5: INC ESI
// 00454cd6: ADD EDI,0xc
// 00454cd9: CMP ESI,ECX
// 00454cdb: JL 0x00454c67
//   XREF to: 00454c67 (CONDITIONAL_JUMP)
// 00454cdd: MOV dword ptr [0x015c44f0],EBX
//   Label: LAB_00454cdd
//   XREF to: 015c44f0 (WRITE)
// 00454ce3: MOV ESP,EBP
// 00454ce5: POP EBP
// 00454ce6: POP EDI
// 00454ce7: POP ESI
// 00454ce8: POP EBX
// 00454ce9: RET
// 00454cea: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 00454ced: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454cf0: SUB ESP,0x8
// 00454cf3: FCHS
// 00454cf5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454cf8: PUSH 0x0
// 00454cfa: PUSH 0x0
// 00454cfc: PUSH 0x0
// 00454cfe: PUSH 0x0
// 00454d00: PUSH 0x3ff00000
// 00454d05: PUSH 0x0
// 00454d07: ADD ECX,0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454d0d: PUSH ECX
// 00454d0e: PUSH EDX
//   XREF to: 015c4430 (DATA)
// 00454d0f: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00454d13: PUSH EAX
// 00454d14: MOV dword ptr [0x015c44f0],EBX
//   XREF to: 015c44f0 (WRITE)
// 00454d1a: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454d1f: MOV EBX,dword ptr [0x015c44f0]
//   XREF to: 015c44f0 (READ)
// 00454d25: ADD ESP,0x2c
// 00454d28: JMP 0x00454cce
//   XREF to: 00454cce (UNCONDITIONAL_JUMP)
// 00454d2a: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 00454d2d: ADD ECX,0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454d33: CMP ECX,EDX
// 00454d35: JZ 0x00454d47
//   XREF to: 00454d47 (CONDITIONAL_JUMP)
// 00454d37: MOV EAX,dword ptr [EDX]
//   XREF to: 015c4430 (READ)
// 00454d39: MOV dword ptr [ECX],EAX
//   XREF to: 015c44f4 (DATA)
// 00454d3b: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c4434 (READ)
// 00454d3e: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c44f8 (DATA)
// 00454d41: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c4438 (READ)
// 00454d44: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c44fc (DATA)
// 00454d47: INC EBX
//   Label: LAB_00454d47
// 00454d48: IMUL ECX,EBX,0xc
// 00454d4b: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454d4e: SUB ESP,0x8
// 00454d51: FCHS
// 00454d53: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454d56: PUSH 0x0
// 00454d58: PUSH 0x0
// 00454d5a: PUSH 0x0
// 00454d5c: PUSH 0x0
// 00454d5e: PUSH 0x3ff00000
// 00454d63: PUSH 0x0
// 00454d65: ADD ECX,0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454d6b: PUSH ECX
// 00454d6c: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 00454d70: PUSH ECX
// 00454d71: PUSH EDX
//   XREF to: 015c4430 (DATA)
// 00454d72: MOV dword ptr [0x015c44f0],EBX
//   XREF to: 015c44f0 (WRITE)
// 00454d78: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454d7d: MOV EBX,dword ptr [0x015c44f0]
//   XREF to: 015c44f0 (READ)
// 00454d83: ADD ESP,0x2c
// 00454d86: JMP 0x00454cce
//   XREF to: 00454cce (UNCONDITIONAL_JUMP)
