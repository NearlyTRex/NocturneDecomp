// Name: crt_stdio.c_reportStreamError_FUN_00606020
// Address: 00606020
// Address Range: [[00606020, 00606054]]
// Convention: __cdecl
// Signature: void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
// Cross-references:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 (00606456) at 006064e7 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_openFile_FUN_00600e85 (00600e85) at 00600ec1 [UNCONDITIONAL_CALL]
//   crt_stdio.c_clear_and_preserve_state_FUN_00600e64 (00600e64) at 00600e79 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fflush_FUN_00600e29 (00600e29) at 00600e4e [UNCONDITIONAL_CALL]
//   crt_stdio.c_fgetcInternal_FUN_00605fad (00605fad) at 0060600c [UNCONDITIONAL_CALL]
//   crt_stdio.c_fgetc_buffered_FUN_0060d510 (0060d510) at 0060d55f [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputc_FUN_005ff2d7 (005ff2d7) at 005ff33f [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_flush_FUN_006060bb (006060bb) at 006060f2 [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_setup_FUN_00605f20 (00605f20) at 00605f71 [UNCONDITIONAL_CALL]
//   crt_stdio.c_stream_write_internal_FUN_005ffcb3 (005ffcb3) at 005ffd2c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00600ee4 (00600ee4) at 00600f27 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d576 (0060d576) at 0060d5e3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_storeErrorState_FUN_0060b78e

#include "nocturne.h"

void __cdecl
crt_stdio_c_reportStreamError_FUN_00606020(FileEmbeddedData *embedded_data,uint error_flags)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  uint local_8;
  
  uVar1 = embedded_data->state_field | error_flags;
  embedded_data->state_field = uVar1;
  uVar1 = uVar1 & embedded_data->error_mask;
  if (uVar1 == 0) {
    return;
  }
  crt_stdio_c_storeErrorState_FUN_0060b78e(&local_8,uVar1);
  return;
}


// Assembly code:
// 00606020: PUSH EBX
//   Label: crt_stdio.c_reportStreamError_FUN_00606020
// 00606021: SUB ESP,0x4
// 00606024: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00606028: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060602c: MOV ECX,dword ptr [EAX + 0x10]
// 0060602f: OR ECX,EDX
// 00606031: MOV EBX,dword ptr [EAX + 0x14]
// 00606034: MOV EDX,ECX
// 00606036: MOV dword ptr [EAX + 0x10],ECX
// 00606039: AND EDX,EBX
// 0060603b: JNZ 0x00606042
//   XREF to: 00606042 (CONDITIONAL_JUMP)
// 0060603d: ADD ESP,0x4
// 00606040: POP EBX
// 00606041: RET
// 00606042: PUSH EDX
//   Label: LAB_00606042
// 00606043: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 00606047: PUSH EAX
// 00606048: CALL crt_stdio.c_storeErrorState_FUN_0060b78e
//   XREF to: 0060b78e (UNCONDITIONAL_CALL)
// 0060604d: ADD ESP,0x8
// 00606050: ADD ESP,0x4
// 00606053: POP EBX
// 00606054: RET
