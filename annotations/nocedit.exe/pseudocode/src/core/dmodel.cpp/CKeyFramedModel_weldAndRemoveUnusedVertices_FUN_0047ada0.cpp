// Name: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
// Address: 0047ada0
// Address Range: [[0047ada0, 0047b16a]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel * this_ptr, float weld_tolerance)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00 (0047aa00) at 0047aa09 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_00620314
//   TerminatedCString s_core_dmodel_cpp_00620327
//   TerminatedCString s_CKeyFramedModel_removeUn_0062033a
//   TerminatedCString s_Reducing_vertices_0062038d
//   TerminatedCString s_core_dmodel_cpp_006203a2
//   TerminatedCString s_Vertex_reducer_bug_or_CK_006203b5
//   TerminatedCString s_core_dmodel_cpp_006203e7
//   TerminatedCString s_Vertex_reducer_bug_or_CK_006203fa
//   TerminatedCString s_core_dmodel_cpp_0062042c
//   double DOUBLE_00620443 = 65536
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_005fe659
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
          (CKeyFramedModel *this_ptr,float weld_tolerance)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float in_stack_00000018;
  CKeyFramedModel *pCVar11;
  int local_34;
  int local_30;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (this_ptr->vertex_count << 2,"..\\core\\dmodel.cpp",0x8df);
    if (pvVar3 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x8e0;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",this_ptr->vertex_count);
    }
    iVar4 = 0;
    piVar8 = local_28;
    if (0 < this_ptr->vertex_count) {
      do {
        *piVar8 = iVar4;
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar4 < this_ptr->vertex_count);
    }
    fVar2 = (float)DOUBLE_00620443;
    bVar1 = 2000 < this_ptr->vertex_count;
    if (bVar1) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing vertices...");
    }
    iVar4 = 0;
    local_34 = 0;
    local_14 = iVar4;
    pCVar11 = this_ptr;
    if (0 < this_ptr->part_count) {
      do {
        iVar4 = pCVar11->part_list[0].vertex_count + local_14;
        if (this_ptr->vertex_count < iVar4) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x8f8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if (local_14 < iVar4) {
          local_24 = local_14 * 0xc;
          local_20 = local_28 + local_14;
          do {
            if ((bVar1) && ((char)local_14 == '\0')) {
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_14,(float)this_ptr->vertex_count);
            }
            if ((local_14 == *local_20) && (iVar10 = local_14 + 1, iVar10 < iVar4)) {
              local_1c = local_24;
              iVar6 = iVar10 * 0xc;
              piVar8 = local_28 + iVar10;
              do {
                piVar7 = (int *)(iVar6 + (int)this_ptr->vertex_list);
                if (iVar10 == *piVar8) {
                  piVar5 = (int *)((int)this_ptr->vertex_list + local_24);
                  iVar9 = 0;
                  if (0 < this_ptr->frame_count) {
                    do {
                      if (in_stack_00000018 * in_stack_00000018 * fVar2 <
                          (float)(piVar5[2] - piVar7[2]) * (float)(piVar5[2] - piVar7[2]) +
                          (float)(piVar5[1] - piVar7[1]) * (float)(piVar5[1] - piVar7[1]) +
                          (float)(*piVar5 - *piVar7) * (float)(*piVar5 - *piVar7))
                      goto LAB_0047b0cc;
                      piVar5 = piVar5 + 3;
                      iVar9 = iVar9 + 1;
                      piVar7 = piVar7 + 3;
                    } while (iVar9 < this_ptr->frame_count);
                  }
                  *piVar8 = local_14;
                }
LAB_0047b0cc:
                piVar8 = piVar8 + 1;
                iVar6 = iVar6 + 0xc;
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar4);
            }
            local_20 = local_20 + 1;
            local_24 = local_24 + 0xc;
            local_14 = local_14 + 1;
          } while (local_14 < iVar4);
        }
        local_34 = local_34 + 1;
        local_14 = iVar4;
        pCVar11 = (CKeyFramedModel *)(pCVar11->model_filename + 8);
      } while (local_34 < this_ptr->part_count);
    }
    if (iVar4 != this_ptr->vertex_count) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x931;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
    }
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      local_30 = 0;
      do {
        iVar9 = (int)this_ptr->poly_vert_list + local_30;
        iVar6 = 0;
        iVar10 = iVar9;
        if (0 < *(int *)(iVar9 + 4)) {
          do {
            *(int *)(iVar10 + 0x18) = local_28[*(int *)(iVar10 + 0x18)];
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 0xc;
          } while (iVar6 < *(int *)(iVar9 + 4));
        }
        iVar4 = iVar4 + 1;
        local_30 = local_30 + 0x48;
      } while (iVar4 < this_ptr->poly_count);
    }
    g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
    g_CurrentDebugLine = 0x943;
    crt_memory_c_free_FUN_005fe659(local_28);
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_1c != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}


// Assembly code:
// 0047ada0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
// 0047ada1: PUSH ESI
// 0047ada2: PUSH EDI
// 0047ada3: PUSH EBP
// 0047ada4: SUB ESP,0x44
// 0047ada7: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0047adab: PUSH ESI
// 0047adac: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047adb1: MOV EDX,dword ptr [ESI + 0x104]
// 0047adb7: ADD ESP,0x4
// 0047adba: CMP EDX,0x1
// 0047adbd: JL 0x0047adc8
//   XREF to: 0047adc8 (CONDITIONAL_JUMP)
// 0047adbf: CMP dword ptr [ESI + 0x100],0x1
// 0047adc6: JGE 0x0047add0
//   XREF to: 0047add0 (CONDITIONAL_JUMP)
// 0047adc8: ADD ESP,0x44
//   Label: LAB_0047adc8
// 0047adcb: POP EBP
// 0047adcc: POP EDI
// 0047adcd: POP ESI
// 0047adce: POP EBX
// 0047adcf: RET
// 0047add0: PUSH ESI
//   Label: LAB_0047add0
// 0047add1: CALL core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
//   XREF to: 0047aa30 (UNCONDITIONAL_CALL)
// 0047add6: ADD ESP,0x4
// 0047add9: PUSH 0x8df
// 0047adde: MOV EAX,dword ptr [ESI + 0x104]
// 0047ade4: PUSH 0x620314
//   XREF to: 00620314 (DATA)
// 0047ade9: SHL EAX,0x2
// 0047adec: PUSH EAX
// 0047aded: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0047adf2: ADD ESP,0xc
// 0047adf5: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0047adf9: TEST EAX,EAX
// 0047adfb: JNZ 0x0047ae27
//   XREF to: 0047ae27 (CONDITIONAL_JUMP)
// 0047adfd: MOV EBP,dword ptr [ESI + 0x104]
// 0047ae03: PUSH EBP
// 0047ae04: MOV EBX,0x620327
//   XREF to: 00620327 (PARAM)
// 0047ae09: MOV EDI,0x8e0
// 0047ae0e: PUSH 0x62033a
//   XREF to: 0062033a (DATA)
// 0047ae13: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0047ae19: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0047ae1f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047ae24: ADD ESP,0x8
// 0047ae27: MOV EDX,dword ptr [ESI + 0x104]
//   Label: LAB_0047ae27
// 0047ae2d: XOR EAX,EAX
// 0047ae2f: TEST EDX,EDX
// 0047ae31: JLE 0x0047ae50
//   XREF to: 0047ae50 (CONDITIONAL_JUMP)
// 0047ae33: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0047ae37: MOV dword ptr [EBX],EAX
//   Label: LAB_0047ae37
// 0047ae39: INC EAX
// 0047ae3a: MOV ECX,dword ptr [ESI + 0x104]
// 0047ae40: ADD EBX,0x4
// 0047ae43: CMP EAX,ECX
// 0047ae45: JL 0x0047ae37
//   XREF to: 0047ae37 (CONDITIONAL_JUMP)
// 0047ae47: LEA EAX,[EAX]
// 0047ae4d: LEA EDX,[EDX]
// 0047ae50: FLD float ptr [ESP + 0x5c]
//   Label: LAB_0047ae50
//   XREF to: Stack[0x8] (READ)
// 0047ae54: FMUL ST0
// 0047ae56: FMUL double ptr [0x00620443]
//   XREF to: 00620443 (READ)
// 0047ae5c: XOR EBX,EBX
// 0047ae5e: MOV EDI,dword ptr [ESI + 0x104]
// 0047ae64: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0047ae68: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (WRITE)
// 0047ae6c: CMP EDI,0x7d0
// 0047ae72: JLE 0x0047ae91
//   XREF to: 0047ae91 (CONDITIONAL_JUMP)
// 0047ae74: PUSH 0x62038d
//   XREF to: 0062038d (DATA)
// 0047ae79: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047ae7f: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0047ae80: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0047ae85: MOV EAX,0x1
// 0047ae8a: ADD ESP,0x8
// 0047ae8d: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0047ae91: XOR EBX,EBX
//   Label: LAB_0047ae91
// 0047ae93: MOV ECX,dword ptr [ESI + 0x5584]
// 0047ae99: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 0047ae9d: TEST ECX,ECX
// 0047ae9f: JLE 0x0047af79
//   XREF to: 0047af79 (CONDITIONAL_JUMP)
// 0047aea5: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0047aea9: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0047aea9
//   XREF to: Stack[-0x48] (READ)
// 0047aead: MOV EAX,dword ptr [EAX + 0x5588]
// 0047aeb3: ADD EAX,EBX
// 0047aeb5: MOV EDX,dword ptr [ESI + 0x104]
// 0047aebb: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047aebf: CMP EAX,EDX
// 0047aec1: JLE 0x0047aee6
//   XREF to: 0047aee6 (CONDITIONAL_JUMP)
// 0047aec3: MOV ECX,0x6203a2
//   XREF to: 006203a2 (PARAM)
// 0047aec8: MOV EDI,0x8f8
// 0047aecd: PUSH 0x6203b5
//   XREF to: 006203b5 (DATA)
// 0047aed2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0047aed8: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0047aede: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047aee3: ADD ESP,0x4
// 0047aee6: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: LAB_0047aee6
//   XREF to: Stack[-0x28] (READ)
// 0047aeea: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0047aeee: CMP EBX,EBP
// 0047aef0: JGE 0x0047af53
//   XREF to: 0047af53 (CONDITIONAL_JUMP)
// 0047aef2: LEA EAX,[EBX*0x4 + 0x0]
// 0047aef9: IMUL EBX,EBX,0xc
// 0047aefc: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0047af00: ADD EAX,ECX
// 0047af02: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0047af06: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0047af0a: CMP dword ptr [ESP + 0x18],0x0
//   Label: LAB_0047af0a
//   XREF to: Stack[-0x3c] (READ)
// 0047af0f: JZ 0x0047af1c
//   XREF to: 0047af1c (CONDITIONAL_JUMP)
// 0047af11: TEST byte ptr [ESP + 0x30],0xff
//   XREF to: Stack[-0x24] (READ)
// 0047af16: JZ 0x0047b05c
//   XREF to: 0047b05c (CONDITIONAL_JUMP)
// 0047af1c: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0047af1c
//   XREF to: Stack[-0x30] (READ)
// 0047af20: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0047af24: CMP EBP,dword ptr [EAX]
// 0047af26: JZ 0x0047b08e
//   XREF to: 0047b08e (CONDITIONAL_JUMP)
// 0047af2c: MOV EBX,dword ptr [ESP + 0x24]
//   Label: LAB_0047af2c
//   XREF to: Stack[-0x30] (READ)
// 0047af30: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0047af34: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0047af38: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0047af3c: ADD EBX,0x4
// 0047af3f: ADD EDI,0xc
// 0047af42: INC EBP
// 0047af43: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0047af47: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0047af4b: MOV dword ptr [ESP + 0x30],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0047af4f: CMP EBP,EDX
// 0047af51: JL 0x0047af0a
//   XREF to: 0047af0a (CONDITIONAL_JUMP)
// 0047af53: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_0047af53
//   XREF to: Stack[-0x28] (READ)
// 0047af57: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0047af5b: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0047af5f: MOV EDX,dword ptr [ESI + 0x5584]
// 0047af65: ADD EDI,0x8
// 0047af68: INC EBP
// 0047af69: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 0047af6d: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 0047af71: CMP EBP,EDX
// 0047af73: JL 0x0047aea9
//   XREF to: 0047aea9 (CONDITIONAL_JUMP)
// 0047af79: CMP EBX,dword ptr [ESI + 0x104]
//   Label: LAB_0047af79
// 0047af7f: JZ 0x0047afa4
//   XREF to: 0047afa4 (CONDITIONAL_JUMP)
// 0047af81: MOV EBX,0x6203e7
//   XREF to: 006203e7 (PARAM)
// 0047af86: MOV EDI,0x931
// 0047af8b: PUSH 0x6203fa
//   XREF to: 006203fa (DATA)
// 0047af90: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0047af96: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0047af9c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047afa1: ADD ESP,0x4
// 0047afa4: MOV EBP,dword ptr [ESI + 0x110]
//   Label: LAB_0047afa4
// 0047afaa: XOR EDI,EDI
// 0047afac: TEST EBP,EBP
// 0047afae: JLE 0x0047affd
//   XREF to: 0047affd (CONDITIONAL_JUMP)
// 0047afb0: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0047afb4: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_0047afb4
//   XREF to: Stack[-0x40] (READ)
// 0047afb8: MOV EBX,dword ptr [ESI + 0x114]
// 0047afbe: ADD EBX,ECX
// 0047afc0: MOV EBP,dword ptr [EBX + 0x4]
// 0047afc3: XOR EDX,EDX
// 0047afc5: TEST EBP,EBP
// 0047afc7: JLE 0x0047afe7
//   XREF to: 0047afe7 (CONDITIONAL_JUMP)
// 0047afc9: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0047afcd: MOV EAX,EBX
// 0047afcf: MOV ECX,dword ptr [EAX + 0x18]
//   Label: LAB_0047afcf
// 0047afd2: SHL ECX,0x2
// 0047afd5: ADD ECX,EBP
// 0047afd7: MOV ECX,dword ptr [ECX]
// 0047afd9: MOV dword ptr [EAX + 0x18],ECX
// 0047afdc: INC EDX
// 0047afdd: MOV ECX,dword ptr [EBX + 0x4]
// 0047afe0: ADD EAX,0xc
// 0047afe3: CMP EDX,ECX
// 0047afe5: JL 0x0047afcf
//   XREF to: 0047afcf (CONDITIONAL_JUMP)
// 0047afe7: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0047afe7
//   XREF to: Stack[-0x40] (READ)
// 0047afeb: INC EDI
// 0047afec: ADD EAX,0x48
// 0047afef: MOV EDX,dword ptr [ESI + 0x110]
// 0047aff5: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0047aff9: CMP EDI,EDX
// 0047affb: JL 0x0047afb4
//   XREF to: 0047afb4 (CONDITIONAL_JUMP)
// 0047affd: MOV ECX,0x62042c
//   Label: LAB_0047affd
//   XREF to: 0062042c (PARAM)
// 0047b002: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0047b006: MOV EBX,0x943
// 0047b00b: PUSH EDI
// 0047b00c: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0047b012: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0047b018: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0047b01d: ADD ESP,0x4
// 0047b020: PUSH ESI
// 0047b021: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047b026: ADD ESP,0x4
// 0047b029: PUSH ESI
// 0047b02a: CALL core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
//   XREF to: 0047aa30 (UNCONDITIONAL_CALL)
// 0047b02f: ADD ESP,0x4
// 0047b032: PUSH ESI
// 0047b033: CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   XREF to: 00477e60 (UNCONDITIONAL_CALL)
// 0047b038: ADD ESP,0x4
// 0047b03b: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[-0x3c] (READ)
// 0047b040: JZ 0x0047adc8
//   XREF to: 0047adc8 (CONDITIONAL_JUMP)
// 0047b046: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0047b04b: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047b04c: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0047b051: ADD ESP,0x4
// 0047b054: ADD ESP,0x44
// 0047b057: POP EBP
// 0047b058: POP EDI
// 0047b059: POP ESI
// 0047b05a: POP EBX
// 0047b05b: RET
// 0047b05c: SUB ESP,0x4
//   Label: LAB_0047b05c
// 0047b05f: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0047b063: FILD dword ptr [ESI + 0x104]
// 0047b069: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047b06d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0047b070: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 0047b074: SUB ESP,0x4
// 0047b077: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047b07d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 0047b080: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0047b081: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0047b086: ADD ESP,0xc
// 0047b089: JMP 0x0047af1c
//   XREF to: 0047af1c (UNCONDITIONAL_JUMP)
// 0047b08e: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0047b08e
//   XREF to: Stack[-0x28] (READ)
// 0047b092: LEA EDI,[EBP + 0x1]
// 0047b095: CMP EDI,EAX
// 0047b097: JGE 0x0047af2c
//   XREF to: 0047af2c (CONDITIONAL_JUMP)
// 0047b09d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0047b0a1: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0047b0a5: IMUL EAX,EDI,0xc
// 0047b0a8: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0047b0ac: LEA EBP,[EDI*0x4 + 0x0]
// 0047b0b3: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047b0b7: ADD EBP,EBX
// 0047b0b9: MOV EDX,dword ptr [ESP + 0x38]
//   Label: LAB_0047b0b9
//   XREF to: Stack[-0x1c] (READ)
// 0047b0bd: MOV ECX,dword ptr [ESI + 0x10c]
// 0047b0c3: MOV EAX,dword ptr [EBP]
// 0047b0c6: ADD EDX,ECX
// 0047b0c8: CMP EDI,EAX
// 0047b0ca: JZ 0x0047b0e9
//   XREF to: 0047b0e9 (CONDITIONAL_JUMP)
// 0047b0cc: MOV EDX,dword ptr [ESP + 0x38]
//   Label: LAB_0047b0cc
//   XREF to: Stack[-0x1c] (READ)
// 0047b0d0: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0047b0d4: ADD EBP,0x4
// 0047b0d7: ADD EDX,0xc
// 0047b0da: INC EDI
// 0047b0db: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047b0df: CMP EDI,ECX
// 0047b0e1: JGE 0x0047af2c
//   XREF to: 0047af2c (CONDITIONAL_JUMP)
// 0047b0e7: JMP 0x0047b0b9
//   XREF to: 0047b0b9 (UNCONDITIONAL_JUMP)
// 0047b0e9: MOV EAX,0x1
//   Label: LAB_0047b0e9
// 0047b0ee: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0047b0f2: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047b0f6: ADD ECX,EBX
// 0047b0f8: MOV EAX,dword ptr [ESI + 0x100]
// 0047b0fe: XOR EBX,EBX
// 0047b100: TEST EAX,EAX
// 0047b102: JLE 0x0047b154
//   XREF to: 0047b154 (CONDITIONAL_JUMP)
// 0047b104: MOV EAX,dword ptr [ECX]
//   Label: LAB_0047b104
// 0047b106: SUB EAX,dword ptr [EDX]
// 0047b108: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047b10c: MOV EAX,dword ptr [ECX + 0x4]
// 0047b10f: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0047b113: SUB EAX,dword ptr [EDX + 0x4]
// 0047b116: FLD ST0
// 0047b118: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047b11c: FMULP
// 0047b11e: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0047b122: MOV EAX,dword ptr [ECX + 0x8]
// 0047b125: FLD ST0
// 0047b127: SUB EAX,dword ptr [EDX + 0x8]
// 0047b12a: FMULP
// 0047b12c: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047b130: FADDP
// 0047b132: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0047b136: FMUL ST0
// 0047b138: FADDP
// 0047b13a: FCOMP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0047b13e: FNSTSW AX
// 0047b140: SAHF
// 0047b141: JA 0x0047b0cc
//   XREF to: 0047b0cc (CONDITIONAL_JUMP)
// 0047b143: ADD ECX,0xc
// 0047b146: INC EBX
// 0047b147: MOV EAX,dword ptr [ESI + 0x100]
// 0047b14d: ADD EDX,0xc
// 0047b150: CMP EBX,EAX
// 0047b152: JL 0x0047b104
//   XREF to: 0047b104 (CONDITIONAL_JUMP)
// 0047b154: CMP dword ptr [ESP + 0x34],0x0
//   Label: LAB_0047b154
//   XREF to: Stack[-0x20] (READ)
// 0047b159: JZ 0x0047b0cc
//   XREF to: 0047b0cc (CONDITIONAL_JUMP)
// 0047b15f: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0047b163: MOV dword ptr [EBP],EAX
// 0047b166: JMP 0x0047b0cc
//   XREF to: 0047b0cc (UNCONDITIONAL_JUMP)
