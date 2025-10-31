// Name: crt_stdio.c_prepare_stream_for_write_FUN_00606055
// Address: 00606055
// Address Range: [[00606055, 006060ba]]
// Convention: __cdecl
// Signature: bool crt_stdio.c_prepare_stream_for_write_FUN_00606055(FILE * stream)
// Cross-references:
//   crt_stdio.c_fputc_FUN_005ff2d7 (005ff2d7) at 005ff35e [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_write_internal_FUN_005ffcb3 (005ffcb3) at 005ffd4a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
//   crt_stdio.c_stream_flush_FUN_006060bb

#include "nocturne.h"

bool __cdecl crt_stdio_c_prepare_stream_for_write_FUN_00606055(FILE *stream)

{
  FILE *pFVar1;
  
  pFVar1 = *(FILE **)((int)&stream->_link + *(int *)(stream->_ptr + 4));
  if (pFVar1 != (FILE *)0x0) {
    crt_stdio_c_stream_flush_FUN_006060bb(pFVar1);
  }
  if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) != 0) {
    pFVar1 = crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(1);
    crt_stdio_c_fflushInternal_FUN_006039d0(pFVar1);
    pFVar1 = crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(2);
    crt_stdio_c_fflushInternal_FUN_006039d0(pFVar1);
  }
  return *(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0;
}


// Assembly code:
// 00606055: PUSH EBX
//   Label: crt_stdio.c_prepare_stream_for_write_FUN_00606055
// 00606056: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060605a: MOV EAX,dword ptr [EBX]
// 0060605c: MOV EAX,dword ptr [EAX + 0x4]
// 0060605f: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8]
// 00606063: TEST EAX,EAX
// 00606065: JNZ 0x00606088
//   XREF to: 00606088 (CONDITIONAL_JUMP)
// 00606067: MOV EAX,dword ptr [EBX]
//   Label: LAB_00606067
// 00606069: MOV EAX,dword ptr [EAX + 0x4]
// 0060606c: MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc]
// 00606070: TEST AH,0x40
// 00606073: JNZ 0x00606093
//   XREF to: 00606093 (CONDITIONAL_JUMP)
// 00606075: MOV EAX,dword ptr [EBX]
//   Label: LAB_00606075
// 00606077: ADD EBX,dword ptr [EAX + 0x4]
// 0060607a: CMP dword ptr [EBX + 0x10],0x0
// 0060607e: SETZ AL
// 00606081: AND EAX,0xff
// 00606086: POP EBX
// 00606087: RET
// 00606088: PUSH EAX
//   Label: LAB_00606088
// 00606089: CALL crt_stdio.c_stream_flush_FUN_006060bb
//   XREF to: 006060bb (UNCONDITIONAL_CALL)
// 0060608e: ADD ESP,0x4
// 00606091: JMP 0x00606067
//   XREF to: 00606067 (UNCONDITIONAL_JUMP)
// 00606093: PUSH 0x1
//   Label: LAB_00606093
// 00606095: CALL crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
//   XREF to: 0060b7a0 (UNCONDITIONAL_CALL)
// 0060609a: ADD ESP,0x4
// 0060609d: PUSH EAX
// 0060609e: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 006060a3: ADD ESP,0x4
// 006060a6: PUSH 0x2
// 006060a8: CALL crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
//   XREF to: 0060b7a0 (UNCONDITIONAL_CALL)
// 006060ad: ADD ESP,0x4
// 006060b0: PUSH EAX
// 006060b1: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 006060b6: ADD ESP,0x4
// 006060b9: JMP 0x00606075
//   XREF to: 00606075 (UNCONDITIONAL_JUMP)
