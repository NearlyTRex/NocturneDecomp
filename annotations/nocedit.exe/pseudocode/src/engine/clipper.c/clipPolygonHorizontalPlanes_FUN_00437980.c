// Name: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
// Address: 00437980
// Address Range: [[00437980, 00437aa7]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980(void)
// Globals:
//   void* switchdataD_00437970 = 004379e2
//   void* PTR_caseD_3_0043797c = 00437a0c
//   int g_TempVertexCount
//   int g_IntermediateVertexCount
//   SRenderVertex[16] g_ClipperWorkingBuffer
//   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
//   undefined4 DAT_00826908
//   undefined4 g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
//   undefined4 DAT_00826934
//   undefined4 DAT_00826938
//   SRenderVertex[16] g_ClipperIntermediateBuffer
//   undefined4 DAT_00826f04
// Function calls:
//   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < g_TempVertexCount) {
    v1 = g_ClipperWorkingBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_TempVertexCount) {
        uVar2 = uVar2 ^ g_TempVertexCount;
      }
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if (g_ClipperWorkingBuffer[uVar2].projected_vertex.transformed_z <=
          g_ClipperWorkingBuffer[uVar2].projected_vertex.transformed_y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
        }
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                  (g_ClipperWorkingBuffer + uVar2,v1,
                   g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)&(pSVar5->projected_vertex).transformed_x =
               (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
        }
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                  (v1,g_ClipperWorkingBuffer + uVar2,
                   g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
        g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_TempVertexCount);
  }
  return;
}


// Assembly code:
// 00437980: PUSH EBX
//   Label: engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980
// 00437981: PUSH ESI
// 00437982: PUSH EDI
// 00437983: PUSH EBP
// 00437984: SUB ESP,0x4
// 00437987: XOR EDX,EDX
// 00437989: MOV ECX,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 0043798f: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00437992: TEST ECX,ECX
// 00437994: JLE 0x00437a24
//   XREF to: 00437a24 (CONDITIONAL_JUMP)
// 0043799a: MOV EBX,0x826900
//   XREF to: 00826900 (DATA)
// 0043799f: MOV EAX,dword ptr [ESP]
//   Label: LAB_0043799f
//   XREF to: Stack[-0x14] (DATA)
// 004379a2: MOV EBP,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 004379a8: INC EAX
// 004379a9: CMP EAX,EBP
// 004379ab: JNZ 0x004379af
//   XREF to: 004379af (CONDITIONAL_JUMP)
// 004379ad: XOR EAX,EBP
// 004379af: IMUL EAX,EAX,0x30
//   Label: LAB_004379af
// 004379b2: MOV EBP,0x826900
//   XREF to: 00826900 (DATA)
// 004379b7: MOV EDX,EBX
// 004379b9: MOV EDI,dword ptr [EBX + 0x4]
//   XREF to: 00826904 (READ)
//   XREF to: 00826934 (READ)
// 004379bc: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 00826908 (READ)
//   XREF to: 00826938 (READ)
// 004379bf: ADD EBP,EAX
// 004379c1: XOR EAX,EAX
// 004379c3: CMP EDI,ECX
// 004379c5: JL 0x004379cc
//   XREF to: 004379cc (CONDITIONAL_JUMP)
// 004379c7: MOV EAX,0x1
// 004379cc: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_004379cc
//   XREF to: 00826908 (DATA)
// 004379cf: CMP ESI,dword ptr [EBP + 0x4]
//   XREF to: 00826904 (DATA)
// 004379d2: JG 0x004379d6
//   XREF to: 004379d6 (CONDITIONAL_JUMP)
// 004379d4: OR AL,0x2
// 004379d6: CMP EAX,0x3
//   Label: LAB_004379d6
// 004379d9: JA 0x00437a0c
//   XREF to: 00437a0c (CONDITIONAL_JUMP)
// 004379db: JMP dword ptr [EAX*0x4 + 0x437970]
//   Label: switchD
//   XREF to: 004379e2 (COMPUTED_JUMP)
//   XREF to: 00437a2c (COMPUTED_JUMP)
//   XREF to: 00437a52 (COMPUTED_JUMP)
//   XREF to: 00437a0c (COMPUTED_JUMP)
//   XREF to: 0043797c (READ)
//   XREF to: 00437970 (READ)
// 004379e2: IMUL EDI,dword ptr [0x00825cfc],0x30
//   Label: caseD_0
//   XREF to: 00825cfc (READ)
// 004379e9: MOV ECX,0x30
// 004379ee: MOV ESI,EDX
// 004379f0: ADD EDI,0x826f00
//   XREF to: 00826f00 (DATA)
// 004379f6: PUSH EDI
// 004379f7: MOV EAX,ECX
// 004379f9: SHR ECX,0x2
// 004379fc: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826930 (READ)
//   XREF to: 00826f00 (DATA)
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (DATA)
// 004379fe: MOV CL,AL
// 00437a00: AND CL,0x3
// 00437a03: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (DATA)
// 00437a05: POP EDI
// 00437a06: INC dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ_WRITE)
// 00437a0c: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 00437a0f: MOV EDI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00437a15: INC ESI
// 00437a16: ADD EBX,0x30
// 00437a19: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 00437a1c: CMP ESI,EDI
// 00437a1e: JL 0x0043799f
//   XREF to: 0043799f (CONDITIONAL_JUMP)
// 00437a24: ADD ESP,0x4
//   Label: LAB_00437a24
// 00437a27: POP EBP
// 00437a28: POP EDI
// 00437a29: POP ESI
// 00437a2a: POP EBX
// 00437a2b: RET
// 00437a2c: IMUL EAX,dword ptr [0x00825cfc],0x30
//   Label: caseD_1
//   XREF to: 00825cfc (READ)
// 00437a33: ADD EAX,0x826f00
//   XREF to: 00826f00 (DATA)
// 00437a38: PUSH EAX
// 00437a39: PUSH EDX
//   XREF to: 00826930 (DATA)
// 00437a3a: PUSH EBP
// 00437a3b: CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   XREF to: 00437490 (UNCONDITIONAL_CALL)
// 00437a40: MOV ESI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00437a46: INC ESI
// 00437a47: ADD ESP,0xc
// 00437a4a: MOV dword ptr [0x00825cfc],ESI
//   XREF to: 00825cfc (WRITE)
// 00437a50: JMP 0x00437a0c
//   XREF to: 00437a0c (UNCONDITIONAL_JUMP)
// 00437a52: IMUL EDI,dword ptr [0x00825cfc],0x30
//   Label: caseD_2
//   XREF to: 00825cfc (READ)
// 00437a59: MOV ECX,0x30
// 00437a5e: MOV ESI,EDX
// 00437a60: ADD EDI,0x826f00
//   XREF to: 00826f00 (DATA)
// 00437a66: PUSH EDI
// 00437a67: MOV EAX,ECX
// 00437a69: SHR ECX,0x2
// 00437a6c: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826930 (READ)
//   XREF to: 00826f00 (DATA)
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (DATA)
// 00437a6e: MOV CL,AL
// 00437a70: AND CL,0x3
// 00437a73: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (DATA)
// 00437a75: POP EDI
// 00437a76: MOV ECX,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00437a7c: INC ECX
// 00437a7d: MOV dword ptr [0x00825cfc],ECX
//   XREF to: 00825cfc (WRITE)
// 00437a83: IMUL EAX,ECX,0x30
// 00437a86: ADD EAX,0x826f00
//   XREF to: 00826f00 (DATA)
// 00437a8b: PUSH EAX
// 00437a8c: PUSH EBP
// 00437a8d: PUSH EDX
//   XREF to: 00826930 (DATA)
// 00437a8e: CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   XREF to: 00437490 (UNCONDITIONAL_CALL)
// 00437a93: MOV EDI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00437a99: INC EDI
// 00437a9a: ADD ESP,0xc
// 00437a9d: MOV dword ptr [0x00825cfc],EDI
//   XREF to: 00825cfc (WRITE)
// 00437aa3: JMP 0x00437a0c
//   XREF to: 00437a0c (UNCONDITIONAL_JUMP)
