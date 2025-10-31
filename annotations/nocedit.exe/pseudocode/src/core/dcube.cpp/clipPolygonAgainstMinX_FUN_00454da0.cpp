// Name: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
// Address: 00454da0
// Address Range: [[00454da0, 00454eee]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)
// Cross-references:
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 (00456af0) at 00456d3b [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 (00456400) at 0045666a [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00454d90 = 00454e52
//   void* PTR_caseD_3_00454d98 = 00454e37
//   uint g_CubeClipStage3Count
//   CVector3f[16] g_ClipStageMaxXBuffer
//   undefined4 DAT_015c44f8
//   undefined4 DAT_015c44fc
//   undefined4 DAT_015c4500
//   undefined4 DAT_015c450c
//   uint g_CubeClipStage4Count
//   CVector3f[16] g_ClipStageMinXBuffer
//   undefined4 DAT_015c45bc
//   undefined4 DAT_015c45c0
// Function calls:
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage3Count) {
    vertex1 = g_ClipStageMaxXBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage3Count) {
        uVar2 = uVar2 ^ g_CubeClipStage3Count;
      }
      vertex2 = g_ClipStageMaxXBuffer + uVar2;
      bVar1 = vertex1->x < min_x_plane;
      if (vertex2->x < min_x_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinXBuffer + g_CubeClipStage4Count != vertex1) {
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].x = vertex1->x;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].y = vertex1->y;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex2,vertex1,g_ClipStageMinXBuffer + g_CubeClipStage4Count,-1.0,0.0,0.0,
                   (double)min_x_plane);
        break;
      case 2:
        if (g_ClipStageMinXBuffer + g_CubeClipStage4Count != vertex1) {
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].x = vertex1->x;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].y = vertex1->y;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].z = vertex1->z;
        }
        g_CubeClipStage4Count = g_CubeClipStage4Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,vertex2,g_ClipStageMinXBuffer + g_CubeClipStage4Count,-1.0,0.0,0.0,
                   (double)min_x_plane);
        break;
      default:
        goto switchD_00454e12_caseD_3;
      }
      g_CubeClipStage4Count = g_CubeClipStage4Count + 1;
switchD_00454e12_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage3Count);
  }
  return;
}


// Assembly code:
// 00454da0: PUSH EBX
//   Label: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
// 00454da1: PUSH ESI
// 00454da2: PUSH EDI
// 00454da3: PUSH EBP
// 00454da4: MOV EBP,ESP
// 00454da6: SUB ESP,0x8
// 00454da9: AND ESP,0xfffffff8
// 00454dac: MOV EBX,dword ptr [0x015c45b4]
//   XREF to: 015c45b4 (READ)
// 00454db2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00454db5: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00454db8: MOV EDX,dword ptr [0x015c44f0]
//   XREF to: 015c44f0 (READ)
// 00454dbe: XOR EDI,EDI
// 00454dc0: TEST EDX,EDX
// 00454dc2: JLE 0x00454e45
//   XREF to: 00454e45 (CONDITIONAL_JUMP)
// 00454dc8: MOV ESI,0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454dcd: MOV EAX,[0x015c44f0]
//   Label: LAB_00454dcd
//   XREF to: 015c44f0 (READ)
// 00454dd2: LEA ECX,[EDI + 0x1]
// 00454dd5: CMP ECX,EAX
// 00454dd7: JNZ 0x00454ddb
//   XREF to: 00454ddb (CONDITIONAL_JUMP)
// 00454dd9: XOR ECX,EAX
// 00454ddb: IMUL ECX,ECX,0xc
//   Label: LAB_00454ddb
// 00454dde: MOV EAX,0x15c44f4
//   XREF to: 015c44f4 (DATA)
// 00454de3: FLD float ptr [ESI]
//   XREF to: 015c44f4 (READ)
//   XREF to: 015c4500 (READ)
// 00454de5: ADD EAX,ECX
// 00454de7: MOV EDX,ESI
//   XREF to: 015c44f4 (PARAM)
// 00454de9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 015c450c (DATA)
// 00454ded: XOR ECX,ECX
// 00454def: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454df2: FNSTSW AX
// 00454df4: SAHF
// 00454df5: JNC 0x00454dfc
//   XREF to: 00454dfc (CONDITIONAL_JUMP)
// 00454df7: MOV ECX,0x1
// 00454dfc: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00454dfc
//   XREF to: Stack[-0x14] (READ)
// 00454e00: FLD float ptr [EAX]
//   XREF to: 015c44f4 (DATA)
//   XREF to: 015c450c (READ)
// 00454e02: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454e05: FNSTSW AX
// 00454e07: SAHF
// 00454e08: JNC 0x00454e0d
//   XREF to: 00454e0d (CONDITIONAL_JUMP)
// 00454e0a: OR CL,0x2
// 00454e0d: CMP ECX,0x3
//   Label: LAB_00454e0d
// 00454e10: JA 0x00454e37
//   XREF to: 00454e37 (CONDITIONAL_JUMP)
// 00454e12: JMP dword ptr [ECX*0x4 + 0x454d8c]
//   Label: switchD
//   XREF to: 00454e19 (COMPUTED_JUMP)
//   XREF to: 00454e37 (COMPUTED_JUMP)
//   XREF to: 00454e52 (COMPUTED_JUMP)
//   XREF to: 00454e90 (COMPUTED_JUMP)
//   XREF to: 00454d90 (READ)
//   XREF to: 00454d98 (READ)
//   XREF to: 00454e37 (COMPUTED_JUMP)
//   XREF to: 00454e52 (COMPUTED_JUMP)
// 00454e19: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 00454e1c: ADD ECX,0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 00454e22: CMP ECX,EDX
// 00454e24: JZ 0x00454e36
//   XREF to: 00454e36 (CONDITIONAL_JUMP)
// 00454e26: MOV EAX,dword ptr [EDX]
//   XREF to: 015c44f4 (READ)
// 00454e28: MOV dword ptr [ECX],EAX
//   XREF to: 015c45b8 (DATA)
// 00454e2a: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c44f8 (READ)
// 00454e2d: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c45bc (DATA)
// 00454e30: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c44fc (READ)
// 00454e33: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c45c0 (DATA)
// 00454e36: INC EBX
//   Label: LAB_00454e36
// 00454e37: MOV ECX,dword ptr [0x015c44f0]
//   Label: caseD_3
//   XREF to: 015c44f0 (READ)
// 00454e3d: INC EDI
// 00454e3e: ADD ESI,0xc
// 00454e41: CMP EDI,ECX
// 00454e43: JL 0x00454dcd
//   XREF to: 00454dcd (CONDITIONAL_JUMP)
// 00454e45: MOV dword ptr [0x015c45b4],EBX
//   Label: LAB_00454e45
//   XREF to: 015c45b4 (WRITE)
// 00454e4b: MOV ESP,EBP
// 00454e4d: POP EBP
// 00454e4e: POP EDI
// 00454e4f: POP ESI
// 00454e50: POP EBX
// 00454e51: RET
// 00454e52: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 00454e55: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454e58: SUB ESP,0x8
// 00454e5b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454e5e: PUSH 0x0
// 00454e60: PUSH 0x0
// 00454e62: PUSH 0x0
// 00454e64: PUSH 0x0
// 00454e66: PUSH 0xbff00000
// 00454e6b: PUSH 0x0
// 00454e6d: ADD ECX,0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 00454e73: PUSH ECX
// 00454e74: PUSH EDX
//   XREF to: 015c44f4 (DATA)
// 00454e75: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00454e79: PUSH EAX
// 00454e7a: MOV dword ptr [0x015c45b4],EBX
//   XREF to: 015c45b4 (WRITE)
// 00454e80: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454e85: MOV EBX,dword ptr [0x015c45b4]
//   XREF to: 015c45b4 (READ)
// 00454e8b: ADD ESP,0x2c
// 00454e8e: JMP 0x00454e36
//   XREF to: 00454e36 (UNCONDITIONAL_JUMP)
// 00454e90: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 00454e93: ADD ECX,0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 00454e99: CMP ECX,EDX
// 00454e9b: JZ 0x00454ead
//   XREF to: 00454ead (CONDITIONAL_JUMP)
// 00454e9d: MOV EAX,dword ptr [EDX]
//   XREF to: 015c44f4 (READ)
// 00454e9f: MOV dword ptr [ECX],EAX
//   XREF to: 015c45b8 (DATA)
// 00454ea1: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c44f8 (READ)
// 00454ea4: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c45bc (DATA)
// 00454ea7: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c44fc (READ)
// 00454eaa: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c45c0 (DATA)
// 00454ead: INC EBX
//   Label: LAB_00454ead
// 00454eae: IMUL ECX,EBX,0xc
// 00454eb1: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00454eb4: SUB ESP,0x8
// 00454eb7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00454eba: PUSH 0x0
// 00454ebc: PUSH 0x0
// 00454ebe: PUSH 0x0
// 00454ec0: PUSH 0x0
// 00454ec2: PUSH 0xbff00000
// 00454ec7: PUSH 0x0
// 00454ec9: ADD ECX,0x15c45b8
//   XREF to: 015c45b8 (DATA)
// 00454ecf: PUSH ECX
// 00454ed0: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00454ed4: PUSH ECX
// 00454ed5: PUSH EDX
//   XREF to: 015c44f4 (DATA)
// 00454ed6: MOV dword ptr [0x015c45b4],EBX
//   XREF to: 015c45b4 (WRITE)
// 00454edc: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00454ee1: MOV EBX,dword ptr [0x015c45b4]
//   XREF to: 015c45b4 (READ)
// 00454ee7: ADD ESP,0x2c
// 00454eea: JMP 0x00454e36
//   XREF to: 00454e36 (UNCONDITIONAL_JUMP)
