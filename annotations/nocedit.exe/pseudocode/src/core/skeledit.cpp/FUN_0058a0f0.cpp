// Name: core_skeledit.cpp_FUN_0058a0f0
// Address: 0058a0f0
// Address Range: [[0058a0f0, 0058a1a8]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058a0f0()
// Cross-references:
//   core_skeledit.cpp_FUN_00589bb0 (00589bb0) at 00589bdf [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589e78 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d15d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_version_0064a1af
//   TerminatedCString s_s_1_0064a1bb
//   TerminatedCString s_posFilename_0064a1be
//   TerminatedCString s_s_0064a1ce
//   TerminatedCString s_sklFilename_0064a1d4
//   TerminatedCString s_s_0064a1e4
//   TerminatedCString s_s3dFilename_0064a1ea
//   TerminatedCString s_s_0064a1fa
//   TerminatedCString s_forShadows_0064a200
//   TerminatedCString s_d_0064a20f
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058a0f0(void)

{
  FILE *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// posFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// sklFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// s3dFilename\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// forShadows\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"%d\n");
  return;
}


// Assembly code:
// 0058a0f0: PUSH 0x18
//   Label: core_skeledit.cpp_FUN_0058a0f0
// 0058a0f5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058a0fa: PUSH EBX
// 0058a0fb: PUSH ESI
// 0058a0fc: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0058a100: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0058a104: PUSH 0x64a1af
//   XREF to: 0064a1af (DATA)
// 0058a109: PUSH EBX
// 0058a10a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a10f: ADD ESP,0x8
// 0058a112: PUSH 0x64a1bb
//   XREF to: 0064a1bb (DATA)
// 0058a117: PUSH EBX
// 0058a118: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a11d: ADD ESP,0x8
// 0058a120: PUSH 0x64a1be
//   XREF to: 0064a1be (DATA)
// 0058a125: PUSH EBX
// 0058a126: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a12b: ADD ESP,0x8
// 0058a12e: PUSH ESI
// 0058a12f: PUSH 0x64a1ce
//   XREF to: 0064a1ce (DATA)
// 0058a134: PUSH EBX
// 0058a135: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a13a: ADD ESP,0xc
// 0058a13d: PUSH 0x64a1d4
//   XREF to: 0064a1d4 (DATA)
// 0058a142: PUSH EBX
// 0058a143: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a148: ADD ESP,0x8
// 0058a14b: LEA EAX,[ESI + 0x100]
// 0058a151: PUSH EAX
// 0058a152: PUSH 0x64a1e4
//   XREF to: 0064a1e4 (DATA)
// 0058a157: PUSH EBX
// 0058a158: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a15d: ADD ESP,0xc
// 0058a160: PUSH 0x64a1ea
//   XREF to: 0064a1ea (DATA)
// 0058a165: PUSH EBX
// 0058a166: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a16b: ADD ESP,0x8
// 0058a16e: LEA EAX,[ESI + 0x200]
// 0058a174: PUSH EAX
// 0058a175: PUSH 0x64a1fa
//   XREF to: 0064a1fa (DATA)
// 0058a17a: PUSH EBX
// 0058a17b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a180: ADD ESP,0xc
// 0058a183: PUSH 0x64a200
//   XREF to: 0064a200 (DATA)
// 0058a188: PUSH EBX
// 0058a189: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a18e: ADD ESP,0x8
// 0058a191: MOV EDX,dword ptr [ESI + 0x30c]
// 0058a197: PUSH EDX
// 0058a198: PUSH 0x64a20f
//   XREF to: 0064a20f (DATA)
// 0058a19d: PUSH EBX
// 0058a19e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a1a3: ADD ESP,0xc
// 0058a1a6: POP ESI
// 0058a1a7: POP EBX
// 0058a1a8: RET
