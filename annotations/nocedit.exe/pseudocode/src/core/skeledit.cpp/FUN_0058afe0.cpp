// Name: core_skeledit.cpp_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058b158]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058afe0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c74a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059386d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_no_parent_0064a562
//   TerminatedCString s_s_2d_s_d_s_0064a56e
//   TerminatedCString s_Dump_to_the_clipboard_0064a57d
//   TerminatedCString s_Viewing_bone_heirarchy_f_0064a595
//   TerminatedCString s_Heirarchy_for_s_0064a5b4
//   TerminatedCString s_s_0064a5c9
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_0366b650
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058afe0(void)

{
  undefined1 *puVar1;
  int iVar2;
  int index;
  BADSPACEBASE *in_ESP;
  int *piVar3;
  char *buffer;
  int *piVar4;
  int *in_stack_0000000c;
  CStrList_vtable *in_stack_fffffb90;
  CStrList_vtable *in_stack_fffffb9c;
  char **in_stack_fffffba0;
  CStrList_vtable *in_stack_fffffba4;
  CStrList_vtable *in_stack_fffffba8;
  uint in_stack_fffffbac;
  char acStack_d4 [4];
  char acStack_d0 [4];
  char acStack_cc [4];
  char acStack_c8 [192];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4a0);
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb84);
  if (0 < *in_stack_0000000c) {
    piVar3 = in_stack_0000000c + 1;
    piVar4 = in_stack_0000000c;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_d0,"%2d. %s\t%d. %s",acStack_d0,"%2d. %s\t%d. %s",iVar2,piVar3,
                 piVar4[9]);
      piVar4 = piVar4 + 0x21;
      piVar3 = piVar3 + 0x21;
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffb84,acStack_d4);
    } while (iVar2 < *in_stack_0000000c);
  }
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb88,"(Dump to the clipboard)");
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_cc,"Viewing bone heirarchy for %s.");
  puVar1 = (undefined1 *)
           shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)&stack0xfffffb90,acStack_c8,-1,0);
  if (puVar1 == (undefined1 *)((int)&in_stack_fffffb90[-1].handleInput + 3)) {
    index = 0;
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0366b650,"Heirarchy for %s\r\n\r\n");
    buffer = &DAT_0366b650 + iVar2;
    if (0 < *in_stack_0000000c) {
      do {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffb98,index);
        index = index + 1;
        iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"%s\r\n");
        buffer = buffer + iVar2;
      } while (index < *in_stack_0000000c);
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,&DAT_0366b650);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb9c,0,(uint)in_stack_fffffb9c,(uint)in_stack_fffffba0,
             (uint)in_stack_fffffba4,(uint)in_stack_fffffba8,in_stack_fffffbac);
  return;
}


// Assembly code:
// 0058afe0: PUSH 0x4a0
//   Label: core_skeledit.cpp_FUN_0058afe0
// 0058afe5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058afea: PUSH EBX
// 0058afeb: PUSH ESI
// 0058afec: PUSH EDI
// 0058afed: PUSH EBP
// 0058afee: SUB ESP,0x474
// 0058aff4: MOV EBP,dword ptr [ESP + 0x488]
//   XREF to: Stack[0x4] (READ)
// 0058affb: MOV EAX,ESP
// 0058affd: PUSH EAX
// 0058affe: XOR EBX,EBX
// 0058b000: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0058b005: MOV EDX,dword ptr [EBP]
// 0058b008: ADD ESP,0x4
// 0058b00b: TEST EDX,EDX
// 0058b00d: JLE 0x0058b078
//   XREF to: 0058b078 (CONDITIONAL_JUMP)
// 0058b00f: LEA EAX,[EBP + 0x4]
// 0058b012: MOV EDI,EBP
// 0058b014: MOV ESI,EAX
// 0058b016: MOV dword ptr [ESP + 0x470],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058b01d: MOV EAX,dword ptr [EDI + 0x24]
//   Label: LAB_0058b01d
// 0058b020: MOV EDX,0x64a562
//   XREF to: 0064a562 (DATA)
// 0058b025: TEST EAX,EAX
// 0058b027: JL 0x0058b036
//   XREF to: 0058b036 (CONDITIONAL_JUMP)
// 0058b029: IMUL EDX,EAX,0x84
// 0058b02f: ADD EDX,dword ptr [ESP + 0x470]
//   XREF to: Stack[-0x14] (READ)
// 0058b036: PUSH EDX
//   Label: LAB_0058b036
//   XREF to: 0064a562 (DATA)
// 0058b037: PUSH EAX
// 0058b038: PUSH ESI
// 0058b039: PUSH EBX
// 0058b03a: PUSH 0x64a56e
//   XREF to: 0064a56e (DATA)
// 0058b03f: LEA EAX,[ESP + 0x3bc]
//   XREF to: Stack[-0xdc] (DATA)
// 0058b046: PUSH EAX
// 0058b047: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058b04c: ADD ESP,0x18
// 0058b04f: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0xdc] (DATA)
// 0058b056: PUSH EAX
// 0058b057: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x484] (DATA)
// 0058b05b: ADD EDI,0x84
// 0058b061: PUSH EAX
// 0058b062: ADD ESI,0x84
// 0058b068: INC EBX
// 0058b069: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058b06e: MOV ECX,dword ptr [EBP]
// 0058b071: ADD ESP,0x8
// 0058b074: CMP EBX,ECX
// 0058b076: JL 0x0058b01d
//   XREF to: 0058b01d (CONDITIONAL_JUMP)
// 0058b078: PUSH 0x64a57d
//   Label: LAB_0058b078
//   XREF to: 0064a57d (DATA)
// 0058b07d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x484] (DATA)
// 0058b081: PUSH EAX
// 0058b082: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0058b087: ADD ESP,0x8
// 0058b08a: MOV EBX,dword ptr [ESP + 0x48c]
//   XREF to: Stack[0x8] (READ)
// 0058b091: PUSH EBX
// 0058b092: PUSH 0x64a595
//   XREF to: 0064a595 (DATA)
// 0058b097: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0xdc] (DATA)
// 0058b09e: PUSH EAX
// 0058b09f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058b0a4: ADD ESP,0xc
// 0058b0a7: PUSH 0x0
// 0058b0a9: PUSH -0x1
// 0058b0ab: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0xdc] (DATA)
// 0058b0b2: PUSH EAX
// 0058b0b3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x484] (DATA)
// 0058b0b7: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x484] (READ)
// 0058b0bb: PUSH EAX
// 0058b0bc: DEC EBX
// 0058b0bd: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0058b0c2: ADD ESP,0x10
// 0058b0c5: CMP EAX,EBX
// 0058b0c7: JZ 0x0058b0e3
//   XREF to: 0058b0e3 (CONDITIONAL_JUMP)
// 0058b0c9: PUSH 0x0
//   Label: LAB_0058b0c9
// 0058b0cb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x484] (DATA)
// 0058b0cf: PUSH EAX
// 0058b0d0: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0058b0d5: ADD ESP,0x8
// 0058b0d8: ADD ESP,0x474
// 0058b0de: POP EBP
// 0058b0df: POP EDI
// 0058b0e0: POP ESI
// 0058b0e1: POP EBX
// 0058b0e2: RET
// 0058b0e3: MOV ESI,dword ptr [ESP + 0x48c]
//   Label: LAB_0058b0e3
//   XREF to: Stack[0x8] (READ)
// 0058b0ea: PUSH ESI
// 0058b0eb: PUSH 0x64a5b4
//   XREF to: 0064a5b4 (DATA)
// 0058b0f0: PUSH 0x366b650
//   XREF to: 0366b650 (DATA)
// 0058b0f5: XOR EBX,EBX
// 0058b0f7: MOV ESI,0x366b650
//   XREF to: 0366b650 (DATA)
// 0058b0fc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058b101: ADD ESP,0xc
// 0058b104: MOV EDI,dword ptr [EBP]
// 0058b107: ADD ESI,EAX
// 0058b109: TEST EDI,EDI
// 0058b10b: JLE 0x0058b140
//   XREF to: 0058b140 (CONDITIONAL_JUMP)
// 0058b10d: PUSH EBX
//   Label: LAB_0058b10d
// 0058b10e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x484] (DATA)
// 0058b112: PUSH EAX
// 0058b113: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0058b118: ADD ESP,0x8
// 0058b11b: PUSH EAX
// 0058b11c: PUSH 0x64a5c9
//   XREF to: 0064a5c9 (DATA)
// 0058b121: PUSH ESI
// 0058b122: INC EBX
// 0058b123: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058b128: ADD ESP,0xc
// 0058b12b: MOV EDI,dword ptr [EBP]
// 0058b12e: ADD ESI,EAX
// 0058b130: CMP EBX,EDI
// 0058b132: JL 0x0058b10d
//   XREF to: 0058b10d (CONDITIONAL_JUMP)
// 0058b134: LEA EAX,[EAX]
// 0058b13a: LEA EDX,[EDX]
// 0058b140: PUSH 0x366b650
//   Label: LAB_0058b140
//   XREF to: 0366b650 (DATA)
// 0058b145: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058b14b: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0058b14c: CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
// 0058b151: ADD ESP,0x8
// 0058b154: JMP 0x0058b0c9
//   XREF to: 0058b0c9 (UNCONDITIONAL_JUMP)
