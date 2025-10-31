// Name: shape_meshlod.cpp_FUN_00516d50
// Address: 00516d50
// Address Range: [[00516d50, 00516e00]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00516d50()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516ba0 (00516ba0) at 00516bb0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_005173f0 (005173f0) at 005173fc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_meshlod_00637339
//   TerminatedCString s_wt_0063766d
//   TerminatedCString s_meshlod_simplify_log_0067d4a0
// Function calls:
//   crt_file.c_create_directory_FUN_00600e10
//   crt_io.c_deleteFile_FUN_005ff9d0
//   shape_meshlod.cpp_FUN_00515ba0
//   shape_meshlod.cpp_FUN_00516620
//   shape_meshlod.cpp_FUN_00516e10
//   shape_meshlod.cpp_FUN_00516f50
//   shape_meshlod.cpp_FUN_00517000
//   shape_meshlod.cpp_FUN_00519710
//   shape_meshlod.cpp_FUN_0051b770
//   shape_meshlod.cpp_FUN_0051d0e0
//   shape_meshlod.cpp_FUN_0051d420

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00516d50(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x34) != 0) {
    return;
  }
  crt_file_c_create_directory_FUN_00600e10("meshlod");
  crt_io_c_deleteFile_FUN_005ff9d0("meshlod\\simplify.log");
  if (*(int *)(in_stack_00000004 + 0x38) == 0) {
    uVar1 = shape_meshlod_cpp_FUN_0051b770();
    *(undefined4 *)(in_stack_00000004 + 0x38) = uVar1;
  }
  shape_meshlod_cpp_FUN_00516e10();
  shape_meshlod_cpp_FUN_00516f50();
  shape_meshlod_cpp_FUN_00516620();
  shape_meshlod_cpp_FUN_0051d420();
  shape_meshlod_cpp_FUN_00515ba0();
  shape_meshlod_cpp_FUN_00515ba0();
  shape_meshlod_cpp_FUN_00517000();
  shape_meshlod_cpp_FUN_00519710();
  shape_meshlod_cpp_FUN_0051d0e0();
  *(undefined4 *)(in_stack_00000004 + 0x4c) = 0;
  return;
}


// Assembly code:
// 00516d50: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00516d50
// 00516d51: PUSH EBP
// 00516d52: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00516d56: CMP dword ptr [EBX + 0x34],0x0
// 00516d5a: JZ 0x00516d5f
//   XREF to: 00516d5f (CONDITIONAL_JUMP)
// 00516d5c: POP EBP
// 00516d5d: POP EBX
// 00516d5e: RET
// 00516d5f: PUSH 0x637339
//   Label: LAB_00516d5f
//   XREF to: 00637339 (DATA)
// 00516d64: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 00516d69: ADD ESP,0x4
// 00516d6c: PUSH 0x67d4a0
//   XREF to: 0067d4a0 (DATA)
// 00516d71: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00516d76: MOV ECX,dword ptr [EBX + 0x38]
// 00516d79: ADD ESP,0x4
// 00516d7c: TEST ECX,ECX
// 00516d7e: JNZ 0x00516d91
//   XREF to: 00516d91 (CONDITIONAL_JUMP)
// 00516d80: PUSH 0x63766d
//   XREF to: 0063766d (DATA)
// 00516d85: PUSH EBX
// 00516d86: CALL shape_meshlod.cpp_FUN_0051b770
//   XREF to: 0051b770 (UNCONDITIONAL_CALL)
// 00516d8b: ADD ESP,0x8
// 00516d8e: MOV dword ptr [EBX + 0x38],EAX
// 00516d91: PUSH EDI
//   Label: LAB_00516d91
// 00516d92: PUSH ESI
// 00516d93: PUSH EBX
// 00516d94: CALL shape_meshlod.cpp_FUN_00516e10
//   XREF to: 00516e10 (UNCONDITIONAL_CALL)
// 00516d99: ADD ESP,0x4
// 00516d9c: PUSH EBX
// 00516d9d: CALL shape_meshlod.cpp_FUN_00516f50
//   XREF to: 00516f50 (UNCONDITIONAL_CALL)
// 00516da2: ADD ESP,0x4
// 00516da5: MOV ESI,dword ptr [EBX + 0x34]
// 00516da8: PUSH ESI
// 00516da9: CALL shape_meshlod.cpp_FUN_00516620
//   XREF to: 00516620 (UNCONDITIONAL_CALL)
// 00516dae: ADD ESP,0x4
// 00516db1: MOV EDI,dword ptr [EBX + 0x38]
// 00516db4: PUSH EDI
// 00516db5: MOV EBP,dword ptr [EBX + 0x34]
// 00516db8: PUSH EBP
// 00516db9: CALL shape_meshlod.cpp_FUN_0051d420
//   XREF to: 0051d420 (UNCONDITIONAL_CALL)
// 00516dbe: ADD ESP,0x8
// 00516dc1: PUSH EBX
// 00516dc2: CALL shape_meshlod.cpp_FUN_00515ba0
//   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
// 00516dc7: ADD ESP,0x4
// 00516dca: MOV EAX,dword ptr [EBX + 0x34]
// 00516dcd: PUSH EAX
// 00516dce: CALL shape_meshlod.cpp_FUN_00515ba0
//   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
// 00516dd3: ADD ESP,0x4
// 00516dd6: PUSH EBX
// 00516dd7: CALL shape_meshlod.cpp_FUN_00517000
//   XREF to: 00517000 (UNCONDITIONAL_CALL)
// 00516ddc: ADD ESP,0x4
// 00516ddf: PUSH EBX
// 00516de0: CALL shape_meshlod.cpp_FUN_00519710
//   XREF to: 00519710 (UNCONDITIONAL_CALL)
// 00516de5: ADD ESP,0x4
// 00516de8: MOV EDX,dword ptr [EBX + 0x38]
// 00516deb: PUSH EDX
// 00516dec: PUSH EBX
// 00516ded: CALL shape_meshlod.cpp_FUN_0051d0e0
//   XREF to: 0051d0e0 (UNCONDITIONAL_CALL)
// 00516df2: ADD ESP,0x8
// 00516df5: MOV dword ptr [EBX + 0x4c],0x0
// 00516dfc: POP ESI
// 00516dfd: POP EDI
// 00516dfe: POP EBP
// 00516dff: POP EBX
// 00516e00: RET
