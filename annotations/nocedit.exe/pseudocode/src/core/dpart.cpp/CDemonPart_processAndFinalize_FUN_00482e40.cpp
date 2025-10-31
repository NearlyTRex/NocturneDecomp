// Name: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
// Address: 00482e40
// Address Range: [[00482e40, 00482fa3]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart * this_ptr, int enable_vertex_reduction, int enable_polygon_optimize)
// Cross-references:
//   core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10 (00482a10) at 00482e0f [UNCONDITIONAL_CALL]
// Globals:
//   double g_FloatToFixedPoint256v2 = 256
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626420
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e99d4
//   undefined4 DAT_016e9b38
//   undefined4 DAT_016e9b4c
//   undefined4 DAT_016e9b50
//   undefined4 DAT_016e9b54
//   undefined4 g_ModelPolygonData[1].vertex_indices[3]
// Function calls:
//   core_dpart.cpp_CDemonPart_alloc_FUN_00482180
//   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
//   core_dpart.cpp_CDemonPart_free_FUN_004822b0
//   crt_math.c_round_FUN_005fe6b0
//   shape_design.c_calculateVertexNormals_FUN_0045be40
//   shape_design.c_optimizePolygonMesh_FUN_004658e0
//   shape_design.c_vertexReducer_FUN_00467850

#include "nocturne.h"

void __cdecl
core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40
          (CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)

{
  CVector3i *pCVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  int in_stack_00000014;
  
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  if (enable_polygon_optimize != 0) {
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
  }
  if (in_stack_00000014 != 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  this_ptr->vertex_count = g_VertexCount;
  iVar4 = 0;
  this_ptr->face_count = g_PolygonCount;
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  if (0 < this_ptr->vertex_count) {
    fVar5 = (float10)g_FloatToFixedPoint256v2;
    iVar2 = 0;
    iVar3 = 0;
    do {
      pCVar1 = this_ptr->vertex_positions;
      fVar6 = (float10)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar2) * fVar5;
      dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,pCVar1));
      iVar2 = (int)((ulonglong)dVar7 >> 0x20);
      *(int *)((int)&pCVar1->x + iVar3) = (int)ROUND(fVar6);
      pCVar1 = this_ptr->vertex_positions;
      fVar6 = (float10)*(float *)((int)&g_LoadedVertices[0].vertex.y + extraout_ECX) * fVar5;
      dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2,pCVar1));
      iVar3 = (int)((ulonglong)dVar7 >> 0x20);
      *(int *)((int)&pCVar1->y + iVar2) = (int)ROUND(fVar6);
      pCVar1 = this_ptr->vertex_positions;
      fVar6 = (float10)*(float *)((int)&g_LoadedVertices[0].vertex.z + extraout_ECX_00) * fVar5;
      dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,pCVar1));
      iVar2 = extraout_ECX_01 + 0x14;
      *(int *)((int)&pCVar1->z + iVar3) = (int)ROUND(fVar6);
      iVar4 = iVar4 + 1;
      iVar3 = (int)((ulonglong)dVar7 >> 0x20) + 0xc;
    } while (iVar4 < this_ptr->vertex_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->face_count) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      *(undefined4 *)((int)&this_ptr->face_data->vertex_index_1 + iVar2) =
           *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar3);
      *(undefined4 *)((int)&this_ptr->face_data->vertex_index_2 + iVar2) =
           *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + 4);
      *(undefined4 *)((int)&this_ptr->face_data->vertex_index_3 + iVar2) =
           *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + 8);
      if (*(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + -0x14) == 4) {
        *(undefined4 *)((int)&this_ptr->face_data->material + iVar2) =
             *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + 0xc);
      }
      else {
        *(undefined4 *)((int)&this_ptr->face_data->material + iVar2) = 0xffffffff;
      }
      iVar2 = iVar2 + 0x20;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x184;
    } while (iVar4 < this_ptr->face_count);
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  return;
}


// Assembly code:
// 00482e40: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
// 00482e41: PUSH ESI
// 00482e42: PUSH EDI
// 00482e43: PUSH EBP
// 00482e44: SUB ESP,0x4
// 00482e47: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00482e4b: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 00482e50: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0x8] (READ)
// 00482e55: JNZ 0x00482f7e
//   XREF to: 00482f7e (CONDITIONAL_JUMP)
// 00482e5b: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_00482e5b
//   XREF to: Stack[0xc] (READ)
// 00482e60: JZ 0x00482e73
//   XREF to: 00482e73 (CONDITIONAL_JUMP)
// 00482e62: PUSH -0x1
// 00482e64: PUSH 0x0
// 00482e66: PUSH 0x3f800000
// 00482e6b: CALL shape_design.c_optimizePolygonMesh_FUN_004658e0
//   XREF to: 004658e0 (UNCONDITIONAL_CALL)
// 00482e70: ADD ESP,0xc
// 00482e73: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   Label: LAB_00482e73
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 00482e78: PUSH EBX
// 00482e79: CALL core_dpart.cpp_CDemonPart_free_FUN_004822b0
//   XREF to: 004822b0 (UNCONDITIONAL_CALL)
// 00482e7e: ADD ESP,0x4
// 00482e81: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00482e86: PUSH EBX
// 00482e87: MOV dword ptr [EBX + 0x20],EAX
// 00482e8a: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 00482e8f: XOR ESI,ESI
// 00482e91: MOV dword ptr [EBX + 0x24],EAX
// 00482e94: CALL core_dpart.cpp_CDemonPart_alloc_FUN_00482180
//   XREF to: 00482180 (UNCONDITIONAL_CALL)
// 00482e99: MOV EDI,dword ptr [EBX + 0x20]
// 00482e9c: ADD ESP,0x4
// 00482e9f: TEST EDI,EDI
// 00482ea1: JLE 0x00482f10
//   XREF to: 00482f10 (CONDITIONAL_JUMP)
// 00482ea3: FLD double ptr [0x0062183e]
//   XREF to: 0062183e (READ)
// 00482ea9: XOR ECX,ECX
// 00482eab: XOR EDX,EDX
// 00482ead: FLD float ptr [ECX + 0x162640c]
//   Label: LAB_00482ead
//   XREF to: 0162640c (READ)
//   XREF to: 01626420 (READ)
// 00482eb3: MOV EAX,dword ptr [EBX + 0x2c]
// 00482eb6: FMUL ST1
// 00482eb8: LEA EDI,[EAX + EDX*0x1]
// 00482ebb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482ec0: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00482ec3: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00482ec6: MOV dword ptr [EDI],EAX
// 00482ec8: FLD float ptr [ECX + 0x1626410]
//   XREF to: 01626410 (READ)
// 00482ece: MOV EAX,dword ptr [EBX + 0x2c]
// 00482ed1: FMUL ST1
// 00482ed3: LEA EDI,[EAX + EDX*0x1]
// 00482ed6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482edb: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00482ede: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00482ee1: MOV dword ptr [EDI + 0x4],EAX
// 00482ee4: FLD float ptr [ECX + 0x1626414]
//   XREF to: 01626414 (READ)
// 00482eea: MOV EAX,dword ptr [EBX + 0x2c]
// 00482eed: FMUL ST1
// 00482eef: LEA EDI,[EAX + EDX*0x1]
// 00482ef2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482ef7: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00482efa: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00482efd: ADD ECX,0x14
// 00482f00: MOV dword ptr [EDI + 0x8],EAX
// 00482f03: INC ESI
// 00482f04: MOV EBP,dword ptr [EBX + 0x20]
// 00482f07: ADD EDX,0xc
// 00482f0a: CMP ESI,EBP
// 00482f0c: JL 0x00482ead
//   XREF to: 00482ead (CONDITIONAL_JUMP)
// 00482f0e: FSTP ST0
// 00482f10: MOV EAX,dword ptr [EBX + 0x24]
//   Label: LAB_00482f10
// 00482f13: XOR ECX,ECX
// 00482f15: TEST EAX,EAX
// 00482f17: JLE 0x00482f6d
//   XREF to: 00482f6d (CONDITIONAL_JUMP)
// 00482f19: XOR EDX,EDX
// 00482f1b: XOR EAX,EAX
// 00482f1d: MOV ESI,dword ptr [EBX + 0x34]
//   Label: LAB_00482f1d
// 00482f20: MOV EDI,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (READ)
//   XREF to: 016e9b4c (READ)
// 00482f26: MOV dword ptr [ESI + EAX*0x1 + 0x10],EDI
// 00482f2a: MOV ESI,dword ptr [EBX + 0x34]
// 00482f2d: LEA EDI,[ESI + EAX*0x1]
// 00482f30: MOV ESI,dword ptr [EDX + 0x16e99cc]
//   XREF to: 016e99cc (READ)
//   XREF to: 016e9b50 (READ)
// 00482f36: MOV dword ptr [EDI + 0x14],ESI
// 00482f39: MOV EDI,dword ptr [EBX + 0x34]
// 00482f3c: MOV ESI,dword ptr [EDX + 0x16e99d0]
//   XREF to: 016e99d0 (READ)
//   XREF to: 016e9b54 (READ)
// 00482f42: MOV dword ptr [EDI + EAX*0x1 + 0x18],ESI
// 00482f46: CMP dword ptr [EDX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (READ)
//   XREF to: 016e9b38 (READ)
// 00482f4d: JNZ 0x00482f97
//   XREF to: 00482f97 (CONDITIONAL_JUMP)
// 00482f4f: MOV ESI,dword ptr [EBX + 0x34]
// 00482f52: MOV EDI,dword ptr [EDX + 0x16e99d4]
//   XREF to: 016e99d4 (READ)
//   XREF to: 016e9b58 (READ)
// 00482f58: MOV dword ptr [ESI + EAX*0x1 + 0x1c],EDI
// 00482f5c: ADD EAX,0x20
//   Label: LAB_00482f5c
// 00482f5f: INC ECX
// 00482f60: MOV ESI,dword ptr [EBX + 0x24]
// 00482f63: ADD EDX,0x184
// 00482f69: CMP ECX,ESI
// 00482f6b: JL 0x00482f1d
//   XREF to: 00482f1d (CONDITIONAL_JUMP)
// 00482f6d: PUSH EBX
//   Label: LAB_00482f6d
// 00482f6e: CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
//   XREF to: 004824f0 (UNCONDITIONAL_CALL)
// 00482f73: ADD ESP,0x4
// 00482f76: ADD ESP,0x4
// 00482f79: POP EBP
// 00482f7a: POP EDI
// 00482f7b: POP ESI
// 00482f7c: POP EBX
// 00482f7d: RET
// 00482f7e: PUSH -0x1
//   Label: LAB_00482f7e
// 00482f80: PUSH 0xbf800000
// 00482f85: PUSH 0x3c23d70a
// 00482f8a: CALL shape_design.c_vertexReducer_FUN_00467850
//   XREF to: 00467850 (UNCONDITIONAL_CALL)
// 00482f8f: ADD ESP,0xc
// 00482f92: JMP 0x00482e5b
//   XREF to: 00482e5b (UNCONDITIONAL_JUMP)
// 00482f97: MOV ESI,dword ptr [EBX + 0x34]
//   Label: LAB_00482f97
// 00482f9a: MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff
// 00482fa2: JMP 0x00482f5c
//   XREF to: 00482f5c (UNCONDITIONAL_JUMP)
