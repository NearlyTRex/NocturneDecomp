// Name: crt_io.c_ftruncate_FUN_00600cf0
// Address: 00600cf0
// Address Range: [[00600cf0, 00600e0b]]
// Convention: __cdecl
// Signature: int crt_io.c_ftruncate_FUN_00600cf0(int file_handle, long new_size)
// Cross-references:
//   engine_dosio.c_truncateFile_FUN_00481a20 (00481a20) at 00481a35 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2f78 [UNCONDITIONAL_CALL]
// Globals:
//   SetEndOfFile* SetEndOfFile = 00212150
//   SetFilePointer* SetFilePointer = 002121b6
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   WORD g_WindowsPlatformVersion = 0x0
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_lseek_FUN_00606690
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   crt_unknown.c_FUN_00600c80

#include "nocturne.h"

int __cdecl crt_io_c_ftruncate_FUN_00600cf0(int file_handle,long new_size)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  int unaff_EDI;
  HANDLE unaff_retaddr;
  undefined4 uStack0000000c;
  HANDLE in_stack_00000014;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  
  if ((file_handle < 0) || (g_MaxHandleCount < (uint)file_handle)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    iVar1 = -1;
  }
  else {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle);
    iVar1 = crt_stdio_c_lseek_FUN_00606690(file_handle,0,1);
    if (0x7fff < g_WindowsPlatformVersion) {
      unaff_EDI = crt_stdio_c_lseek_FUN_00606690(file_handle,0,2);
    }
    DVar2 = (*SetFilePointer)(unaff_retaddr,new_size,(PLONG)0x0,0);
    if (DVar2 == 0xffffffff) {
      uStack0000000c = 0x600d7e;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    uStack0000000c = 0x600d99;
    BVar3 = (*SetEndOfFile)(in_stack_00000014);
    if (BVar3 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      uStack00000024 = 0x600dac;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    if ((0x7fff < g_WindowsPlatformVersion) && (unaff_EDI < new_size)) {
      uStack0000000c = 0x600dcf;
      crt_unknown_c_FUN_00600c80();
    }
    if (new_size < iVar1) {
      iVar1 = new_size;
    }
    iVar1 = crt_stdio_c_lseek_FUN_00606690(file_handle,iVar1,0);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
    if (iVar1 == -1) {
      uStack0000002c = 0x600dfa;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 00600cf0: PUSH EBX
//   Label: crt_io.c_ftruncate_FUN_00600cf0
// 00600cf1: PUSH ESI
// 00600cf2: PUSH EDI
// 00600cf3: PUSH EBP
// 00600cf4: SUB ESP,0x4
// 00600cf7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00600cfb: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00600cff: TEST EBX,EBX
// 00600d01: JL 0x00600d0b
//   XREF to: 00600d0b (CONDITIONAL_JUMP)
// 00600d03: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 00600d09: JBE 0x00600d1f
//   XREF to: 00600d1f (CONDITIONAL_JUMP)
// 00600d0b: PUSH 0x4
//   Label: LAB_00600d0b
// 00600d0d: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00600d12: MOV EAX,0xffffffff
// 00600d17: ADD ESP,0x4
// 00600d1a: JMP 0x00600e04
//   XREF to: 00600e04 (UNCONDITIONAL_JUMP)
// 00600d1f: MOV EAX,[0x0068526c]
//   Label: LAB_00600d1f
//   XREF to: 0068526c (READ)
// 00600d24: MOV EAX,dword ptr [EAX + EBX*0x4]
// 00600d27: PUSH EBX
// 00600d28: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00600d2c: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00684ee8 (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600d32: ADD ESP,0x4
// 00600d35: PUSH 0x1
// 00600d37: PUSH 0x0
// 00600d39: PUSH EBX
// 00600d3a: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 00600d3f: MOV DX,word ptr [0x00685019]
//   XREF to: 00685019 (READ)
// 00600d46: ADD ESP,0xc
// 00600d49: MOV ESI,EAX
// 00600d4b: CMP DX,0x8000
// 00600d50: JC 0x00600d61
//   XREF to: 00600d61 (CONDITIONAL_JUMP)
// 00600d52: PUSH 0x2
// 00600d54: PUSH 0x0
// 00600d56: PUSH EBX
// 00600d57: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 00600d5c: ADD ESP,0xc
// 00600d5f: MOV EDI,EAX
// 00600d61: PUSH 0x0
//   Label: LAB_00600d61
// 00600d63: PUSH 0x0
// 00600d65: PUSH EBP
// 00600d66: MOV ECX,dword ptr [ESP + 0xc]
// 00600d6a: PUSH ECX
// 00600d6b: CALL dword ptr CS:[0x61162c]
//   XREF to: 0061162c (READ)
// 00600d72: CMP EAX,-0x1
// 00600d75: JNZ 0x00600d8e
//   XREF to: 00600d8e (CONDITIONAL_JUMP)
// 00600d77: PUSH EBX
// 00600d78: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00684eec (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600d7e: ADD ESP,0x4
// 00600d81: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00600d86: ADD ESP,0x4
// 00600d89: POP EBP
// 00600d8a: POP EDI
// 00600d8b: POP ESI
// 00600d8c: POP EBX
// 00600d8d: RET
// 00600d8e: MOV EAX,dword ptr [ESP]
//   Label: LAB_00600d8e
// 00600d91: PUSH EAX
// 00600d92: CALL dword ptr CS:[0x611618]
//   XREF to: 00611618 (READ)
// 00600d99: TEST EAX,EAX
// 00600d9b: JNZ 0x00600db4
//   XREF to: 00600db4 (CONDITIONAL_JUMP)
// 00600d9d: PUSH EBX
// 00600d9e: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00684eec (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600da4: ADD ESP,0x4
// 00600da7: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00600dac: ADD ESP,0x4
// 00600daf: POP EBP
// 00600db0: POP EDI
// 00600db1: POP ESI
// 00600db2: POP EBX
// 00600db3: RET
// 00600db4: CMP word ptr [0x00685019],0x8000
//   Label: LAB_00600db4
//   XREF to: 00685019 (READ)
// 00600dbd: JC 0x00600dd2
//   XREF to: 00600dd2 (CONDITIONAL_JUMP)
// 00600dbf: CMP EBP,EDI
// 00600dc1: JLE 0x00600dd2
//   XREF to: 00600dd2 (CONDITIONAL_JUMP)
// 00600dc3: MOV EAX,EBP
// 00600dc5: SUB EAX,EDI
// 00600dc7: PUSH EAX
// 00600dc8: PUSH EDI
// 00600dc9: PUSH EBX
// 00600dca: CALL crt_unknown.c_FUN_00600c80
//   XREF to: 00600c80 (UNCONDITIONAL_CALL)
// 00600dcf: ADD ESP,0xc
// 00600dd2: CMP ESI,EBP
//   Label: LAB_00600dd2
// 00600dd4: JLE 0x00600dd8
//   XREF to: 00600dd8 (CONDITIONAL_JUMP)
// 00600dd6: MOV ESI,EBP
// 00600dd8: PUSH 0x0
//   Label: LAB_00600dd8
// 00600dda: PUSH ESI
// 00600ddb: PUSH EBX
// 00600ddc: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 00600de1: ADD ESP,0xc
// 00600de4: PUSH EBX
// 00600de5: MOV ESI,EAX
// 00600de7: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00684eec (READ)
//   XREF to: 00602434 (COMPUTED_CALL)
// 00600ded: ADD ESP,0x4
// 00600df0: CMP ESI,-0x1
// 00600df3: JNZ 0x00600e02
//   XREF to: 00600e02 (CONDITIONAL_JUMP)
// 00600df5: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 00600dfa: ADD ESP,0x4
// 00600dfd: POP EBP
// 00600dfe: POP EDI
// 00600dff: POP ESI
// 00600e00: POP EBX
// 00600e01: RET
// 00600e02: XOR EAX,EAX
//   Label: LAB_00600e02
// 00600e04: ADD ESP,0x4
//   Label: LAB_00600e04
// 00600e07: POP EBP
// 00600e08: POP EDI
// 00600e09: POP ESI
// 00600e0a: POP EBX
// 00600e0b: RET
