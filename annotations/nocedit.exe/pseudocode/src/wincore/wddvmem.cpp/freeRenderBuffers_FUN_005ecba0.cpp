// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0
// Address: 005ecba0
// Address Range: [[005ecba0, 005ecc00]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0(void)
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_00657764
//   TerminatedCString s_wincore_wddvmem_cpp_0065777b
//   void* g_BackBuffer
//   void* g_SoftwareZBuffer
//   void* g_SoftwareFrameBuffer
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005ecba0(void)

{
  if (g_BackBuffer == (void *)0x0) {
    if (g_SoftwareFrameBuffer == (void *)0x0) {
      return;
    }
  }
  else {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
    if (g_SoftwareFrameBuffer == (void *)0x0) {
      return;
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460
            (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
  g_SoftwareZBuffer = (void *)0x0;
  return;
}


// Assembly code:
// 005ecba0: PUSH ESI
//   Label: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0
// 005ecba1: PUSH EBP
// 005ecba2: MOV EDX,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005ecba8: TEST EDX,EDX
// 005ecbaa: JNZ 0x005ecbb9
//   XREF to: 005ecbb9 (CONDITIONAL_JUMP)
// 005ecbac: MOV ESI,dword ptr [0x03f95930]
//   XREF to: 03f95930 (READ)
// 005ecbb2: TEST ESI,ESI
// 005ecbb4: JNZ 0x005ecbe3
//   XREF to: 005ecbe3 (CONDITIONAL_JUMP)
// 005ecbb6: POP EBP
// 005ecbb7: POP ESI
// 005ecbb8: RET
// 005ecbb9: PUSH EBX
//   Label: LAB_005ecbb9
// 005ecbba: PUSH 0xff
// 005ecbbf: PUSH 0x657764
//   XREF to: 00657764 (DATA)
// 005ecbc4: PUSH EDX
// 005ecbc5: XOR EBX,EBX
// 005ecbc7: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005ecbcc: ADD ESP,0xc
// 005ecbcf: MOV dword ptr [0x00688010],EBX
//   XREF to: 00688010 (WRITE)
// 005ecbd5: POP EBX
// 005ecbd6: MOV ESI,dword ptr [0x03f95930]
//   XREF to: 03f95930 (READ)
// 005ecbdc: TEST ESI,ESI
// 005ecbde: JNZ 0x005ecbe3
//   XREF to: 005ecbe3 (CONDITIONAL_JUMP)
// 005ecbe0: POP EBP
// 005ecbe1: POP ESI
// 005ecbe2: RET
// 005ecbe3: PUSH 0x107
//   Label: LAB_005ecbe3
// 005ecbe8: PUSH 0x65777b
//   XREF to: 0065777b (DATA)
// 005ecbed: PUSH ESI
// 005ecbee: XOR EBP,EBP
// 005ecbf0: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005ecbf5: ADD ESP,0xc
// 005ecbf8: MOV dword ptr [0x0077262c],EBP
//   XREF to: 0077262c (WRITE)
// 005ecbfe: POP EBP
// 005ecbff: POP ESI
// 005ecc00: RET
