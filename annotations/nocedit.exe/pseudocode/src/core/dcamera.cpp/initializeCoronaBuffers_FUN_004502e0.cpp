// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
// Address: 004502e0
// Address Range: [[004502e0, 00450313]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0(void)
// Cross-references:
//   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 (00471400) at 004715c6 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 00473a14 [UNCONDITIONAL_CALL]
// Globals:
//   int[240] g_CoronaLeftExtent
//   undefined4 DAT_01576fac
//   int[240] g_CoronaRightExtent
//   undefined4 DAT_0157736c
//   int[240][320] g_CoronaDepthBuffer
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void)

{
  int iVar1;
  int iVar2;
  
  crt_memory_c_memset_FUN_005fde40(g_CoronaDepthBuffer,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(undefined4 *)((int)g_CoronaRightExtent + iVar2) = 0x13f;
    *(undefined4 *)((int)g_CoronaLeftExtent + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}


// Assembly code:
// 004502e0: PUSH 0x4b000
//   Label: core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
// 004502e5: PUSH 0x7f
// 004502e7: PUSH 0x1577728
//   XREF to: 01577728 (DATA)
// 004502ec: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004502f1: MOV ECX,0x13f
// 004502f6: ADD ESP,0xc
// 004502f9: XOR EAX,EAX
// 004502fb: ADD EAX,0x4
//   Label: LAB_004502fb
// 004502fe: XOR EDX,EDX
// 00450300: MOV dword ptr [EAX + 0x1577364],ECX
//   XREF to: 01577368 (WRITE)
//   XREF to: 0157736c (WRITE)
// 00450306: MOV dword ptr [EAX + 0x1576fa4],EDX
//   XREF to: 01576fa8 (WRITE)
//   XREF to: 01576fac (WRITE)
// 0045030c: CMP EAX,0x3c0
// 00450311: JNZ 0x004502fb
//   XREF to: 004502fb (CONDITIONAL_JUMP)
// 00450313: RET
