// Name: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
// Address: 0047e810
// Address Range: [[0047e810, 0047ea01]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e3cc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_00620e43
//   TerminatedCString s_CKeyFramedModel_exportTo_00620e56
//   double DOUBLE_00620ea3 = 0.00390625
//   double DOUBLE_00620eab = 0.0000152587890625
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626420
//   undefined4 DAT_01626424
//   undefined4 DAT_01626428
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9915
//   undefined4 DAT_016e9916
//   undefined4 DAT_016e9917
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9a94
//   undefined4 DAT_016e9b38
//   undefined4 DAT_016e9c0c
//   int g_PartsCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int local_1c;
  int local_18;
  int local_14;
  
  if (1 < this_ptr->frame_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe07;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE - can't export multiple-frame model to DSE");
  }
  g_VertexCount = this_ptr->vertex_count;
  if (0 < g_VertexCount) {
    fVar2 = (float)DOUBLE_00620ea3;
    iVar4 = 0;
    iVar7 = g_VertexCount * 0xc;
    iVar5 = 0;
    do {
      *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar5) =
           (float)*(int *)((int)this_ptr->vertex_list + iVar4) * fVar2;
      *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar5) =
           (float)*(int *)((int)this_ptr->vertex_list + iVar4 + 4) * fVar2;
      iVar6 = iVar4 + 8;
      iVar4 = iVar4 + 0xc;
      *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar5) =
           (float)*(int *)((int)this_ptr->vertex_list + iVar6) * fVar2;
      iVar5 = iVar5 + 0x14;
    } while (iVar4 < iVar7);
  }
  g_PolygonCount = this_ptr->poly_count;
  local_18 = 0;
  if (0 < g_PolygonCount) {
    local_14 = 0;
    local_1c = 0;
    iVar5 = 0;
    do {
      iVar7 = 0;
      *(undefined4 *)((int)g_ModelPolygonData[0].uv_v + iVar5 + 0x40) = 0;
      pcVar8 = g_ModelPolygonData[0].texture_name + iVar5 + -4;
      pcVar8[0] = '\x02';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -0x14) =
           *(undefined4 *)((int)this_ptr->poly_vert_list + local_14 + 4);
      iVar4 = 0;
      if (0 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -0x14)) {
        fVar2 = (float)DOUBLE_00620eab;
        iVar6 = iVar5;
        do {
          *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) =
               *(undefined4 *)((int)this_ptr->poly_vert_list + iVar4 + local_14 + 0x18);
          *(float *)((int)g_ModelPolygonData[0].uv_u + iVar6) =
               (float)*(int *)((int)this_ptr->poly_vert_list + iVar4 + local_14 + 0x1c) * fVar2;
          iVar3 = iVar4 + local_14 + 0x20;
          iVar4 = iVar4 + 0xc;
          iVar7 = iVar7 + 1;
          *(float *)((int)g_ModelPolygonData[0].uv_v + iVar6) =
               (float)*(int *)((int)this_ptr->poly_vert_list + iVar3) * fVar2;
          iVar6 = iVar6 + 4;
        } while (iVar7 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -0x14));
      }
      pcVar8 = this_ptr->texture_list[*(int *)((int)this_ptr->poly_texture_index_list + local_1c)].
               base.texture_name;
      local_1c = local_1c + 4;
      pcVar9 = g_ModelPolygonData[0].texture_name + iVar5;
      local_14 = local_14 + 0x48;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_18 = local_18 + 1;
      iVar5 = iVar5 + 0x184;
    } while (local_18 < g_PolygonCount);
  }
  g_PartsCount = 1;
  return;
}


// Assembly code:
// 0047e810: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
// 0047e811: PUSH ESI
// 0047e812: PUSH EDI
// 0047e813: PUSH EBP
// 0047e814: SUB ESP,0x14
// 0047e817: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0047e81b: CMP dword ptr [EBX + 0x100],0x1
// 0047e822: JG 0x0047e9da
//   XREF to: 0047e9da (CONDITIONAL_JUMP)
// 0047e828: MOV EAX,dword ptr [EBX + 0x104]
//   Label: LAB_0047e828
// 0047e82e: MOV [0x01626408],EAX
//   XREF to: 01626408 (WRITE)
// 0047e833: TEST EAX,EAX
// 0047e835: JLE 0x0047e894
//   XREF to: 0047e894 (CONDITIONAL_JUMP)
// 0047e837: MOV ECX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0047e83d: FLD double ptr [0x00620ea3]
//   XREF to: 00620ea3 (READ)
// 0047e843: LEA ESI,[ECX*0x4 + 0x0]
// 0047e84a: XOR EAX,EAX
// 0047e84c: SUB ESI,ECX
// 0047e84e: XOR EDX,EDX
// 0047e850: SHL ESI,0x2
// 0047e853: MOV ECX,dword ptr [EBX + 0x10c]
//   Label: LAB_0047e853
// 0047e859: FILD dword ptr [ECX + EAX*0x1]
// 0047e85c: FMUL ST1
// 0047e85e: FSTP float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (WRITE)
//   XREF to: 01626420 (WRITE)
// 0047e864: MOV ECX,dword ptr [EBX + 0x10c]
// 0047e86a: FILD dword ptr [ECX + EAX*0x1 + 0x4]
// 0047e86e: FMUL ST1
// 0047e870: FSTP float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (WRITE)
//   XREF to: 01626424 (WRITE)
// 0047e876: MOV ECX,dword ptr [EBX + 0x10c]
// 0047e87c: FILD dword ptr [ECX + EAX*0x1 + 0x8]
// 0047e880: FMUL ST1
// 0047e882: ADD EDX,0x14
// 0047e885: ADD EAX,0xc
// 0047e888: FSTP float ptr [EDX + 0x1626400]
//   XREF to: 01626414 (WRITE)
//   XREF to: 01626428 (WRITE)
// 0047e88e: CMP EAX,ESI
// 0047e890: JL 0x0047e853
//   XREF to: 0047e853 (CONDITIONAL_JUMP)
// 0047e892: FSTP ST0
// 0047e894: MOV EAX,dword ptr [EBX + 0x110]
//   Label: LAB_0047e894
// 0047e89a: XOR EBP,EBP
// 0047e89c: MOV [0x016e990c],EAX
//   XREF to: 016e990c (WRITE)
// 0047e8a1: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0047e8a5: TEST EAX,EAX
// 0047e8a7: JLE 0x0047e9c8
//   XREF to: 0047e9c8 (CONDITIONAL_JUMP)
// 0047e8ad: LEA EAX,[EBX + 0x124]
// 0047e8b3: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0047e8b7: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 0047e8bb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0047e8be: XOR ESI,ESI
//   Label: LAB_0047e8be
// 0047e8c0: MOV ECX,0x2
// 0047e8c5: MOV dword ptr [EBP + 0x16e9a88],ESI
//   XREF to: 016e9a88 (WRITE)
//   XREF to: 016e9c0c (WRITE)
// 0047e8cb: MOV dword ptr [EBP + 0x16e9910],ECX
//   XREF to: 016e9910 (WRITE)
//   XREF to: 016e9a94 (WRITE)
// 0047e8d1: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0047e8d5: MOV EAX,dword ptr [EBX + 0x114]
// 0047e8db: ADD EAX,EDI
// 0047e8dd: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0047e8e1: MOV EAX,dword ptr [EAX + 0x4]
// 0047e8e4: MOV EDX,EBP
// 0047e8e6: MOV dword ptr [EBP + 0x16e99b4],EAX
//   XREF to: 016e99b4 (WRITE)
//   XREF to: 016e9b38 (WRITE)
// 0047e8ec: MOV ECX,EDI
// 0047e8ee: MOV EDI,dword ptr [EBP + 0x16e99b4]
//   XREF to: 016e99b4 (READ)
//   XREF to: 016e9b38 (READ)
// 0047e8f4: XOR EAX,EAX
// 0047e8f6: TEST EDI,EDI
// 0047e8f8: JLE 0x0047e94f
//   XREF to: 0047e94f (CONDITIONAL_JUMP)
// 0047e8fa: FLD double ptr [0x00620eab]
//   XREF to: 00620eab (READ)
// 0047e900: MOV EDI,dword ptr [EBX + 0x114]
//   Label: LAB_0047e900
// 0047e906: ADD EDI,ECX
// 0047e908: MOV EDI,dword ptr [EDI + EAX*0x1 + 0x18]
// 0047e90c: MOV dword ptr [EDX + 0x16e99c8],EDI
//   XREF to: 016e99c8 (WRITE)
//   XREF to: 016e99cc (WRITE)
// 0047e912: MOV EDI,dword ptr [EBX + 0x114]
// 0047e918: ADD EDI,ECX
// 0047e91a: FILD dword ptr [EDI + EAX*0x1 + 0x1c]
// 0047e91e: FMUL ST1
// 0047e920: FSTP float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (WRITE)
//   XREF to: 016e9a0c (WRITE)
// 0047e926: MOV EDI,dword ptr [EBX + 0x114]
// 0047e92c: ADD EDI,ECX
// 0047e92e: FILD dword ptr [EDI + EAX*0x1 + 0x20]
// 0047e932: FMUL ST1
// 0047e934: ADD EDX,0x4
// 0047e937: ADD EAX,0xc
// 0047e93a: INC ESI
// 0047e93b: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0047e93f: FSTP float ptr [EDX + 0x16e9a44]
//   XREF to: 016e9a48 (WRITE)
// 0047e945: CMP ESI,dword ptr [EDI + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0047e94b: JL 0x0047e900
//   XREF to: 0047e900 (CONDITIONAL_JUMP)
// 0047e94d: FSTP ST0
// 0047e94f: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0047e94f
//   XREF to: Stack[-0x20] (READ)
// 0047e953: MOV EDX,dword ptr [EBX + 0x118]
// 0047e959: ADD EDX,ECX
// 0047e95b: MOV EDX,dword ptr [EDX]
// 0047e95d: LEA EAX,[EDX*0x8 + 0x0]
// 0047e964: ADD EAX,EDX
// 0047e966: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0047e969: SHL EAX,0x3
// 0047e96c: MOV EDI,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0047e971: ADD EAX,ESI
// 0047e973: ADD EBP,0x184
// 0047e979: LEA ESI,[EAX + 0x8]
// 0047e97c: ADD ECX,0x4
// 0047e97f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0047e983: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0047e987: ADD EDI,EAX
// 0047e989: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0047e98d: ADD EDI,0x4
// 0047e990: ADD EDX,0x48
// 0047e993: PUSH EDI
// 0047e994: MOV AL,byte ptr [ESI]
//   Label: LAB_0047e994
// 0047e996: MOV byte ptr [EDI],AL
//   XREF to: 016e9914 (DATA)
//   XREF to: 016e9916 (DATA)
// 0047e998: CMP AL,0x0
// 0047e99a: JZ 0x0047e9ac
//   XREF to: 0047e9ac (CONDITIONAL_JUMP)
// 0047e99c: MOV AL,byte ptr [ESI + 0x1]
// 0047e99f: ADD ESI,0x2
// 0047e9a2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 016e9915 (DATA)
//   XREF to: 016e9917 (DATA)
// 0047e9a5: ADD EDI,0x2
// 0047e9a8: CMP AL,0x0
// 0047e9aa: JNZ 0x0047e994
//   XREF to: 0047e994 (CONDITIONAL_JUMP)
// 0047e9ac: POP EDI
//   Label: LAB_0047e9ac
// 0047e9ad: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0047e9b1: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047e9b5: INC ESI
// 0047e9b6: MOV EDI,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0047e9bc: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0047e9c0: CMP ESI,EDI
// 0047e9c2: JL 0x0047e8be
//   XREF to: 0047e8be (CONDITIONAL_JUMP)
// 0047e9c8: MOV dword ptr [0x01e528a0],0x1
//   Label: LAB_0047e9c8
//   XREF to: 01e528a0 (WRITE)
// 0047e9d2: ADD ESP,0x14
// 0047e9d5: POP EBP
// 0047e9d6: POP EDI
// 0047e9d7: POP ESI
// 0047e9d8: POP EBX
// 0047e9d9: RET
// 0047e9da: MOV ECX,0x620e43
//   Label: LAB_0047e9da
//   XREF to: 00620e43 (PARAM)
// 0047e9df: MOV ESI,0xe07
// 0047e9e4: PUSH 0x620e56
//   XREF to: 00620e56 (DATA)
// 0047e9e9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0047e9ef: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0047e9f5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047e9fa: ADD ESP,0x4
// 0047e9fd: JMP 0x0047e828
//   XREF to: 0047e828 (UNCONDITIONAL_JUMP)
