// Name: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320
// Address: 00450320
// Address Range: [[00450320, 00450434]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 (00471400) at 00471562 [DATA]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 00473995 [DATA]
// Globals:
//   int g_CameraDownscaleIterations
//   int[240] g_CoronaLeftExtent
//   int[240] g_CoronaRightExtent
//   int[240][320] g_CoronaDepthBuffer
//   int[240] g_CoronaLeftIntensity
//   int[240] g_CoronaRightIntensity
//   int g_ClipLeft
//   int g_ClipTop

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  SEdgeData *pSVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations != 1) || ((uVar3 & 1) == 0)) &&
     ((g_CameraDownscaleIterations != 2 || ((uVar3 & 3) == 0)))) {
    iVar8 = (int)uVar3 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    uVar7 = (right_edge->x_current >> 0x10) - g_ClipLeft >>
            ((byte)g_CameraDownscaleIterations & 0x1f);
    uVar9 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft >>
            ((byte)g_CameraDownscaleIterations & 0x1f);
    pSVar5 = (SEdgeData *)scanline_y;
    uVar3 = uVar7;
    if ((int)uVar9 < (int)uVar7) {
      pSVar5 = right_edge;
      uVar3 = uVar9;
      uVar9 = uVar7;
      right_edge = (SEdgeData *)scanline_y;
    }
    if (uVar3 < (uint)g_CoronaLeftExtent[iVar8]) {
      g_CoronaLeftExtent[iVar8] = uVar3;
      g_CoronaLeftIntensity[iVar8] = right_edge->light_current;
    }
    if ((uint)g_CoronaRightExtent[iVar8] < uVar9) {
      g_CoronaRightExtent[iVar8] = uVar9;
      g_CoronaRightIntensity[iVar8] = pSVar5->light_current;
    }
    iVar4 = right_edge->z_current;
    iVar2 = uVar9 - uVar3;
    iVar6 = pSVar5->z_current - iVar4;
    piVar1 = g_CoronaDepthBuffer[iVar8] + uVar3;
    for (; (int)uVar3 < (int)uVar9; uVar3 = uVar3 + 1) {
      iVar8 = iVar4 >> 8;
      iVar4 = iVar4 + iVar6 / (iVar2 + 1);
      *piVar1 = iVar8;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}


// Assembly code:
// 00450320: PUSH EBX
//   Label: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320
// 00450321: PUSH ESI
// 00450322: PUSH EDI
// 00450323: PUSH EBP
// 00450324: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00450328: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045032c: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00450330: SUB ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00450336: MOV EBX,dword ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0045033c: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[0x4] (WRITE)
// 00450340: CMP EBX,0x1
// 00450343: JNZ 0x00450350
//   XREF to: 00450350 (CONDITIONAL_JUMP)
// 00450345: TEST byte ptr [ESP + 0x14],0x1
//   XREF to: Stack[0x4] (READ)
// 0045034a: JNZ 0x00450430
//   XREF to: 00450430 (CONDITIONAL_JUMP)
// 00450350: CMP dword ptr [0x013bc260],0x2
//   Label: LAB_00450350
//   XREF to: 013bc260 (READ)
// 00450357: JNZ 0x00450364
//   XREF to: 00450364 (CONDITIONAL_JUMP)
// 00450359: TEST byte ptr [ESP + 0x14],0x3
//   XREF to: Stack[0x4] (READ)
// 0045035e: JNZ 0x00450430
//   XREF to: 00450430 (CONDITIONAL_JUMP)
// 00450364: MOV EBP,dword ptr [ESP + 0x14]
//   Label: LAB_00450364
//   XREF to: Stack[0x4] (READ)
// 00450368: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0045036e: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00450373: MOV EBX,dword ptr [EDI + 0x8]
// 00450376: MOV ESI,dword ptr [EDX + 0x8]
// 00450379: SAR EBX,0x10
// 0045037c: SAR ESI,0x10
// 0045037f: SAR EBP,CL
// 00450381: SUB EBX,EAX
// 00450383: SUB ESI,EAX
// 00450385: SAR EBX,CL
// 00450387: SAR ESI,CL
// 00450389: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[0x4] (WRITE)
// 0045038d: CMP EBX,ESI
// 0045038f: JLE 0x0045039d
//   XREF to: 0045039d (CONDITIONAL_JUMP)
// 00450391: MOV EAX,EBX
// 00450393: MOV EBX,ESI
// 00450395: MOV ESI,EAX
// 00450397: MOV EAX,EDI
// 00450399: MOV EDI,EDX
// 0045039b: MOV EDX,EAX
// 0045039d: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0045039d
//   XREF to: Stack[0x4] (READ)
// 004503a1: SHL EAX,0x2
// 004503a4: CMP EBX,dword ptr [EAX + 0x1576fa8]
//   XREF to: 01576fa8 (DATA)
// 004503aa: JNC 0x004503bb
//   XREF to: 004503bb (CONDITIONAL_JUMP)
// 004503ac: MOV dword ptr [EAX + 0x1576fa8],EBX
//   XREF to: 01576fa8 (DATA)
// 004503b2: MOV ECX,dword ptr [EDI + 0x10]
// 004503b5: MOV dword ptr [EAX + 0x15c2728],ECX
//   XREF to: 015c2728 (DATA)
// 004503bb: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004503bb
//   XREF to: Stack[0x4] (READ)
// 004503bf: SHL EAX,0x2
// 004503c2: CMP ESI,dword ptr [EAX + 0x1577368]
//   XREF to: 01577368 (DATA)
// 004503c8: JBE 0x004503d9
//   XREF to: 004503d9 (CONDITIONAL_JUMP)
// 004503ca: MOV dword ptr [EAX + 0x1577368],ESI
//   XREF to: 01577368 (DATA)
// 004503d0: MOV ECX,dword ptr [EDX + 0x10]
// 004503d3: MOV dword ptr [EAX + 0x15c2ae8],ECX
//   XREF to: 015c2ae8 (DATA)
// 004503d9: MOV EAX,ESI
//   Label: LAB_004503d9
// 004503db: MOV EDX,dword ptr [EDX + 0x28]
// 004503de: MOV ECX,dword ptr [EDI + 0x28]
// 004503e1: SUB EAX,EBX
// 004503e3: SUB EDX,ECX
// 004503e5: LEA EDI,[EAX + 0x1]
// 004503e8: MOV EAX,EDX
// 004503ea: SAR EDX,0x1f
// 004503ed: IDIV EDI
// 004503ef: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004503f3: MOV EDI,EAX
// 004503f5: LEA EAX,[EDX*0x4 + 0x0]
// 004503fc: ADD EAX,EDX
// 004503fe: MOV EDX,0x1577728
//   XREF to: 01577728 (DATA)
// 00450403: SHL EAX,0x8
// 00450406: ADD EDX,EAX
// 00450408: LEA EAX,[EBX*0x4 + 0x0]
// 0045040f: ADD EAX,EDX
// 00450411: CMP EBX,ESI
// 00450413: JGE 0x00450430
//   XREF to: 00450430 (CONDITIONAL_JUMP)
// 00450415: MOV EDX,ECX
//   Label: LAB_00450415
// 00450417: INC EBX
// 00450418: ADD EAX,0x4
// 0045041b: SAR EDX,0x8
// 0045041e: ADD ECX,EDI
// 00450420: MOV dword ptr [EAX + -0x4],EDX
// 00450423: CMP EBX,ESI
// 00450425: JL 0x00450415
//   XREF to: 00450415 (CONDITIONAL_JUMP)
// 00450427: LEA EAX,[EAX]
// 0045042d: LEA EDX,[EDX]
// 00450430: POP EBP
//   Label: LAB_00450430
// 00450431: POP EDI
// 00450432: POP ESI
// 00450433: POP EBX
// 00450434: RET
