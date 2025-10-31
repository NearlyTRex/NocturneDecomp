// Name: core_dcube.cpp_clipTriangleToAABB_FUN_00456400
// Address: 00456400
// Address Range: [[00456400, 004566d0]]
// Convention: __cdecl
// Signature: uint core_dcube.cpp_clipTriangleToAABB_FUN_00456400(CVector3f * * triangle_vertices, CVector3f * aabb_min, CVector3f * aabb_max)
// Cross-references:
//   core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0 (00457ca0) at 00457cc3 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_CubeInputTriangleCount
//   CVector3f[16] g_CubeInputTriangleBuffer
//   undefined4 g_CubeInputTriangleBuffer[0].y
//   undefined4 g_CubeInputTriangleBuffer[0].z
//   undefined4 g_CubeInputTriangleBuffer[1].x
//   undefined4 g_CubeInputTriangleBuffer[1].y
//   undefined4 g_CubeInputTriangleBuffer[1].z
//   undefined4 g_CubeInputTriangleBuffer[2].x
//   undefined4 g_CubeInputTriangleBuffer[2].y
//   undefined4 g_CubeInputTriangleBuffer[2].z
//   uint g_CubeClipStage1Count
//   uint g_CubeClipStage2Count
//   uint g_CubeClipStage3Count
//   uint g_CubeClipStage4Count
//   uint g_CubeClipStage5Count
//   uint g_CubeClippedTriangleCount
//   CVector3f[16] g_CubeClippedTriangleBuffer
//   undefined4 g_CubeClippedTriangleBuffer[0].y
//   undefined4 g_CubeClippedTriangleBuffer[0].z
//   undefined4 g_CubeClippedTriangleBuffer[1].x
//   undefined4 g_CubeClippedTriangleBuffer[1].y
//   undefined4 g_CubeClippedTriangleBuffer[1].z
//   undefined4 g_CubeClippedTriangleBuffer[2].x
//   undefined4 g_CubeClippedTriangleBuffer[2].y
//   undefined4 g_CubeClippedTriangleBuffer[2].z
// Function calls:
//   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
//   core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
//   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
//   core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
//   core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
//   core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00

#include "nocturne.h"

uint __cdecl
core_dcube_cpp_clipTriangleToAABB_FUN_00456400
          (CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

{
  byte bVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  g_CubeInputTriangleCount = 3;
  pCVar2 = *triangle_vertices;
  if (pCVar2 != g_CubeInputTriangleBuffer) {
    g_CubeInputTriangleBuffer[0].x = pCVar2->x;
    g_CubeInputTriangleBuffer[0].z = pCVar2->z;
    g_CubeInputTriangleBuffer[0].y = pCVar2->y;
  }
  pCVar2 = triangle_vertices[1];
  if (pCVar2 != g_CubeInputTriangleBuffer + 1) {
    g_CubeInputTriangleBuffer[1].x = pCVar2->x;
    g_CubeInputTriangleBuffer[1].z = pCVar2->z;
    g_CubeInputTriangleBuffer[1].y = pCVar2->y;
  }
  pCVar2 = triangle_vertices[2];
  if (pCVar2 != g_CubeInputTriangleBuffer + 2) {
    g_CubeInputTriangleBuffer[2].x = pCVar2->x;
    g_CubeInputTriangleBuffer[2].z = pCVar2->z;
    g_CubeInputTriangleBuffer[2].y = pCVar2->y;
  }
  iVar3 = 0;
  uVar4 = 0;
  uVar5 = 0xffffffff;
  pCVar2 = g_CubeInputTriangleBuffer;
  do {
    bVar1 = aabb_max->x < pCVar2->x;
    if (aabb_max->y < pCVar2->y) {
      bVar1 = bVar1 | 2;
    }
    if (aabb_max->z < pCVar2->z) {
      bVar1 = bVar1 | 4;
    }
    if (pCVar2->x < aabb_min->x) {
      bVar1 = bVar1 | 8;
    }
    if (pCVar2->y < aabb_min->y) {
      bVar1 = bVar1 | 0x10;
    }
    if (pCVar2->z < aabb_min->z) {
      bVar1 = bVar1 | 0x20;
    }
    pCVar2 = pCVar2 + 1;
    iVar3 = iVar3 + 1;
    uVar5 = uVar5 & bVar1;
    uVar4 = uVar4 | bVar1;
  } while (iVar3 < 3);
  if (uVar4 == 0) {
    pCVar2 = *triangle_vertices;
    g_CubeClippedTriangleCount = 3;
    if (pCVar2 != g_CubeClippedTriangleBuffer) {
      g_CubeClippedTriangleBuffer[0].x = pCVar2->x;
      g_CubeClippedTriangleBuffer[0].z = pCVar2->z;
      g_CubeClippedTriangleBuffer[0].y = pCVar2->y;
    }
    pCVar2 = triangle_vertices[1];
    if (pCVar2 != g_CubeClippedTriangleBuffer + 1) {
      g_CubeClippedTriangleBuffer[1].x = pCVar2->x;
      g_CubeClippedTriangleBuffer[1].z = pCVar2->z;
      g_CubeClippedTriangleBuffer[1].y = pCVar2->y;
    }
    pCVar2 = triangle_vertices[2];
    if (pCVar2 != g_CubeClippedTriangleBuffer + 2) {
      g_CubeClippedTriangleBuffer[2].x = pCVar2->x;
      g_CubeClippedTriangleBuffer[2].z = pCVar2->z;
      g_CubeClippedTriangleBuffer[2].y = pCVar2->y;
    }
  }
  else {
    if (uVar5 != 0) {
      return 0;
    }
    g_CubeClipStage1Count = uVar5;
    g_CubeClipStage2Count = uVar5;
    g_CubeClipStage3Count = uVar5;
    g_CubeClipStage4Count = uVar5;
    g_CubeClipStage5Count = uVar5;
    g_CubeClippedTriangleCount = uVar5;
    core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970(aabb_max->y);
    if ((int)g_CubeClipStage1Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0(aabb_min->y);
    if ((int)g_CubeClipStage2Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40(aabb_max->x);
    if ((int)g_CubeClipStage3Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(aabb_min->x);
    if ((int)g_CubeClipStage4Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00(aabb_min->z);
    if ((int)g_CubeClipStage5Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070(aabb_max->z);
    if ((int)g_CubeClippedTriangleCount < 3) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 00456400: PUSH EBX
//   Label: core_dcube.cpp_clipTriangleToAABB_FUN_00456400
// 00456401: PUSH ESI
// 00456402: PUSH EDI
// 00456403: PUSH EBP
// 00456404: SUB ESP,0x8
// 00456407: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0045640b: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0045640f: MOV dword ptr [0x015c42a4],0x3
//   XREF to: 015c42a4 (WRITE)
// 00456419: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0045641d: MOV EDX,dword ptr [EDX]
// 0045641f: CMP EDX,0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 00456425: JNZ 0x004565ae
//   XREF to: 004565ae (CONDITIONAL_JUMP)
// 0045642b: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_0045642b
//   XREF to: Stack[0x4] (READ)
// 0045642f: MOV EDX,dword ptr [EDX + 0x4]
// 00456432: CMP EDX,0x15c42b4
//   XREF to: 015c42b4 (DATA)
// 00456438: JZ 0x00456453
//   XREF to: 00456453 (CONDITIONAL_JUMP)
// 0045643a: FLD float ptr [EDX]
// 0045643c: FLD float ptr [EDX + 0x8]
// 0045643f: MOV EAX,dword ptr [EDX + 0x4]
// 00456442: MOV [0x015c42b8],EAX
//   XREF to: 015c42b8 (WRITE)
// 00456447: FSTP float ptr [0x015c42bc]
//   XREF to: 015c42bc (WRITE)
// 0045644d: FSTP float ptr [0x015c42b4]
//   XREF to: 015c42b4 (WRITE)
// 00456453: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_00456453
//   XREF to: Stack[0x4] (READ)
// 00456457: MOV EDX,dword ptr [EDX + 0x8]
// 0045645a: CMP EDX,0x15c42c0
//   XREF to: 015c42c0 (DATA)
// 00456460: JZ 0x0045647b
//   XREF to: 0045647b (CONDITIONAL_JUMP)
// 00456462: FLD float ptr [EDX]
// 00456464: FLD float ptr [EDX + 0x8]
// 00456467: MOV EAX,dword ptr [EDX + 0x4]
// 0045646a: MOV [0x015c42c4],EAX
//   XREF to: 015c42c4 (WRITE)
// 0045646f: FSTP float ptr [0x015c42c8]
//   XREF to: 015c42c8 (WRITE)
// 00456475: FSTP float ptr [0x015c42c0]
//   XREF to: 015c42c0 (WRITE)
// 0045647b: MOV ECX,0xffffffff
//   Label: LAB_0045647b
// 00456480: MOV EAX,[0x015c42a4]
//   XREF to: 015c42a4 (READ)
// 00456485: XOR EBX,EBX
// 00456487: XOR EBP,EBP
// 00456489: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 0045648c: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00456490: TEST EAX,EAX
// 00456492: JLE 0x00456513
//   XREF to: 00456513 (CONDITIONAL_JUMP)
// 00456498: MOV EBX,0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 0045649d: FLD float ptr [EBX]
//   Label: LAB_0045649d
//   XREF to: 015c42a8 (READ)
//   XREF to: 015c42b4 (READ)
// 0045649f: MOV ECX,EBX
// 004564a1: XOR EDX,EDX
// 004564a3: FCOMP float ptr [EDI]
// 004564a5: FNSTSW AX
// 004564a7: SAHF
// 004564a8: JBE 0x004564af
//   XREF to: 004564af (CONDITIONAL_JUMP)
// 004564aa: MOV EDX,0x1
// 004564af: FLD float ptr [ECX + 0x4]
//   Label: LAB_004564af
//   XREF to: 015c42ac (READ)
//   XREF to: 015c42b8 (READ)
// 004564b2: FCOMP float ptr [EDI + 0x4]
// 004564b5: FNSTSW AX
// 004564b7: SAHF
// 004564b8: JBE 0x004564bd
//   XREF to: 004564bd (CONDITIONAL_JUMP)
// 004564ba: OR DL,0x2
// 004564bd: FLD float ptr [ECX + 0x8]
//   Label: LAB_004564bd
//   XREF to: 015c42b0 (READ)
//   XREF to: 015c42bc (READ)
// 004564c0: FCOMP float ptr [EDI + 0x8]
// 004564c3: FNSTSW AX
// 004564c5: SAHF
// 004564c6: JBE 0x004564cb
//   XREF to: 004564cb (CONDITIONAL_JUMP)
// 004564c8: OR DL,0x4
// 004564cb: FLD float ptr [ECX]
//   Label: LAB_004564cb
//   XREF to: 015c42a8 (READ)
//   XREF to: 015c42b4 (READ)
// 004564cd: FCOMP float ptr [ESI]
// 004564cf: FNSTSW AX
// 004564d1: SAHF
// 004564d2: JNC 0x004564d7
//   XREF to: 004564d7 (CONDITIONAL_JUMP)
// 004564d4: OR DL,0x8
// 004564d7: FLD float ptr [ECX + 0x4]
//   Label: LAB_004564d7
//   XREF to: 015c42ac (READ)
// 004564da: FCOMP float ptr [ESI + 0x4]
// 004564dd: FNSTSW AX
// 004564df: SAHF
// 004564e0: JNC 0x004564e5
//   XREF to: 004564e5 (CONDITIONAL_JUMP)
// 004564e2: OR DL,0x10
// 004564e5: FLD float ptr [ECX + 0x8]
//   Label: LAB_004564e5
//   XREF to: 015c42b0 (READ)
// 004564e8: FCOMP float ptr [ESI + 0x8]
// 004564eb: FNSTSW AX
// 004564ed: SAHF
// 004564ee: JNC 0x004564f3
//   XREF to: 004564f3 (CONDITIONAL_JUMP)
// 004564f0: OR DL,0x20
// 004564f3: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_004564f3
//   XREF to: Stack[-0x14] (READ)
// 004564f7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004564fa: ADD EBX,0xc
// 004564fd: INC EBP
// 004564fe: AND ECX,EDX
// 00456500: OR EAX,EDX
// 00456502: MOV EDX,dword ptr [0x015c42a4]
//   XREF to: 015c42a4 (READ)
// 00456508: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0045650c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0045650f: CMP EBP,EDX
// 00456511: JL 0x0045649d
//   XREF to: 0045649d (CONDITIONAL_JUMP)
// 00456513: CMP dword ptr [ESP],0x0
//   Label: LAB_00456513
//   XREF to: Stack[-0x18] (DATA)
// 00456517: JNZ 0x004565cc
//   XREF to: 004565cc (CONDITIONAL_JUMP)
// 0045651d: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00456521: MOV EBP,0x3
// 00456526: MOV EDX,dword ptr [EDX]
// 00456528: MOV dword ptr [0x015c473c],EBP
//   XREF to: 015c473c (WRITE)
// 0045652e: CMP EDX,0x15c4740
//   XREF to: 015c4740 (DATA)
// 00456534: JZ 0x0045654f
//   XREF to: 0045654f (CONDITIONAL_JUMP)
// 00456536: FLD float ptr [EDX]
// 00456538: FLD float ptr [EDX + 0x8]
// 0045653b: MOV EAX,dword ptr [EDX + 0x4]
// 0045653e: MOV [0x015c4744],EAX
//   XREF to: 015c4744 (WRITE)
// 00456543: FSTP float ptr [0x015c4748]
//   XREF to: 015c4748 (WRITE)
// 00456549: FSTP float ptr [0x015c4740]
//   XREF to: 015c4740 (WRITE)
// 0045654f: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_0045654f
//   XREF to: Stack[0x4] (READ)
// 00456553: MOV EDX,dword ptr [EDX + 0x4]
// 00456556: CMP EDX,0x15c474c
//   XREF to: 015c474c (DATA)
// 0045655c: JZ 0x00456577
//   XREF to: 00456577 (CONDITIONAL_JUMP)
// 0045655e: FLD float ptr [EDX]
// 00456560: FLD float ptr [EDX + 0x8]
// 00456563: MOV EAX,dword ptr [EDX + 0x4]
// 00456566: MOV [0x015c4750],EAX
//   XREF to: 015c4750 (WRITE)
// 0045656b: FSTP float ptr [0x015c4754]
//   XREF to: 015c4754 (WRITE)
// 00456571: FSTP float ptr [0x015c474c]
//   XREF to: 015c474c (WRITE)
// 00456577: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_00456577
//   XREF to: Stack[0x4] (READ)
// 0045657b: MOV EDX,dword ptr [EDX + 0x8]
// 0045657e: CMP EDX,0x15c4758
//   XREF to: 015c4758 (DATA)
// 00456584: JZ 0x0045659f
//   XREF to: 0045659f (CONDITIONAL_JUMP)
// 00456586: FLD float ptr [EDX]
// 00456588: FLD float ptr [EDX + 0x8]
// 0045658b: MOV EAX,dword ptr [EDX + 0x4]
// 0045658e: MOV [0x015c475c],EAX
//   XREF to: 015c475c (WRITE)
// 00456593: FSTP float ptr [0x015c4760]
//   XREF to: 015c4760 (WRITE)
// 00456599: FSTP float ptr [0x015c4758]
//   XREF to: 015c4758 (WRITE)
// 0045659f: MOV EDX,0x1
//   Label: LAB_0045659f
// 004565a4: MOV EAX,EDX
// 004565a6: ADD ESP,0x8
// 004565a9: POP EBP
// 004565aa: POP EDI
// 004565ab: POP ESI
// 004565ac: POP EBX
// 004565ad: RET
// 004565ae: FLD float ptr [EDX]
//   Label: LAB_004565ae
// 004565b0: FLD float ptr [EDX + 0x8]
// 004565b3: MOV EAX,dword ptr [EDX + 0x4]
// 004565b6: MOV [0x015c42ac],EAX
//   XREF to: 015c42ac (WRITE)
// 004565bb: FSTP float ptr [0x015c42b0]
//   XREF to: 015c42b0 (WRITE)
// 004565c1: FSTP float ptr [0x015c42a8]
//   XREF to: 015c42a8 (WRITE)
// 004565c7: JMP 0x0045642b
//   XREF to: 0045642b (UNCONDITIONAL_JUMP)
// 004565cc: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_004565cc
//   XREF to: Stack[-0x14] (READ)
// 004565d0: TEST EBX,EBX
// 004565d2: JZ 0x004565e0
//   XREF to: 004565e0 (CONDITIONAL_JUMP)
// 004565d4: XOR EDX,EDX
// 004565d6: MOV EAX,EDX
// 004565d8: ADD ESP,0x8
// 004565db: POP EBP
// 004565dc: POP EDI
// 004565dd: POP ESI
// 004565de: POP EBX
// 004565df: RET
// 004565e0: PUSH dword ptr [EDI + 0x4]
//   Label: LAB_004565e0
// 004565e3: MOV dword ptr [0x015c4368],EBX
//   XREF to: 015c4368 (WRITE)
// 004565e9: MOV dword ptr [0x015c442c],EBX
//   XREF to: 015c442c (WRITE)
// 004565ef: MOV dword ptr [0x015c44f0],EBX
//   XREF to: 015c44f0 (WRITE)
// 004565f5: MOV dword ptr [0x015c45b4],EBX
//   XREF to: 015c45b4 (WRITE)
// 004565fb: MOV dword ptr [0x015c4678],EBX
//   XREF to: 015c4678 (WRITE)
// 00456601: MOV dword ptr [0x015c473c],EBX
//   XREF to: 015c473c (WRITE)
// 00456607: CALL core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
//   XREF to: 00454970 (UNCONDITIONAL_CALL)
// 0045660c: MOV EAX,[0x015c4368]
//   XREF to: 015c4368 (READ)
// 00456611: ADD ESP,0x4
// 00456614: CMP EAX,0x3
// 00456617: JGE 0x00456625
//   XREF to: 00456625 (CONDITIONAL_JUMP)
// 00456619: XOR EDX,EDX
// 0045661b: MOV EAX,EDX
// 0045661d: ADD ESP,0x8
// 00456620: POP EBP
// 00456621: POP EDI
// 00456622: POP ESI
// 00456623: POP EBX
// 00456624: RET
// 00456625: PUSH dword ptr [ESI + 0x4]
//   Label: LAB_00456625
// 00456628: CALL core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
//   XREF to: 00454ad0 (UNCONDITIONAL_CALL)
// 0045662d: MOV EDX,dword ptr [0x015c442c]
//   XREF to: 015c442c (READ)
// 00456633: ADD ESP,0x4
// 00456636: CMP EDX,0x3
// 00456639: JGE 0x00456647
//   XREF to: 00456647 (CONDITIONAL_JUMP)
// 0045663b: XOR EDX,EDX
// 0045663d: MOV EAX,EDX
// 0045663f: ADD ESP,0x8
// 00456642: POP EBP
// 00456643: POP EDI
// 00456644: POP ESI
// 00456645: POP EBX
// 00456646: RET
// 00456647: PUSH dword ptr [EDI]
//   Label: LAB_00456647
// 00456649: CALL core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
//   XREF to: 00454c40 (UNCONDITIONAL_CALL)
// 0045664e: MOV ECX,dword ptr [0x015c44f0]
//   XREF to: 015c44f0 (READ)
// 00456654: ADD ESP,0x4
// 00456657: CMP ECX,0x3
// 0045665a: JGE 0x00456668
//   XREF to: 00456668 (CONDITIONAL_JUMP)
// 0045665c: XOR EDX,EDX
// 0045665e: MOV EAX,EDX
// 00456660: ADD ESP,0x8
// 00456663: POP EBP
// 00456664: POP EDI
// 00456665: POP ESI
// 00456666: POP EBX
// 00456667: RET
// 00456668: PUSH dword ptr [ESI]
//   Label: LAB_00456668
// 0045666a: CALL core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
//   XREF to: 00454da0 (UNCONDITIONAL_CALL)
// 0045666f: MOV EBX,dword ptr [0x015c45b4]
//   XREF to: 015c45b4 (READ)
// 00456675: ADD ESP,0x4
// 00456678: CMP EBX,0x3
// 0045667b: JGE 0x00456689
//   XREF to: 00456689 (CONDITIONAL_JUMP)
// 0045667d: XOR EDX,EDX
// 0045667f: MOV EAX,EDX
// 00456681: ADD ESP,0x8
// 00456684: POP EBP
// 00456685: POP EDI
// 00456686: POP ESI
// 00456687: POP EBX
// 00456688: RET
// 00456689: PUSH dword ptr [ESI + 0x8]
//   Label: LAB_00456689
// 0045668c: CALL core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
//   XREF to: 00454f00 (UNCONDITIONAL_CALL)
// 00456691: MOV ESI,dword ptr [0x015c4678]
//   XREF to: 015c4678 (READ)
// 00456697: ADD ESP,0x4
// 0045669a: CMP ESI,0x3
// 0045669d: JGE 0x004566ab
//   XREF to: 004566ab (CONDITIONAL_JUMP)
// 0045669f: XOR EDX,EDX
// 004566a1: MOV EAX,EDX
// 004566a3: ADD ESP,0x8
// 004566a6: POP EBP
// 004566a7: POP EDI
// 004566a8: POP ESI
// 004566a9: POP EBX
// 004566aa: RET
// 004566ab: PUSH dword ptr [EDI + 0x8]
//   Label: LAB_004566ab
// 004566ae: CALL core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
//   XREF to: 00455070 (UNCONDITIONAL_CALL)
// 004566b3: MOV EDI,dword ptr [0x015c473c]
//   XREF to: 015c473c (READ)
// 004566b9: ADD ESP,0x4
// 004566bc: CMP EDI,0x3
// 004566bf: JGE 0x0045659f
//   XREF to: 0045659f (CONDITIONAL_JUMP)
// 004566c5: XOR EDX,EDX
// 004566c7: MOV EAX,EDX
// 004566c9: ADD ESP,0x8
// 004566cc: POP EBP
// 004566cd: POP EDI
// 004566ce: POP ESI
// 004566cf: POP EBX
// 004566d0: RET
