// Name: shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
// Address: 0048f770
// Address Range: [[0048f770, 0048f958]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel * this_ptr, uint part_index)
// Cross-references:
//   shape_design.c_smoothMesh_FUN_0046ed00 (0046ed00) at 0046ed14 [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053ef12 [UNCONDITIONAL_CALL]
// Globals:
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
//   int[5000] g_VertexIdRegistry
// Function calls:
//   shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
//   shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660

#include "nocturne.h"

void __cdecl
shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel *this_ptr,uint part_index)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  SShapeEditorPolygon *pSVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  SShapeEditorPolygon *pSVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  int local_18;
  int local_14;
  
  bVar12 = 0;
  this_ptr->vertex_count = 0;
  this_ptr->polygon_count = 0;
  pcVar4 = g_ModelPartNames[part_index].name;
  pcVar8 = this_ptr->model_name;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    if (g_ModelPolygonData[local_18].part_assignment == part_index) {
      pSVar5 = g_ModelPolygonData + local_18;
      pSVar9 = this_ptr->polygons + this_ptr->polygon_count;
      for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
        pSVar9->polygon_type = pSVar5->polygon_type;
        pSVar5 = (SShapeEditorPolygon *)pSVar5->texture_name;
        pSVar9 = (SShapeEditorPolygon *)pSVar9->texture_name;
      }
      this_ptr->polygon_count = this_ptr->polygon_count + 1;
    }
  }
  for (local_18 = 0; local_18 < this_ptr->polygon_count; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < (int)this_ptr->polygons[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      shape_dsemodel_cpp_CDSEModel_logVertex_FUN_0048f660
                (this_ptr,this_ptr->polygons[local_18].vertex_indices[local_14]);
    }
  }
  for (local_18 = 0; local_18 < this_ptr->polygon_count; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < (int)this_ptr->polygons[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      uVar2 = shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0
                        (this_ptr,this_ptr->polygons[local_18].vertex_indices[local_14]);
      this_ptr->polygons[local_18].vertex_indices[local_14] = uVar2;
    }
  }
  for (local_18 = 0; local_18 < this_ptr->vertex_count; local_18 = local_18 + 1) {
    puVar10 = (undefined4 *)((int)this_ptr + (uint)bVar12 * -8 + local_18 * 0x14 + 8);
    puVar6 = (undefined4 *)(g_VertexIdRegistry[local_18] * 0x14 + 0x1626410 + (uint)bVar12 * -8);
    this_ptr->vertices[local_18].vertex.x = g_LoadedVertices[g_VertexIdRegistry[local_18]].vertex.x;
    puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
    *puVar10 = *puVar6;
    *puVar11 = *puVar7;
    puVar11[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
    (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
         (puVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  }
  return;
}


// Assembly code:
// 0048f770: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
// 0048f771: PUSH ESI
// 0048f772: PUSH EDI
// 0048f773: PUSH EBP
// 0048f774: MOV EBP,ESP
// 0048f776: SUB ESP,0x8
// 0048f77c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f77f: MOV dword ptr [ESI],0x0
// 0048f785: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f788: MOV dword ptr [ESI + 0x186a4],0x0
// 0048f792: IMUL ESI,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 0048f796: MOV EDI,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0048f79b: ADD ESI,EDI
// 0048f79d: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f7a0: ADD EDI,0x1f20c8
// 0048f7a6: PUSH EDI
// 0048f7a7: MOV AL,byte ptr [ESI]
//   Label: LAB_0048f7a7
//   XREF to: 01e50190 (DATA)
//   XREF to: 01e50192 (DATA)
// 0048f7a9: MOV byte ptr [EDI],AL
// 0048f7ab: CMP AL,0x0
// 0048f7ad: JZ 0x0048f7bf
//   XREF to: 0048f7bf (CONDITIONAL_JUMP)
// 0048f7af: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 01e50191 (DATA)
//   XREF to: 01e50193 (DATA)
// 0048f7b2: ADD ESI,0x2
// 0048f7b5: MOV byte ptr [EDI + 0x1],AL
// 0048f7b8: ADD EDI,0x2
// 0048f7bb: CMP AL,0x0
// 0048f7bd: JNZ 0x0048f7a7
//   XREF to: 0048f7a7 (CONDITIONAL_JUMP)
// 0048f7bf: POP EDI
//   Label: LAB_0048f7bf
// 0048f7c0: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0048f7c7: JMP 0x0048f7cf
//   XREF to: 0048f7cf (UNCONDITIONAL_JUMP)
// 0048f7c9: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f7c9
//   XREF to: Stack[-0x18] (READ)
// 0048f7cc: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0048f7cf: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f7cf
//   XREF to: Stack[-0x18] (READ)
// 0048f7d2: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0048f7d8: JGE 0x0048f823
//   XREF to: 0048f823 (CONDITIONAL_JUMP)
// 0048f7da: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0048f7e1: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0048f7e7: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048f7ea: JZ 0x0048f7ee
//   XREF to: 0048f7ee (CONDITIONAL_JUMP)
// 0048f7ec: JMP 0x0048f821
//   XREF to: 0048f821 (UNCONDITIONAL_JUMP)
// 0048f7ee: IMUL ESI,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0048f7ee
//   XREF to: Stack[-0x18] (READ)
// 0048f7f5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f7f8: IMUL EAX,dword ptr [EAX + 0x186a4],0x184
// 0048f802: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f805: MOV ECX,0x61
// 0048f80a: LEA EDI,[EAX + 0x186a8]
// 0048f810: LEA ESI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 0048f816: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0048f818: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f81b: INC dword ptr [EAX + 0x186a4]
// 0048f821: JMP 0x0048f7c9
//   Label: LAB_0048f821
//   XREF to: 0048f7c9 (UNCONDITIONAL_JUMP)
// 0048f823: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_0048f823
//   XREF to: Stack[-0x18] (WRITE)
// 0048f82a: JMP 0x0048f832
//   XREF to: 0048f832 (UNCONDITIONAL_JUMP)
// 0048f82c: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f82c
//   XREF to: Stack[-0x18] (READ)
// 0048f82f: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0048f832: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f832
//   XREF to: Stack[-0x18] (READ)
// 0048f835: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f838: CMP EAX,dword ptr [EDX + 0x186a4]
// 0048f83e: JGE 0x0048f890
//   XREF to: 0048f890 (CONDITIONAL_JUMP)
// 0048f840: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048f847: JMP 0x0048f84f
//   XREF to: 0048f84f (UNCONDITIONAL_JUMP)
// 0048f849: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f849
//   XREF to: Stack[-0x14] (READ)
// 0048f84c: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048f84f: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0048f84f
//   XREF to: Stack[-0x18] (READ)
// 0048f856: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f859: ADD EDX,EAX
// 0048f85b: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f85e: CMP EAX,dword ptr [EDX + 0x1874c]
// 0048f864: JGE 0x0048f88e
//   XREF to: 0048f88e (CONDITIONAL_JUMP)
// 0048f866: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0048f86d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f870: ADD EDX,EAX
// 0048f872: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f875: SHL EAX,0x2
// 0048f878: ADD EAX,EDX
// 0048f87a: PUSH dword ptr [EAX + 0x18760]
// 0048f880: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f883: PUSH EAX
// 0048f884: CALL shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
//   XREF to: 0048f660 (UNCONDITIONAL_CALL)
// 0048f889: ADD ESP,0x8
// 0048f88c: JMP 0x0048f849
//   XREF to: 0048f849 (UNCONDITIONAL_JUMP)
// 0048f88e: JMP 0x0048f82c
//   Label: LAB_0048f88e
//   XREF to: 0048f82c (UNCONDITIONAL_JUMP)
// 0048f890: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_0048f890
//   XREF to: Stack[-0x18] (WRITE)
// 0048f897: JMP 0x0048f89f
//   XREF to: 0048f89f (UNCONDITIONAL_JUMP)
// 0048f899: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f899
//   XREF to: Stack[-0x18] (READ)
// 0048f89c: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0048f89f: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f89f
//   XREF to: Stack[-0x18] (READ)
// 0048f8a2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f8a5: CMP EAX,dword ptr [EDX + 0x186a4]
// 0048f8ab: JGE 0x0048f915
//   XREF to: 0048f915 (CONDITIONAL_JUMP)
// 0048f8ad: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048f8b4: JMP 0x0048f8bc
//   XREF to: 0048f8bc (UNCONDITIONAL_JUMP)
// 0048f8b6: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048f8b6
//   XREF to: Stack[-0x14] (READ)
// 0048f8b9: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048f8bc: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0048f8bc
//   XREF to: Stack[-0x18] (READ)
// 0048f8c3: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f8c6: ADD EDX,EAX
// 0048f8c8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f8cb: CMP EAX,dword ptr [EDX + 0x1874c]
// 0048f8d1: JGE 0x0048f913
//   XREF to: 0048f913 (CONDITIONAL_JUMP)
// 0048f8d3: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0048f8da: ADD EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f8dd: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f8e0: SHL EAX,0x2
// 0048f8e3: ADD EAX,EDX
// 0048f8e5: PUSH dword ptr [EAX + 0x18760]
// 0048f8eb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f8ee: PUSH EAX
// 0048f8ef: CALL shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
//   XREF to: 0048f6f0 (UNCONDITIONAL_CALL)
// 0048f8f4: ADD ESP,0x8
// 0048f8f7: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0048f8fe: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f901: ADD ECX,EDX
// 0048f903: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0048f906: SHL EDX,0x2
// 0048f909: ADD EDX,ECX
// 0048f90b: MOV dword ptr [EDX + 0x18760],EAX
// 0048f911: JMP 0x0048f8b6
//   XREF to: 0048f8b6 (UNCONDITIONAL_JUMP)
// 0048f913: JMP 0x0048f899
//   Label: LAB_0048f913
//   XREF to: 0048f899 (UNCONDITIONAL_JUMP)
// 0048f915: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_0048f915
//   XREF to: Stack[-0x18] (WRITE)
// 0048f91c: JMP 0x0048f924
//   XREF to: 0048f924 (UNCONDITIONAL_JUMP)
// 0048f91e: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f91e
//   XREF to: Stack[-0x18] (READ)
// 0048f921: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0048f924: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0048f924
//   XREF to: Stack[-0x18] (READ)
// 0048f927: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f92a: CMP EAX,dword ptr [EDX]
// 0048f92c: JGE 0x0048f952
//   XREF to: 0048f952 (CONDITIONAL_JUMP)
// 0048f92e: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048f931: SHL EAX,0x2
// 0048f934: IMUL ESI,dword ptr [EAX + 0x2c9b328],0x14
//   XREF to: 02c9b328 (DATA)
// 0048f93b: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 0048f93f: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048f942: LEA EDI,[EAX + 0x4]
// 0048f945: LEA ESI,[ESI + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0048f94b: MOVSD ES:EDI,ESI
//   XREF to: 0162640c (DATA)
// 0048f94c: MOVSD ES:EDI,ESI
//   XREF to: 01626410 (DATA)
// 0048f94d: MOVSD ES:EDI,ESI
//   XREF to: 01626414 (DATA)
// 0048f94e: MOVSD ES:EDI,ESI
//   XREF to: 01626418 (DATA)
// 0048f94f: MOVSD ES:EDI,ESI
//   XREF to: 0162641c (DATA)
// 0048f950: JMP 0x0048f91e
//   XREF to: 0048f91e (UNCONDITIONAL_JUMP)
// 0048f952: MOV ESP,EBP
//   Label: LAB_0048f952
// 0048f954: POP EBP
// 0048f955: POP EDI
// 0048f956: POP ESI
// 0048f957: POP EBX
// 0048f958: RET
