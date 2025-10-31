// Name: crt_stdio.c_fflushInternal_FUN_006039d0
// Address: 006039d0
// Address Range: [[006039d0, 00603af6]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fflushInternal_FUN_006039d0(FILE * file_handle)
// Cross-references:
//   crt_stdio.c_FlushFilesByMask_FUN_0060595c (0060595c) at 00605987 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 00601ffc [UNCONDITIONAL_CALL]
//   crt_stdio.c_fflush_FUN_00601540 (00601540) at 00601551 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputc_FUN_006007a0 (006007a0) at 00600861 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputs_FUN_0060ebb0 (0060ebb0) at 0060ec37 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fseek_FUN_005ffacc (005ffacc) at 005ffafc [UNCONDITIONAL_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fdd48 [UNCONDITIONAL_CALL]
//   crt_stdio.c_prepare_stream_for_write_FUN_00606055 (00606055) at 006060b1 [UNCONDITIONAL_CALL]
//   crt_stdio.c_vfprintf_FUN_00604850 (00604850) at 006048ff [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_flushFileBuffers_FUN_0060af00
//   crt_stdio.c_lseek_FUN_00606690
//   crt_stdio.c_write_FUN_006038c0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_fflushInternal_FUN_006039d0(FILE *file_handle)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
  bVar1 = *(byte *)((int)&file_handle->_flag + 1);
  if ((bVar1 & 0x10) == 0) {
    if ((file_handle->_link->__reserve_end != (char *)0x0) &&
       (*(byte *)&file_handle->_flag = (byte)file_handle->_flag & 0xef,
       (file_handle->_flag & 0x2000) == 0)) {
      iVar5 = file_handle->_cnt;
      if (iVar5 != 0) {
        iVar5 = crt_stdio_c_lseek_FUN_00606690(file_handle->_handle,-iVar5,1);
      }
      if (iVar5 == -1) {
        *(byte *)&file_handle->_flag = (byte)file_handle->_flag | 0x20;
        iVar6 = -1;
      }
    }
  }
  else {
    uVar2 = file_handle->_flag;
    *(byte *)((int)&file_handle->_flag + 1) = bVar1 & 0xef;
    if (((uVar2 & 2) != 0) && (pcVar4 = file_handle->_link->__reserve_end, pcVar4 != (char *)0x0)) {
      iVar5 = file_handle->_cnt;
      while ((iVar5 != 0 && (iVar6 == 0))) {
        iVar3 = crt_stdio_c_write_FUN_006038c0(file_handle->_handle,pcVar4,iVar5);
        if (iVar3 == -1) {
          *(byte *)&file_handle->_flag = (byte)file_handle->_flag | 0x20;
          iVar6 = -1;
        }
        else if (iVar3 == 0) {
          crt_errno_c_setErrno_FUN_00602790(0xc);
          iVar6 = -1;
          *(byte *)&file_handle->_flag = (byte)file_handle->_flag | 0x20;
        }
        pcVar4 = pcVar4 + iVar3;
        iVar5 = iVar5 - iVar3;
      }
    }
  }
  pcVar4 = file_handle->_link->__reserve_end;
  file_handle->_cnt = 0;
  file_handle->_ptr = pcVar4;
  if (((iVar6 == 0) && (((uint)file_handle->_link->__get_end & 1) != 0)) &&
     (iVar5 = crt_stdio_c_flushFileBuffers_FUN_0060af00(file_handle->_handle), iVar5 == -1)) {
    iVar6 = -1;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
  return iVar6;
}


// Assembly code:
// 006039d0: PUSH EBX
//   Label: crt_stdio.c_fflushInternal_FUN_006039d0
// 006039d1: PUSH ESI
// 006039d2: PUSH EDI
// 006039d3: PUSH EBP
// 006039d4: SUB ESP,0x4
// 006039d7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 006039db: MOV EDX,dword ptr [EBX + 0x10]
// 006039de: PUSH EDX
// 006039df: XOR EDI,EDI
// 006039e1: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 006039e7: MOV AH,byte ptr [EBX + 0xd]
// 006039ea: ADD ESP,0x4
// 006039ed: TEST AH,0x10
// 006039f0: JZ 0x00603a76
//   XREF to: 00603a76 (CONDITIONAL_JUMP)
// 006039f6: MOV CH,AH
// 006039f8: AND CH,0xef
// 006039fb: MOV AL,byte ptr [EBX + 0xc]
// 006039fe: MOV byte ptr [EBX + 0xd],CH
// 00603a01: TEST AL,0x2
// 00603a03: JZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603a09: MOV EBP,dword ptr [EBX + 0x8]
// 00603a0c: MOV EAX,dword ptr [EBP + 0x8]
// 00603a0f: TEST EAX,EAX
// 00603a11: JZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603a17: MOV ESI,dword ptr [EBX + 0x4]
// 00603a1a: MOV EBP,EAX
// 00603a1c: TEST ESI,ESI
// 00603a1e: JZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603a24: TEST EDI,EDI
//   Label: LAB_00603a24
// 00603a26: JNZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603a2c: PUSH ESI
// 00603a2d: PUSH EBP
// 00603a2e: MOV EAX,dword ptr [EBX + 0x10]
// 00603a31: PUSH EAX
// 00603a32: CALL crt_stdio.c_write_FUN_006038c0
//   XREF to: 006038c0 (UNCONDITIONAL_CALL)
// 00603a37: ADD ESP,0xc
// 00603a3a: MOV dword ptr [ESP],EAX
// 00603a3d: CMP EAX,-0x1
// 00603a40: JNZ 0x00603a4f
//   XREF to: 00603a4f (CONDITIONAL_JUMP)
// 00603a42: MOV DL,byte ptr [EBX + 0xc]
// 00603a45: OR DL,0x20
// 00603a48: MOV EDI,EAX
// 00603a4a: MOV byte ptr [EBX + 0xc],DL
// 00603a4d: JMP 0x00603a6b
//   XREF to: 00603a6b (UNCONDITIONAL_JUMP)
// 00603a4f: TEST EAX,EAX
//   Label: LAB_00603a4f
// 00603a51: JNZ 0x00603a6b
//   XREF to: 00603a6b (CONDITIONAL_JUMP)
// 00603a53: PUSH 0xc
// 00603a55: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00603a5a: MOV AH,byte ptr [EBX + 0xc]
// 00603a5d: MOV EDI,0xffffffff
// 00603a62: OR AH,0x20
// 00603a65: ADD ESP,0x4
// 00603a68: MOV byte ptr [EBX + 0xc],AH
// 00603a6b: MOV EDX,dword ptr [ESP]
//   Label: LAB_00603a6b
// 00603a6e: ADD EBP,EDX
// 00603a70: SUB ESI,EDX
// 00603a72: JNZ 0x00603a24
//   XREF to: 00603a24 (CONDITIONAL_JUMP)
// 00603a74: JMP 0x00603ab1
//   XREF to: 00603ab1 (UNCONDITIONAL_JUMP)
// 00603a76: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_00603a76
// 00603a79: CMP dword ptr [EAX + 0x8],0x0
// 00603a7d: JZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603a7f: AND byte ptr [EBX + 0xc],0xef
// 00603a83: TEST byte ptr [EBX + 0xd],0x20
// 00603a87: JNZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603a89: MOV EAX,dword ptr [EBX + 0x4]
// 00603a8c: TEST EAX,EAX
// 00603a8e: JZ 0x00603aa1
//   XREF to: 00603aa1 (CONDITIONAL_JUMP)
// 00603a90: PUSH 0x1
// 00603a92: NEG EAX
// 00603a94: PUSH EAX
// 00603a95: MOV ESI,dword ptr [EBX + 0x10]
// 00603a98: PUSH ESI
// 00603a99: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 00603a9e: ADD ESP,0xc
// 00603aa1: CMP EAX,-0x1
//   Label: LAB_00603aa1
// 00603aa4: JNZ 0x00603ab1
//   XREF to: 00603ab1 (CONDITIONAL_JUMP)
// 00603aa6: MOV CL,byte ptr [EBX + 0xc]
// 00603aa9: OR CL,0x20
// 00603aac: MOV EDI,EAX
// 00603aae: MOV byte ptr [EBX + 0xc],CL
// 00603ab1: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_00603ab1
// 00603ab4: MOV EAX,dword ptr [EAX + 0x8]
// 00603ab7: MOV dword ptr [EBX + 0x4],0x0
// 00603abe: MOV dword ptr [EBX],EAX
// 00603ac0: TEST EDI,EDI
// 00603ac2: JNZ 0x00603ae0
//   XREF to: 00603ae0 (CONDITIONAL_JUMP)
// 00603ac4: MOV EAX,dword ptr [EBX + 0x8]
// 00603ac7: TEST byte ptr [EAX + 0x10],0x1
// 00603acb: JZ 0x00603ae0
//   XREF to: 00603ae0 (CONDITIONAL_JUMP)
// 00603acd: MOV EDX,dword ptr [EBX + 0x10]
// 00603ad0: PUSH EDX
// 00603ad1: CALL crt_stdio.c_flushFileBuffers_FUN_0060af00
//   XREF to: 0060af00 (UNCONDITIONAL_CALL)
// 00603ad6: ADD ESP,0x4
// 00603ad9: CMP EAX,-0x1
// 00603adc: JNZ 0x00603ae0
//   XREF to: 00603ae0 (CONDITIONAL_JUMP)
// 00603ade: MOV EDI,EAX
// 00603ae0: MOV ECX,dword ptr [EBX + 0x10]
//   Label: LAB_00603ae0
// 00603ae3: PUSH ECX
// 00603ae4: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 00603aea: ADD ESP,0x4
// 00603aed: MOV EAX,EDI
// 00603aef: ADD ESP,0x4
// 00603af2: POP EBP
// 00603af3: POP EDI
// 00603af4: POP ESI
// 00603af5: POP EBX
// 00603af6: RET
