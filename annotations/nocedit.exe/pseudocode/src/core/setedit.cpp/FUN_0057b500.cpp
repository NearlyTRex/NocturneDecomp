// Name: core_setedit.cpp_FUN_0057b500
// Address: 0057b500
// Address Range: [[0057b500, 0057b5f9]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057b500()
// Cross-references:
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ca09 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Not_a_spot_light_006477e5
//   TerminatedCString s_Precompute_light_visibil_006477f7
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList
//   undefined4 DAT_03276db4
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
//   crt_string.c_strcmp_FUN_005fef20
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_0057b500(undefined4 param_1, undefined4 param_2) */

void core_setedit_cpp_FUN_0057b500(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  CDemonSet *in_stack_00000014;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < in_stack_00000004->light_count)) {
    if (in_stack_00000004->lights[in_stack_00000008].light_type == 0) {
      iVar3 = 0;
      if (0 < g_MasterLightCount) {
        iVar2 = 0;
        do {
          unaff_EDI = *(int *)((int)g_MasterLightList + iVar2);
          iVar1 = crt_string_c_strcmp_FUN_005fef20
                            (in_stack_00000004->lights[in_stack_00000008].name,
                             (char *)(unaff_EDI + 0x40));
          if (iVar1 == 0) {
            *(undefined4 *)(unaff_EDI + 0x1cb4) = 0;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < g_MasterLightCount);
      }
      iVar3 = core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50();
      *(undefined4 *)(unaff_EDI + 0x1cb4) = 1;
      if (iVar3 != 0) {
        core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar3 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000004);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000014);
        return;
      }
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Not a spot light!");
    }
  }
  return;
}


// Assembly code:
// 0057b500: PUSH EBX
//   Label: core_setedit.cpp_FUN_0057b500
// 0057b501: PUSH ESI
// 0057b502: PUSH EDI
// 0057b503: PUSH EBP
// 0057b504: SUB ESP,0x4
// 0057b507: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0057b50b: TEST EDX,EDX
// 0057b50d: JL 0x0057b588
//   XREF to: 0057b588 (CONDITIONAL_JUMP)
// 0057b513: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0057b517: CMP EDX,dword ptr [EBX + 0x19a2c]
// 0057b51d: JGE 0x0057b588
//   XREF to: 0057b588 (CONDITIONAL_JUMP)
// 0057b51f: IMUL EBX,EDX,0x1898
// 0057b525: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0057b529: ADD EAX,0x19a30
// 0057b52e: ADD EAX,EBX
// 0057b530: MOV EBP,dword ptr [EAX]
// 0057b532: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0057b535: TEST EBP,EBP
// 0057b537: JNZ 0x0057b590
//   XREF to: 0057b590 (CONDITIONAL_JUMP)
// 0057b539: MOV EAX,[0x03276dac]
//   XREF to: 03276dac (READ)
// 0057b53e: XOR ESI,ESI
// 0057b540: TEST EAX,EAX
// 0057b542: JLE 0x0057b569
//   XREF to: 0057b569 (CONDITIONAL_JUMP)
// 0057b544: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0057b547: XOR EBX,EBX
// 0057b549: ADD EBP,0x4
// 0057b54c: MOV EDI,dword ptr [EBX + 0x3276db0]
//   Label: LAB_0057b54c
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0057b552: LEA EAX,[EDI + 0x40]
// 0057b555: PUSH EAX
// 0057b556: PUSH EBP
// 0057b557: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0057b55c: ADD ESP,0x8
// 0057b55f: TEST EAX,EAX
// 0057b561: JNZ 0x0057b5a6
//   XREF to: 0057b5a6 (CONDITIONAL_JUMP)
// 0057b563: MOV dword ptr [EDI + 0x1cb4],EAX
// 0057b569: MOV EBX,dword ptr [ESP]
//   Label: LAB_0057b569
//   XREF to: Stack[-0x14] (DATA)
// 0057b56c: PUSH EBX
// 0057b56d: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0057b571: PUSH ESI
// 0057b572: CALL core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
//   XREF to: 0057ae50 (UNCONDITIONAL_CALL)
// 0057b577: ADD ESP,0x8
// 0057b57a: MOV dword ptr [EDI + 0x1cb4],0x1
// 0057b584: TEST EAX,EAX
// 0057b586: JNZ 0x0057b5b6
//   XREF to: 0057b5b6 (CONDITIONAL_JUMP)
// 0057b588: ADD ESP,0x4
//   Label: LAB_0057b588
// 0057b58b: POP EBP
// 0057b58c: POP EDI
// 0057b58d: POP ESI
// 0057b58e: POP EBX
// 0057b58f: RET
// 0057b590: PUSH 0x6477e5
//   Label: LAB_0057b590
//   XREF to: 006477e5 (DATA)
// 0057b595: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057b59b: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057b59c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057b5a1: ADD ESP,0x8
// 0057b5a4: JMP 0x0057b588
//   XREF to: 0057b588 (UNCONDITIONAL_JUMP)
// 0057b5a6: MOV ECX,dword ptr [0x03276dac]
//   Label: LAB_0057b5a6
//   XREF to: 03276dac (READ)
// 0057b5ac: INC ESI
// 0057b5ad: ADD EBX,0x4
// 0057b5b0: CMP ESI,ECX
// 0057b5b2: JL 0x0057b54c
//   XREF to: 0057b54c (CONDITIONAL_JUMP)
// 0057b5b4: JMP 0x0057b569
//   XREF to: 0057b569 (UNCONDITIONAL_JUMP)
// 0057b5b6: PUSH ESI
//   Label: LAB_0057b5b6
// 0057b5b7: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057b5bc: ADD ESP,0x4
// 0057b5bf: PUSH 0x6477f7
//   XREF to: 006477f7 (DATA)
// 0057b5c4: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057b5ca: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0057b5cb: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0057b5d0: ADD ESP,0x8
// 0057b5d3: TEST EAX,EAX
// 0057b5d5: JZ 0x0057b5e5
//   XREF to: 0057b5e5 (CONDITIONAL_JUMP)
// 0057b5d7: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0057b5db: PUSH EAX
// 0057b5dc: PUSH ESI
// 0057b5dd: CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   XREF to: 0056a470 (UNCONDITIONAL_CALL)
// 0057b5e2: ADD ESP,0x8
// 0057b5e5: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_0057b5e5
//   XREF to: Stack[0x4] (READ)
// 0057b5e9: PUSH ECX
// 0057b5ea: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057b5ef: ADD ESP,0x4
// 0057b5f2: ADD ESP,0x4
// 0057b5f5: POP EBP
// 0057b5f6: POP EDI
// 0057b5f7: POP ESI
// 0057b5f8: POP EBX
// 0057b5f9: RET
