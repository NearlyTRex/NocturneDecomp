// Name: shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
// Address: 0048f960
// Address Range: [[0048f960, 0048fa4a]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960(CDSEModel * this_ptr)
// Cross-references:
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f20f [UNCONDITIONAL_CALL]
// Globals:
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9a88
//   SModelPartName[500] g_ModelPartNames
//   undefined4 DAT_01e50191
//   undefined4 DAT_01e50192
//   undefined4 DAT_01e50193
//   int g_PartsCount
// Function calls:
//   shape_design.c_calculateVertexNormals_FUN_0045be40

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  SShapeEditorPolygon *pSVar4;
  SModelPartName *pSVar5;
  SShapeEditorPolygon *pSVar6;
  int local_14;
  
  g_PartsCount = 1;
  pcVar3 = this_ptr->model_name;
  pSVar5 = g_ModelPartNames;
  do {
    cVar1 = *pcVar3;
    pSVar5->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pSVar5 + 1) = cVar1;
    pSVar5 = (SModelPartName *)((int)pSVar5 + 2);
  } while (cVar1 != '\0');
  g_VertexCount = this_ptr->vertex_count;
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
    g_LoadedVertices[local_14].vertex.x = this_ptr->vertices[local_14].vertex.x;
    g_LoadedVertices[local_14].vertex.y = this_ptr->vertices[local_14].vertex.y;
    g_LoadedVertices[local_14].vertex.z = this_ptr->vertices[local_14].vertex.z;
    g_LoadedVertices[local_14].u = this_ptr->vertices[local_14].u;
    g_LoadedVertices[local_14].v = this_ptr->vertices[local_14].v;
  }
  g_PolygonCount = this_ptr->polygon_count;
  for (local_14 = 0; local_14 < this_ptr->polygon_count; local_14 = local_14 + 1) {
    pSVar4 = this_ptr->polygons + local_14;
    pSVar6 = g_ModelPolygonData + local_14;
    for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar6->polygon_type = pSVar4->polygon_type;
      pSVar4 = (SShapeEditorPolygon *)pSVar4->texture_name;
      pSVar6 = (SShapeEditorPolygon *)pSVar6->texture_name;
    }
    g_ModelPolygonData[local_14].part_assignment = 0;
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
}


// Assembly code:
// 0048f960: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
// 0048f961: PUSH ESI
// 0048f962: PUSH EDI
// 0048f963: PUSH EBP
// 0048f964: MOV EBP,ESP
// 0048f966: SUB ESP,0x4
// 0048f96c: MOV dword ptr [0x01e528a0],0x1
//   XREF to: 01e528a0 (WRITE)
// 0048f976: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f979: ADD ESI,0x1f20c8
// 0048f97f: MOV EDI,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0048f984: PUSH EDI
//   XREF to: 01e50190 (DATA)
// 0048f985: MOV AL,byte ptr [ESI]
//   Label: LAB_0048f985
// 0048f987: MOV byte ptr [EDI],AL
//   XREF to: 01e50190 (WRITE)
//   XREF to: 01e50192 (WRITE)
// 0048f989: CMP AL,0x0
// 0048f98b: JZ 0x0048f99d
//   XREF to: 0048f99d (CONDITIONAL_JUMP)
// 0048f98d: MOV AL,byte ptr [ESI + 0x1]
// 0048f990: ADD ESI,0x2
// 0048f993: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01e50191 (WRITE)
//   XREF to: 01e50193 (WRITE)
// 0048f996: ADD EDI,0x2
// 0048f999: CMP AL,0x0
// 0048f99b: JNZ 0x0048f985
//   XREF to: 0048f985 (CONDITIONAL_JUMP)
// 0048f99d: POP EDI
//   Label: LAB_0048f99d
// 0048f99e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f9a1: MOV ESI,dword ptr [ESI]
// 0048f9a3: MOV dword ptr [0x01626408],ESI
//   XREF to: 01626408 (WRITE)
// 0048f9a9: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048f9b0: JMP 0x0048f9b8
//   XREF to: 0048f9b8 (UNCONDITIONAL_JUMP)
// 0048f9b2: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f9b2
//   XREF to: Stack[-0x14] (READ)
// 0048f9b5: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048f9b8: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f9b8
//   XREF to: Stack[-0x14] (READ)
// 0048f9bb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f9be: CMP EAX,dword ptr [EDX]
// 0048f9c0: JGE 0x0048f9dd
//   XREF to: 0048f9dd (CONDITIONAL_JUMP)
// 0048f9c2: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048f9c6: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f9c9: IMUL ESI,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048f9cd: LEA EDI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0048f9d3: LEA ESI,[EAX + 0x4]
// 0048f9d6: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 0048f9d7: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 0048f9d8: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 0048f9d9: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 0048f9da: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 0048f9db: JMP 0x0048f9b2
//   XREF to: 0048f9b2 (UNCONDITIONAL_JUMP)
// 0048f9dd: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0048f9dd
//   XREF to: Stack[0x4] (READ)
// 0048f9e0: MOV EAX,dword ptr [EAX + 0x186a4]
// 0048f9e6: MOV [0x016e990c],EAX
//   XREF to: 016e990c (WRITE)
// 0048f9eb: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048f9f2: JMP 0x0048f9fa
//   XREF to: 0048f9fa (UNCONDITIONAL_JUMP)
// 0048f9f4: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f9f4
//   XREF to: Stack[-0x14] (READ)
// 0048f9f7: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048f9fa: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f9fa
//   XREF to: Stack[-0x14] (READ)
// 0048f9fd: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fa00: CMP EAX,dword ptr [EDX + 0x186a4]
// 0048fa06: JGE 0x0048fa3f
//   XREF to: 0048fa3f (CONDITIONAL_JUMP)
// 0048fa08: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0048fa0f: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fa12: IMUL ESI,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0048fa19: MOV ECX,0x61
// 0048fa1e: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0048fa24: LEA ESI,[EAX + 0x186a8]
// 0048fa2a: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0048fa2c: IMUL EAX,dword ptr [EBP + -0x4],0x184
//   XREF to: Stack[-0x14] (READ)
// 0048fa33: MOV dword ptr [EAX + 0x16e9a88],0x0
//   XREF to: 016e9a88 (DATA)
// 0048fa3d: JMP 0x0048f9f4
//   XREF to: 0048f9f4 (UNCONDITIONAL_JUMP)
// 0048fa3f: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   Label: LAB_0048fa3f
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 0048fa44: MOV ESP,EBP
// 0048fa46: POP EBP
// 0048fa47: POP EDI
// 0048fa48: POP ESI
// 0048fa49: POP EBX
// 0048fa4a: RET
