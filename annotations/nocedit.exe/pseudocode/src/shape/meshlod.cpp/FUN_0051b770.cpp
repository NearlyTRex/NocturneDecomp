// Name: shape_meshlod.cpp_FUN_0051b770
// Address: 0051b770
// Address Range: [[0051b770, 0051b860]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051b770()
// Cross-references:
//   core_skeledit.cpp_FUN_00589bb0 (00589bb0) at 00589bc7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589d8d [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d11e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516d50 (00516d50) at 00516d86 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b6f0 (0051b6f0) at 0051b6fa [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b720 (0051b720) at 0051b72c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_08X_00637d25
//   TerminatedCString s_lod_00637d2a
//   TerminatedCString s_shape_meshlod_cpp_00637d2e
//   TerminatedCString s_meshlod_0067d3a0
// Function calls:
//   crt_file.c_makepath_FUN_005febfc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_meshlod.cpp_FUN_0051c6f0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051b770(undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

{
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_0000000c;
  char *in_stack_0000001c;
  char acStack_500 [244];
  char acStack_40c [12];
  char acStack_400 [240];
  char local_310 [4];
  char acStack_30c [8];
  char acStack_304 [4];
  char acStack_300 [240];
  char local_210 [4];
  char acStack_20c [252];
  char local_110 [4];
  char acStack_10c [256];
  char local_c [4];
  
  crt_string_c_splitpath_FUN_005ff178("meshlod",local_c,local_110,local_310,local_210);
  crt_file_c_makepath_FUN_005febfc(acStack_40c,(char *)0x0,acStack_10c,acStack_30c,acStack_20c);
  shape_meshlod_cpp_FUN_0051c6f0();
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_304,"%08X",unaff_EBX);
  crt_file_c_makepath_FUN_005febfc
            (&stack0xfffffafc,&stack0x00000004,acStack_400,acStack_300,"lod");
  shape_memdbg_cpp_openFile_FUN_0050f7a0
            (acStack_500,(char *)0x0,in_stack_0000001c,"..\\shape\\meshlod.cpp",0x1239);
  return;
}


// Assembly code:
// 0051b770: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051b770
// 0051b771: PUSH ESI
// 0051b772: SUB ESP,0x50c
// 0051b778: LEA EAX,[ESP + 0x304]
//   XREF to: Stack[-0x210] (DATA)
// 0051b77f: PUSH EAX
// 0051b780: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x310] (DATA)
// 0051b787: PUSH EAX
// 0051b788: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x110] (DATA)
// 0051b78f: PUSH EAX
// 0051b790: LEA EAX,[ESP + 0x514]
//   XREF to: Stack[-0xc] (DATA)
// 0051b797: PUSH EAX
// 0051b798: PUSH 0x67d3a0
//   XREF to: 0067d3a0 (DATA)
// 0051b79d: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0051b7a2: ADD ESP,0x14
// 0051b7a5: LEA EAX,[ESP + 0x304]
//   XREF to: Stack[-0x210] (DATA)
// 0051b7ac: PUSH EAX
// 0051b7ad: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x310] (DATA)
// 0051b7b4: PUSH EAX
// 0051b7b5: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x110] (DATA)
// 0051b7bc: PUSH EAX
// 0051b7bd: PUSH 0x0
// 0051b7bf: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x410] (DATA)
// 0051b7c6: PUSH EAX
// 0051b7c7: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0051b7cc: ADD ESP,0x14
// 0051b7cf: LEA EAX,[ESP + 0x504]
//   XREF to: Stack[-0x10] (DATA)
// 0051b7d6: PUSH EAX
// 0051b7d7: MOV ECX,dword ptr [ESP + 0x51c]
//   XREF to: Stack[0x4] (READ)
// 0051b7de: XOR EDX,EDX
// 0051b7e0: PUSH ECX
// 0051b7e1: MOV dword ptr [ESP + 0x50c],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0051b7e8: CALL shape_meshlod.cpp_FUN_0051c6f0
//   XREF to: 0051c6f0 (UNCONDITIONAL_CALL)
// 0051b7ed: ADD ESP,0x8
// 0051b7f0: MOV EBX,dword ptr [ESP + 0x504]
//   XREF to: Stack[-0x10] (READ)
// 0051b7f7: PUSH EBX
// 0051b7f8: PUSH 0x637d25
//   XREF to: 00637d25 (DATA)
// 0051b7fd: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x310] (DATA)
// 0051b804: PUSH EAX
// 0051b805: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051b80a: ADD ESP,0xc
// 0051b80d: PUSH 0x637d2a
//   XREF to: 00637d2a (DATA)
// 0051b812: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x310] (DATA)
// 0051b819: PUSH EAX
// 0051b81a: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x410] (DATA)
// 0051b821: PUSH EAX
// 0051b822: LEA EAX,[ESP + 0x514]
//   XREF to: Stack[-0xc] (DATA)
// 0051b829: PUSH EAX
// 0051b82a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x514] (DATA)
// 0051b82e: PUSH EAX
// 0051b82f: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0051b834: ADD ESP,0x14
// 0051b837: PUSH 0x1239
// 0051b83c: PUSH 0x637d2e
//   XREF to: 00637d2e (DATA)
// 0051b841: MOV ESI,dword ptr [ESP + 0x524]
//   XREF to: Stack[0x8] (READ)
// 0051b848: PUSH ESI
// 0051b849: PUSH 0x0
// 0051b84b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x514] (DATA)
// 0051b84f: PUSH EAX
// 0051b850: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0051b855: ADD ESP,0x14
// 0051b858: ADD ESP,0x50c
// 0051b85e: POP ESI
// 0051b85f: POP EBX
// 0051b860: RET
