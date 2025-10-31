// Name: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
// Address: 0049f180
// Address Range: [[0049f180, 0049f26a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180(CEditorTools * this_ptr, char * format, ...)
// Cross-references:
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b70a0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Yes_006230c5
//   TerminatedCString s_Yes_to_All_006230ca
//   TerminatedCString s_No_006230d6
//   TerminatedCString s_Cancel_006230da
//   char[1024] g_DialogMessageBuffer
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
          (CEditorTools *this_ptr,char *format,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_DialogMessageBuffer,format,(va_list_t *)&stack0xfffffff8);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffec);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffff0,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffff4,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffff8,"^No");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffffc,"^Cancel");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)g_DialogMessageBuffer,&stack0x00000000,0);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&this_ptr,0,(uint)this_ptr);
      return -1;
    }
    iVar1 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&this_ptr,0,(uint)this_ptr);
  return iVar1;
}


// Assembly code:
// 0049f180: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
// 0049f181: SUB ESP,0x14
// 0049f184: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[0xc] (DATA)
// 0049f188: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0049f18c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8] (DATA)
// 0049f190: PUSH EAX
// 0049f191: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0049f195: PUSH EDX
// 0049f196: PUSH 0x2cf0930
//   XREF to: 02cf0930 (DATA)
// 0049f19b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049f1a0: ADD ESP,0xc
// 0049f1a3: MOV EAX,ESP
// 0049f1a5: XOR ECX,ECX
// 0049f1a7: PUSH EAX
// 0049f1a8: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0049f1ac: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0049f1b1: ADD ESP,0x4
// 0049f1b4: PUSH 0x6230c5
//   XREF to: 006230c5 (DATA)
// 0049f1b9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f1bd: PUSH EAX
// 0049f1be: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f1c3: ADD ESP,0x8
// 0049f1c6: PUSH 0x6230ca
//   XREF to: 006230ca (DATA)
// 0049f1cb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f1cf: PUSH EAX
// 0049f1d0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f1d5: ADD ESP,0x8
// 0049f1d8: PUSH 0x6230d6
//   XREF to: 006230d6 (DATA)
// 0049f1dd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f1e1: PUSH EAX
// 0049f1e2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f1e7: ADD ESP,0x8
// 0049f1ea: PUSH 0x6230da
//   XREF to: 006230da (DATA)
// 0049f1ef: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f1f3: PUSH EAX
// 0049f1f4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f1f9: ADD ESP,0x8
// 0049f1fc: PUSH 0x0
// 0049f1fe: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f202: PUSH EAX
// 0049f203: PUSH 0x2cf0930
//   XREF to: 02cf0930 (DATA)
// 0049f208: CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
//   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)
// 0049f20d: ADD ESP,0xc
// 0049f210: TEST EAX,EAX
// 0049f212: JZ 0x0049f235
//   XREF to: 0049f235 (CONDITIONAL_JUMP)
// 0049f214: CMP EAX,0x1
// 0049f217: JZ 0x0049f242
//   XREF to: 0049f242 (CONDITIONAL_JUMP)
// 0049f219: CMP EAX,0x2
// 0049f21c: JNZ 0x0049f250
//   XREF to: 0049f250 (CONDITIONAL_JUMP)
// 0049f21e: XOR EBX,EBX
// 0049f220: PUSH EBX
// 0049f221: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f225: PUSH EAX
// 0049f226: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   Label: LAB_0049f226
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0049f22b: ADD ESP,0x8
// 0049f22e: MOV EAX,EBX
// 0049f230: ADD ESP,0x14
// 0049f233: POP EBX
// 0049f234: RET
// 0049f235: PUSH EAX
//   Label: LAB_0049f235
// 0049f236: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f23a: PUSH EAX
// 0049f23b: MOV EBX,0x1
// 0049f240: JMP 0x0049f226
//   XREF to: 0049f226 (UNCONDITIONAL_JUMP)
// 0049f242: PUSH 0x0
//   Label: LAB_0049f242
// 0049f244: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f248: PUSH EAX
// 0049f249: MOV EBX,0x2
// 0049f24e: JMP 0x0049f226
//   XREF to: 0049f226 (UNCONDITIONAL_JUMP)
// 0049f250: PUSH 0x0
//   Label: LAB_0049f250
// 0049f252: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0049f256: PUSH EAX
// 0049f257: MOV EBX,0xffffffff
// 0049f25c: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0049f261: ADD ESP,0x8
// 0049f264: MOV EAX,EBX
// 0049f266: ADD ESP,0x14
// 0049f269: POP EBX
// 0049f26a: RET
