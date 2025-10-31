// Name: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
// Address: 00454970
// Address Range: [[00454970, 00454abc]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)
// Cross-references:
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 (00456af0) at 00456cf5 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 (00456400) at 00456607 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00454964 = 00454a1c
//   void* PTR_caseD_3_0045496c = 00454a01
//   uint g_CubeInputTriangleCount
//   CVector3f[16] g_CubeInputTriangleBuffer
//   undefined4 g_CubeInputTriangleBuffer[0].y
//   undefined4 g_CubeInputTriangleBuffer[0].z
//   undefined4 g_CubeInputTriangleBuffer[1].x
//   undefined4 g_CubeInputTriangleBuffer[1].y
//   undefined4 g_CubeInputTriangleBuffer[2].x
//   undefined4 g_CubeInputTriangleBuffer[2].y
//   uint g_CubeClipStage1Count
//   CVector3f[16] g_ClipStageMaxYBuffer
//   undefined4 g_ClipStageMaxYBuffer[0].y
//   undefined4 DAT_015c4374
// Function calls:
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)g_CubeInputTriangleCount) {
    vertex1 = g_CubeInputTriangleBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeInputTriangleCount) {
        uVar2 = uVar2 ^ g_CubeInputTriangleCount;
      }
      bVar1 = max_y_plane < vertex1->y;
      if (max_y_plane < g_CubeInputTriangleBuffer[uVar2].y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMaxYBuffer + g_CubeClipStage1Count != vertex1) {
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].x = vertex1->x;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].y = vertex1->y;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_CubeInputTriangleBuffer + uVar2,vertex1,
                   g_ClipStageMaxYBuffer + g_CubeClipStage1Count,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      case 2:
        if (g_ClipStageMaxYBuffer + g_CubeClipStage1Count != vertex1) {
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].x = vertex1->x;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].y = vertex1->y;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].z = vertex1->z;
        }
        g_CubeClipStage1Count = g_CubeClipStage1Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_CubeInputTriangleBuffer + uVar2,
                   g_ClipStageMaxYBuffer + g_CubeClipStage1Count,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      default:
        goto switchD_004549dc_caseD_3;
      }
      g_CubeClipStage1Count = g_CubeClipStage1Count + 1;
switchD_004549dc_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeInputTriangleCount);
  }
  return;
}


// Assembly code:
// 00454970: PUSH EBX
//   Label: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
// 00454971: PUSH ESI
// 00454972: PUSH EDI
// 00454973: PUSH EBP
// 00454974: MOV EBP,ESP
// 00454976: SUB ESP,0x4
// 00454979: AND ESP,0xfffffff8
// 0045497c: MOV EBX,dword ptr [0x015c4368]
//   XREF to: 015c4368 (READ)
// 00454982: MOV EDX,dword ptr [0x015c42a4]
//   XREF to: 015c42a4 (READ)
// 00454988: XOR ESI,ESI
// 0045498a: TEST EDX,EDX
// 0045498c: JLE 0x00454a0f
//   XREF to: 00454a0f (CONDITIONAL_JUMP)
// 00454992: MOV EDI,0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 00454997: MOV EAX,[0x015c42a4]
//   Label: LAB_00454997
//   XREF to: 015c42a4 (READ)
// 0045499c: LEA ECX,[ESI + 0x1]
// 0045499f: CMP ECX,EAX
// 004549a1: JNZ 0x004549a5
//   XREF to: 004549a5 (CONDITIONAL_JUMP)
// 004549a3: XOR ECX,EAX
// 004549a5: IMUL ECX,ECX,0xc
//   Label: LAB_004549a5
// 004549a8: MOV EAX,0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 004549ad: FLD float ptr [EDI + 0x4]
//   XREF to: 015c42ac (READ)
//   XREF to: 015c42b8 (READ)
// 004549b0: ADD EAX,ECX
// 004549b2: MOV EDX,EDI
//   XREF to: 015c42a8 (PARAM)
// 004549b4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
//   XREF to: 015c42b4 (DATA)
//   XREF to: 015c42c0 (DATA)
// 004549b7: XOR ECX,ECX
// 004549b9: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004549bc: FNSTSW AX
// 004549be: SAHF
// 004549bf: JBE 0x004549c6
//   XREF to: 004549c6 (CONDITIONAL_JUMP)
// 004549c1: MOV ECX,0x1
// 004549c6: MOV EAX,dword ptr [ESP]
//   Label: LAB_004549c6
//   XREF to: Stack[-0x18] (DATA)
// 004549c9: FLD float ptr [EAX + 0x4]
//   XREF to: 015c42ac (DATA)
//   XREF to: 015c42c4 (READ)
// 004549cc: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004549cf: FNSTSW AX
// 004549d1: SAHF
// 004549d2: JBE 0x004549d7
//   XREF to: 004549d7 (CONDITIONAL_JUMP)
// 004549d4: OR CL,0x2
// 004549d7: CMP ECX,0x3
//   Label: LAB_004549d7
// 004549da: JA 0x00454a01
//   XREF to: 00454a01 (CONDITIONAL_JUMP)
// 004549dc: JMP dword ptr [ECX*0x4 + 0x454960]
//   Label: switchD
//   XREF to: 004549e3 (COMPUTED_JUMP)
//   XREF to: 00454a01 (COMPUTED_JUMP)
//   XREF to: 00454a1c (COMPUTED_JUMP)
//   XREF to: 00454a5c (COMPUTED_JUMP)
//   XREF to: 00454964 (READ)
//   XREF to: 0045496c (READ)
//   XREF to: 00454a01 (COMPUTED_JUMP)
//   XREF to: 00454a1c (COMPUTED_JUMP)
// 004549e3: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 004549e6: ADD ECX,0x15c436c
//   XREF to: 015c436c (DATA)
// 004549ec: CMP ECX,EDX
// 004549ee: JZ 0x00454a00
//   XREF to: 00454a00 (CONDITIONAL_JUMP)
// 004549f0: MOV EAX,dword ptr [EDX]
//   XREF to: 015c42a8 (READ)
// 004549f2: MOV dword ptr [ECX],EAX
//   XREF to: 015c436c (DATA)
// 004549f4: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c42ac (READ)
// 004549f7: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4370 (DATA)
// 004549fa: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c42b0 (READ)
// 004549fd: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4374 (DATA)
// 00454a00: INC EBX
//   Label: LAB_00454a00
// 00454a01: MOV ECX,dword ptr [0x015c42a4]
//   Label: caseD_3
//   XREF to: 015c42a4 (READ)
// 00454a07: INC ESI
// 00454a08: ADD EDI,0xc
// 00454a0b: CMP ESI,ECX
// 00454a0d: JL 0x00454997
//   XREF to: 00454997 (CONDITIONAL_JUMP)
// 00454a0f: MOV dword ptr [0x015c4368],EBX
//   Label: LAB_00454a0f
//   XREF to: 015c4368 (WRITE)
// 00454a15: MOV ESP,EBP
// 00454a17: POP EBP
// 00454a18: POP EDI
// 00454a19: POP ESI
// 00454a1a: POP EBX
// 00454a1b: RET
// 00454a1c: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 00454a1f: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454a22: SUB ESP,0x8
// 00454a25: FCHS
// 00454a27: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454a2a: PUSH 0x0
// 00454a2c: PUSH 0x0
// 00454a2e: PUSH 0x3ff00000
// 00454a33: PUSH 0x0
// 00454a35: PUSH 0x0
// 00454a37: PUSH 0x0
// 00454a39: ADD ECX,0x15c436c
//   XREF to: 015c436c (DATA)
// 00454a3f: PUSH ECX
// 00454a40: PUSH EDX
//   XREF to: 015c42a8 (DATA)
// 00454a41: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00454a45: PUSH EAX
// 00454a46: MOV dword ptr [0x015c4368],EBX
//   XREF to: 015c4368 (WRITE)
// 00454a4c: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454a51: MOV EBX,dword ptr [0x015c4368]
//   XREF to: 015c4368 (READ)
// 00454a57: ADD ESP,0x2c
// 00454a5a: JMP 0x00454a00
//   XREF to: 00454a00 (UNCONDITIONAL_JUMP)
// 00454a5c: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 00454a5f: ADD ECX,0x15c436c
//   XREF to: 015c436c (DATA)
// 00454a65: CMP ECX,EDX
// 00454a67: JZ 0x00454a79
//   XREF to: 00454a79 (CONDITIONAL_JUMP)
// 00454a69: MOV EAX,dword ptr [EDX]
//   XREF to: 015c42a8 (READ)
// 00454a6b: MOV dword ptr [ECX],EAX
//   XREF to: 015c436c (DATA)
// 00454a6d: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c42ac (READ)
// 00454a70: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4370 (DATA)
// 00454a73: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c42b0 (READ)
// 00454a76: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4374 (DATA)
// 00454a79: INC EBX
//   Label: LAB_00454a79
// 00454a7a: IMUL ECX,EBX,0xc
// 00454a7d: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454a80: SUB ESP,0x8
// 00454a83: FCHS
// 00454a85: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454a88: PUSH 0x0
// 00454a8a: PUSH 0x0
// 00454a8c: PUSH 0x3ff00000
// 00454a91: PUSH 0x0
// 00454a93: PUSH 0x0
// 00454a95: PUSH 0x0
// 00454a97: ADD ECX,0x15c436c
//   XREF to: 015c436c (DATA)
// 00454a9d: PUSH ECX
// 00454a9e: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 00454aa2: PUSH ECX
// 00454aa3: PUSH EDX
//   XREF to: 015c42a8 (DATA)
// 00454aa4: MOV dword ptr [0x015c4368],EBX
//   XREF to: 015c4368 (WRITE)
// 00454aaa: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454aaf: MOV EBX,dword ptr [0x015c4368]
//   XREF to: 015c4368 (READ)
// 00454ab5: ADD ESP,0x2c
// 00454ab8: JMP 0x00454a00
//   XREF to: 00454a00 (UNCONDITIONAL_JUMP)
