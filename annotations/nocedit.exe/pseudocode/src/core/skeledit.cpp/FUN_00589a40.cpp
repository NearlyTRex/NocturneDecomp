// Name: core_skeledit.cpp_FUN_00589a40
// Address: 00589a40
// Address Range: [[00589a40, 00589b06]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589a40()
// Globals:
//   TerminatedCString s_core_skeledit_cpp_00649d66
//   TerminatedCString s_wt_00649d7b
//   TerminatedCString s_version_00649d7e
//   TerminatedCString s_d_00649d8a
//   TerminatedCString s_lastPOSimported_00649d8e
//   TerminatedCString s_s_00649da2
//   TerminatedCString s_lastMOTimported_00649da8
//   TerminatedCString s_s_00649dbc
//   TerminatedCString s_lastTestSkeletonDir_00649dc2
//   TerminatedCString s_s_00649dda
//   TerminatedCString s_core_skeledit_cpp_00649de0
//   TerminatedCString s_skeledit_ini_00681868
//   undefined1 DAT_03670848
//   undefined1 DAT_03670950
//   undefined1 DAT_03670a58
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589a40(void)

{
  FILE *file;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp",
                    0x144);
  if (file == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lastPOSimported\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lastMOTimported\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lastTestSkeletonDir\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"\"%s\"\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x154);
  return;
}


// Assembly code:
// 00589a40: PUSH 0x1c
//   Label: core_skeledit.cpp_FUN_00589a40
// 00589a45: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589a4a: PUSH EBX
// 00589a4b: PUSH 0x144
// 00589a50: PUSH 0x649d66
//   XREF to: 00649d66 (DATA)
// 00589a55: PUSH 0x649d7b
//   XREF to: 00649d7b (DATA)
// 00589a5a: PUSH 0x0
// 00589a5c: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 00589a61: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00589a66: MOV EBX,EAX
// 00589a68: ADD ESP,0x14
// 00589a6b: TEST EAX,EAX
// 00589a6d: JNZ 0x00589a71
//   XREF to: 00589a71 (CONDITIONAL_JUMP)
// 00589a6f: POP EBX
// 00589a70: RET
// 00589a71: PUSH 0x649d7e
//   Label: LAB_00589a71
//   XREF to: 00649d7e (DATA)
// 00589a76: PUSH EAX
// 00589a77: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589a7c: ADD ESP,0x8
// 00589a7f: PUSH 0x1
// 00589a81: PUSH 0x649d8a
//   XREF to: 00649d8a (DATA)
// 00589a86: PUSH EBX
// 00589a87: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589a8c: ADD ESP,0xc
// 00589a8f: PUSH 0x649d8e
//   XREF to: 00649d8e (DATA)
// 00589a94: PUSH EBX
// 00589a95: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589a9a: ADD ESP,0x8
// 00589a9d: PUSH 0x3670848
//   XREF to: 03670848 (DATA)
// 00589aa2: PUSH 0x649da2
//   XREF to: 00649da2 (DATA)
// 00589aa7: PUSH EBX
// 00589aa8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589aad: ADD ESP,0xc
// 00589ab0: PUSH 0x649da8
//   XREF to: 00649da8 (DATA)
// 00589ab5: PUSH EBX
// 00589ab6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589abb: ADD ESP,0x8
// 00589abe: PUSH 0x3670950
//   XREF to: 03670950 (DATA)
// 00589ac3: PUSH 0x649dbc
//   XREF to: 00649dbc (DATA)
// 00589ac8: PUSH EBX
// 00589ac9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589ace: ADD ESP,0xc
// 00589ad1: PUSH 0x649dc2
//   XREF to: 00649dc2 (DATA)
// 00589ad6: PUSH EBX
// 00589ad7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589adc: ADD ESP,0x8
// 00589adf: PUSH 0x3670a58
//   XREF to: 03670a58 (DATA)
// 00589ae4: PUSH 0x649dda
//   XREF to: 00649dda (DATA)
// 00589ae9: PUSH EBX
// 00589aea: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00589aef: ADD ESP,0xc
// 00589af2: PUSH 0x154
// 00589af7: PUSH 0x649de0
//   XREF to: 00649de0 (DATA)
// 00589afc: PUSH EBX
// 00589afd: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00589b02: ADD ESP,0xc
// 00589b05: POP EBX
// 00589b06: RET
