// Name: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// Address: 0047aa30
// Address Range: [[0047aa30, 0047ad95]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b49b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047b02a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Removing_unused_vertices_0062023b
//   TerminatedCString s_core_dmodel_cpp_00620257
//   TerminatedCString s_core_dmodel_cpp_0062026a
//   TerminatedCString s_CKeyFramedModel_removeUn_0062027d
//   TerminatedCString s_core_dmodel_cpp_006202d0
//   TerminatedCString s_Part_vertex_overlap_dete_006202e3
//   TerminatedCString s_core_dmodel_cpp_00620301
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_memset_FUN_005fde40
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void *unaff_EBP;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *unaff_EDI;
  int iVar10;
  CKeyFramedModel *pCVar11;
  byte bVar12;
  CKeyFramedModel *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  CKeyFramedModel *in_stack_0000001c;
  int *local_10;
  
  bVar12 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Removing unused vertices...");
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  if ((0 < *(int *)(in_stack_0000000c + 0x104)) && (0 < *(int *)(in_stack_0000000c + 0x100))) {
    pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (*(int *)(in_stack_0000000c + 0x104) * 4,"..\\core\\dmodel.cpp",0x868);
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x869;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",*(undefined4 *)(in_stack_00000010 + 0x104));
    }
    crt_memory_c_memset_FUN_005fde40(unaff_EBP,0,*(int *)(in_stack_00000014 + 0x104) << 2);
    iVar6 = 0;
    if (0 < *(int *)(in_stack_00000018 + 0x110)) {
      iVar10 = 0;
      do {
        iVar8 = *(int *)(in_stack_00000018 + 0x114) + iVar10;
        iVar2 = 0;
        iVar4 = iVar8;
        if (0 < *(int *)(iVar8 + 4)) {
          do {
            unaff_EDI[*(int *)(iVar4 + 0x18)] = 1;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0xc;
          } while (iVar2 < *(int *)(iVar8 + 4));
        }
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 0x48;
      } while (iVar6 < *(int *)(in_stack_00000018 + 0x110));
    }
    iVar10 = 0;
    iVar6 = 0;
    piVar3 = unaff_EDI;
    if (0 < *(int *)(in_stack_00000018 + 0x104)) {
      do {
        if (*piVar3 == 0) {
          *piVar3 = -1;
        }
        else {
          *piVar3 = iVar6;
          iVar6 = iVar6 + 1;
        }
        iVar10 = iVar10 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar10 < *(int *)(in_stack_00000018 + 0x104));
    }
    if (iVar6 < *(int *)(in_stack_00000018 + 0x104)) {
      iVar10 = 0;
      if (0 < *(int *)(in_stack_00000018 + 0x110)) {
        iVar4 = 0;
        do {
          iVar9 = *(int *)(in_stack_00000018 + 0x114) + iVar4;
          iVar8 = 0;
          iVar2 = iVar9;
          if (0 < *(int *)(iVar9 + 4)) {
            do {
              *(int *)(iVar2 + 0x18) = unaff_EDI[*(int *)(iVar2 + 0x18)];
              iVar8 = iVar8 + 1;
              iVar2 = iVar2 + 0xc;
            } while (iVar8 < *(int *)(iVar9 + 4));
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + 0x48;
        } while (iVar10 < *(int *)(in_stack_00000018 + 0x110));
      }
      iVar10 = 0;
      puVar5 = *(undefined4 **)(in_stack_00000018 + 0x10c);
      puVar7 = puVar5;
      if (0 < *(int *)(in_stack_00000018 + 0x100)) {
        do {
          iVar4 = 0;
          piVar3 = unaff_EDI;
          if (0 < *(int *)(in_stack_00000018 + 0x104)) {
            do {
              if (-1 < *piVar3) {
                if (puVar7 < puVar5) {
                  *puVar7 = *puVar5;
                  puVar7[(uint)bVar12 * -2 + 1] = puVar5[(uint)bVar12 * -2 + 1];
                  (puVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                       (puVar5 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
                }
                puVar7 = puVar7 + 3;
              }
              puVar5 = puVar5 + 3;
              iVar4 = iVar4 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar4 < *(int *)(in_stack_00000018 + 0x104));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(in_stack_00000018 + 0x100));
      }
      *(int *)(in_stack_00000018 + 0x104) = iVar6;
      iVar6 = 0;
      this_ptr = *(CKeyFramedModel **)(in_stack_00000018 + 0x114);
      if (0 < *(int *)(in_stack_00000018 + 0x5584)) {
        local_10 = (int *)(in_stack_00000018 + 0x5588);
        iVar10 = 0;
        do {
          iVar4 = -1;
          iVar2 = 0;
          if (0 < local_10[1]) {
            do {
              iVar8 = 0;
              pCVar11 = this_ptr;
              if (0 < *(int *)(this_ptr->model_filename + 4)) {
                do {
                  iVar9 = *(int *)(pCVar11->model_filename + 0x18);
                  if (iVar9 < iVar10) {
                    g_CurrentFilename = "..\\core\\dmodel.cpp";
                    g_CurrentLineNumber = 0x8ae;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Part vertex overlap detected!");
                  }
                  if (iVar4 <= iVar9) {
                    iVar4 = iVar9 + 1;
                  }
                  iVar8 = iVar8 + 1;
                  pCVar11 = (CKeyFramedModel *)(pCVar11->model_filename + 0xc);
                } while (iVar8 < *(int *)(this_ptr->model_filename + 4));
              }
              this_ptr = (CKeyFramedModel *)(this_ptr->model_filename + 0x48);
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_10[1]);
          }
          *local_10 = iVar4 - iVar10;
          local_10 = local_10 + 2;
          iVar6 = iVar6 + 1;
          iVar10 = iVar4;
        } while (iVar6 < *(int *)(in_stack_00000018 + 0x5584));
      }
    }
    g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
    g_CurrentDebugLine = 0x8bc;
    crt_memory_c_free_FUN_005fe659(unaff_EDI);
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_0000001c);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(in_stack_0000001c);
    return;
  }
  return;
}


// Assembly code:
// 0047aa30: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// 0047aa31: PUSH EDI
// 0047aa32: PUSH EBP
// 0047aa33: SUB ESP,0x1c
// 0047aa36: PUSH 0x62023b
//   XREF to: 0062023b (DATA)
// 0047aa3b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0047aa41: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0047aa42: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0047aa47: ADD ESP,0x8
// 0047aa4a: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047aa4e: PUSH ECX
// 0047aa4f: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047aa54: ADD ESP,0x4
// 0047aa57: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047aa5b: MOV EBX,dword ptr [EAX + 0x104]
// 0047aa61: CMP EBX,0x1
// 0047aa64: JL 0x0047aa6f
//   XREF to: 0047aa6f (CONDITIONAL_JUMP)
// 0047aa66: CMP dword ptr [EAX + 0x100],0x1
// 0047aa6d: JGE 0x0047aa76
//   XREF to: 0047aa76 (CONDITIONAL_JUMP)
// 0047aa6f: ADD ESP,0x1c
//   Label: LAB_0047aa6f
// 0047aa72: POP EBP
// 0047aa73: POP EDI
// 0047aa74: POP EBX
// 0047aa75: RET
// 0047aa76: PUSH 0x868
//   Label: LAB_0047aa76
// 0047aa7b: PUSH 0x620257
//   XREF to: 00620257 (DATA)
// 0047aa80: LEA EAX,[EBX*0x4 + 0x0]
// 0047aa87: PUSH EAX
// 0047aa88: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0047aa8d: ADD ESP,0xc
// 0047aa90: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047aa94: TEST EAX,EAX
// 0047aa96: JNZ 0x0047aac6
//   XREF to: 0047aac6 (CONDITIONAL_JUMP)
// 0047aa98: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047aa9c: MOV EDX,dword ptr [EAX + 0x104]
// 0047aaa2: PUSH EDX
// 0047aaa3: MOV EDI,0x62026a
//   XREF to: 0062026a (DATA)
// 0047aaa8: MOV EBP,0x869
// 0047aaad: PUSH 0x62027d
//   XREF to: 0062027d (DATA)
// 0047aab2: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0047aab8: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0047aabe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047aac3: ADD ESP,0x8
// 0047aac6: PUSH ESI
//   Label: LAB_0047aac6
// 0047aac7: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047aacb: MOV EAX,dword ptr [EAX + 0x104]
// 0047aad1: SHL EAX,0x2
// 0047aad4: PUSH EAX
// 0047aad5: PUSH 0x0
// 0047aad7: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0047aadb: PUSH ECX
// 0047aadc: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0047aae1: ADD ESP,0xc
// 0047aae4: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047aae8: MOV EBX,dword ptr [EAX + 0x110]
// 0047aaee: XOR EBP,EBP
// 0047aaf0: TEST EBX,EBX
// 0047aaf2: JLE 0x0047ab3c
//   XREF to: 0047ab3c (CONDITIONAL_JUMP)
// 0047aaf4: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0047aaf8: XOR EDI,EDI
// 0047aafa: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_0047aafa
//   XREF to: Stack[0x4] (READ)
// 0047aafe: MOV ESI,dword ptr [ESI + 0x114]
// 0047ab04: ADD ESI,EDI
// 0047ab06: MOV EDX,dword ptr [ESI + 0x4]
// 0047ab09: XOR EAX,EAX
// 0047ab0b: TEST EDX,EDX
// 0047ab0d: JLE 0x0047ab2a
//   XREF to: 0047ab2a (CONDITIONAL_JUMP)
// 0047ab0f: MOV EBX,ESI
// 0047ab11: MOV EDX,dword ptr [EBX + 0x18]
//   Label: LAB_0047ab11
// 0047ab14: SHL EDX,0x2
// 0047ab17: ADD EDX,ECX
// 0047ab19: MOV dword ptr [EDX],0x1
// 0047ab1f: INC EAX
// 0047ab20: MOV EDX,dword ptr [ESI + 0x4]
// 0047ab23: ADD EBX,0xc
// 0047ab26: CMP EAX,EDX
// 0047ab28: JL 0x0047ab11
//   XREF to: 0047ab11 (CONDITIONAL_JUMP)
// 0047ab2a: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0047ab2a
//   XREF to: Stack[0x4] (READ)
// 0047ab2e: INC EBP
// 0047ab2f: MOV ESI,dword ptr [EAX + 0x110]
// 0047ab35: ADD EDI,0x48
// 0047ab38: CMP EBP,ESI
// 0047ab3a: JL 0x0047aafa
//   XREF to: 0047aafa (CONDITIONAL_JUMP)
// 0047ab3c: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0047ab3c
//   XREF to: Stack[0x4] (READ)
// 0047ab40: XOR EDI,EDI
// 0047ab42: MOV EBP,dword ptr [EAX + 0x104]
// 0047ab48: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0047ab4c: TEST EBP,EBP
// 0047ab4e: JLE 0x0047ab7a
//   XREF to: 0047ab7a (CONDITIONAL_JUMP)
// 0047ab50: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0047ab54: CMP dword ptr [EAX],0x0
//   Label: LAB_0047ab54
// 0047ab57: JZ 0x0047ad8b
//   XREF to: 0047ad8b (CONDITIONAL_JUMP)
// 0047ab5d: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0047ab61: MOV dword ptr [EAX],EDX
// 0047ab63: INC EDX
// 0047ab64: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0047ab68: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0047ab68
//   XREF to: Stack[0x4] (READ)
// 0047ab6c: INC EDI
// 0047ab6d: MOV ECX,dword ptr [EDX + 0x104]
// 0047ab73: ADD EAX,0x4
// 0047ab76: CMP EDI,ECX
// 0047ab78: JL 0x0047ab54
//   XREF to: 0047ab54 (CONDITIONAL_JUMP)
// 0047ab7a: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0047ab7a
//   XREF to: Stack[0x4] (READ)
// 0047ab7e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0047ab82: CMP EAX,dword ptr [EDX + 0x104]
// 0047ab88: JGE 0x0047ad4a
//   XREF to: 0047ad4a (CONDITIONAL_JUMP)
// 0047ab8e: MOV ESI,dword ptr [EDX + 0x110]
// 0047ab94: XOR EBP,EBP
// 0047ab96: TEST ESI,ESI
// 0047ab98: JLE 0x0047abe1
//   XREF to: 0047abe1 (CONDITIONAL_JUMP)
// 0047ab9a: XOR ECX,ECX
// 0047ab9c: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_0047ab9c
//   XREF to: Stack[0x4] (READ)
// 0047aba0: MOV ESI,dword ptr [ESI + 0x114]
// 0047aba6: ADD ESI,ECX
// 0047aba8: MOV EDI,dword ptr [ESI + 0x4]
// 0047abab: XOR EAX,EAX
// 0047abad: TEST EDI,EDI
// 0047abaf: JLE 0x0047abcf
//   XREF to: 0047abcf (CONDITIONAL_JUMP)
// 0047abb1: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0047abb5: MOV EBX,ESI
// 0047abb7: MOV EDX,dword ptr [EBX + 0x18]
//   Label: LAB_0047abb7
// 0047abba: SHL EDX,0x2
// 0047abbd: ADD EDX,EDI
// 0047abbf: MOV EDX,dword ptr [EDX]
// 0047abc1: MOV dword ptr [EBX + 0x18],EDX
// 0047abc4: INC EAX
// 0047abc5: MOV EDX,dword ptr [ESI + 0x4]
// 0047abc8: ADD EBX,0xc
// 0047abcb: CMP EAX,EDX
// 0047abcd: JL 0x0047abb7
//   XREF to: 0047abb7 (CONDITIONAL_JUMP)
// 0047abcf: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0047abcf
//   XREF to: Stack[0x4] (READ)
// 0047abd3: INC EBP
// 0047abd4: MOV EBX,dword ptr [EAX + 0x110]
// 0047abda: ADD ECX,0x48
// 0047abdd: CMP EBP,EBX
// 0047abdf: JL 0x0047ab9c
//   XREF to: 0047ab9c (CONDITIONAL_JUMP)
// 0047abe1: MOV EBX,dword ptr [ESP + 0x30]
//   Label: LAB_0047abe1
//   XREF to: Stack[0x4] (READ)
// 0047abe5: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047abe9: XOR ECX,ECX
// 0047abeb: MOV EBX,dword ptr [EBX + 0x10c]
// 0047abf1: MOV ESI,dword ptr [EAX + 0x100]
// 0047abf7: MOV EBP,EBX
// 0047abf9: TEST ESI,ESI
// 0047abfb: JLE 0x0047ac46
//   XREF to: 0047ac46 (CONDITIONAL_JUMP)
// 0047abfd: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0047abfd
//   XREF to: Stack[0x4] (READ)
// 0047ac01: MOV ESI,dword ptr [EDX + 0x104]
// 0047ac07: XOR EAX,EAX
// 0047ac09: TEST ESI,ESI
// 0047ac0b: JLE 0x0047ac39
//   XREF to: 0047ac39 (CONDITIONAL_JUMP)
// 0047ac0d: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0047ac11: CMP dword ptr [EDX],0x0
//   Label: LAB_0047ac11
// 0047ac14: JL 0x0047ac24
//   XREF to: 0047ac24 (CONDITIONAL_JUMP)
// 0047ac16: CMP EBP,EBX
// 0047ac18: JNC 0x0047ac21
//   XREF to: 0047ac21 (CONDITIONAL_JUMP)
// 0047ac1a: MOV EDI,EBP
// 0047ac1c: MOV ESI,EBX
// 0047ac1e: MOVSD ES:EDI,ESI
// 0047ac1f: MOVSD ES:EDI,ESI
// 0047ac20: MOVSD ES:EDI,ESI
// 0047ac21: ADD EBP,0xc
//   Label: LAB_0047ac21
// 0047ac24: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_0047ac24
//   XREF to: Stack[0x4] (READ)
// 0047ac28: ADD EBX,0xc
// 0047ac2b: INC EAX
// 0047ac2c: MOV EDI,dword ptr [ESI + 0x104]
// 0047ac32: ADD EDX,0x4
// 0047ac35: CMP EAX,EDI
// 0047ac37: JL 0x0047ac11
//   XREF to: 0047ac11 (CONDITIONAL_JUMP)
// 0047ac39: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0047ac39
//   XREF to: Stack[0x4] (READ)
// 0047ac3d: INC ECX
// 0047ac3e: CMP ECX,dword ptr [EAX + 0x100]
// 0047ac44: JL 0x0047abfd
//   XREF to: 0047abfd (CONDITIONAL_JUMP)
// 0047ac46: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0047ac46
//   XREF to: Stack[0x4] (READ)
// 0047ac4a: XOR EDI,EDI
// 0047ac4c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0047ac50: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0047ac54: MOV dword ptr [EDX + 0x104],EAX
// 0047ac5a: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0047ac5e: MOV EAX,dword ptr [EDX + 0x114]
// 0047ac64: MOV EDX,dword ptr [EDX + 0x5584]
// 0047ac6a: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0047ac6e: TEST EDX,EDX
// 0047ac70: JLE 0x0047ad4a
//   XREF to: 0047ad4a (CONDITIONAL_JUMP)
// 0047ac76: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047ac7a: ADD EAX,0x5588
// 0047ac7f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047ac83: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0047ac83
//   XREF to: Stack[-0x24] (READ)
// 0047ac87: XOR EBX,EBX
// 0047ac89: MOV EBP,0xffffffff
// 0047ac8e: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0047ac92: MOV ESI,dword ptr [EAX + 0x4]
// 0047ac95: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047ac99: TEST ESI,ESI
// 0047ac9b: JLE 0x0047ad12
//   XREF to: 0047ad12 (CONDITIONAL_JUMP)
// 0047aca1: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047aca1
//   XREF to: Stack[-0x10] (READ)
// 0047aca5: MOV EBX,dword ptr [EAX + 0x4]
// 0047aca8: XOR ESI,ESI
// 0047acaa: TEST EBX,EBX
// 0047acac: JLE 0x0047acf3
//   XREF to: 0047acf3 (CONDITIONAL_JUMP)
// 0047acae: MOV EDI,EAX
// 0047acb0: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_0047acb0
//   XREF to: Stack[-0x14] (READ)
// 0047acb4: MOV EBX,dword ptr [EDI + 0x18]
// 0047acb7: CMP EBX,ECX
// 0047acb9: JGE 0x0047acdd
//   XREF to: 0047acdd (CONDITIONAL_JUMP)
// 0047acbb: MOV EAX,0x6202d0
//   XREF to: 006202d0 (PARAM)
// 0047acc0: MOV EDX,0x8ae
// 0047acc5: PUSH 0x6202e3
//   XREF to: 006202e3 (DATA)
// 0047acca: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0047accf: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0047acd5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047acda: ADD ESP,0x4
// 0047acdd: CMP EBX,EBP
//   Label: LAB_0047acdd
// 0047acdf: JL 0x0047ace4
//   XREF to: 0047ace4 (CONDITIONAL_JUMP)
// 0047ace1: LEA EBP,[EBX + 0x1]
// 0047ace4: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047ace4
//   XREF to: Stack[-0x10] (READ)
// 0047ace8: INC ESI
// 0047ace9: MOV EDX,dword ptr [EAX + 0x4]
// 0047acec: ADD EDI,0xc
// 0047acef: CMP ESI,EDX
// 0047acf1: JL 0x0047acb0
//   XREF to: 0047acb0 (CONDITIONAL_JUMP)
// 0047acf3: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_0047acf3
//   XREF to: Stack[-0x10] (READ)
// 0047acf7: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0047acfb: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0047acff: ADD EDI,0x48
// 0047ad02: INC EAX
// 0047ad03: MOV ECX,dword ptr [EDX + 0x4]
// 0047ad06: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 0047ad0a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047ad0e: CMP EAX,ECX
// 0047ad10: JL 0x0047aca1
//   XREF to: 0047aca1 (CONDITIONAL_JUMP)
// 0047ad12: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_0047ad12
//   XREF to: Stack[-0x14] (READ)
// 0047ad16: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0047ad1a: MOV EAX,EBP
// 0047ad1c: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0047ad20: SUB EAX,EDI
// 0047ad22: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0047ad26: MOV dword ptr [EDX],EAX
// 0047ad28: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0047ad2c: ADD EBP,0x8
// 0047ad2f: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047ad33: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0047ad37: INC EAX
// 0047ad38: MOV ECX,dword ptr [EDX + 0x5584]
// 0047ad3e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047ad42: CMP EAX,ECX
// 0047ad44: JL 0x0047ac83
//   XREF to: 0047ac83 (CONDITIONAL_JUMP)
// 0047ad4a: MOV ECX,0x620301
//   Label: LAB_0047ad4a
//   XREF to: 00620301 (PARAM)
// 0047ad4f: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0047ad53: MOV EBX,0x8bc
// 0047ad58: PUSH ESI
// 0047ad59: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0047ad5f: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0047ad65: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0047ad6a: ADD ESP,0x4
// 0047ad6d: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047ad71: PUSH EDI
// 0047ad72: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047ad77: ADD ESP,0x4
// 0047ad7a: PUSH EDI
// 0047ad7b: CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
//   XREF to: 00477e60 (UNCONDITIONAL_CALL)
// 0047ad80: ADD ESP,0x4
// 0047ad83: POP ESI
// 0047ad84: ADD ESP,0x1c
// 0047ad87: POP EBP
// 0047ad88: POP EDI
// 0047ad89: POP EBX
// 0047ad8a: RET
// 0047ad8b: MOV dword ptr [EAX],0xffffffff
//   Label: LAB_0047ad8b
// 0047ad91: JMP 0x0047ab68
//   XREF to: 0047ab68 (UNCONDITIONAL_JUMP)
