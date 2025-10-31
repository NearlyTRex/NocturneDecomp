// Name: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
// Address: 00437ac0
// Address Range: [[00437ac0, 00437bed]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0(void)
// Globals:
//   void* PTR_caseD_1_00437aac = 00437b72
//   void* PTR_caseD_3_00437ab4 = 00437b52
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 DAT_00824e2c
//   int g_IntermediateVertexCount
//   SRenderVertex[16] g_ClipperIntermediateBuffer
//   undefined4 DAT_00826f04
//   undefined4 g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00826f34
//   undefined4 DAT_00826f38
// Function calls:
//   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonVerticalPlanes_FUN_00437ac0(void)

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
  if (0 < g_IntermediateVertexCount) {
    v1 = g_ClipperIntermediateBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_IntermediateVertexCount) {
        uVar2 = uVar2 ^ g_IntermediateVertexCount;
      }
      bVar1 = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if (g_ClipperIntermediateBuffer[uVar2].projected_vertex.transformed_y <=
          -g_ClipperIntermediateBuffer[uVar2].projected_vertex.transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                  (g_ClipperIntermediateBuffer + uVar2,v1,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 2:
        pSVar4 = v1;
        pSVar5 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                  (v1,g_ClipperIntermediateBuffer + uVar2,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_IntermediateVertexCount);
  }
  return;
}


// Assembly code:
// 00437ac0: PUSH EBX
//   Label: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0
// 00437ac1: PUSH ESI
// 00437ac2: PUSH EDI
// 00437ac3: PUSH EBP
// 00437ac4: SUB ESP,0x4
// 00437ac7: XOR EDX,EDX
// 00437ac9: MOV ECX,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00437acf: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00437ad2: TEST ECX,ECX
// 00437ad4: JLE 0x00437b6a
//   XREF to: 00437b6a (CONDITIONAL_JUMP)
// 00437ada: MOV EBX,0x826f00
//   XREF to: 00826f00 (DATA)
// 00437adf: MOV EAX,dword ptr [ESP]
//   Label: LAB_00437adf
//   XREF to: Stack[-0x14] (DATA)
// 00437ae2: MOV EBP,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00437ae8: INC EAX
// 00437ae9: CMP EAX,EBP
// 00437aeb: JNZ 0x00437aef
//   XREF to: 00437aef (CONDITIONAL_JUMP)
// 00437aed: XOR EAX,EBP
// 00437aef: IMUL EAX,EAX,0x30
//   Label: LAB_00437aef
// 00437af2: MOV EBP,0x826f00
//   XREF to: 00826f00 (DATA)
// 00437af7: MOV EDX,EBX
// 00437af9: MOV EDI,dword ptr [EBX + 0x8]
//   XREF to: 00826f08 (READ)
//   XREF to: 00826f38 (READ)
// 00437afc: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 00826f04 (READ)
//   XREF to: 00826f34 (READ)
// 00437aff: NEG EDI
// 00437b01: ADD EBP,EAX
// 00437b03: XOR EAX,EAX
// 00437b05: CMP EDI,ECX
// 00437b07: JL 0x00437b0e
//   XREF to: 00437b0e (CONDITIONAL_JUMP)
// 00437b09: MOV EAX,0x1
// 00437b0e: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_00437b0e
//   XREF to: 00826f08 (DATA)
// 00437b11: MOV ESI,dword ptr [EBP + 0x4]
//   XREF to: 00826f04 (DATA)
// 00437b14: NEG EDI
// 00437b16: CMP EDI,ESI
// 00437b18: JL 0x00437b1c
//   XREF to: 00437b1c (CONDITIONAL_JUMP)
// 00437b1a: OR AL,0x2
// 00437b1c: CMP EAX,0x3
//   Label: LAB_00437b1c
// 00437b1f: JA 0x00437b52
//   XREF to: 00437b52 (CONDITIONAL_JUMP)
// 00437b21: JMP dword ptr [EAX*0x4 + 0x437aa8]
//   Label: switchD
//   XREF to: 00437b28 (COMPUTED_JUMP)
//   XREF to: 00437b52 (COMPUTED_JUMP)
//   XREF to: 00437b72 (COMPUTED_JUMP)
//   XREF to: 00437b98 (COMPUTED_JUMP)
//   XREF to: 00437aac (READ)
//   XREF to: 00437ab4 (READ)
// 00437b28: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 00437b2f: MOV ECX,0x30
// 00437b34: MOV ESI,EDX
// 00437b36: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437b3c: PUSH EDI
// 00437b3d: MOV EAX,ECX
// 00437b3f: SHR ECX,0x2
// 00437b42: MOVSD.REP ES:EDI,ESI
//   XREF to: 00824e28 (DATA)
//   XREF to: 00824e2c (DATA)
//   XREF to: 00826f00 (READ)
//   XREF to: 00826f04 (READ)
// 00437b44: MOV CL,AL
// 00437b46: AND CL,0x3
// 00437b49: MOVSB.REP ES:EDI,ESI
//   XREF to: 00824e28 (DATA)
//   XREF to: 00824e2c (DATA)
//   XREF to: 00826f04 (READ)
// 00437b4b: POP EDI
// 00437b4c: INC dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ_WRITE)
// 00437b52: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 00437b55: MOV EDI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00437b5b: INC ESI
// 00437b5c: ADD EBX,0x30
// 00437b5f: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 00437b62: CMP ESI,EDI
// 00437b64: JL 0x00437adf
//   XREF to: 00437adf (CONDITIONAL_JUMP)
// 00437b6a: ADD ESP,0x4
//   Label: LAB_00437b6a
// 00437b6d: POP EBP
// 00437b6e: POP EDI
// 00437b6f: POP ESI
// 00437b70: POP EBX
// 00437b71: RET
// 00437b72: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 00437b79: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437b7e: PUSH EAX
// 00437b7f: PUSH EDX
//   XREF to: 00826f00 (DATA)
// 00437b80: PUSH EBP
// 00437b81: CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   XREF to: 004375c0 (UNCONDITIONAL_CALL)
// 00437b86: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00437b8c: INC ESI
// 00437b8d: ADD ESP,0xc
// 00437b90: MOV dword ptr [0x00824e24],ESI
//   XREF to: 00824e24 (WRITE)
// 00437b96: JMP 0x00437b52
//   XREF to: 00437b52 (UNCONDITIONAL_JUMP)
// 00437b98: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 00437b9f: MOV ECX,0x30
// 00437ba4: MOV ESI,EDX
// 00437ba6: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437bac: PUSH EDI
// 00437bad: MOV EAX,ECX
// 00437baf: SHR ECX,0x2
// 00437bb2: MOVSD.REP ES:EDI,ESI
//   XREF to: 00824e28 (DATA)
//   XREF to: 00824e2c (DATA)
//   XREF to: 00826f00 (READ)
//   XREF to: 00826f04 (READ)
// 00437bb4: MOV CL,AL
// 00437bb6: AND CL,0x3
// 00437bb9: MOVSB.REP ES:EDI,ESI
//   XREF to: 00824e28 (DATA)
//   XREF to: 00824e2c (DATA)
//   XREF to: 00826f04 (READ)
// 00437bbb: POP EDI
// 00437bbc: MOV ECX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00437bc2: INC ECX
// 00437bc3: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 00437bc9: IMUL EAX,ECX,0x30
// 00437bcc: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437bd1: PUSH EAX
// 00437bd2: PUSH EBP
// 00437bd3: PUSH EDX
//   XREF to: 00826f00 (DATA)
// 00437bd4: CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   XREF to: 004375c0 (UNCONDITIONAL_CALL)
// 00437bd9: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00437bdf: INC EDI
// 00437be0: ADD ESP,0xc
// 00437be3: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 00437be9: JMP 0x00437b52
//   XREF to: 00437b52 (UNCONDITIONAL_JUMP)
