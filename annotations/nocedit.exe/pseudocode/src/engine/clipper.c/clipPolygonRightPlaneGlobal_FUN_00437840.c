// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
// Address: 00437840
// Address Range: [[00437840, 0043796c]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840(void)
// Globals:
//   void* PTR_caseD_1_00437828 = 004378f1
//   void* PTR_caseD_3_00437830 = 004378d1
//   int g_OutputVertexCount
//   int g_TempVertexCount
//   SRenderVertex[16] g_ClipperOutputBuffer
//   undefined4 DAT_00825d04
//   undefined4 g_ClipperOutputBuffer[0].projected_vertex.transformed_z
//   undefined4 g_ClipperOutputBuffer[1].projected_vertex.transformed_x
//   undefined4 DAT_00825d38
//   SRenderVertex[16] g_ClipperWorkingBuffer
//   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
// Function calls:
//   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00437840(void)

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
  if (0 < g_OutputVertexCount) {
    v1 = g_ClipperOutputBuffer;
    do {
      uVar2 = local_14 + 1;
      if (uVar2 == g_OutputVertexCount) {
        uVar2 = uVar2 ^ g_OutputVertexCount;
      }
      pSVar4 = g_ClipperOutputBuffer + uVar2;
      bVar1 = (v1->projected_vertex).transformed_x <= -(v1->projected_vertex).transformed_z;
      if ((pSVar4->projected_vertex).transformed_x <=
          -g_ClipperOutputBuffer[uVar2].projected_vertex.transformed_z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        pSVar5 = g_ClipperWorkingBuffer + g_TempVertexCount;
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
        g_TempVertexCount = g_TempVertexCount + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                  (pSVar4,v1,g_ClipperWorkingBuffer + g_TempVertexCount);
        g_TempVertexCount = g_TempVertexCount + 1;
        break;
      case 2:
        pSVar5 = v1;
        pSVar6 = g_ClipperWorkingBuffer + g_TempVertexCount;
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
        g_TempVertexCount = g_TempVertexCount + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                  (v1,pSVar4,g_ClipperWorkingBuffer + g_TempVertexCount);
        g_TempVertexCount = g_TempVertexCount + 1;
      }
      local_14 = local_14 + 1;
      v1 = v1 + 1;
    } while (local_14 < g_OutputVertexCount);
  }
  return;
}


// Assembly code:
// 00437840: PUSH EBX
//   Label: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840
// 00437841: PUSH ESI
// 00437842: PUSH EDI
// 00437843: PUSH EBP
// 00437844: SUB ESP,0x4
// 00437847: XOR EDX,EDX
// 00437849: MOV ECX,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 0043784f: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00437852: TEST ECX,ECX
// 00437854: JLE 0x004378e9
//   XREF to: 004378e9 (CONDITIONAL_JUMP)
// 0043785a: MOV EBX,0x825d00
//   XREF to: 00825d00 (DATA)
// 0043785f: MOV EAX,dword ptr [ESP]
//   Label: LAB_0043785f
//   XREF to: Stack[-0x14] (DATA)
// 00437862: MOV EBP,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 00437868: INC EAX
// 00437869: CMP EAX,EBP
// 0043786b: JNZ 0x0043786f
//   XREF to: 0043786f (CONDITIONAL_JUMP)
// 0043786d: XOR EAX,EBP
// 0043786f: IMUL EAX,EAX,0x30
//   Label: LAB_0043786f
// 00437872: MOV EBP,0x825d00
//   XREF to: 00825d00 (DATA)
// 00437877: MOV EDX,EBX
// 00437879: MOV EDI,dword ptr [EBX + 0x8]
//   XREF to: 00825d08 (READ)
//   XREF to: 00825d38 (READ)
// 0043787c: MOV ECX,dword ptr [EBX]
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d30 (READ)
// 0043787e: NEG EDI
// 00437880: ADD EBP,EAX
// 00437882: XOR EAX,EAX
// 00437884: CMP EDI,ECX
// 00437886: JL 0x0043788d
//   XREF to: 0043788d (CONDITIONAL_JUMP)
// 00437888: MOV EAX,0x1
// 0043788d: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_0043788d
//   XREF to: 00825d08 (DATA)
// 00437890: MOV ESI,dword ptr [EBP]
//   XREF to: 00825d00 (DATA)
// 00437893: NEG EDI
// 00437895: CMP EDI,ESI
// 00437897: JL 0x0043789b
//   XREF to: 0043789b (CONDITIONAL_JUMP)
// 00437899: OR AL,0x2
// 0043789b: CMP EAX,0x3
//   Label: LAB_0043789b
// 0043789e: JA 0x004378d1
//   XREF to: 004378d1 (CONDITIONAL_JUMP)
// 004378a0: JMP dword ptr [EAX*0x4 + 0x437824]
//   Label: switchD
//   XREF to: 004378a7 (COMPUTED_JUMP)
//   XREF to: 004378f1 (COMPUTED_JUMP)
//   XREF to: 00437917 (COMPUTED_JUMP)
//   XREF to: 004378d1 (COMPUTED_JUMP)
//   XREF to: 00437830 (READ)
//   XREF to: 00437828 (READ)
// 004378a7: IMUL EDI,dword ptr [0x00825cf8],0x30
//   Label: caseD_0
//   XREF to: 00825cf8 (READ)
// 004378ae: MOV ECX,0x30
// 004378b3: MOV ESI,EDX
// 004378b5: ADD EDI,0x826900
//   XREF to: 00826900 (DATA)
// 004378bb: PUSH EDI
// 004378bc: MOV EAX,ECX
// 004378be: SHR ECX,0x2
// 004378c1: MOVSD.REP ES:EDI,ESI
//   XREF to: 00825d00 (READ)
//   XREF to: 00826900 (DATA)
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (DATA)
// 004378c3: MOV CL,AL
// 004378c5: AND CL,0x3
// 004378c8: MOVSB.REP ES:EDI,ESI
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (DATA)
// 004378ca: POP EDI
// 004378cb: INC dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ_WRITE)
// 004378d1: MOV ESI,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 004378d4: MOV EDI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 004378da: INC ESI
// 004378db: ADD EBX,0x30
// 004378de: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 004378e1: CMP ESI,EDI
// 004378e3: JL 0x0043785f
//   XREF to: 0043785f (CONDITIONAL_JUMP)
// 004378e9: ADD ESP,0x4
//   Label: LAB_004378e9
// 004378ec: POP EBP
// 004378ed: POP EDI
// 004378ee: POP ESI
// 004378ef: POP EBX
// 004378f0: RET
// 004378f1: IMUL EAX,dword ptr [0x00825cf8],0x30
//   Label: caseD_1
//   XREF to: 00825cf8 (READ)
// 004378f8: ADD EAX,0x826900
//   XREF to: 00826900 (DATA)
// 004378fd: PUSH EAX
// 004378fe: PUSH EDX
//   XREF to: 00825d00 (DATA)
// 004378ff: PUSH EBP
// 00437900: CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   XREF to: 00437360 (UNCONDITIONAL_CALL)
// 00437905: MOV ESI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 0043790b: INC ESI
// 0043790c: ADD ESP,0xc
// 0043790f: MOV dword ptr [0x00825cf8],ESI
//   XREF to: 00825cf8 (WRITE)
// 00437915: JMP 0x004378d1
//   XREF to: 004378d1 (UNCONDITIONAL_JUMP)
// 00437917: IMUL EDI,dword ptr [0x00825cf8],0x30
//   Label: caseD_2
//   XREF to: 00825cf8 (READ)
// 0043791e: MOV ECX,0x30
// 00437923: MOV ESI,EDX
// 00437925: ADD EDI,0x826900
//   XREF to: 00826900 (DATA)
// 0043792b: PUSH EDI
// 0043792c: MOV EAX,ECX
// 0043792e: SHR ECX,0x2
// 00437931: MOVSD.REP ES:EDI,ESI
//   XREF to: 00825d00 (READ)
//   XREF to: 00826900 (DATA)
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (DATA)
// 00437933: MOV CL,AL
// 00437935: AND CL,0x3
// 00437938: MOVSB.REP ES:EDI,ESI
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (DATA)
// 0043793a: POP EDI
// 0043793b: MOV ECX,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00437941: INC ECX
// 00437942: MOV dword ptr [0x00825cf8],ECX
//   XREF to: 00825cf8 (WRITE)
// 00437948: IMUL EAX,ECX,0x30
// 0043794b: ADD EAX,0x826900
//   XREF to: 00826900 (DATA)
// 00437950: PUSH EAX
// 00437951: PUSH EBP
// 00437952: PUSH EDX
//   XREF to: 00825d00 (DATA)
// 00437953: CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   XREF to: 00437360 (UNCONDITIONAL_CALL)
// 00437958: MOV EDI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 0043795e: INC EDI
// 0043795f: ADD ESP,0xc
// 00437962: MOV dword ptr [0x00825cf8],EDI
//   XREF to: 00825cf8 (WRITE)
// 00437968: JMP 0x004378d1
//   XREF to: 004378d1 (UNCONDITIONAL_JUMP)
