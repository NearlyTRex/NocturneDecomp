// Name: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
// Address: 004b2d70
// Address Range: [[004b2d70, 004b2e58]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList * this_ptr, int entry_index)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4f08 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b37dd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bc00a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062642c
//   TerminatedCString s_CCheckOutList_remove_inv_00626441
//   TerminatedCString s_engine_fileio_cpp_00626468
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList *this_ptr,int entry_index)

{
  int iVar1;
  CCheckOutItem *pCVar2;
  
  if ((entry_index < 0) || (this_ptr->count <= entry_index)) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x2f4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCheckOutList::remove - invalid index!");
  }
  if (1 < this_ptr->count) {
    iVar1 = this_ptr->count + -1;
    this_ptr->count = iVar1;
    crt_string_c_memmove_FUN_005fe5e0
              (this_ptr->items + entry_index,this_ptr->items + entry_index + 1,
               (iVar1 - entry_index) * 0x168);
    pCVar2 = (CCheckOutItem *)
             shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->items,this_ptr->count * 0x168,"..\\engine\\fileio.cpp",0x2f8);
    this_ptr->items = pCVar2;
    return (uint)(pCVar2 != (CCheckOutItem *)0x0);
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  return 1;
}


// Assembly code:
// 004b2d70: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
// 004b2d71: PUSH ESI
// 004b2d72: PUSH EBP
// 004b2d73: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004b2d77: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004b2d7b: TEST ESI,ESI
// 004b2d7d: JL 0x004b2d83
//   XREF to: 004b2d83 (CONDITIONAL_JUMP)
// 004b2d7f: CMP ESI,dword ptr [EBX]
// 004b2d81: JL 0x004b2da8
//   XREF to: 004b2da8 (CONDITIONAL_JUMP)
// 004b2d83: PUSH EDI
//   Label: LAB_004b2d83
// 004b2d84: MOV ECX,0x62642c
//   XREF to: 0062642c (DATA)
// 004b2d89: MOV EDI,0x2f4
// 004b2d8e: PUSH 0x626441
//   XREF to: 00626441 (DATA)
// 004b2d93: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b2d99: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b2d9f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b2da4: ADD ESP,0x4
// 004b2da7: POP EDI
// 004b2da8: MOV EBP,dword ptr [EBX]
//   Label: LAB_004b2da8
// 004b2daa: CMP EBP,0x1
// 004b2dad: JLE 0x004b2e47
//   XREF to: 004b2e47 (CONDITIONAL_JUMP)
// 004b2db3: LEA EAX,[EBP + -0x1]
// 004b2db6: MOV EDX,EAX
// 004b2db8: SUB EDX,ESI
// 004b2dba: MOV dword ptr [EBX],EAX
// 004b2dbc: LEA EAX,[EDX*0x4 + 0x0]
// 004b2dc3: SUB EAX,EDX
// 004b2dc5: SHL EAX,0x3
// 004b2dc8: MOV EDX,EAX
// 004b2dca: SHL EAX,0x4
// 004b2dcd: SUB EAX,EDX
// 004b2dcf: LEA EDX,[ESI + 0x1]
// 004b2dd2: PUSH EAX
// 004b2dd3: LEA EAX,[EDX*0x4 + 0x0]
// 004b2dda: SUB EAX,EDX
// 004b2ddc: SHL EAX,0x3
// 004b2ddf: MOV EDX,EAX
// 004b2de1: SHL EAX,0x4
// 004b2de4: MOV ECX,dword ptr [EBX + 0x4]
// 004b2de7: SUB EAX,EDX
// 004b2de9: ADD EAX,ECX
// 004b2deb: PUSH EAX
// 004b2dec: LEA EAX,[ESI*0x4 + 0x0]
// 004b2df3: SUB EAX,ESI
// 004b2df5: SHL EAX,0x3
// 004b2df8: MOV EDX,EAX
// 004b2dfa: SHL EAX,0x4
// 004b2dfd: SUB EAX,EDX
// 004b2dff: ADD ECX,EAX
// 004b2e01: PUSH ECX
// 004b2e02: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b2e07: MOV EDX,dword ptr [EBX]
// 004b2e09: LEA EAX,[EDX*0x4 + 0x0]
// 004b2e10: SUB EAX,EDX
// 004b2e12: ADD ESP,0xc
// 004b2e15: SHL EAX,0x3
// 004b2e18: PUSH 0x2f8
// 004b2e1d: MOV EDX,EAX
// 004b2e1f: SHL EAX,0x4
// 004b2e22: PUSH 0x626468
//   XREF to: 00626468 (DATA)
// 004b2e27: SUB EAX,EDX
// 004b2e29: PUSH EAX
// 004b2e2a: MOV EDX,dword ptr [EBX + 0x4]
// 004b2e2d: PUSH EDX
// 004b2e2e: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b2e33: ADD ESP,0x10
// 004b2e36: MOV dword ptr [EBX + 0x4],EAX
// 004b2e39: TEST EAX,EAX
// 004b2e3b: SETNZ AL
// 004b2e3e: AND EAX,0xff
// 004b2e43: POP EBP
// 004b2e44: POP ESI
// 004b2e45: POP EBX
// 004b2e46: RET
// 004b2e47: PUSH EBX
//   Label: LAB_004b2e47
// 004b2e48: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b2e4d: MOV EAX,0x1
// 004b2e52: ADD ESP,0x4
// 004b2e55: POP EBP
// 004b2e56: POP ESI
// 004b2e57: POP EBX
// 004b2e58: RET
