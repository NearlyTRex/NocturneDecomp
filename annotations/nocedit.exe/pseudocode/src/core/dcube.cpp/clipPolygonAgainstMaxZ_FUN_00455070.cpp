// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
// Address: 00455070
// Address Range: [[00455070, 004551c0]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)
// Cross-references:
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 (00456af0) at 00456d6e [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 (00456400) at 004566ae [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00455058 = 00455124
//   void* PTR_caseD_3_00455060 = 00455109
//   uint g_CubeClipStage5Count
//   CVector3f[16] g_ClipStageMinZBuffer
//   undefined4 DAT_015c4680
//   undefined4 g_ClipStageMinZBuffer[0].z
//   undefined4 DAT_015c4690
//   undefined4 DAT_015c4694
//   undefined4 DAT_015c469c
//   uint g_CubeClippedTriangleCount
//   CVector3f[16] g_CubeClippedTriangleBuffer
//   undefined4 g_CubeClippedTriangleBuffer[0].y
//   undefined4 g_CubeClippedTriangleBuffer[0].z
// Function calls:
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage5Count) {
    vertex1 = g_ClipStageMinZBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage5Count) {
        uVar2 = uVar2 ^ g_CubeClipStage5Count;
      }
      bVar1 = max_z_plane < vertex1->z;
      if (max_z_plane < g_ClipStageMinZBuffer[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount != vertex1) {
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].x = vertex1->x;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].y = vertex1->y;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_ClipStageMinZBuffer + uVar2,vertex1,
                   g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount,0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        if (g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount != vertex1) {
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].x = vertex1->x;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].y = vertex1->y;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].z = vertex1->z;
        }
        g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_ClipStageMinZBuffer + uVar2,
                   g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount,0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_004550e4_caseD_3;
      }
      g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
switchD_004550e4_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage5Count);
  }
  return;
}


// Assembly code:
// 00455070: PUSH EBX
//   Label: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
// 00455071: PUSH ESI
// 00455072: PUSH EDI
// 00455073: PUSH EBP
// 00455074: MOV EBP,ESP
// 00455076: SUB ESP,0x8
// 00455079: AND ESP,0xfffffff8
// 0045507c: MOV EBX,dword ptr [0x015c473c]
//   XREF to: 015c473c (READ)
// 00455082: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00455085: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00455088: MOV EDX,dword ptr [0x015c4678]
//   XREF to: 015c4678 (READ)
// 0045508e: XOR EDI,EDI
// 00455090: TEST EDX,EDX
// 00455092: JLE 0x00455117
//   XREF to: 00455117 (CONDITIONAL_JUMP)
// 00455098: MOV ESI,0x15c467c
//   XREF to: 015c467c (DATA)
// 0045509d: MOV EAX,[0x015c4678]
//   Label: LAB_0045509d
//   XREF to: 015c4678 (READ)
// 004550a2: LEA ECX,[EDI + 0x1]
// 004550a5: CMP ECX,EAX
// 004550a7: JNZ 0x004550ab
//   XREF to: 004550ab (CONDITIONAL_JUMP)
// 004550a9: XOR ECX,EAX
// 004550ab: IMUL ECX,ECX,0xc
//   Label: LAB_004550ab
// 004550ae: MOV EAX,0x15c467c
//   XREF to: 015c467c (DATA)
// 004550b3: FLD float ptr [ESI + 0x8]
//   XREF to: 015c4684 (READ)
//   XREF to: 015c4690 (READ)
// 004550b6: ADD EAX,ECX
// 004550b8: MOV EDX,ESI
//   XREF to: 015c467c (PARAM)
// 004550ba: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 015c4694 (DATA)
// 004550be: XOR ECX,ECX
// 004550c0: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004550c3: FNSTSW AX
// 004550c5: SAHF
// 004550c6: JBE 0x004550cd
//   XREF to: 004550cd (CONDITIONAL_JUMP)
// 004550c8: MOV ECX,0x1
// 004550cd: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004550cd
//   XREF to: Stack[-0x14] (READ)
// 004550d1: FLD float ptr [EAX + 0x8]
//   XREF to: 015c4684 (DATA)
//   XREF to: 015c469c (READ)
// 004550d4: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004550d7: FNSTSW AX
// 004550d9: SAHF
// 004550da: JBE 0x004550df
//   XREF to: 004550df (CONDITIONAL_JUMP)
// 004550dc: OR CL,0x2
// 004550df: CMP ECX,0x3
//   Label: LAB_004550df
// 004550e2: JA 0x00455109
//   XREF to: 00455109 (CONDITIONAL_JUMP)
// 004550e4: JMP dword ptr [ECX*0x4 + 0x455054]
//   Label: switchD
//   XREF to: 004550eb (COMPUTED_JUMP)
//   XREF to: 00455109 (COMPUTED_JUMP)
//   XREF to: 00455124 (COMPUTED_JUMP)
//   XREF to: 00455162 (COMPUTED_JUMP)
//   XREF to: 00455058 (READ)
//   XREF to: 00455060 (READ)
//   XREF to: 00455109 (COMPUTED_JUMP)
//   XREF to: 00455124 (COMPUTED_JUMP)
// 004550eb: IMUL ECX,EBX,0xc
//   Label: caseD_0
// 004550ee: ADD ECX,0x15c4740
//   XREF to: 015c4740 (DATA)
// 004550f4: CMP ECX,EDX
// 004550f6: JZ 0x00455108
//   XREF to: 00455108 (CONDITIONAL_JUMP)
// 004550f8: MOV EAX,dword ptr [EDX]
//   XREF to: 015c467c (READ)
// 004550fa: MOV dword ptr [ECX],EAX
//   XREF to: 015c4740 (DATA)
// 004550fc: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c4680 (READ)
// 004550ff: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4744 (DATA)
// 00455102: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c4684 (READ)
// 00455105: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4748 (DATA)
// 00455108: INC EBX
//   Label: LAB_00455108
// 00455109: MOV ECX,dword ptr [0x015c4678]
//   Label: caseD_3
//   XREF to: 015c4678 (READ)
// 0045510f: INC EDI
// 00455110: ADD ESI,0xc
// 00455113: CMP EDI,ECX
// 00455115: JL 0x0045509d
//   XREF to: 0045509d (CONDITIONAL_JUMP)
// 00455117: MOV dword ptr [0x015c473c],EBX
//   Label: LAB_00455117
//   XREF to: 015c473c (WRITE)
// 0045511d: MOV ESP,EBP
// 0045511f: POP EBP
// 00455120: POP EDI
// 00455121: POP ESI
// 00455122: POP EBX
// 00455123: RET
// 00455124: IMUL ECX,EBX,0xc
//   Label: caseD_1
// 00455127: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0045512a: SUB ESP,0x8
// 0045512d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00455130: PUSH 0xbff00000
// 00455135: PUSH 0x0
// 00455137: PUSH 0x0
// 00455139: PUSH 0x0
// 0045513b: PUSH 0x0
// 0045513d: PUSH 0x0
// 0045513f: ADD ECX,0x15c4740
//   XREF to: 015c4740 (DATA)
// 00455145: PUSH ECX
// 00455146: PUSH EDX
//   XREF to: 015c467c (DATA)
// 00455147: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0045514b: PUSH EAX
// 0045514c: MOV dword ptr [0x015c473c],EBX
//   XREF to: 015c473c (WRITE)
// 00455152: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 00455157: MOV EBX,dword ptr [0x015c473c]
//   XREF to: 015c473c (READ)
// 0045515d: ADD ESP,0x2c
// 00455160: JMP 0x00455108
//   XREF to: 00455108 (UNCONDITIONAL_JUMP)
// 00455162: IMUL ECX,EBX,0xc
//   Label: caseD_2
// 00455165: ADD ECX,0x15c4740
//   XREF to: 015c4740 (DATA)
// 0045516b: CMP ECX,EDX
// 0045516d: JZ 0x0045517f
//   XREF to: 0045517f (CONDITIONAL_JUMP)
// 0045516f: MOV EAX,dword ptr [EDX]
//   XREF to: 015c467c (READ)
// 00455171: MOV dword ptr [ECX],EAX
//   XREF to: 015c4740 (DATA)
// 00455173: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 015c4680 (READ)
// 00455176: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 015c4744 (DATA)
// 00455179: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 015c4684 (READ)
// 0045517c: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 015c4748 (DATA)
// 0045517f: INC EBX
//   Label: LAB_0045517f
// 00455180: IMUL ECX,EBX,0xc
// 00455183: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00455186: SUB ESP,0x8
// 00455189: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0045518c: PUSH 0xbff00000
// 00455191: PUSH 0x0
// 00455193: PUSH 0x0
// 00455195: PUSH 0x0
// 00455197: PUSH 0x0
// 00455199: PUSH 0x0
// 0045519b: ADD ECX,0x15c4740
//   XREF to: 015c4740 (DATA)
// 004551a1: PUSH ECX
// 004551a2: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 004551a6: PUSH ECX
// 004551a7: PUSH EDX
//   XREF to: 015c467c (DATA)
// 004551a8: MOV dword ptr [0x015c473c],EBX
//   XREF to: 015c473c (WRITE)
// 004551ae: CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
//   XREF to: 004547d0 (UNCONDITIONAL_CALL)
// 004551b3: MOV EBX,dword ptr [0x015c473c]
//   XREF to: 015c473c (READ)
// 004551b9: ADD ESP,0x2c
// 004551bc: JMP 0x00455108
//   XREF to: 00455108 (UNCONDITIONAL_JUMP)
