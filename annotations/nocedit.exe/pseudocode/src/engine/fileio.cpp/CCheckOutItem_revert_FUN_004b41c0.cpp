// Name: engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0
// Address: 004b41c0
// Address Range: [[004b41c0, 004b421d]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0(CCheckOutItem * this_ptr, char * output_buffer)
// Globals:
//   TerminatedCString s_anon_00626a5d
//   TerminatedCString s_Select_file_to_undo_chec_00626a5f
// Function calls:
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CCheckOutItem_revert_FUN_004b41c0(CCheckOutItem *this_ptr,char *output_buffer)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_100 [252];
  
  iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,output_buffer,&stack0xfffffef8,"Select file to undo check out",
                     "*");
  if (iVar1 != 0) {
    iVar1 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                      (this_ptr,&stack0xfffffefc);
    if (iVar1 != 0) {
      engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(this_ptr->name,acStack_100);
      return;
    }
  }
  return;
}


// Assembly code:
// 004b41c0: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0
// 004b41c1: SUB ESP,0x104
// 004b41c7: MOV EBX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 004b41ce: PUSH 0x626a5d
//   XREF to: 00626a5d (DATA)
// 004b41d3: PUSH 0x626a5f
//   XREF to: 00626a5f (DATA)
// 004b41d8: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x108] (DATA)
// 004b41dc: PUSH EAX
// 004b41dd: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 004b41e4: PUSH EDX
// 004b41e5: PUSH EBX
// 004b41e6: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004b41eb: ADD ESP,0x14
// 004b41ee: TEST EAX,EAX
// 004b41f0: JNZ 0x004b41fa
//   XREF to: 004b41fa (CONDITIONAL_JUMP)
// 004b41f2: ADD ESP,0x104
//   Label: LAB_004b41f2
// 004b41f8: POP EBX
// 004b41f9: RET
// 004b41fa: MOV EAX,ESP
//   Label: LAB_004b41fa
// 004b41fc: PUSH EAX
// 004b41fd: PUSH EBX
// 004b41fe: CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
// 004b4203: ADD ESP,0x8
// 004b4206: TEST EAX,EAX
// 004b4208: JZ 0x004b41f2
//   XREF to: 004b41f2 (CONDITIONAL_JUMP)
// 004b420a: MOV EAX,ESP
// 004b420c: PUSH EAX
// 004b420d: PUSH EBX
// 004b420e: CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   XREF to: 004b3220 (UNCONDITIONAL_CALL)
// 004b4213: ADD ESP,0x8
// 004b4216: ADD ESP,0x104
// 004b421c: POP EBX
// 004b421d: RET
