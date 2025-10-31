// Name: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// Address: 00482a10
// Address Range: [[00482a10, 00482e3a]]
// Convention: __cdecl
// Signature: int core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart * this_ptr, int triangle_count, int enable_alloc, int source_triangle_count, CDemonTriangle * triangle_data)
// Globals:
//   TerminatedCString s_Too_many_d_d_0062180e
//   TerminatedCString s_core_dpart_cpp_0062181f
//   double g_FloatToFixedPoint256 = 256
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9964
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a88
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dpart.cpp_CDemonPart_alloc_FUN_00482180
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

int __cdecl
core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10
          (CDemonPart *this_ptr,int triangle_count,int enable_alloc,int source_triangle_count,
          CDemonTriangle *triangle_data)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  CVector3i *pCVar4;
  float *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  float *extraout_ECX_05;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000018;
  int iStack_38;
  int local_34;
  int local_30;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int iVar12;
  
  this_ptr->face_count = triangle_count;
  this_ptr->vertex_count = triangle_count * 3;
  this_ptr->vertex_group_size = 1;
  if ((20000 < this_ptr->vertex_count) || (20000 < this_ptr->face_count)) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffecc,"Too many! %d, %d",this_ptr->vertex_count,this_ptr->face_count)
    ;
    g_CurrentLineNumber = 0x267;
    g_CurrentFilename = "..\\core\\dpart.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffed0);
  }
  g_VertexCount = this_ptr->vertex_count;
  iVar12 = this_ptr->face_count;
  g_PolygonCount = iVar12;
  if (source_triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    iVar12 = 0;
    if (0 < (int)triangle_data) {
      iVar5 = 0;
      iVar8 = 0;
      local_18 = 0;
      local_14 = 0;
      do {
        pfVar7 = (float *)(iVar12 * 0x38 + in_stack_00000018);
        pCVar4 = this_ptr->vertex_positions;
        fVar9 = (float10)g_FloatToFixedPoint256;
        fVar10 = (float10)*pfVar7 * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar5,pCVar4));
        iVar12 = (int)ROUND(fVar10);
        *(int *)((int)&pCVar4->x + local_18) = iVar12;
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)pfVar7[1] * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),pCVar4));
        iVar2 = (int)ROUND(fVar10);
        *(int *)((int)&pCVar4->y + iStack_38) = iVar2;
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)pfVar7[2] * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),local_34));
        *(int *)((int)&pCVar4->z + local_34) = (int)ROUND(fVar10);
        fVar10 = (float10)*extraout_ECX * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                             this_ptr->vertex_positions));
        *(int *)(iVar12 + SUB84(dVar11,0)) = (int)ROUND(fVar10);
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)*(float *)(extraout_ECX_00 + 4) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),pCVar4));
        iStack_38 = (int)ROUND(fVar10);
        *(int *)((int)&pCVar4->y + iVar2) = iStack_38;
        pCVar4 = this_ptr->vertex_positions;
        fVar9 = (float10)*(float *)(extraout_ECX_01 + 8) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),local_20));
        *(int *)((int)&pCVar4->z + local_20) = (int)ROUND(fVar9);
        local_34 = (iVar12 + 2) * 0xc;
        fVar9 = (float10)g_FloatToFixedPoint256;
        fVar10 = (float10)*(float *)(extraout_ECX_02 + 0xc) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                             this_ptr->vertex_positions));
        *(int *)(local_34 + SUB84(dVar11,0)) = (int)ROUND(fVar10);
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)*(float *)(extraout_ECX_03 + 0x10) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),pCVar4));
        *(int *)((int)&pCVar4->y + local_30) = (int)ROUND(fVar10);
        pCVar4 = this_ptr->vertex_positions;
        fVar9 = (float10)*(float *)(extraout_ECX_04 + 0x14) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),iVar12 + 2));
        iVar6 = (int)((ulonglong)dVar11 >> 0x20);
        *(int *)((int)&pCVar4->z + iVar12 + 2) = (int)ROUND(fVar9);
        *(undefined4 *)((int)&this_ptr->face_data->material + iVar8) = 0xffffffff;
        *(undefined4 *)((int)&this_ptr->face_data->vertex_index_1 + iVar8) = local_1c;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar8) = iVar2;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar8) = local_20;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + local_14) = *pfVar7;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + local_14) = pfVar7[1];
        *(float *)((int)&g_LoadedVertices[0].vertex.z + local_14) = pfVar7[2];
        g_LoadedVertices[iVar2].vertex.x = *extraout_ECX_05;
        g_LoadedVertices[iVar2].vertex.y = extraout_ECX_05[1];
        g_LoadedVertices[iVar2].vertex.z = extraout_ECX_05[2];
        iVar5 = iVar6 + 0x184;
        g_LoadedVertices[local_20].vertex.x = extraout_ECX_05[3];
        g_LoadedVertices[local_20].vertex.y = extraout_ECX_05[4];
        fVar3 = extraout_ECX_05[5];
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar6 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[local_20].vertex.z = fVar3;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 8) = local_20;
        *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + -0x14) = 3;
        *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0x40) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_coordinates + iVar6) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0x44) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_coordinates + iVar6 + 4) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0x48) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_coordinates + iVar6 + 8) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_coordinates + iVar6 + 0x40) = 0;
        iVar8 = iVar8 + 0x20;
        *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) = local_1c;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 4) = iVar2;
        local_18 = local_18 + 0x24;
        g_ModelPolygonData[0].texture_name[iVar6] = '\0';
        g_ModelPolygonData[0].lightmap_name[iVar6] = '\0';
        local_14 = local_14 + 0x3c;
        iVar12 = (int)ROUND(fVar10) + 1;
      } while (iVar12 < (int)triangle_data);
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar12 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar12 = iVar12 + 1;
      } while (iVar12 < this_ptr->face_count);
    }
  }
  return iVar12;
}


// Assembly code:
// 00482a10: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// 00482a11: PUSH ESI
// 00482a12: PUSH EDI
// 00482a13: PUSH EBP
// 00482a14: SUB ESP,0x124
// 00482a1a: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[0x4] (READ)
// 00482a21: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x8] (READ)
// 00482a28: LEA EAX,[EDX*0x4 + 0x0]
// 00482a2f: SUB EAX,EDX
// 00482a31: MOV dword ptr [EBX + 0x24],EDX
// 00482a34: MOV dword ptr [EBX + 0x20],EAX
// 00482a37: MOV EDX,dword ptr [EBX + 0x20]
// 00482a3a: MOV dword ptr [EBX + 0x28],0x1
// 00482a41: CMP EDX,0x4e20
// 00482a47: JG 0x00482a52
//   XREF to: 00482a52 (CONDITIONAL_JUMP)
// 00482a49: CMP dword ptr [EBX + 0x24],0x4e20
// 00482a50: JLE 0x00482a8c
//   XREF to: 00482a8c (CONDITIONAL_JUMP)
// 00482a52: MOV ESI,dword ptr [EBX + 0x24]
//   Label: LAB_00482a52
// 00482a55: PUSH ESI
// 00482a56: MOV EDI,dword ptr [EBX + 0x20]
// 00482a59: PUSH EDI
// 00482a5a: PUSH 0x62180e
//   XREF to: 0062180e (DATA)
// 00482a5f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x134] (DATA)
// 00482a63: PUSH EAX
// 00482a64: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00482a69: MOV EAX,0x267
// 00482a6e: ADD ESP,0x10
// 00482a71: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00482a76: MOV EAX,ESP
// 00482a78: MOV EBP,0x62181f
//   XREF to: 0062181f (DATA)
// 00482a7d: PUSH EAX
// 00482a7e: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00482a84: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00482a89: ADD ESP,0x4
// 00482a8c: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_00482a8c
// 00482a8f: MOV [0x01626408],EAX
//   XREF to: 01626408 (WRITE)
// 00482a94: MOV EAX,dword ptr [EBX + 0x24]
// 00482a97: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x8] (READ)
// 00482a9e: MOV [0x016e990c],EAX
//   XREF to: 016e990c (WRITE)
// 00482aa3: TEST EDX,EDX
// 00482aa5: JZ 0x00482e30
//   XREF to: 00482e30 (CONDITIONAL_JUMP)
// 00482aab: PUSH EBX
// 00482aac: CALL core_dpart.cpp_CDemonPart_alloc_FUN_00482180
//   XREF to: 00482180 (UNCONDITIONAL_CALL)
// 00482ab1: ADD ESP,0x4
// 00482ab4: XOR ECX,ECX
// 00482ab6: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x8] (READ)
// 00482abd: MOV dword ptr [ESP + 0x11c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00482ac4: TEST ESI,ESI
// 00482ac6: JLE 0x00482e0a
//   XREF to: 00482e0a (CONDITIONAL_JUMP)
// 00482acc: MOV EBP,0xc
// 00482ad1: MOV ECX,dword ptr [ESP + 0x140]
//   XREF to: Stack[0xc] (READ)
// 00482ad8: XOR EAX,EAX
// 00482ada: XOR EDX,EDX
// 00482adc: XOR EDI,EDI
// 00482ade: MOV dword ptr [ESP + 0x118],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00482ae5: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00482aec: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00482af3: ADD ECX,EBP
// 00482af5: IMUL ESI,dword ptr [ESP + 0x11c],0x38
//   Label: LAB_00482af5
//   XREF to: Stack[-0x18] (READ)
// 00482afd: ADD ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[0xc] (READ)
// 00482b04: MOV EBP,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x24] (READ)
// 00482b0b: FLD float ptr [ESI]
// 00482b0d: MOV EAX,dword ptr [EBX + 0x2c]
// 00482b10: FLD double ptr [0x00621836]
//   XREF to: 00621836 (READ)
// 00482b16: FXCH
// 00482b18: FMUL ST1
// 00482b1a: ADD EBP,EAX
// 00482b1c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482b21: FISTP dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (WRITE)
// 00482b28: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (READ)
// 00482b2f: MOV dword ptr [EBP],EAX
// 00482b32: FLD float ptr [ESI + 0x4]
// 00482b35: MOV EBP,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x24] (READ)
// 00482b3c: MOV EAX,dword ptr [EBX + 0x2c]
// 00482b3f: FMUL ST1
// 00482b41: ADD EBP,EAX
// 00482b43: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482b48: FISTP dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (WRITE)
// 00482b4f: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (READ)
// 00482b56: MOV dword ptr [EBP + 0x4],EAX
// 00482b59: FLD float ptr [ESI + 0x8]
// 00482b5c: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x24] (READ)
// 00482b63: MOV EBP,dword ptr [EBX + 0x2c]
// 00482b66: FMUL ST1
// 00482b68: ADD EBP,EAX
// 00482b6a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482b6f: FISTP dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (WRITE)
// 00482b76: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482b7d: MOV dword ptr [EBP + 0x8],EAX
// 00482b80: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x18] (READ)
// 00482b87: FLD float ptr [ECX]
// 00482b89: LEA EAX,[EAX + EAX*0x2]
// 00482b8c: FMUL ST1
// 00482b8e: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00482b95: INC EAX
// 00482b96: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x1c] (READ)
// 00482b9d: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00482ba4: MOV EAX,dword ptr [EBX + 0x2c]
// 00482ba7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482bac: ADD EBP,EAX
// 00482bae: FISTP dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (WRITE)
// 00482bb5: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482bbc: MOV dword ptr [EBP],EAX
// 00482bbf: FLD float ptr [ECX + 0x4]
// 00482bc2: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x1c] (READ)
// 00482bc9: MOV EAX,dword ptr [EBX + 0x2c]
// 00482bcc: FMUL ST1
// 00482bce: ADD EBP,EAX
// 00482bd0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482bd5: FISTP dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (WRITE)
// 00482bdc: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482be3: MOV dword ptr [EBP + 0x4],EAX
// 00482be6: FLD float ptr [ECX + 0x8]
// 00482be9: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x1c] (READ)
// 00482bf0: MOV EBP,dword ptr [EBX + 0x2c]
// 00482bf3: FMULP
// 00482bf5: ADD EBP,EAX
// 00482bf7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482bfc: FISTP dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (WRITE)
// 00482c03: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482c0a: MOV dword ptr [EBP + 0x8],EAX
// 00482c0d: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x28] (READ)
// 00482c14: ADD EAX,0x2
// 00482c17: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00482c1e: IMUL EAX,EAX,0xc
// 00482c21: FLD double ptr [0x00621836]
//   XREF to: 00621836 (READ)
// 00482c27: FLD float ptr [ECX + 0xc]
// 00482c2a: FMUL ST1
// 00482c2c: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00482c33: MOV EBP,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482c3a: MOV EAX,dword ptr [EBX + 0x2c]
// 00482c3d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482c42: ADD EBP,EAX
// 00482c44: FISTP dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (WRITE)
// 00482c4b: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (READ)
// 00482c52: MOV dword ptr [EBP],EAX
// 00482c55: FLD float ptr [ECX + 0x10]
// 00482c58: MOV EBP,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482c5f: MOV EAX,dword ptr [EBX + 0x2c]
// 00482c62: FMUL ST1
// 00482c64: ADD EBP,EAX
// 00482c66: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482c6b: FISTP dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (WRITE)
// 00482c72: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (READ)
// 00482c79: MOV dword ptr [EBP + 0x4],EAX
// 00482c7c: FLD float ptr [ECX + 0x14]
// 00482c7f: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x34] (READ)
// 00482c86: MOV EBP,dword ptr [EBX + 0x2c]
// 00482c89: FMULP
// 00482c8b: ADD EBP,EAX
// 00482c8d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00482c92: FISTP dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (WRITE)
// 00482c99: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x14] (READ)
// 00482ca0: MOV dword ptr [EBP + 0x8],EAX
// 00482ca3: MOV EAX,dword ptr [EBX + 0x34]
// 00482ca6: MOV dword ptr [EDI + EAX*0x1 + 0x1c],0xffffffff
// 00482cae: MOV EAX,dword ptr [EBX + 0x34]
// 00482cb1: MOV EBP,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x28] (READ)
// 00482cb8: MOV dword ptr [EDI + EAX*0x1 + 0x10],EBP
// 00482cbc: MOV EAX,dword ptr [EBX + 0x34]
// 00482cbf: MOV EBP,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x30] (READ)
// 00482cc6: MOV dword ptr [EDI + EAX*0x1 + 0x14],EBP
// 00482cca: MOV EAX,dword ptr [EBX + 0x34]
// 00482ccd: MOV EBP,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x2c] (READ)
// 00482cd4: MOV dword ptr [EDI + EAX*0x1 + 0x18],EBP
// 00482cd8: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x20] (READ)
// 00482cdf: FLD float ptr [ESI]
// 00482ce1: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00482ce7: FLD float ptr [ESI + 0x4]
// 00482cea: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00482cf0: FLD float ptr [ESI + 0x8]
// 00482cf3: MOV ESI,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x30] (READ)
// 00482cfa: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00482d00: IMUL EAX,ESI,0x14
// 00482d03: MOV ESI,dword ptr [ECX]
// 00482d05: MOV dword ptr [EAX + 0x162640c],ESI
//   XREF to: 0162640c (DATA)
// 00482d0b: MOV ESI,dword ptr [ECX + 0x4]
// 00482d0e: MOV dword ptr [EAX + 0x1626410],ESI
//   XREF to: 01626410 (DATA)
// 00482d14: MOV ESI,dword ptr [ECX + 0x8]
// 00482d17: MOV dword ptr [EAX + 0x1626414],ESI
//   XREF to: 01626414 (DATA)
// 00482d1d: IMUL EAX,EBP,0x14
// 00482d20: ADD EDX,0x184
// 00482d26: MOV ESI,0x1
// 00482d2b: FLD float ptr [ECX + 0xc]
// 00482d2e: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00482d34: FLD float ptr [ECX + 0x10]
// 00482d37: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00482d3d: FLD float ptr [ECX + 0x14]
// 00482d40: MOV dword ptr [EDX + 0x16e978c],ESI
//   XREF to: 016e9910 (WRITE)
// 00482d46: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00482d4c: MOV dword ptr [EDX + 0x16e984c],EBP
//   XREF to: 016e99d0 (WRITE)
// 00482d52: MOV EAX,0x3
// 00482d57: XOR EBP,EBP
// 00482d59: MOV dword ptr [EDX + 0x16e9830],EAX
//   XREF to: 016e99b4 (WRITE)
// 00482d5f: MOV dword ptr [EDX + 0x16e9884],EBP
//   XREF to: 016e9a08 (WRITE)
// 00482d65: MOV dword ptr [EDX + 0x16e98c4],EBP
//   XREF to: 016e9a48 (WRITE)
// 00482d6b: MOV dword ptr [EDX + 0x16e9888],EBP
//   XREF to: 016e9a0c (WRITE)
// 00482d71: MOV dword ptr [EDX + 0x16e98c8],EBP
//   XREF to: 016e9a4c (WRITE)
// 00482d77: MOV dword ptr [EDX + 0x16e988c],EBP
//   XREF to: 016e9a10 (WRITE)
// 00482d7d: MOV dword ptr [EDX + 0x16e98cc],EBP
//   XREF to: 016e9a50 (WRITE)
// 00482d83: ADD ECX,0x38
// 00482d86: MOV dword ptr [EDX + 0x16e9904],EBP
//   XREF to: 016e9a88 (WRITE)
// 00482d8c: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x28] (READ)
// 00482d93: ADD EDI,0x20
// 00482d96: MOV dword ptr [EDX + 0x16e9844],EAX
//   XREF to: 016e99c8 (WRITE)
// 00482d9c: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x30] (READ)
// 00482da3: MOV ESI,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x24] (READ)
// 00482daa: MOV dword ptr [EDX + 0x16e9848],EAX
//   XREF to: 016e99cc (WRITE)
// 00482db0: XOR AH,AH
// 00482db2: ADD ESI,0x24
// 00482db5: MOV byte ptr [EDX + 0x16e9790],AH
//   XREF to: 016e9914 (WRITE)
// 00482dbb: XOR AL,AL
// 00482dbd: MOV EBP,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x20] (READ)
// 00482dc4: MOV byte ptr [EDX + 0x16e97e0],AL
//   XREF to: 016e9964 (WRITE)
// 00482dca: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x1c] (READ)
// 00482dd1: MOV dword ptr [ESP + 0x110],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00482dd8: ADD EAX,0x24
// 00482ddb: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x8] (READ)
// 00482de2: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00482de9: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x18] (READ)
// 00482df0: ADD EBP,0x3c
// 00482df3: INC EAX
// 00482df4: MOV dword ptr [ESP + 0x114],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00482dfb: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00482e02: CMP EAX,ESI
// 00482e04: JL 0x00482af5
//   XREF to: 00482af5 (CONDITIONAL_JUMP)
// 00482e0a: PUSH 0x1
//   Label: LAB_00482e0a
// 00482e0c: PUSH 0x1
// 00482e0e: PUSH EBX
// 00482e0f: CALL core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
//   XREF to: 00482e40 (UNCONDITIONAL_CALL)
// 00482e14: ADD ESP,0xc
// 00482e17: MOV EDI,dword ptr [EBX + 0x24]
// 00482e1a: XOR EAX,EAX
// 00482e1c: TEST EDI,EDI
// 00482e1e: JLE 0x00482e30
//   XREF to: 00482e30 (CONDITIONAL_JUMP)
// 00482e20: INC EAX
//   Label: LAB_00482e20
// 00482e21: CMP EAX,dword ptr [EBX + 0x24]
// 00482e24: JL 0x00482e20
//   XREF to: 00482e20 (CONDITIONAL_JUMP)
// 00482e26: LEA EAX,[EAX]
// 00482e2c: LEA EDX,[EDX]
// 00482e30: ADD ESP,0x124
//   Label: LAB_00482e30
// 00482e36: POP EBP
// 00482e37: POP EDI
// 00482e38: POP ESI
// 00482e39: POP EBX
// 00482e3a: RET
