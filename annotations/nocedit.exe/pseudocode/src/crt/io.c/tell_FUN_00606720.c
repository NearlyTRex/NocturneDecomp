// Name: crt_io.c_tell_FUN_00606720
// Address: 00606720
// Address Range: [[00606720, 0060677f]]
// Convention: __watcallStack
// Signature: long crt_io.c_tell_FUN_00606720(int file_handle_index)
// Cross-references:
//   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 (0060d881) at 0060d9ce [UNCONDITIONAL_CALL]
//   crt_stdio.c_fseek_FUN_005ffacc (005ffacc) at 005ffbf0 [UNCONDITIONAL_CALL]
//   crt_stdio.c_ftell_FUN_00601560 (00601560) at 00601581 [UNCONDITIONAL_CALL]
// Globals:
//   SetFilePointer* SetFilePointer = 002121b6
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   crt_errno.c_setErrno_FUN_00602790
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   SetFilePointer

#include "nocturne.h"

long __watcallStack crt_io_c_tell_FUN_00606720(int file_handle_index)

{
  HANDLE hFile;
  DWORD DVar1;
  undefined4 uStack00000010;
  undefined4 uStack00000020;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    hFile = g_IOControlBlock->standard_handles[file_handle_index];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    DVar1 = (*SetFilePointer)(hFile,0,(PLONG)0x0,1);
    uStack00000010 = 0x60676e;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    if (DVar1 == 0xffffffff) {
      uStack00000020 = 0x60677b;
      crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    }
    return DVar1;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}


// Assembly code:
// 00606720: PUSH EBX
//   Label: crt_io.c_tell_FUN_00606720
// 00606721: PUSH ESI
// 00606722: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00606726: TEST EBX,EBX
// 00606728: JL 0x00606732
//   XREF to: 00606732 (CONDITIONAL_JUMP)
// 0060672a: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 00606730: JBE 0x00606744
//   XREF to: 00606744 (CONDITIONAL_JUMP)
// 00606732: PUSH 0x4
//   Label: LAB_00606732
// 00606734: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00606739: MOV EAX,0xffffffff
// 0060673e: ADD ESP,0x4
// 00606741: POP ESI
// 00606742: POP EBX
// 00606743: RET
// 00606744: MOV ESI,dword ptr [0x0068526c]
//   Label: LAB_00606744
//   XREF to: 0068526c (READ)
// 0060674a: PUSH EBX
// 0060674b: MOV ESI,dword ptr [ESI + EBX*0x4]
// 0060674e: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 00606754: ADD ESP,0x4
// 00606757: PUSH 0x1
// 00606759: PUSH 0x0
// 0060675b: PUSH 0x0
// 0060675d: PUSH ESI
// 0060675e: CALL dword ptr CS:[0x61162c]
//   XREF to: EXTERNAL:00000096 (COMPUTED_CALL)
//   XREF to: 0061162c (READ)
// 00606765: PUSH EBX
// 00606766: MOV ESI,EAX
// 00606768: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060676e: ADD ESP,0x4
// 00606771: CMP ESI,-0x1
// 00606774: JNZ 0x0060677b
//   XREF to: 0060677b (CONDITIONAL_JUMP)
// 00606776: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 0060677b: MOV EAX,ESI
//   Label: LAB_0060677b
// 0060677d: POP ESI
// 0060677e: POP EBX
// 0060677f: RET
