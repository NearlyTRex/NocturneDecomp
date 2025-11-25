// Name: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047ecf0]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e3da [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_00620eb3
//   TerminatedCString s_CKeyFramedModel_exportTo_00620ec6
//   double DOUBLE_00620efb = 256
//   double DOUBLE_00620f03 = 65536
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626420
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
//   undefined4 DAT_016e9a98
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

{
  int iVar1;
  char cVar2;
  CVector3i **ppCVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  int local_24;
  int local_14;
  char *local_10;
  int local_c;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  iVar6 = 0;
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  if (0 < this_ptr->vertex_count) {
    fVar10 = (float10)DOUBLE_00620efb;
    iVar4 = 0;
    iVar5 = 0;
    do {
      ppCVar3 = this_ptr->vertex_list;
      fVar11 = (float10)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar4) * fVar10;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar5,ppCVar3));
      iVar4 = (int)((ulonglong)dVar12 >> 0x20);
      *(int *)((int)ppCVar3 + iVar5) = (int)ROUND(fVar11);
      ppCVar3 = this_ptr->vertex_list;
      fVar11 = (float10)*(float *)((int)&g_LoadedVertices[0].vertex.y + extraout_ECX) * fVar10;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar4,ppCVar3));
      iVar5 = (int)((ulonglong)dVar12 >> 0x20);
      local_24 = (int)ROUND(fVar11);
      *(int *)((int)ppCVar3 + iVar4 + 4) = local_24;
      ppCVar3 = this_ptr->vertex_list;
      fVar11 = (float10)*(float *)((int)&g_LoadedVertices[0].vertex.z + extraout_ECX_00) * fVar10;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar5,ppCVar3));
      iVar4 = extraout_ECX_01 + 0x14;
      *(int *)((int)ppCVar3 + iVar5 + 8) = (int)ROUND(fVar11);
      iVar6 = iVar6 + 1;
      iVar5 = (int)((ulonglong)dVar12 >> 0x20) + 0xc;
    } while (iVar6 < this_ptr->vertex_count);
  }
  this_ptr->texture_count = 0;
  iVar6 = 0;
  if (0 < this_ptr->poly_count) {
    local_c = 0;
    local_14 = 0;
    local_10 = g_ModelPolygonData[0].texture_name;
    do {
      iVar4 = iVar6 * 0x184;
      iVar7 = 0;
      *(uint *)((int)this_ptr->poly_vert_list + local_c + 4) =
           g_ModelPolygonData[iVar6].vertex_indices_count;
      iVar5 = 0;
      if (0 < (int)g_ModelPolygonData[iVar6].vertex_indices_count) {
        fVar10 = (float10)DOUBLE_00620f03;
        do {
          *(undefined4 *)((int)this_ptr->poly_vert_list + iVar5 + local_c + 0x18) =
               *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar4);
          fVar11 = (float10)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar4) * fVar10;
          dVar12 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(iVar4,(int)this_ptr->poly_vert_list + iVar5 + local_c
                                              ));
          iVar4 = (int)((ulonglong)dVar12 >> 0x20);
          iVar1 = (int)ROUND(fVar11);
          *(int *)(local_24 + 0x1c) = iVar1;
          fVar11 = (float10)*(float *)((int)g_ModelPolygonData[0].uv_v + iVar4) * fVar10;
          dVar12 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(iVar4,(int)this_ptr->poly_vert_list + local_c));
          *(int *)(SUB84(dVar12,0) + extraout_ECX_02 + 0x20) = (int)ROUND(fVar11);
          iVar4 = (int)((ulonglong)dVar12 >> 0x20) + 4;
          iVar7 = iVar7 + 1;
          iVar5 = extraout_ECX_02 + 0xc;
          local_24 = iVar1;
        } while (iVar7 < (int)g_ModelPolygonData[iVar6].vertex_indices_count);
      }
      iVar4 = 0;
      if (0 < this_ptr->texture_count) {
        pcVar8 = this_ptr->texture_list[0].base.texture_name;
        do {
          iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,local_10);
          if (iVar5 == 0) break;
          iVar4 = iVar4 + 1;
          pcVar8 = pcVar8 + 0x48;
        } while (iVar4 < this_ptr->texture_count);
      }
      if (this_ptr->texture_count <= iVar4) {
        if (299 < iVar4) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0xe45;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE() - Too many textures!");
        }
        pcVar9 = this_ptr->texture_list[iVar4].base.texture_name;
        pcVar8 = local_10;
        do {
          cVar2 = *pcVar8;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      local_c = local_c + 0x48;
      iVar6 = iVar6 + 1;
      *(int *)((int)this_ptr->poly_texture_index_list + local_14) = iVar4;
      local_14 = local_14 + 4;
      local_10 = local_10 + 0x184;
    } while (iVar6 < this_ptr->poly_count);
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}


// Assembly code:
// 0047ea10: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// 0047ea11: PUSH EBP
// 0047ea12: SUB ESP,0x20
// 0047ea15: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047ea19: PUSH EBX
// 0047ea1a: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 0047ea1f: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0047ea25: ADD ESP,0x4
// 0047ea28: CMP EDX,0x1
// 0047ea2b: JL 0x0047ea38
//   XREF to: 0047ea38 (CONDITIONAL_JUMP)
// 0047ea2d: MOV ECX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0047ea33: CMP ECX,0x1
// 0047ea36: JGE 0x0047ea3e
//   XREF to: 0047ea3e (CONDITIONAL_JUMP)
// 0047ea38: ADD ESP,0x20
//   Label: LAB_0047ea38
// 0047ea3b: POP EBP
// 0047ea3c: POP EBX
// 0047ea3d: RET
// 0047ea3e: PUSH EDI
//   Label: LAB_0047ea3e
// 0047ea3f: PUSH ESI
// 0047ea40: PUSH 0x1
// 0047ea42: PUSH 0x1
// 0047ea44: PUSH 0x12c
// 0047ea49: PUSH ECX
// 0047ea4a: PUSH EDX
// 0047ea4b: PUSH EBX
// 0047ea4c: XOR ESI,ESI
// 0047ea4e: CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   XREF to: 00477bf0 (UNCONDITIONAL_CALL)
// 0047ea53: MOV EBP,dword ptr [EBX + 0x104]
// 0047ea59: ADD ESP,0x18
// 0047ea5c: TEST EBP,EBP
// 0047ea5e: JLE 0x0047eae3
//   XREF to: 0047eae3 (CONDITIONAL_JUMP)
// 0047ea64: FLD double ptr [0x00620efb]
//   XREF to: 00620efb (READ)
// 0047ea6a: XOR ECX,ECX
// 0047ea6c: XOR EDX,EDX
// 0047ea6e: FLD float ptr [ECX + 0x162640c]
//   Label: LAB_0047ea6e
//   XREF to: 0162640c (READ)
//   XREF to: 01626420 (READ)
// 0047ea74: MOV EAX,dword ptr [EBX + 0x10c]
// 0047ea7a: FMUL ST1
// 0047ea7c: LEA EDI,[EAX + EDX*0x1]
// 0047ea7f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047ea84: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0047ea88: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047ea8c: MOV dword ptr [EDI],EAX
// 0047ea8e: FLD float ptr [ECX + 0x1626410]
//   XREF to: 01626410 (READ)
// 0047ea94: MOV EAX,dword ptr [EBX + 0x10c]
// 0047ea9a: FMUL ST1
// 0047ea9c: LEA EDI,[EAX + EDX*0x1]
// 0047ea9f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047eaa4: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0047eaa8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047eaac: MOV dword ptr [EDI + 0x4],EAX
// 0047eaaf: FLD float ptr [ECX + 0x1626414]
//   XREF to: 01626414 (READ)
// 0047eab5: MOV EAX,dword ptr [EBX + 0x10c]
// 0047eabb: FMUL ST1
// 0047eabd: LEA EDI,[EAX + EDX*0x1]
// 0047eac0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047eac5: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0047eac9: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047eacd: ADD ECX,0x14
// 0047ead0: MOV dword ptr [EDI + 0x8],EAX
// 0047ead3: INC ESI
// 0047ead4: MOV EAX,dword ptr [EBX + 0x104]
// 0047eada: ADD EDX,0xc
// 0047eadd: CMP ESI,EAX
// 0047eadf: JL 0x0047ea6e
//   XREF to: 0047ea6e (CONDITIONAL_JUMP)
// 0047eae1: FSTP ST0
// 0047eae3: MOV ECX,dword ptr [EBX + 0x110]
//   Label: LAB_0047eae3
// 0047eae9: XOR EDX,EDX
// 0047eaeb: MOV dword ptr [EBX + 0x120],0x0
// 0047eaf5: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0047eaf9: TEST ECX,ECX
// 0047eafb: JLE 0x0047ecb0
//   XREF to: 0047ecb0 (CONDITIONAL_JUMP)
// 0047eb01: LEA EAX,[EBX + 0x124]
// 0047eb07: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047eb0b: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047eb0f: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0047eb14: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0047eb18: ADD EAX,0x4
// 0047eb1b: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047eb1f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 016e9914 (DATA)
// 0047eb23: IMUL EAX,dword ptr [ESP + 0x20],0x184
//   Label: LAB_0047eb23
//   XREF to: Stack[-0x10] (READ)
// 0047eb2b: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0047eb2f: MOV EDX,dword ptr [EBX + 0x114]
// 0047eb35: XOR ESI,ESI
// 0047eb37: ADD ECX,EDX
// 0047eb39: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0047eb3d: MOV EDX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0047eb43: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0047eb47: MOV dword ptr [ECX + 0x4],EDX
// 0047eb4a: MOV EDX,EAX
// 0047eb4c: MOV EDI,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0047eb52: XOR ECX,ECX
// 0047eb54: TEST EDI,EDI
// 0047eb56: JLE 0x0047ebe1
//   XREF to: 0047ebe1 (CONDITIONAL_JUMP)
// 0047eb5c: FLD double ptr [0x00620f03]
//   XREF to: 00620f03 (READ)
// 0047eb62: MOV EAX,dword ptr [EBX + 0x114]
//   Label: LAB_0047eb62
// 0047eb68: ADD EAX,EBP
// 0047eb6a: ADD EAX,ECX
// 0047eb6c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047eb70: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047eb74: MOV EAX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
//   XREF to: 016e99cc (DATA)
// 0047eb7a: MOV dword ptr [EDI + 0x18],EAX
// 0047eb7d: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
//   XREF to: 016e9a0c (DATA)
// 0047eb83: MOV EAX,dword ptr [EBX + 0x114]
// 0047eb89: FMUL ST1
// 0047eb8b: ADD EAX,EBP
// 0047eb8d: ADD EAX,ECX
// 0047eb8f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047eb93: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047eb98: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047eb9c: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0047eba0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047eba4: MOV dword ptr [EDI + 0x1c],EAX
// 0047eba7: FLD float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0047ebad: MOV EAX,dword ptr [EBX + 0x114]
// 0047ebb3: FMUL ST1
// 0047ebb5: ADD EAX,EBP
// 0047ebb7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047ebbc: LEA EDI,[EAX + ECX*0x1]
// 0047ebbf: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0047ebc3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0047ebc7: MOV dword ptr [EDI + 0x20],EAX
// 0047ebca: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 0047ebce: ADD EDX,0x4
// 0047ebd1: INC ESI
// 0047ebd2: MOV EDI,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0047ebd8: ADD ECX,0xc
// 0047ebdb: CMP ESI,EDI
// 0047ebdd: JL 0x0047eb62
//   XREF to: 0047eb62 (CONDITIONAL_JUMP)
// 0047ebdf: FSTP ST0
// 0047ebe1: MOV EAX,dword ptr [EBX + 0x120]
//   Label: LAB_0047ebe1
// 0047ebe7: XOR EBP,EBP
// 0047ebe9: TEST EAX,EAX
// 0047ebeb: JLE 0x0047ec0a
//   XREF to: 0047ec0a (CONDITIONAL_JUMP)
// 0047ebed: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0047ebf1: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0047ebf5: ADD ESI,0x8
// 0047ebf8: PUSH EDI
//   Label: LAB_0047ebf8
//   XREF to: 016e9914 (DATA)
// 0047ebf9: PUSH ESI
// 0047ebfa: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0047ebff: ADD ESP,0x8
// 0047ec02: TEST EAX,EAX
// 0047ec04: JNZ 0x0047ecda
//   XREF to: 0047ecda (CONDITIONAL_JUMP)
// 0047ec0a: CMP EBP,dword ptr [EBX + 0x120]
//   Label: LAB_0047ec0a
// 0047ec10: JL 0x0047ec6b
//   XREF to: 0047ec6b (CONDITIONAL_JUMP)
// 0047ec12: CMP EBP,0x12c
// 0047ec18: JL 0x0047ec3d
//   XREF to: 0047ec3d (CONDITIONAL_JUMP)
// 0047ec1a: MOV ESI,0x620eb3
//   XREF to: 00620eb3 (DATA)
// 0047ec1f: MOV EDI,0xe45
// 0047ec24: PUSH 0x620ec6
//   XREF to: 00620ec6 (DATA)
// 0047ec29: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0047ec2f: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0047ec35: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047ec3a: ADD ESP,0x4
// 0047ec3d: IMUL EDI,EBP,0x48
//   Label: LAB_0047ec3d
// 0047ec40: ADD EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0047ec44: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0047ec48: ADD EDI,0x8
// 0047ec4b: PUSH EDI
// 0047ec4c: MOV AL,byte ptr [ESI]
//   Label: LAB_0047ec4c
//   XREF to: 016e9914 (READ)
//   XREF to: 016e9916 (READ)
// 0047ec4e: MOV byte ptr [EDI],AL
// 0047ec50: CMP AL,0x0
// 0047ec52: JZ 0x0047ec64
//   XREF to: 0047ec64 (CONDITIONAL_JUMP)
// 0047ec54: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 016e9915 (READ)
//   XREF to: 016e9917 (READ)
// 0047ec57: ADD ESI,0x2
// 0047ec5a: MOV byte ptr [EDI + 0x1],AL
// 0047ec5d: ADD EDI,0x2
// 0047ec60: CMP AL,0x0
// 0047ec62: JNZ 0x0047ec4c
//   XREF to: 0047ec4c (CONDITIONAL_JUMP)
// 0047ec64: POP EDI
//   Label: LAB_0047ec64
// 0047ec65: INC dword ptr [EBX + 0x120]
// 0047ec6b: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_0047ec6b
//   XREF to: Stack[-0x1c] (READ)
// 0047ec6f: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0047ec73: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0047ec77: MOV EAX,dword ptr [EBX + 0x118]
// 0047ec7d: ADD EDI,0x48
// 0047ec80: INC EDX
// 0047ec81: ADD EAX,ESI
// 0047ec83: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0047ec87: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0047ec8b: MOV dword ptr [EAX],EBP
// 0047ec8d: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0047ec91: LEA EAX,[ESI + 0x4]
// 0047ec94: MOV ECX,dword ptr [EBX + 0x110]
// 0047ec9a: ADD EBP,0x184
// 0047eca0: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047eca4: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 016e9a98 (DATA)
// 0047eca8: CMP EDX,ECX
// 0047ecaa: JL 0x0047eb23
//   XREF to: 0047eb23 (CONDITIONAL_JUMP)
// 0047ecb0: MOV EAX,dword ptr [EBX + 0x104]
//   Label: LAB_0047ecb0
// 0047ecb6: MOV dword ptr [EBX + 0x5584],0x1
// 0047ecc0: MOV dword ptr [EBX + 0x5588],EAX
// 0047ecc6: MOV EAX,dword ptr [EBX + 0x110]
// 0047eccc: MOV dword ptr [EBX + 0x558c],EAX
// 0047ecd2: POP ESI
// 0047ecd3: POP EDI
// 0047ecd4: ADD ESP,0x20
// 0047ecd7: POP EBP
// 0047ecd8: POP EBX
// 0047ecd9: RET
// 0047ecda: INC EBP
//   Label: LAB_0047ecda
// 0047ecdb: MOV EDX,dword ptr [EBX + 0x120]
// 0047ece1: ADD ESI,0x48
// 0047ece4: CMP EBP,EDX
// 0047ece6: JL 0x0047ebf8
//   XREF to: 0047ebf8 (CONDITIONAL_JUMP)
// 0047ecec: JMP 0x0047ec0a
//   XREF to: 0047ec0a (UNCONDITIONAL_JUMP)
