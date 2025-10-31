// Name: crt_stdio.c_flushFileBuffers_FUN_0060af00
// Address: 0060af00
// Address Range: [[0060af00, 0060af5c]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_flushFileBuffers_FUN_0060af00(int file_handle_index)
// Cross-references:
//   crt_stdio.c_fflushInternal_FUN_006039d0 (006039d0) at 00603ad1 [UNCONDITIONAL_CALL]
// Globals:
//   FlushFileBuffers* PTR_FlushFileBuffers_00611554 = 00211da6
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   FlushFileBuffers

#include "nocturne.h"

int __watcallStack crt_stdio_c_flushFileBuffers_FUN_0060af00(int file_handle_index)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uStack00000008;
  
  iVar2 = 0;
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    BVar1 = (*PTR_FlushFileBuffers_00611554)(g_IOControlBlock->standard_handles[file_handle_index]);
    if (BVar1 == 0) {
      uStack00000008 = 0x60af49;
      crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      iVar2 = -1;
    }
    uStack00000008 = 0x60af55;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    return iVar2;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}


// Assembly code:
// 0060af00: PUSH EBX
//   Label: crt_stdio.c_flushFileBuffers_FUN_0060af00
// 0060af01: PUSH ESI
// 0060af02: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060af06: XOR ESI,ESI
// 0060af08: TEST EBX,EBX
// 0060af0a: JL 0x0060af14
//   XREF to: 0060af14 (CONDITIONAL_JUMP)
// 0060af0c: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 0060af12: JBE 0x0060af26
//   XREF to: 0060af26 (CONDITIONAL_JUMP)
// 0060af14: PUSH 0x4
//   Label: LAB_0060af14
// 0060af16: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060af1b: MOV EAX,0xffffffff
// 0060af20: ADD ESP,0x4
// 0060af23: POP ESI
// 0060af24: POP EBX
// 0060af25: RET
// 0060af26: PUSH EBX
//   Label: LAB_0060af26
// 0060af27: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060af2d: MOV EAX,[0x0068526c]
//   XREF to: 0068526c (READ)
// 0060af32: ADD ESP,0x4
// 0060af35: MOV EAX,dword ptr [EAX + EBX*0x4]
// 0060af38: PUSH EAX
// 0060af39: CALL dword ptr CS:[0x611554]
//   XREF to: EXTERNAL:00000060 (COMPUTED_CALL)
//   XREF to: 00611554 (READ)
// 0060af40: TEST EAX,EAX
// 0060af42: JNZ 0x0060af4e
//   XREF to: 0060af4e (CONDITIONAL_JUMP)
// 0060af44: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060af49: MOV ESI,0xffffffff
// 0060af4e: PUSH EBX
//   Label: LAB_0060af4e
// 0060af4f: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060af55: ADD ESP,0x4
// 0060af58: MOV EAX,ESI
// 0060af5a: POP ESI
// 0060af5b: POP EBX
// 0060af5c: RET
