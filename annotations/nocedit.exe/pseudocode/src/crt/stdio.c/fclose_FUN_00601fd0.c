// Name: crt_stdio.c_fclose_FUN_00601fd0
// Address: 00601fd0
// Address Range: [[00601fd0, 006020c1]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fclose_FUN_00601fd0(FILE * file_handle, int force_close_flag)
// Cross-references:
//   crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4 (00601ee4) at 00601eef [UNCONDITIONAL_CALL]
//   crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94 (00601a94) at 00601ab8 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   INVALIDATE_HANDLE_FUNC* PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4 = 00602448
// Function calls:
//   crt_io.c_close_FUN_00609bd0
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_io.c_generateTempFilename_FUN_00601f1c
//   crt_io.c_invalidate_handle_wrapper_FUN_00602448
//   crt_memory.c_free_FUN_00601cd0
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_lseek_FUN_00606690
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_fclose_FUN_00601fd0(FILE *file_handle,int force_close_flag)

{
  uint uVar1;
  long distance_to_move;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000020;
  int in_stack_0000002c;
  char acStack_10c [4];
  undefined4 uStack_108;
  
  if (file_handle->_flag == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((file_handle->_flag & 0x1000) != 0) {
      uVar1 = crt_stdio_c_fflushInternal_FUN_006039d0(file_handle);
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
    distance_to_move = crt_stdio_c_ftell_FUN_00601560(file_handle);
    if (distance_to_move != -1) {
      crt_stdio_c_lseek_FUN_00606690(file_handle->_handle,distance_to_move,0);
    }
    if (in_stack_00000020 != 0) {
      uVar2 = crt_io_c_close_FUN_00609bd0(file_handle->_handle);
      uVar1 = uVar1 | uVar2;
    }
    if ((file_handle->_flag & 8) != 0) {
      crt_memory_c_free_FUN_00601cd0(file_handle->_link->__reserve_end);
      file_handle->_link->__reserve_end = (char *)0x0;
    }
    if ((file_handle->_flag & 0x800) != 0) {
      crt_io_c_generateTempFilename_FUN_00601f1c
                (acStack_10c,(uint)*(byte *)&file_handle->_link->__get_ptr);
      crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffef0);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
    if (in_stack_0000002c != 0) {
      uStack_108 = 0x6020b2;
      (*PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4)(file_handle->_handle);
    }
  }
  return uVar1;
}


// Assembly code:
// 00601fd0: PUSH EBX
//   Label: crt_stdio.c_fclose_FUN_00601fd0
// 00601fd1: PUSH ESI
// 00601fd2: PUSH EDI
// 00601fd3: PUSH EBP
// 00601fd4: SUB ESP,0x114
// 00601fda: MOV EBX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x4] (READ)
// 00601fe1: CMP dword ptr [EBX + 0xc],0x0
// 00601fe5: JNZ 0x00601ff1
//   XREF to: 00601ff1 (CONDITIONAL_JUMP)
// 00601fe7: MOV EAX,0xffffffff
// 00601fec: JMP 0x006020b7
//   XREF to: 006020b7 (UNCONDITIONAL_JUMP)
// 00601ff1: MOV AH,byte ptr [EBX + 0xd]
//   Label: LAB_00601ff1
// 00601ff4: XOR ESI,ESI
// 00601ff6: TEST AH,0x10
// 00601ff9: JZ 0x00602006
//   XREF to: 00602006 (CONDITIONAL_JUMP)
// 00601ffb: PUSH EBX
// 00601ffc: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 00602001: ADD ESP,0x4
// 00602004: MOV ESI,EAX
// 00602006: MOV ECX,dword ptr [EBX + 0x10]
//   Label: LAB_00602006
// 00602009: PUSH ECX
// 0060200a: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 00602010: ADD ESP,0x4
// 00602013: PUSH EBX
// 00602014: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 00602019: ADD ESP,0x4
// 0060201c: CMP EAX,-0x1
// 0060201f: JZ 0x00602030
//   XREF to: 00602030 (CONDITIONAL_JUMP)
// 00602021: PUSH 0x0
// 00602023: PUSH EAX
// 00602024: MOV EDI,dword ptr [EBX + 0x10]
// 00602027: PUSH EDI
// 00602028: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060202d: ADD ESP,0xc
// 00602030: CMP dword ptr [ESP + 0x12c],0x0
//   Label: LAB_00602030
// 00602038: JZ 0x00602048
//   XREF to: 00602048 (CONDITIONAL_JUMP)
// 0060203a: MOV EAX,dword ptr [EBX + 0x10]
// 0060203d: PUSH EAX
// 0060203e: CALL crt_io.c_close_FUN_00609bd0
//   XREF to: 00609bd0 (UNCONDITIONAL_CALL)
// 00602043: ADD ESP,0x4
// 00602046: OR ESI,EAX
// 00602048: TEST byte ptr [EBX + 0xc],0x8
//   Label: LAB_00602048
// 0060204c: JZ 0x00602067
//   XREF to: 00602067 (CONDITIONAL_JUMP)
// 0060204e: MOV EAX,dword ptr [EBX + 0x8]
// 00602051: MOV EDX,dword ptr [EAX + 0x8]
// 00602054: PUSH EDX
// 00602055: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060205a: MOV EAX,dword ptr [EBX + 0x8]
// 0060205d: ADD ESP,0x4
// 00602060: MOV dword ptr [EAX + 0x8],0x0
// 00602067: TEST byte ptr [EBX + 0xd],0x8
//   Label: LAB_00602067
// 0060206b: JZ 0x00602091
//   XREF to: 00602091 (CONDITIONAL_JUMP)
// 0060206d: MOV EAX,dword ptr [EBX + 0x8]
// 00602070: MOV AL,byte ptr [EAX + 0x14]
// 00602073: AND EAX,0xff
// 00602078: PUSH EAX
// 00602079: LEA EAX,[ESP + 0x4]
// 0060207d: PUSH EAX
// 0060207e: CALL crt_io.c_generateTempFilename_FUN_00601f1c
//   XREF to: 00601f1c (UNCONDITIONAL_CALL)
// 00602083: ADD ESP,0x8
// 00602086: MOV EAX,ESP
// 00602088: PUSH EAX
// 00602089: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0060208e: ADD ESP,0x4
// 00602091: MOV ECX,dword ptr [EBX + 0x10]
//   Label: LAB_00602091
// 00602094: PUSH ECX
// 00602095: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060209b: ADD ESP,0x4
// 0060209e: CMP dword ptr [ESP + 0x12c],0x0
// 006020a6: JZ 0x006020b5
//   XREF to: 006020b5 (CONDITIONAL_JUMP)
// 006020a8: MOV EBP,dword ptr [EBX + 0x10]
// 006020ab: PUSH EBP
// 006020ac: CALL dword ptr [PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4]
//   XREF to: 00602448 (COMPUTED_CALL)
//   XREF to: 00684ef4 (READ)
// 006020b2: ADD ESP,0x4
// 006020b5: MOV EAX,ESI
//   Label: LAB_006020b5
// 006020b7: ADD ESP,0x114
//   Label: LAB_006020b7
// 006020bd: POP EBP
// 006020be: POP EDI
// 006020bf: POP ESI
// 006020c0: POP EBX
// 006020c1: RET
