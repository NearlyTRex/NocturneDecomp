// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
// Address: 0048d8a0
// Address Range: [[0048d8a0, 0048da11]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0 (0048d7a0) at 0048d88d [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700 (0048d700) at 0048d792 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d19e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 (0048b030) at 0048b0b6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_drender_cpp_0062217e
//   TerminatedCString s_CDR_captureFace_too_many_00622194
//   int g_CaptureFaceCount
//   int g_CaptureTextureCount
//   SFace[5000] g_CapturedFaces
//   undefined4 g_CapturedFaces[0].render_flags
//   undefined4 g_CapturedFaces[0].depth
//   undefined4 g_CapturedFaces[0].indices.vertex_index_0
//   undefined4 DAT_02c6d608
//   undefined4 DAT_02c6d60c
//   undefined4 DAT_02c6d610
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
          (CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  SFace *pSVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  int in_stack_00000014;
  
  bVar13 = 0;
  if (this_ptr->face_capture_enabled == 0) {
    iVar8 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(triangle_indices);
    if (iVar8 == 0) {
      return;
    }
  }
  else {
    pSVar1 = this_ptr->vertex_buffer_ptr;
    uVar7 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.screen_x &
            pSVar1[triangle_indices->vertex_index_0].projected_vertex.screen_x &
            pSVar1[triangle_indices->vertex_index_1].projected_vertex.screen_x;
    if (((uVar7 & 0x80000000) != 0) && ((char)uVar7 != '\0')) {
      return;
    }
  }
  if (4999 < g_CaptureFaceCount) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 0xb78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDR::captureFace - too many faces captured");
  }
  iVar8 = g_CaptureTextureCount;
  iVar6 = g_CaptureFaceCount;
  pSVar4 = g_CapturedFaces + g_CaptureFaceCount;
  puVar11 = (undefined4 *)(g_CaptureFaceCount * 0x20 + 0x2c6d604 + (uint)bVar13 * -8);
  puVar9 = (undefined4 *)((int)triangle_indices + (uint)bVar13 * -8 + 4);
  uVar5 = triangle_indices->vertex_index_1;
  (pSVar4->indices).vertex_index_0 = triangle_indices->vertex_index_0;
  (pSVar4->indices).vertex_index_1 = uVar5;
  puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
  puVar10 = puVar9 + (uint)bVar13 * -2 + 1;
  *puVar11 = *puVar9;
  *puVar12 = *puVar10;
  puVar12[(uint)bVar13 * -2 + 1] = puVar10[(uint)bVar13 * -2 + 1];
  *(undefined2 *)(puVar12 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
       *(undefined2 *)(puVar10 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
  g_CapturedFaces[iVar6].texture_index = iVar8;
  g_CapturedFaces[iVar6].render_flags = in_stack_00000014;
  pSVar1 = this_ptr->vertex_buffer_ptr;
  iVar8 = pSVar1[triangle_indices->vertex_index_0].projected_vertex.transformed_z;
  iVar2 = pSVar1[triangle_indices->vertex_index_1].projected_vertex.transformed_z;
  iVar3 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.transformed_z;
  if ((iVar8 < iVar2) && (iVar8 < iVar3)) {
    g_CapturedFaces[iVar6].depth = iVar8;
    g_CaptureFaceCount = g_CaptureFaceCount + 1;
    return;
  }
  if (iVar3 <= iVar2) {
    g_CapturedFaces[g_CaptureFaceCount].depth = iVar3;
    g_CaptureFaceCount = g_CaptureFaceCount + 1;
    return;
  }
  g_CapturedFaces[g_CaptureFaceCount].depth = iVar2;
  g_CaptureFaceCount = g_CaptureFaceCount + 1;
  return;
}


// Assembly code:
// 0048d8a0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
// 0048d8a1: PUSH ESI
// 0048d8a2: PUSH EBP
// 0048d8a3: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048d8a7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048d8ab: CMP dword ptr [EBP + 0x10],0x0
// 0048d8af: JZ 0x0048d9ce
//   XREF to: 0048d9ce (CONDITIONAL_JUMP)
// 0048d8b5: XOR EDX,EDX
// 0048d8b7: MOV DX,word ptr [EBX + 0x2]
// 0048d8bb: LEA EAX,[EDX*0x4 + 0x0]
// 0048d8c2: SUB EAX,EDX
// 0048d8c4: XOR ECX,ECX
// 0048d8c6: SHL EAX,0x4
// 0048d8c9: MOV EDX,dword ptr [EBP]
// 0048d8cc: MOV CX,word ptr [EBX]
// 0048d8cf: LEA ESI,[EDX + EAX*0x1]
// 0048d8d2: LEA EAX,[ECX*0x4 + 0x0]
// 0048d8d9: SUB EAX,ECX
// 0048d8db: SHL EAX,0x4
// 0048d8de: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10]
// 0048d8e2: MOV ECX,dword ptr [ESI + 0x10]
// 0048d8e5: MOV ESI,EAX
// 0048d8e7: AND ESI,ECX
// 0048d8e9: XOR ECX,ECX
// 0048d8eb: MOV CX,word ptr [EBX + 0x4]
// 0048d8ef: LEA EAX,[ECX*0x4 + 0x0]
// 0048d8f6: SUB EAX,ECX
// 0048d8f8: SHL EAX,0x4
// 0048d8fb: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10]
// 0048d8ff: AND EAX,ESI
// 0048d901: TEST EAX,0x80000000
// 0048d906: JZ 0x0048d910
//   XREF to: 0048d910 (CONDITIONAL_JUMP)
// 0048d908: TEST AL,0xff
// 0048d90a: JNZ 0x0048d9ca
//   XREF to: 0048d9ca (CONDITIONAL_JUMP)
// 0048d910: PUSH EDI
//   Label: LAB_0048d910
// 0048d911: CMP dword ptr [0x02c6d5ec],0x1388
//   XREF to: 02c6d5ec (READ)
// 0048d91b: JL 0x0048d93f
//   XREF to: 0048d93f (CONDITIONAL_JUMP)
// 0048d91d: MOV EDI,0x62217e
//   XREF to: 0062217e (DATA)
// 0048d922: MOV EAX,0xb78
// 0048d927: PUSH 0x622194
//   XREF to: 00622194 (DATA)
// 0048d92c: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0048d932: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0048d937: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048d93c: ADD ESP,0x4
// 0048d93f: MOV EDX,dword ptr [0x02c6d5ec]
//   Label: LAB_0048d93f
//   XREF to: 02c6d5ec (READ)
// 0048d945: SHL EDX,0x5
// 0048d948: MOV ESI,EBX
// 0048d94a: LEA EDI,[EDX + 0x2c6d600]
//   XREF to: 02c6d600 (DATA)
// 0048d950: MOV EAX,[0x02c6d5f0]
//   XREF to: 02c6d5f0 (READ)
// 0048d955: MOVSD ES:EDI,ESI
//   XREF to: 02c6d600 (DATA)
// 0048d956: MOVSD ES:EDI,ESI
//   XREF to: 02c6d604 (DATA)
// 0048d957: MOVSD ES:EDI,ESI
//   XREF to: 02c6d608 (DATA)
// 0048d958: MOVSD ES:EDI,ESI
//   XREF to: 02c6d60c (DATA)
// 0048d959: MOVSW ES:EDI,ESI
//   XREF to: 02c6d610 (DATA)
// 0048d95b: MOV dword ptr [EDX + 0x2c6d5f4],EAX
//   XREF to: 02c6d5f4 (DATA)
// 0048d961: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048d965: XOR ECX,ECX
// 0048d967: MOV dword ptr [EDX + 0x2c6d5f8],EAX
//   XREF to: 02c6d5f8 (DATA)
// 0048d96d: MOV CX,word ptr [EBX]
// 0048d970: LEA EAX,[ECX*0x4 + 0x0]
// 0048d977: XOR EDI,EDI
// 0048d979: SUB EAX,ECX
// 0048d97b: MOV ECX,dword ptr [EBP]
// 0048d97e: SHL EAX,0x4
// 0048d981: MOV DI,word ptr [EBX + 0x2]
// 0048d985: MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8]
// 0048d989: LEA EAX,[EDI*0x4 + 0x0]
// 0048d990: SUB EAX,EDI
// 0048d992: SHL EAX,0x4
// 0048d995: LEA EDI,[ECX + EAX*0x1]
// 0048d998: MOV BX,word ptr [EBX + 0x4]
// 0048d99c: MOV EDI,dword ptr [EDI + 0x8]
// 0048d99f: AND EBX,0xffff
// 0048d9a5: LEA EAX,[EBX*0x4 + 0x0]
// 0048d9ac: SUB EAX,EBX
// 0048d9ae: SHL EAX,0x4
// 0048d9b1: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
// 0048d9b5: CMP ESI,EDI
// 0048d9b7: JGE 0x0048d9e3
//   XREF to: 0048d9e3 (CONDITIONAL_JUMP)
// 0048d9b9: CMP ESI,EAX
// 0048d9bb: JGE 0x0048d9e3
//   XREF to: 0048d9e3 (CONDITIONAL_JUMP)
// 0048d9bd: MOV dword ptr [EDX + 0x2c6d5fc],ESI
//   XREF to: 02c6d5fc (DATA)
// 0048d9c3: INC dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ_WRITE)
// 0048d9c9: POP EDI
// 0048d9ca: POP EBP
//   Label: LAB_0048d9ca
// 0048d9cb: POP ESI
// 0048d9cc: POP EBX
// 0048d9cd: RET
// 0048d9ce: PUSH EBX
//   Label: LAB_0048d9ce
// 0048d9cf: CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
//   XREF to: 005523f0 (UNCONDITIONAL_CALL)
// 0048d9d4: ADD ESP,0x4
// 0048d9d7: TEST EAX,EAX
// 0048d9d9: JNZ 0x0048d910
//   XREF to: 0048d910 (CONDITIONAL_JUMP)
// 0048d9df: POP EBP
// 0048d9e0: POP ESI
// 0048d9e1: POP EBX
// 0048d9e2: RET
// 0048d9e3: MOV EDX,dword ptr [0x02c6d5ec]
//   Label: LAB_0048d9e3
//   XREF to: 02c6d5ec (READ)
// 0048d9e9: SHL EDX,0x5
// 0048d9ec: CMP EDI,EAX
// 0048d9ee: JGE 0x0048da01
//   XREF to: 0048da01 (CONDITIONAL_JUMP)
// 0048d9f0: MOV dword ptr [EDX + 0x2c6d5fc],EDI
//   XREF to: 02c6d5fc (DATA)
// 0048d9f6: INC dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ_WRITE)
// 0048d9fc: POP EDI
// 0048d9fd: POP EBP
// 0048d9fe: POP ESI
// 0048d9ff: POP EBX
// 0048da00: RET
// 0048da01: MOV dword ptr [EDX + 0x2c6d5fc],EAX
//   Label: LAB_0048da01
//   XREF to: 02c6d5fc (DATA)
// 0048da07: INC dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ_WRITE)
// 0048da0d: POP EDI
// 0048da0e: POP EBP
// 0048da0f: POP ESI
// 0048da10: POP EBX
// 0048da11: RET
