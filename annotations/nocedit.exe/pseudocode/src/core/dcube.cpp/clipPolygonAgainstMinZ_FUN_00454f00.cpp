// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
// Address: 00454f00
// Address Range: [[00454f00, 00455050]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)
// Cross-references:
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 (00456af0) at 00456d55 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 (00456400) at 0045668c [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00454ef4 = 00454fb4
//   void* PTR_caseD_3_00454efc = 00454f99
//   uint g_CubeClipStage4Count
//   CVector3f[16] g_ClipStageMinXBuffer
//   undefined4 DAT_015c45bc
//   undefined4 DAT_015c45c0
//   undefined4 DAT_015c45cc
//   undefined4 DAT_015c45d0
//   undefined4 DAT_015c45d8
//   uint g_CubeClipStage5Count
//   CVector3f[16] g_ClipStageMinZBuffer
//   undefined4 DAT_015c4680
//   undefined4 g_ClipStageMinZBuffer[0].z
// Function calls:
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage4Count) {
    vertex1 = g_ClipStageMinXBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage4Count) {
        uVar2 = uVar2 ^ g_CubeClipStage4Count;
      }
      bVar1 = vertex1->z < min_z_plane;
      if (g_ClipStageMinXBuffer[uVar2].z < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinZBuffer + g_CubeClipStage5Count != vertex1) {
          g_ClipStageMinZBuffer[g_CubeClipStage5Count].x = vertex1->x;
          g_ClipStageMinZBuffer[g_CubeClipStage5Count].y = vertex1->y;
          g_ClipStageMinZBuffer[g_CubeClipStage5Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_ClipStageMinXBuffer + uVar2,vertex1,
                   g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      case 2:
        if (g_ClipStageMinZBuffer + g_CubeClipStage5Count != vertex1) {
          g_ClipStageMinZBuffer[g_CubeClipStage5Count].x = vertex1->x;
          g_ClipStageMinZBuffer[g_CubeClipStage5Count].y = vertex1->y;
          g_ClipStageMinZBuffer[g_CubeClipStage5Count].z = vertex1->z;
        }
        g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_ClipStageMinXBuffer + uVar2,
                   g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      default:
        goto switchD_00454f74_caseD_3;
      }
      g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
switchD_00454f74_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage4Count);
  }
  return;
}


// Assembly code:
// 00454f00: PUSH EBX
//   Label: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
// 00454f01: PUSH ESI
// 00454f02: PUSH EDI
// 00454f03: PUSH EBP
// 00454f04: MOV EBP,ESP
// 00454f06: SUB ESP,0x8
// 00454f09: AND ESP,0xfffffff8
// 00454f0c: MOV EBX,dword ptr [0x015c4678]
//   XREF to: 015c4678 (READ)
// 00454f12: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454f15: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00454f18: MOV EDX,dword ptr [0x015c45b4]
//   XREF to: 015c45b4 (READ)
// 00454f1e: XOR EDI,EDI
// 00454f20: TEST EDX,EDX
// 00454f22: JLE 0x00454fa7
//   XREF to: 00454fa7 (CONDITIONAL_JUMP)
// 00454f28: MOV ESI,0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 00454f2d: MOV EAX,[0x015c45b4]
//   Label: LAB_00454f2d
//   XREF to: 015c45b4 (READ)
// 00454f32: LEA ECX,[EDI + 0x1]
// 00454f35: CMP ECX,EAX
// 00454f37: JNZ 0x00454f3b
//   XREF to: 00454f3b (CONDITIONAL_JUMP)
// 00454f39: XOR ECX,EAX
// 00454f3b: IMUL ECX,ECX,0xc
//   Label: LAB_00454f3b
// 00454f3e: MOV EAX,0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 00454f43: FLD float ptr [ESI + 0x8]
//   XREF to: 015c45c0 (READ)
//   XREF to: 015c45cc (READ)
// 00454f46: ADD EAX,ECX
// 00454f48: MOV EDX,ESI
//   XREF to: 015c45b8 (PARAM)
// 00454f4a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 015c45d0 (DATA)
// 00454f4e: XOR ECX,ECX
// 00454f50: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454f53: FNSTSW AX
// 00454f55: SAHF
// 00454f56: JNC 0x00454f5d
//   XREF to: 00454f5d (CONDITIONAL_JUMP)
// 00454f58: MOV ECX,0x1
// 00454f5d: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00454f5d
//   XREF to: Stack[-0x14] (READ)
// 00454f61: FLD float ptr [EAX + 0x8]
//   XREF to: 015c45c0 (DATA)
//   XREF to: 015c45d8 (READ)
// 00454f64: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454f67: FNSTSW AX
// 00454f69: SAHF
// 00454f6a: JNC 0x00454f6f
//   XREF to: 00454f6f (CONDITIONAL_JUMP)
// 00454f6c: OR CL,0x2
// 00454f6f: CMP ECX,0x3
//   Label: LAB_00454f6f
// 00454f72: JA 0x00454f99
//   XREF to: 00454f99 (CONDITIONAL_JUMP)
// 00454f74: JMP dword ptr [ECX*0x4 + 0x454ef0]
//   Label: switchD
//   XREF to: 00454f7b (COMPUTED_JUMP)
//   XREF to: 00454f99 (COMPUTED_JUMP)
//   XREF to: 00454fb4 (COMPUTED_JUMP)
//   XREF to: 00454ff2 (COMPUTED_JUMP)
//   XREF to: 00454ef4 (READ)
//   XREF to: 00454efc (READ)
// 00454f7b: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 00454f7e: ADD ECX,0x15c467c
//   XREF to: 015c467c (DATA)
// 00454f84: CMP ECX,EDX
// 00454f86: JZ 0x00454f98
//   XREF to: 00454f98 (CONDITIONAL_JUMP)
// 00454f88: MOV EAX,dword ptr [EDX]
//   XREF to: 015c45b8 (READ)
// 00454f8a: MOV dword ptr [ECX],EAX
//   XREF to: 015c467c (DATA)
// 00454f8c: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c45bc (READ)
// 00454f8f: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4680 (DATA)
// 00454f92: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c45c0 (READ)
// 00454f95: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4684 (DATA)
// 00454f98: INC EBX
//   Label: LAB_00454f98
// 00454f99: MOV ECX,dword ptr [0x015c45b4]
//   Label: caseD_3
//   XREF to: 015c45b4 (READ)
// 00454f9f: INC EDI
// 00454fa0: ADD ESI,0xc
// 00454fa3: CMP EDI,ECX
// 00454fa5: JL 0x00454f2d
//   XREF to: 00454f2d (CONDITIONAL_JUMP)
// 00454fa7: MOV dword ptr [0x015c4678],EBX
//   Label: LAB_00454fa7
//   XREF to: 015c4678 (WRITE)
// 00454fad: MOV ESP,EBP
// 00454faf: POP EBP
// 00454fb0: POP EDI
// 00454fb1: POP ESI
// 00454fb2: POP EBX
// 00454fb3: RET
// 00454fb4: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 00454fb7: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454fba: SUB ESP,0x8
// 00454fbd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454fc0: PUSH 0xbff00000
// 00454fc5: PUSH 0x0
// 00454fc7: PUSH 0x0
// 00454fc9: PUSH 0x0
// 00454fcb: PUSH 0x0
// 00454fcd: PUSH 0x0
// 00454fcf: ADD ECX,0x15c467c
//   XREF to: 015c467c (DATA)
// 00454fd5: PUSH ECX
// 00454fd6: PUSH EDX
//   XREF to: 015c45b8 (DATA)
// 00454fd7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00454fdb: PUSH EAX
// 00454fdc: MOV dword ptr [0x015c4678],EBX
//   XREF to: 015c4678 (WRITE)
// 00454fe2: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454fe7: MOV EBX,dword ptr [0x015c4678]
//   XREF to: 015c4678 (READ)
// 00454fed: ADD ESP,0x2c
// 00454ff0: JMP 0x00454f98
//   XREF to: 00454f98 (UNCONDITIONAL_JUMP)
// 00454ff2: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 00454ff5: ADD ECX,0x15c467c
//   XREF to: 015c467c (DATA)
// 00454ffb: CMP ECX,EDX
// 00454ffd: JZ 0x0045500f
//   XREF to: 0045500f (CONDITIONAL_JUMP)
// 00454fff: MOV EAX,dword ptr [EDX]
//   XREF to: 015c45b8 (READ)
// 00455001: MOV dword ptr [ECX],EAX
//   XREF to: 015c467c (DATA)
// 00455003: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c45bc (READ)
// 00455006: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4680 (DATA)
// 00455009: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c45c0 (READ)
// 0045500c: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4684 (DATA)
// 0045500f: INC EBX
//   Label: LAB_0045500f
// 00455010: IMUL ECX,EBX,0xc
// 00455013: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00455016: SUB ESP,0x8
// 00455019: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0045501c: PUSH 0xbff00000
// 00455021: PUSH 0x0
// 00455023: PUSH 0x0
// 00455025: PUSH 0x0
// 00455027: PUSH 0x0
// 00455029: PUSH 0x0
// 0045502b: ADD ECX,0x15c467c
//   XREF to: 015c467c (DATA)
// 00455031: PUSH ECX
// 00455032: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00455036: PUSH ECX
// 00455037: PUSH EDX
//   XREF to: 015c45b8 (DATA)
// 00455038: MOV dword ptr [0x015c4678],EBX
//   XREF to: 015c4678 (WRITE)
// 0045503e: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00455043: MOV EBX,dword ptr [0x015c4678]
//   XREF to: 015c4678 (READ)
// 00455049: ADD ESP,0x2c
// 0045504c: JMP 0x00454f98
//   XREF to: 00454f98 (UNCONDITIONAL_JUMP)
