// Name: engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
// Address: 004b2eb0
// Address Range: [[004b2eb0, 004b2f8d]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList * this_ptr, FILE * * file_handle)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3e54 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4f90 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b37fd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bc02a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bad0b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_File_I_O_error_accessing_0062647d
//   TerminatedCString s_s_s_006264ce
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_io.c_ftruncate_FUN_00600cf0
//   crt_stdio.c_fflush_FUN_00601540
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList *this_ptr,FILE **file_handle)

{
  int iVar1;
  char *pcVar2;
  long new_size;
  int iVar3;
  
  iVar1 = crt_stdio_c_fseek_FUN_005ffacc(*file_handle,0,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < this_ptr->count) {
      iVar3 = 0;
      do {
        pcVar2 = this_ptr->items->name + iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x168;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (*file_handle,"%s = %s\n","%s = %s\n",pcVar2,pcVar2 + 0x104);
      } while (iVar1 < this_ptr->count);
    }
    crt_stdio_c_fflush_FUN_00601540(*file_handle);
    if (((((*file_handle)->_flag & 0x20) == 0) &&
        (new_size = crt_stdio_c_ftell_FUN_00601560(*file_handle), -1 < new_size)) &&
       (iVar1 = crt_io_c_ftruncate_FUN_00600cf0((*file_handle)->_handle,new_size), iVar1 == 0)) {
      return 1;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"File I/O error accessing checkout file.\nGet Fletch, this is a serious situation.");
  if (*file_handle != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file_handle,"..\\engine\\fileio.cpp",0xc4);
    *file_handle = (FILE *)0x0;
  }
  return 0;
}


// Assembly code:
// 004b2eb0: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
// 004b2eb1: PUSH ESI
// 004b2eb2: PUSH EDI
// 004b2eb3: PUSH EBP
// 004b2eb4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b2eb8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b2ebc: PUSH 0x0
// 004b2ebe: PUSH 0x0
// 004b2ec0: MOV EDX,dword ptr [EBP]
// 004b2ec3: PUSH EDX
// 004b2ec4: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004b2ec9: ADD ESP,0xc
// 004b2ecc: TEST EAX,EAX
// 004b2ece: JNZ 0x004b2f27
//   XREF to: 004b2f27 (CONDITIONAL_JUMP)
// 004b2ed0: MOV ECX,dword ptr [EDI]
// 004b2ed2: XOR EBX,EBX
// 004b2ed4: TEST ECX,ECX
// 004b2ed6: JLE 0x004b2f10
//   XREF to: 004b2f10 (CONDITIONAL_JUMP)
// 004b2ed8: XOR ESI,ESI
// 004b2eda: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_004b2eda
// 004b2edd: ADD EAX,ESI
// 004b2edf: LEA EDX,[EAX + 0x104]
// 004b2ee5: PUSH EDX
// 004b2ee6: PUSH EAX
// 004b2ee7: PUSH 0x6264ce
//   XREF to: 006264ce (DATA)
// 004b2eec: MOV EAX,dword ptr [EBP]
// 004b2eef: PUSH EAX
// 004b2ef0: INC EBX
// 004b2ef1: ADD ESI,0x168
// 004b2ef7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b2efc: MOV EDX,dword ptr [EDI]
// 004b2efe: ADD ESP,0x10
// 004b2f01: CMP EBX,EDX
// 004b2f03: JL 0x004b2eda
//   XREF to: 004b2eda (CONDITIONAL_JUMP)
// 004b2f05: LEA EAX,[EAX]
// 004b2f0b: LEA EDX,[EDX]
// 004b2f0e: MOV EBX,EBX
// 004b2f10: MOV ECX,dword ptr [EBP]
//   Label: LAB_004b2f10
// 004b2f13: PUSH ECX
// 004b2f14: CALL crt_stdio.c_fflush_FUN_00601540
//   XREF to: 00601540 (UNCONDITIONAL_CALL)
// 004b2f19: MOV EAX,dword ptr [EBP]
// 004b2f1c: MOV DL,byte ptr [EAX + 0xc]
// 004b2f1f: ADD ESP,0x4
// 004b2f22: TEST DL,0x20
// 004b2f25: JZ 0x004b2f63
//   XREF to: 004b2f63 (CONDITIONAL_JUMP)
// 004b2f27: PUSH 0x62647d
//   Label: LAB_004b2f27
//   XREF to: 0062647d (DATA)
// 004b2f2c: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2f32: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b2f33: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b2f38: MOV EDI,dword ptr [EBP]
// 004b2f3b: ADD ESP,0x8
// 004b2f3e: TEST EDI,EDI
// 004b2f40: JZ 0x004b2f5c
//   XREF to: 004b2f5c (CONDITIONAL_JUMP)
// 004b2f42: PUSH 0xc4
// 004b2f47: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2f4c: PUSH EDI
// 004b2f4d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2f52: ADD ESP,0xc
// 004b2f55: MOV dword ptr [EBP],0x0
// 004b2f5c: XOR EAX,EAX
//   Label: LAB_004b2f5c
// 004b2f5e: POP EBP
// 004b2f5f: POP EDI
// 004b2f60: POP ESI
// 004b2f61: POP EBX
// 004b2f62: RET
// 004b2f63: PUSH EAX
//   Label: LAB_004b2f63
// 004b2f64: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 004b2f69: ADD ESP,0x4
// 004b2f6c: TEST EAX,EAX
// 004b2f6e: JL 0x004b2f27
//   XREF to: 004b2f27 (CONDITIONAL_JUMP)
// 004b2f70: PUSH EAX
// 004b2f71: MOV EAX,dword ptr [EBP]
// 004b2f74: MOV EBX,dword ptr [EAX + 0x10]
// 004b2f77: PUSH EBX
// 004b2f78: CALL crt_io.c_ftruncate_FUN_00600cf0
//   XREF to: 00600cf0 (UNCONDITIONAL_CALL)
// 004b2f7d: ADD ESP,0x8
// 004b2f80: TEST EAX,EAX
// 004b2f82: JNZ 0x004b2f27
//   XREF to: 004b2f27 (CONDITIONAL_JUMP)
// 004b2f84: MOV EAX,0x1
// 004b2f89: POP EBP
// 004b2f8a: POP EDI
// 004b2f8b: POP ESI
// 004b2f8c: POP EBX
// 004b2f8d: RET
