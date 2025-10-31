// Name: crt_stdio.c_fputc_FUN_005fea10
// Address: 005fea10
// Address Range: [[005fea10, 005feb2b]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fputc_FUN_005fea10(int character, FILE * stream)
// Cross-references:
//   core_actor.cpp_serializeString_FUN_0040b5c0 (0040b5c0) at 0040b62a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e0f [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 (00523990) at 00523a3a [UNCONDITIONAL_CALL]
//   crt_stdio.c_ungetc_helper_FUN_005fe720 (005fe720) at 005fe72e [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_fputc_FUN_005fea10(int character,FILE *stream)

{
  char *pcVar1;
  char cStack00000014;
  byte in_stack_00000020;
  
  if (character == -1) {
    return -1;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream->_handle);
  pcVar1 = stream->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
      return -1;
    }
    stream->_link->__get_base = &DAT_00000001;
  }
  if ((stream->_flag & 0x1000) != 0) {
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
    return -1;
  }
  if ((stream->_flag & 1) == 0) {
LAB_005fea85:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
    return -1;
  }
  if (stream->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(stream);
  }
  if (stream->_cnt == 0) {
    stream->_cnt = 1;
    stream->_ptr = stream->_link->__reserve_end + (stream->_bufsize - 1);
    pcVar1 = stream->_ptr;
    *(byte *)&stream->_flag = (byte)stream->_flag | 4;
  }
  else {
    if (stream->_ptr == stream->_link->__reserve_end) goto LAB_005fea85;
    pcVar1 = stream->_ptr;
    stream->_cnt = stream->_cnt + 1;
    stream->_ptr = pcVar1 + -1;
    if ((byte)pcVar1[-1] != _cStack00000014) {
      *(byte *)&stream->_flag = (byte)stream->_flag | 4;
    }
    pcVar1 = stream->_ptr;
  }
  *pcVar1 = cStack00000014;
  *(byte *)&stream->_flag = (byte)stream->_flag & 0xef;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
  return (uint)in_stack_00000020;
}


// Assembly code:
// 005fea10: PUSH EBX
//   Label: crt_stdio.c_fputc_FUN_005fea10
// 005fea11: PUSH ESI
// 005fea12: PUSH EDI
// 005fea13: PUSH EBP
// 005fea14: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fea18: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fea1c: CMP EDX,-0x1
// 005fea1f: JNZ 0x005fea28
//   XREF to: 005fea28 (CONDITIONAL_JUMP)
// 005fea21: MOV EAX,EDX
// 005fea23: POP EBP
// 005fea24: POP EDI
// 005fea25: POP ESI
// 005fea26: POP EBX
// 005fea27: RET
// 005fea28: MOV ECX,dword ptr [EBX + 0x10]
//   Label: LAB_005fea28
// 005fea2b: PUSH ECX
// 005fea2c: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005fea32: MOV EAX,dword ptr [EBX + 0x8]
// 005fea35: MOV ESI,dword ptr [EAX + 0xc]
// 005fea38: ADD ESP,0x4
// 005fea3b: CMP ESI,0x1
// 005fea3e: JZ 0x005fea62
//   XREF to: 005fea62 (CONDITIONAL_JUMP)
// 005fea40: TEST ESI,ESI
// 005fea42: JZ 0x005fea5b
//   XREF to: 005fea5b (CONDITIONAL_JUMP)
// 005fea44: MOV EBP,dword ptr [EBX + 0x10]
// 005fea47: PUSH EBP
// 005fea48: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fea4e: MOV EAX,0xffffffff
// 005fea53: ADD ESP,0x4
// 005fea56: POP EBP
// 005fea57: POP EDI
// 005fea58: POP ESI
// 005fea59: POP EBX
// 005fea5a: RET
// 005fea5b: MOV dword ptr [EAX + 0xc],0x1
//   Label: LAB_005fea5b
// 005fea62: TEST byte ptr [EBX + 0xd],0x10
//   Label: LAB_005fea62
// 005fea66: JZ 0x005fea7f
//   XREF to: 005fea7f (CONDITIONAL_JUMP)
// 005fea68: MOV EBP,dword ptr [EBX + 0x10]
// 005fea6b: PUSH EBP
// 005fea6c: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fea72: MOV EAX,0xffffffff
// 005fea77: ADD ESP,0x4
// 005fea7a: POP EBP
// 005fea7b: POP EDI
// 005fea7c: POP ESI
// 005fea7d: POP EBX
// 005fea7e: RET
// 005fea7f: TEST byte ptr [EBX + 0xc],0x1
//   Label: LAB_005fea7f
// 005fea83: JNZ 0x005fea9c
//   XREF to: 005fea9c (CONDITIONAL_JUMP)
// 005fea85: MOV EDI,dword ptr [EBX + 0x10]
//   Label: LAB_005fea85
// 005fea88: PUSH EDI
// 005fea89: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fea8f: MOV EAX,0xffffffff
// 005fea94: ADD ESP,0x4
// 005fea97: POP EBP
// 005fea98: POP EDI
// 005fea99: POP ESI
// 005fea9a: POP EBX
// 005fea9b: RET
// 005fea9c: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_005fea9c
// 005fea9f: CMP dword ptr [EAX + 0x8],0x0
// 005feaa3: JNZ 0x005feaae
//   XREF to: 005feaae (CONDITIONAL_JUMP)
// 005feaa5: PUSH EBX
// 005feaa6: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 005feaab: ADD ESP,0x4
// 005feaae: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_005feaae
// 005feab1: TEST ECX,ECX
// 005feab3: JNZ 0x005feadb
//   XREF to: 005feadb (CONDITIONAL_JUMP)
// 005feab5: MOV dword ptr [EBX + 0x4],0x1
// 005feabc: MOV EAX,dword ptr [EBX + 0x8]
// 005feabf: MOV ECX,dword ptr [EBX + 0x14]
// 005feac2: MOV EAX,dword ptr [EAX + 0x8]
// 005feac5: ADD EAX,ECX
// 005feac7: DEC EAX
// 005feac8: MOV CL,byte ptr [EBX + 0xc]
// 005feacb: MOV dword ptr [EBX],EAX
// 005feacd: OR CL,0x4
// 005fead0: MOV EAX,dword ptr [EBX]
// 005fead2: MOV DL,byte ptr [ESP + 0x14]
// 005fead6: MOV byte ptr [EBX + 0xc],CL
// 005fead9: JMP 0x005feb09
//   XREF to: 005feb09 (UNCONDITIONAL_JUMP)
// 005feadb: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_005feadb
// 005feade: MOV EAX,dword ptr [EBX]
// 005feae0: CMP EAX,dword ptr [EDX + 0x8]
// 005feae3: JZ 0x005fea85
//   XREF to: 005fea85 (CONDITIONAL_JUMP)
// 005feae5: MOV EAX,dword ptr [EBX]
// 005feae7: LEA EBP,[ECX + 0x1]
// 005feaea: DEC EAX
// 005feaeb: MOV dword ptr [EBX + 0x4],EBP
// 005feaee: MOV dword ptr [EBX],EAX
// 005feaf0: MOV AL,byte ptr [EAX]
// 005feaf2: MOV EDX,dword ptr [ESP + 0x14]
// 005feaf6: AND EAX,0xff
// 005feafb: CMP EAX,EDX
// 005feafd: JZ 0x005feb03
//   XREF to: 005feb03 (CONDITIONAL_JUMP)
// 005feaff: OR byte ptr [EBX + 0xc],0x4
// 005feb03: MOV EAX,dword ptr [EBX]
//   Label: LAB_005feb03
// 005feb05: MOV DL,byte ptr [ESP + 0x14]
// 005feb09: MOV byte ptr [EAX],DL
//   Label: LAB_005feb09
// 005feb0b: MOV CH,byte ptr [EBX + 0xc]
// 005feb0e: MOV ESI,dword ptr [EBX + 0x10]
// 005feb11: AND CH,0xef
// 005feb14: PUSH ESI
// 005feb15: MOV byte ptr [EBX + 0xc],CH
// 005feb18: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005feb1e: ADD ESP,0x4
// 005feb21: XOR EAX,EAX
// 005feb23: MOV AL,byte ptr [ESP + 0x14]
// 005feb27: POP EBP
// 005feb28: POP EDI
// 005feb29: POP ESI
// 005feb2a: POP EBX
// 005feb2b: RET
