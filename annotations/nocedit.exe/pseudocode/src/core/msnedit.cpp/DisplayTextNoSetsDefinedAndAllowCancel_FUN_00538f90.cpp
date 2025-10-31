// Name: core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
// Address: 00538f90
// Address Range: [[00538f90, 00539052]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538665 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_sets_defined_0063c33b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

int core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *string_data;
  int in_stack_00000004;
  char *in_stack_0000000c;
  int in_stack_00000010;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  uint in_stack_fffffc60;
  
  if (*(int *)(in_stack_00000004 + 0x144) < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No sets defined.");
    return -1;
  }
  iVar1 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  if (0 < *(int *)(in_stack_00000004 + 0x144)) {
    string_data = (char *)(in_stack_00000004 + 0x148);
    do {
      iVar1 = iVar1 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc4c,string_data);
      string_data = string_data + 0x100;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x144));
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc4c,in_stack_0000000c,in_stack_00000010,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc50,0,(uint)in_stack_fffffc50,(uint)in_stack_fffffc54,
             (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
  return iVar1;
}


// Assembly code:
// 00538f90: PUSH EBX
//   Label: core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
// 00538f91: PUSH ESI
// 00538f92: PUSH EDI
// 00538f93: PUSH EBP
// 00538f94: SUB ESP,0x3a8
// 00538f9a: MOV EDI,dword ptr [ESP + 0x3bc]
//   XREF to: Stack[0x4] (READ)
// 00538fa1: CMP dword ptr [EDI + 0x144],0x1
// 00538fa8: JL 0x0053902d
//   XREF to: 0053902d (CONDITIONAL_JUMP)
// 00538fae: MOV EAX,ESP
// 00538fb0: PUSH EAX
// 00538fb1: XOR EBX,EBX
// 00538fb3: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00538fb8: MOV ECX,dword ptr [EDI + 0x144]
// 00538fbe: ADD ESP,0x4
// 00538fc1: TEST ECX,ECX
// 00538fc3: JLE 0x00538ff0
//   XREF to: 00538ff0 (CONDITIONAL_JUMP)
// 00538fc5: LEA ESI,[EDI + 0x148]
// 00538fcb: PUSH ESI
//   Label: LAB_00538fcb
// 00538fcc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b8] (DATA)
// 00538fd0: PUSH EAX
// 00538fd1: INC EBX
// 00538fd2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00538fd7: ADD ESI,0x100
// 00538fdd: MOV EBP,dword ptr [EDI + 0x144]
// 00538fe3: ADD ESP,0x8
// 00538fe6: CMP EBX,EBP
// 00538fe8: JL 0x00538fcb
//   XREF to: 00538fcb (CONDITIONAL_JUMP)
// 00538fea: LEA EAX,[EAX]
// 00538ff0: PUSH 0x0
//   Label: LAB_00538ff0
// 00538ff2: MOV EAX,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[0xc] (READ)
// 00538ff9: PUSH EAX
// 00538ffa: MOV EDX,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[0x8] (READ)
// 00539001: PUSH EDX
// 00539002: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b8] (DATA)
// 00539006: PUSH EAX
// 00539007: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053900c: ADD ESP,0x10
// 0053900f: PUSH 0x0
// 00539011: MOV ESI,EAX
// 00539013: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b8] (DATA)
// 00539017: PUSH EAX
// 00539018: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053901d: ADD ESP,0x8
// 00539020: MOV EAX,ESI
// 00539022: ADD ESP,0x3a8
// 00539028: POP EBP
// 00539029: POP EDI
// 0053902a: POP ESI
// 0053902b: POP EBX
// 0053902c: RET
// 0053902d: PUSH 0x63c33b
//   Label: LAB_0053902d
//   XREF to: 0063c33b (DATA)
// 00539032: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00539038: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00539039: MOV ESI,0xffffffff
// 0053903e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00539043: ADD ESP,0x8
// 00539046: MOV EAX,ESI
// 00539048: ADD ESP,0x3a8
// 0053904e: POP EBP
// 0053904f: POP EDI
// 00539050: POP ESI
// 00539051: POP EBX
// 00539052: RET
