// Name: core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
// Address: 00454ad0
// Address Range: [[00454ad0, 00454c20]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)
// Cross-references:
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 (00456af0) at 00456d0b [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 (00456400) at 00456628 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00454ac4 = 00454b84
//   void* PTR_caseD_3_00454acc = 00454b69
//   uint g_CubeClipStage1Count
//   CVector3f[16] g_ClipStageMaxYBuffer
//   undefined4 g_ClipStageMaxYBuffer[0].y
//   undefined4 DAT_015c4374
//   undefined4 DAT_015c437c
//   undefined4 DAT_015c4384
//   undefined4 DAT_015c4388
//   uint g_CubeClipStage2Count
//   CVector3f[16] g_ClipStageMinYBuffer
//   undefined4 DAT_015c4434
//   undefined4 DAT_015c4438
// Function calls:
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage1Count) {
    vertex1 = g_ClipStageMaxYBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage1Count) {
        uVar2 = uVar2 ^ g_CubeClipStage1Count;
      }
      bVar1 = vertex1->y < min_y_plane;
      if (g_ClipStageMaxYBuffer[uVar2].y < min_y_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinYBuffer + g_CubeClipStage2Count != vertex1) {
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].x = vertex1->x;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].y = vertex1->y;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_ClipStageMaxYBuffer + uVar2,vertex1,
                   g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      case 2:
        if (g_ClipStageMinYBuffer + g_CubeClipStage2Count != vertex1) {
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].x = vertex1->x;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].y = vertex1->y;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].z = vertex1->z;
        }
        g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_ClipStageMaxYBuffer + uVar2,
                   g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      default:
        goto switchD_00454b44_caseD_3;
      }
      g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
switchD_00454b44_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage1Count);
  }
  return;
}


// Assembly code:
// 00454ad0: PUSH EBX
//   Label: core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
// 00454ad1: PUSH ESI
// 00454ad2: PUSH EDI
// 00454ad3: PUSH EBP
// 00454ad4: MOV EBP,ESP
// 00454ad6: SUB ESP,0x8
// 00454ad9: AND ESP,0xfffffff8
// 00454adc: MOV EBX,dword ptr [0x015c442c]
//   XREF to: 015c442c (READ)
// 00454ae2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454ae5: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00454ae8: MOV EDX,dword ptr [0x015c4368]
//   XREF to: 015c4368 (READ)
// 00454aee: XOR EDI,EDI
// 00454af0: TEST EDX,EDX
// 00454af2: JLE 0x00454b77
//   XREF to: 00454b77 (CONDITIONAL_JUMP)
// 00454af8: MOV ESI,0x15c436c
//   XREF to: 015c436c (DATA)
// 00454afd: MOV EAX,[0x015c4368]
//   Label: LAB_00454afd
//   XREF to: 015c4368 (READ)
// 00454b02: LEA ECX,[EDI + 0x1]
// 00454b05: CMP ECX,EAX
// 00454b07: JNZ 0x00454b0b
//   XREF to: 00454b0b (CONDITIONAL_JUMP)
// 00454b09: XOR ECX,EAX
// 00454b0b: IMUL ECX,ECX,0xc
//   Label: LAB_00454b0b
// 00454b0e: MOV EAX,0x15c436c
//   XREF to: 015c436c (DATA)
// 00454b13: FLD float ptr [ESI + 0x4]
//   XREF to: 015c4370 (READ)
//   XREF to: 015c437c (READ)
// 00454b16: ADD EAX,ECX
// 00454b18: MOV EDX,ESI
//   XREF to: 015c436c (PARAM)
// 00454b1a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 015c4384 (DATA)
// 00454b1e: XOR ECX,ECX
// 00454b20: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454b23: FNSTSW AX
// 00454b25: SAHF
// 00454b26: JNC 0x00454b2d
//   XREF to: 00454b2d (CONDITIONAL_JUMP)
// 00454b28: MOV ECX,0x1
// 00454b2d: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00454b2d
//   XREF to: Stack[-0x14] (READ)
// 00454b31: FLD float ptr [EAX + 0x4]
//   XREF to: 015c4370 (DATA)
//   XREF to: 015c4388 (READ)
// 00454b34: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454b37: FNSTSW AX
// 00454b39: SAHF
// 00454b3a: JNC 0x00454b3f
//   XREF to: 00454b3f (CONDITIONAL_JUMP)
// 00454b3c: OR CL,0x2
// 00454b3f: CMP ECX,0x3
//   Label: LAB_00454b3f
// 00454b42: JA 0x00454b69
//   XREF to: 00454b69 (CONDITIONAL_JUMP)
// 00454b44: JMP dword ptr [ECX*0x4 + 0x454ac0]
//   Label: switchD
//   XREF to: 00454b4b (COMPUTED_JUMP)
//   XREF to: 00454b69 (COMPUTED_JUMP)
//   XREF to: 00454b84 (COMPUTED_JUMP)
//   XREF to: 00454bc2 (COMPUTED_JUMP)
//   XREF to: 00454ac4 (READ)
//   XREF to: 00454acc (READ)
//   XREF to: 00454b69 (COMPUTED_JUMP)
//   XREF to: 00454b84 (COMPUTED_JUMP)
// 00454b4b: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 00454b4e: ADD ECX,0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454b54: CMP ECX,EDX
// 00454b56: JZ 0x00454b68
//   XREF to: 00454b68 (CONDITIONAL_JUMP)
// 00454b58: MOV EAX,dword ptr [EDX]
//   XREF to: 015c436c (READ)
// 00454b5a: MOV dword ptr [ECX],EAX
//   XREF to: 015c4430 (DATA)
// 00454b5c: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c4370 (READ)
// 00454b5f: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4434 (DATA)
// 00454b62: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c4374 (READ)
// 00454b65: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4438 (DATA)
// 00454b68: INC EBX
//   Label: LAB_00454b68
// 00454b69: MOV ECX,dword ptr [0x015c4368]
//   Label: caseD_3
//   XREF to: 015c4368 (READ)
// 00454b6f: INC EDI
// 00454b70: ADD ESI,0xc
// 00454b73: CMP EDI,ECX
// 00454b75: JL 0x00454afd
//   XREF to: 00454afd (CONDITIONAL_JUMP)
// 00454b77: MOV dword ptr [0x015c442c],EBX
//   Label: LAB_00454b77
//   XREF to: 015c442c (WRITE)
// 00454b7d: MOV ESP,EBP
// 00454b7f: POP EBP
// 00454b80: POP EDI
// 00454b81: POP ESI
// 00454b82: POP EBX
// 00454b83: RET
// 00454b84: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 00454b87: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454b8a: SUB ESP,0x8
// 00454b8d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454b90: PUSH 0x0
// 00454b92: PUSH 0x0
// 00454b94: PUSH 0xbff00000
// 00454b99: PUSH 0x0
// 00454b9b: PUSH 0x0
// 00454b9d: PUSH 0x0
// 00454b9f: ADD ECX,0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454ba5: PUSH ECX
// 00454ba6: PUSH EDX
//   XREF to: 015c436c (DATA)
// 00454ba7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00454bab: PUSH EAX
// 00454bac: MOV dword ptr [0x015c442c],EBX
//   XREF to: 015c442c (WRITE)
// 00454bb2: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454bb7: MOV EBX,dword ptr [0x015c442c]
//   XREF to: 015c442c (READ)
// 00454bbd: ADD ESP,0x2c
// 00454bc0: JMP 0x00454b68
//   XREF to: 00454b68 (UNCONDITIONAL_JUMP)
// 00454bc2: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 00454bc5: ADD ECX,0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454bcb: CMP ECX,EDX
// 00454bcd: JZ 0x00454bdf
//   XREF to: 00454bdf (CONDITIONAL_JUMP)
// 00454bcf: MOV EAX,dword ptr [EDX]
//   XREF to: 015c436c (READ)
// 00454bd1: MOV dword ptr [ECX],EAX
//   XREF to: 015c4430 (DATA)
// 00454bd3: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c4370 (READ)
// 00454bd6: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4434 (DATA)
// 00454bd9: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c4374 (READ)
// 00454bdc: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4438 (DATA)
// 00454bdf: INC EBX
//   Label: LAB_00454bdf
// 00454be0: IMUL ECX,EBX,0xc
// 00454be3: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454be6: SUB ESP,0x8
// 00454be9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454bec: PUSH 0x0
// 00454bee: PUSH 0x0
// 00454bf0: PUSH 0xbff00000
// 00454bf5: PUSH 0x0
// 00454bf7: PUSH 0x0
// 00454bf9: PUSH 0x0
// 00454bfb: ADD ECX,0x15c4430
//   XREF to: 015c4430 (DATA)
// 00454c01: PUSH ECX
// 00454c02: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00454c06: PUSH ECX
// 00454c07: PUSH EDX
//   XREF to: 015c436c (DATA)
// 00454c08: MOV dword ptr [0x015c442c],EBX
//   XREF to: 015c442c (WRITE)
// 00454c0e: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454c13: MOV EBX,dword ptr [0x015c442c]
//   XREF to: 015c442c (READ)
// 00454c19: ADD ESP,0x2c
// 00454c1c: JMP 0x00454b68
//   XREF to: 00454b68 (UNCONDITIONAL_JUMP)
