// Name: core_platfrm.cpp_FUN_0054e530
// Address: 0054e530
// Address Range: [[0054e530, 0054e6f2]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e530()
// Cross-references:
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8bc [DATA]
// Globals:
//   TerminatedCString s_Choose_a_different_cours_0063f9e9
//   TerminatedCString s_Don_t_use_a_course_file_0063fa08
//   TerminatedCString s_Oops_Forget_I_ever_click_0063fa20
//   TerminatedCString s_Change_course_setting_fo_0063fa46
//   TerminatedCString s_pth_0063fa6c
//   TerminatedCString s_data_0063fa72
//   TerminatedCString s_Select_a_course_for_plat_0063fa77
//   TerminatedCString s_pth_0063fa97
//   TerminatedCString s_data_0063fa9d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CPlatformClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_course.cpp_CCourse_free_FUN_004426c0
//   core_course.cpp_CCourse_FUN_004427a0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e530(undefined4 param_1) */

int core_platfrm_cpp_FUN_0054e530(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  bool auto_select_flag;
  CStrList_vtable *in_stack_fffffad8;
  char **in_stack_fffffadc;
  CStrList_vtable *in_stack_fffffae0;
  CStrList_vtable *in_stack_fffffae4;
  CStrList_vtable *in_stack_fffffae8;
  char **in_stack_fffffaec;
  CStrList_vtable *in_stack_fffffaf0;
  uint in_stack_fffffaf4;
  char acStack_188 [4];
  char acStack_184 [4];
  char acStack_180 [176];
  char acStack_d0 [4];
  char acStack_cc [192];
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  auto_select_flag = (bool)((char)pCVar1 + -0x10);
  if (*(char *)&pCVar1[2].orient_matrix.m[0].y == '\0') {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_d0,"Select a course for platform %s",in_stack_00000004);
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,acStack_cc,"data","*.pth",auto_select_flag)
    ;
    return iVar2;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac0);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffac4,"Choose a different course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffac8,"Don't use a course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffacc,"Oops.  Forget I ever clicked there...");
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_188,"Change course setting for platform %s");
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffad4,acStack_184,-1,0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      core_course_cpp_CCourse_FUN_004427a0();
      core_course_cpp_CCourse_FUN_004427a0();
      core_course_cpp_CCourse_free_FUN_004426c0((CCourse *)&pCVar1[2].runtime_state);
      *(undefined1 *)&pCVar1[2].orient_matrix.m[0].y = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffae4,0,(uint)in_stack_fffffae4,(uint)in_stack_fffffae8,
                 (uint)in_stack_fffffaec,(uint)in_stack_fffffaf0,in_stack_fffffaf4);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffad8,0,(uint)in_stack_fffffad8,(uint)in_stack_fffffadc,
               (uint)in_stack_fffffae0,(uint)in_stack_fffffae4,(uint)in_stack_fffffae8);
    return 0;
  }
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,acStack_180,"data","*.pth",auto_select_flag);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffadc,0,(uint)in_stack_fffffadc,(uint)in_stack_fffffae0,
             (uint)in_stack_fffffae4,(uint)in_stack_fffffae8,(uint)in_stack_fffffaec);
  return iVar2;
}


// Assembly code:
// 0054e530: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054e530
// 0054e531: PUSH ESI
// 0054e532: PUSH EDI
// 0054e533: SUB ESP,0x538
// 0054e539: MOV EDI,dword ptr [ESP + 0x548]
//   XREF to: Stack[0x4] (READ)
// 0054e540: MOV EDX,dword ptr [0x030d508c]
//   XREF to: 030d508c (READ)
// 0054e546: PUSH EDX
// 0054e547: PUSH EDI
// 0054e548: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054e54d: MOV EBX,EAX
// 0054e54f: LEA ESI,[EAX + 0x2f0]
// 0054e555: MOV AH,byte ptr [EAX + 0x2f0]
// 0054e55b: ADD ESP,0x8
// 0054e55e: TEST AH,AH
// 0054e560: JZ 0x0054e6ab
//   XREF to: 0054e6ab (CONDITIONAL_JUMP)
// 0054e566: MOV EAX,ESP
// 0054e568: PUSH EAX
// 0054e569: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0054e56e: ADD ESP,0x4
// 0054e571: PUSH 0x63f9e9
//   XREF to: 0063f9e9 (DATA)
// 0054e576: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x544] (DATA)
// 0054e57a: PUSH EAX
// 0054e57b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0054e580: ADD ESP,0x8
// 0054e583: PUSH 0x63fa08
//   XREF to: 0063fa08 (DATA)
// 0054e588: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x544] (DATA)
// 0054e58c: PUSH EAX
// 0054e58d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0054e592: ADD ESP,0x8
// 0054e595: PUSH 0x63fa20
//   XREF to: 0063fa20 (DATA)
// 0054e59a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x544] (DATA)
// 0054e59e: PUSH EAX
// 0054e59f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0054e5a4: ADD ESP,0x8
// 0054e5a7: PUSH EDI
// 0054e5a8: PUSH 0x63fa46
//   XREF to: 0063fa46 (DATA)
// 0054e5ad: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x19c] (DATA)
// 0054e5b4: PUSH EAX
// 0054e5b5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054e5ba: ADD ESP,0xc
// 0054e5bd: PUSH 0x0
// 0054e5bf: PUSH -0x1
// 0054e5c1: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x19c] (DATA)
// 0054e5c8: PUSH EAX
// 0054e5c9: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x544] (DATA)
// 0054e5cd: PUSH EAX
// 0054e5ce: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0054e5d3: ADD ESP,0x10
// 0054e5d6: TEST EAX,EAX
// 0054e5d8: JBE 0x0054e64e
//   XREF to: 0054e64e (CONDITIONAL_JUMP)
// 0054e5da: CMP EAX,0x1
// 0054e5dd: JNZ 0x0054e68f
//   XREF to: 0054e68f (CONDITIONAL_JUMP)
// 0054e5e3: LEA EAX,[EBX + 0x334]
// 0054e5e9: PUSH EAX
// 0054e5ea: LEA EAX,[EBX + 0x31c]
// 0054e5f0: PUSH EAX
// 0054e5f1: LEA ESI,[EBX + 0x310]
// 0054e5f7: PUSH 0x0
// 0054e5f9: PUSH ESI
// 0054e5fa: CALL core_course.cpp_CCourse_FUN_004427a0
//   XREF to: 004427a0 (UNCONDITIONAL_CALL)
// 0054e5ff: ADD ESP,0x10
// 0054e602: LEA EAX,[EBX + 0x344]
// 0054e608: PUSH EAX
// 0054e609: LEA EAX,[EBX + 0x328]
// 0054e60f: PUSH EAX
// 0054e610: PUSH 0x3f7ff972
// 0054e615: PUSH ESI
// 0054e616: CALL core_course.cpp_CCourse_FUN_004427a0
//   XREF to: 004427a0 (UNCONDITIONAL_CALL)
// 0054e61b: ADD ESP,0x10
// 0054e61e: PUSH ESI
// 0054e61f: CALL core_course.cpp_CCourse_free_FUN_004426c0
//   XREF to: 004426c0 (UNCONDITIONAL_CALL)
// 0054e624: ADD ESP,0x4
// 0054e627: PUSH 0x0
// 0054e629: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x544] (DATA)
// 0054e62d: PUSH EAX
// 0054e62e: MOV byte ptr [EBX + 0x2f0],0x0
// 0054e635: MOV EBX,0x1
// 0054e63a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0054e63f: ADD ESP,0x8
// 0054e642: MOV EAX,EBX
// 0054e644: ADD ESP,0x538
// 0054e64a: POP EDI
// 0054e64b: POP ESI
// 0054e64c: POP EBX
// 0054e64d: RET
// 0054e64e: PUSH 0x0
//   Label: LAB_0054e64e
// 0054e650: PUSH ESI
// 0054e651: PUSH 0x63fa6c
//   XREF to: 0063fa6c (DATA)
// 0054e656: PUSH 0x63fa72
//   XREF to: 0063fa72 (DATA)
// 0054e65b: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x19c] (DATA)
// 0054e662: PUSH EAX
// 0054e663: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0054e669: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0054e66a: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0054e66f: ADD ESP,0x18
// 0054e672: PUSH 0x0
// 0054e674: MOV EBX,EAX
// 0054e676: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x544] (DATA)
// 0054e67a: PUSH EAX
// 0054e67b: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0054e680: ADD ESP,0x8
// 0054e683: MOV EAX,EBX
// 0054e685: ADD ESP,0x538
// 0054e68b: POP EDI
// 0054e68c: POP ESI
// 0054e68d: POP EBX
// 0054e68e: RET
// 0054e68f: XOR EBX,EBX
//   Label: LAB_0054e68f
// 0054e691: PUSH EBX
// 0054e692: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x544] (DATA)
// 0054e696: PUSH EAX
// 0054e697: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0054e69c: ADD ESP,0x8
// 0054e69f: MOV EAX,EBX
// 0054e6a1: ADD ESP,0x538
// 0054e6a7: POP EDI
// 0054e6a8: POP ESI
// 0054e6a9: POP EBX
// 0054e6aa: RET
// 0054e6ab: PUSH EDI
//   Label: LAB_0054e6ab
// 0054e6ac: PUSH 0x63fa77
//   XREF to: 0063fa77 (DATA)
// 0054e6b1: LEA EAX,[ESP + 0x478]
//   XREF to: Stack[-0xd4] (DATA)
// 0054e6b8: PUSH EAX
// 0054e6b9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054e6be: ADD ESP,0xc
// 0054e6c1: PUSH 0x0
// 0054e6c3: PUSH ESI
// 0054e6c4: PUSH 0x63fa97
//   XREF to: 0063fa97 (DATA)
// 0054e6c9: PUSH 0x63fa9d
//   XREF to: 0063fa9d (DATA)
// 0054e6ce: LEA EAX,[ESP + 0x480]
//   XREF to: Stack[-0xd4] (DATA)
// 0054e6d5: PUSH EAX
// 0054e6d6: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0054e6dc: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0054e6dd: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0054e6e2: ADD ESP,0x18
// 0054e6e5: MOV EBX,EAX
// 0054e6e7: MOV EAX,EBX
// 0054e6e9: ADD ESP,0x538
// 0054e6ef: POP EDI
// 0054e6f0: POP ESI
// 0054e6f1: POP EBX
// 0054e6f2: RET
