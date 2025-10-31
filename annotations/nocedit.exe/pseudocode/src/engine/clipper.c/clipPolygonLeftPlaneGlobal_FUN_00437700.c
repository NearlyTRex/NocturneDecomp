// Name: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
// Address: 00437700
// Address Range: [[00437700, 00437822]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)
// Globals:
//   void* switchdataD_004376e8 = 00437761
//   void* PTR_caseD_3_004376f4 = 0043778b
//   int g_InputVertexCount
//   int g_OutputVertexCount
//   SRenderVertex[16] g_ClipperOutputBuffer
//   undefined4 DAT_00825d04
//   SRenderVertex[16] g_ClipperInputBuffer
//   undefined4 g_ClipperInputBuffer[0].projected_vertex.transformed_z
//   undefined4 g_ClipperInputBuffer[1].projected_vertex.transformed_x
//   undefined4 DAT_00826334
//   undefined4 DAT_00826338
// Function calls:
//   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00437700(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  byte bVar7;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < g_InputVertexCount) {
    v1 = g_ClipperInputBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_InputVertexCount) {
        uVar2 = uVar2 ^ g_InputVertexCount;
      }
      pSVar4 = g_ClipperInputBuffer + uVar2;
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if (g_ClipperInputBuffer[uVar2].projected_vertex.transformed_z <=
          (pSVar4->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_ClipperOutputBuffer + g_OutputVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -2 + 1);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -2 + 1);
        }
        g_OutputVertexCount = g_OutputVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                  (pSVar4,v1,g_ClipperOutputBuffer + g_OutputVertexCount);
        g_OutputVertexCount = g_OutputVertexCount + 1;
        break;
      case 2:
        pSVar5 = v1;
        pSVar6 = g_ClipperOutputBuffer + g_OutputVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar6->projected_vertex).transformed_x =
               (char)(pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -2 + 1);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar7 * -2 + 1);
        }
        g_OutputVertexCount = g_OutputVertexCount + 1;
        engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                  (v1,pSVar4,g_ClipperOutputBuffer + g_OutputVertexCount);
        g_OutputVertexCount = g_OutputVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_InputVertexCount);
  }
  return;
}


// Assembly code:
// 00437700: PUSH EBX
//   Label: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700
// 00437701: PUSH ESI
// 00437702: PUSH EDI
// 00437703: PUSH EBP
// 00437704: SUB ESP,0x4
// 00437707: XOR EDX,EDX
// 00437709: MOV ECX,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 0043770f: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00437712: TEST ECX,ECX
// 00437714: JLE 0x0043779f
//   XREF to: 0043779f (CONDITIONAL_JUMP)
// 0043771a: MOV EBX,0x826300
//   XREF to: 00826300 (DATA)
// 0043771f: MOV EAX,dword ptr [ESP]
//   Label: LAB_0043771f
//   XREF to: Stack[-0x14] (DATA)
// 00437722: MOV EBP,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00437728: INC EAX
// 00437729: CMP EAX,EBP
// 0043772b: JNZ 0x0043772f
//   XREF to: 0043772f (CONDITIONAL_JUMP)
// 0043772d: XOR EAX,EBP
// 0043772f: IMUL EAX,EAX,0x30
//   Label: LAB_0043772f
// 00437732: MOV EBP,0x826300
//   XREF to: 00826300 (DATA)
// 00437737: MOV EDX,EBX
// 00437739: MOV EDI,dword ptr [EBX]
//   XREF to: 00826300 (READ)
//   XREF to: 00826330 (READ)
// 0043773b: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 00826308 (READ)
//   XREF to: 00826338 (READ)
// 0043773e: ADD EBP,EAX
// 00437740: XOR EAX,EAX
// 00437742: CMP EDI,ECX
// 00437744: JL 0x0043774b
//   XREF to: 0043774b (CONDITIONAL_JUMP)
// 00437746: MOV EAX,0x1
// 0043774b: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_0043774b
//   XREF to: 00826308 (DATA)
// 0043774e: CMP ESI,dword ptr [EBP]
//   XREF to: 00826300 (DATA)
// 00437751: JG 0x00437755
//   XREF to: 00437755 (CONDITIONAL_JUMP)
// 00437753: OR AL,0x2
// 00437755: CMP EAX,0x3
//   Label: LAB_00437755
// 00437758: JA 0x0043778b
//   XREF to: 0043778b (CONDITIONAL_JUMP)
// 0043775a: JMP dword ptr [EAX*0x4 + 0x4376e8]
//   Label: switchD
//   XREF to: 00437761 (COMPUTED_JUMP)
//   XREF to: 004377a7 (COMPUTED_JUMP)
//   XREF to: 004377cd (COMPUTED_JUMP)
//   XREF to: 0043778b (COMPUTED_JUMP)
//   XREF to: 004376f4 (READ)
//   XREF to: 004376e8 (READ)
// 00437761: IMUL EDI,dword ptr [0x00825cf4],0x30
//   Label: caseD_0
//   XREF to: 00825cf4 (READ)
// 00437768: MOV ECX,0x30
// 0043776d: MOV ESI,EDX
// 0043776f: ADD EDI,0x825d00
//   XREF to: 00825d00 (DATA)
// 00437775: PUSH EDI
// 00437776: MOV EAX,ECX
// 00437778: SHR ECX,0x2
// 0043777b: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826330 (READ)
//   XREF to: 00825d00 (DATA)
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (DATA)
// 0043777d: MOV CL,AL
// 0043777f: AND CL,0x3
// 00437782: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (DATA)
// 00437784: POP EDI
// 00437785: INC dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ_WRITE)
// 0043778b: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 0043778e: MOV EDI,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00437794: INC ESI
// 00437795: ADD EBX,0x30
// 00437798: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 0043779b: CMP ESI,EDI
// 0043779d: JL 0x0043771f
//   XREF to: 0043771f (CONDITIONAL_JUMP)
// 0043779f: ADD ESP,0x4
//   Label: LAB_0043779f
// 004377a2: POP EBP
// 004377a3: POP EDI
// 004377a4: POP ESI
// 004377a5: POP EBX
// 004377a6: RET
// 004377a7: IMUL EAX,dword ptr [0x00825cf4],0x30
//   Label: caseD_1
//   XREF to: 00825cf4 (READ)
// 004377ae: ADD EAX,0x825d00
//   XREF to: 00825d00 (DATA)
// 004377b3: PUSH EAX
// 004377b4: PUSH EDX
//   XREF to: 00826330 (DATA)
// 004377b5: PUSH EBP
// 004377b6: CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   XREF to: 00437230 (UNCONDITIONAL_CALL)
// 004377bb: MOV ESI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 004377c1: INC ESI
// 004377c2: ADD ESP,0xc
// 004377c5: MOV dword ptr [0x00825cf4],ESI
//   XREF to: 00825cf4 (WRITE)
// 004377cb: JMP 0x0043778b
//   XREF to: 0043778b (UNCONDITIONAL_JUMP)
// 004377cd: IMUL EDI,dword ptr [0x00825cf4],0x30
//   Label: caseD_2
//   XREF to: 00825cf4 (READ)
// 004377d4: MOV ECX,0x30
// 004377d9: MOV ESI,EDX
// 004377db: ADD EDI,0x825d00
//   XREF to: 00825d00 (DATA)
// 004377e1: PUSH EDI
// 004377e2: MOV EAX,ECX
// 004377e4: SHR ECX,0x2
// 004377e7: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826330 (READ)
//   XREF to: 00825d00 (DATA)
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (DATA)
// 004377e9: MOV CL,AL
// 004377eb: AND CL,0x3
// 004377ee: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (DATA)
// 004377f0: POP EDI
// 004377f1: MOV ECX,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 004377f7: INC ECX
// 004377f8: MOV dword ptr [0x00825cf4],ECX
//   XREF to: 00825cf4 (WRITE)
// 004377fe: IMUL EAX,ECX,0x30
// 00437801: ADD EAX,0x825d00
//   XREF to: 00825d00 (DATA)
// 00437806: PUSH EAX
// 00437807: PUSH EBP
// 00437808: PUSH EDX
//   XREF to: 00826330 (DATA)
// 00437809: CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   XREF to: 00437230 (UNCONDITIONAL_CALL)
// 0043780e: MOV EDI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 00437814: INC EDI
// 00437815: ADD ESP,0xc
// 00437818: MOV dword ptr [0x00825cf4],EDI
//   XREF to: 00825cf4 (WRITE)
// 0043781e: JMP 0x0043778b
//   XREF to: 0043778b (UNCONDITIONAL_JUMP)
