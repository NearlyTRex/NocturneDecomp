// Name: core_actor.cpp_FUN_00409930
// Address: 00409930
// Address Range: [[00409930, 00409b81]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_00409930()
// Globals:
//   float FLOAT_006597b0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void core_actor_cpp_FUN_00409930(void)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int in_stack_0000000c;
  
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
             (CVector3i *)&stack0xffffffec);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
    iVar5 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
    g_ActiveRenderColor = in_stack_0000000c;
    iVar4 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
    if ((((-1 < iVar5) && (-1 < iVar4)) && (iVar5 < g_WindowWidth)) && (iVar4 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar4);
    }
    iVar1 = iVar5 + -1;
    iVar2 = iVar4 + -1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + -1;
    iVar2 = iVar4 + 1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + 1;
    iVar2 = iVar4 + -1;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + 1;
    iVar2 = iVar4 + 1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + -2;
    iVar2 = iVar4 + -2;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + -2;
    iVar2 = iVar4 + 2;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + 2;
    iVar2 = iVar4 + -2;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar5 = iVar5 + 2;
    iVar4 = iVar4 + 2;
    if (((-1 < iVar5) && (-1 < iVar4)) && ((iVar5 < g_WindowWidth && (iVar4 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar4);
      return;
    }
  }
  return;
}


// Assembly code:
// 00409930: PUSH EBX
//   Label: core_actor.cpp_FUN_00409930
// 00409931: PUSH ESI
// 00409932: SUB ESP,0xc
// 00409935: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00409939: MOV EBX,ESP
// 0040993b: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00409941: FLD float ptr [EAX]
// 00409943: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 00409949: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x14] (DATA)
// 0040994b: FLD float ptr [EAX + 0x4]
// 0040994e: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 00409954: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x10] (WRITE)
// 00409957: FLD float ptr [EAX + 0x8]
// 0040995a: FMUL float ptr [0x006597b0]
//   XREF to: 006597b0 (READ)
// 00409960: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 00409963: MOV EAX,ESP
// 00409965: PUSH EAX
// 00409966: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00409968: ADD EAX,0xea5d0
// 0040996d: PUSH EAX
// 0040996e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00409973: MOV EBX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00409979: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 0040997b: MOV AH,byte ptr [EBX + 0xea5e3]
// 00409981: ADD ESP,0x8
// 00409984: TEST AH,0x80
// 00409987: JNZ 0x00409a94
//   XREF to: 00409a94 (CONDITIONAL_JUMP)
// 0040998d: MOV ESI,dword ptr [EBX + 0xea5e0]
// 00409993: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00409997: SAR ESI,0x10
// 0040999a: MOV EBX,dword ptr [EBX + 0xea5e4]
// 004099a0: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004099a5: SAR EBX,0x10
// 004099a8: TEST ESI,ESI
// 004099aa: JL 0x004099bc
//   XREF to: 004099bc (CONDITIONAL_JUMP)
// 004099ac: TEST EBX,EBX
// 004099ae: JL 0x004099bc
//   XREF to: 004099bc (CONDITIONAL_JUMP)
// 004099b0: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004099b6: JL 0x00409a9a
//   XREF to: 00409a9a (CONDITIONAL_JUMP)
// 004099bc: LEA EAX,[ESI + -0x1]
//   Label: LAB_004099bc
// 004099bf: LEA EDX,[EBX + -0x1]
// 004099c2: TEST EAX,EAX
// 004099c4: JL 0x004099d6
//   XREF to: 004099d6 (CONDITIONAL_JUMP)
// 004099c6: TEST EDX,EDX
// 004099c8: JL 0x004099d6
//   XREF to: 004099d6 (CONDITIONAL_JUMP)
// 004099ca: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004099d0: JL 0x00409ab5
//   XREF to: 00409ab5 (CONDITIONAL_JUMP)
// 004099d6: LEA EDX,[ESI + -0x1]
//   Label: LAB_004099d6
// 004099d9: LEA EAX,[EBX + 0x1]
// 004099dc: TEST EDX,EDX
// 004099de: JL 0x004099f0
//   XREF to: 004099f0 (CONDITIONAL_JUMP)
// 004099e0: TEST EAX,EAX
// 004099e2: JL 0x004099f0
//   XREF to: 004099f0 (CONDITIONAL_JUMP)
// 004099e4: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004099ea: JL 0x00409ad0
//   XREF to: 00409ad0 (CONDITIONAL_JUMP)
// 004099f0: LEA EDX,[ESI + 0x1]
//   Label: LAB_004099f0
// 004099f3: LEA EAX,[EBX + -0x1]
// 004099f6: TEST EDX,EDX
// 004099f8: JL 0x00409a0a
//   XREF to: 00409a0a (CONDITIONAL_JUMP)
// 004099fa: TEST EAX,EAX
// 004099fc: JL 0x00409a0a
//   XREF to: 00409a0a (CONDITIONAL_JUMP)
// 004099fe: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409a04: JL 0x00409aeb
//   XREF to: 00409aeb (CONDITIONAL_JUMP)
// 00409a0a: LEA EAX,[ESI + 0x1]
//   Label: LAB_00409a0a
// 00409a0d: LEA EDX,[EBX + 0x1]
// 00409a10: TEST EAX,EAX
// 00409a12: JL 0x00409a24
//   XREF to: 00409a24 (CONDITIONAL_JUMP)
// 00409a14: TEST EDX,EDX
// 00409a16: JL 0x00409a24
//   XREF to: 00409a24 (CONDITIONAL_JUMP)
// 00409a18: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409a1e: JL 0x00409b06
//   XREF to: 00409b06 (CONDITIONAL_JUMP)
// 00409a24: LEA EDX,[ESI + -0x2]
//   Label: LAB_00409a24
// 00409a27: LEA EAX,[EBX + -0x2]
// 00409a2a: TEST EDX,EDX
// 00409a2c: JL 0x00409a3e
//   XREF to: 00409a3e (CONDITIONAL_JUMP)
// 00409a2e: TEST EAX,EAX
// 00409a30: JL 0x00409a3e
//   XREF to: 00409a3e (CONDITIONAL_JUMP)
// 00409a32: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409a38: JL 0x00409b21
//   XREF to: 00409b21 (CONDITIONAL_JUMP)
// 00409a3e: LEA EAX,[ESI + -0x2]
//   Label: LAB_00409a3e
// 00409a41: LEA EDX,[EBX + 0x2]
// 00409a44: TEST EAX,EAX
// 00409a46: JL 0x00409a58
//   XREF to: 00409a58 (CONDITIONAL_JUMP)
// 00409a48: TEST EDX,EDX
// 00409a4a: JL 0x00409a58
//   XREF to: 00409a58 (CONDITIONAL_JUMP)
// 00409a4c: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409a52: JL 0x00409b3c
//   XREF to: 00409b3c (CONDITIONAL_JUMP)
// 00409a58: LEA EAX,[ESI + 0x2]
//   Label: LAB_00409a58
// 00409a5b: LEA EDX,[EBX + -0x2]
// 00409a5e: TEST EAX,EAX
// 00409a60: JL 0x00409a72
//   XREF to: 00409a72 (CONDITIONAL_JUMP)
// 00409a62: TEST EDX,EDX
// 00409a64: JL 0x00409a72
//   XREF to: 00409a72 (CONDITIONAL_JUMP)
// 00409a66: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409a6c: JL 0x00409b57
//   XREF to: 00409b57 (CONDITIONAL_JUMP)
// 00409a72: ADD ESI,0x2
//   Label: LAB_00409a72
// 00409a75: ADD EBX,0x2
// 00409a78: TEST ESI,ESI
// 00409a7a: JL 0x00409a94
//   XREF to: 00409a94 (CONDITIONAL_JUMP)
// 00409a7c: TEST EBX,EBX
// 00409a7e: JL 0x00409a94
//   XREF to: 00409a94 (CONDITIONAL_JUMP)
// 00409a80: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409a86: JGE 0x00409a94
//   XREF to: 00409a94 (CONDITIONAL_JUMP)
// 00409a88: CMP EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00409a8e: JL 0x00409b72
//   XREF to: 00409b72 (CONDITIONAL_JUMP)
// 00409a94: ADD ESP,0xc
//   Label: LAB_00409a94
// 00409a97: POP ESI
// 00409a98: POP EBX
// 00409a99: RET
// 00409a9a: CMP EBX,dword ptr [0x00679398]
//   Label: LAB_00409a9a
//   XREF to: 00679398 (READ)
// 00409aa0: JGE 0x004099bc
//   XREF to: 004099bc (CONDITIONAL_JUMP)
// 00409aa6: PUSH EBX
// 00409aa7: PUSH ESI
// 00409aa8: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409aad: ADD ESP,0x8
// 00409ab0: JMP 0x004099bc
//   XREF to: 004099bc (UNCONDITIONAL_JUMP)
// 00409ab5: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409ab5
//   XREF to: 00679398 (READ)
// 00409abb: JGE 0x004099d6
//   XREF to: 004099d6 (CONDITIONAL_JUMP)
// 00409ac1: PUSH EDX
// 00409ac2: PUSH EAX
// 00409ac3: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409ac8: ADD ESP,0x8
// 00409acb: JMP 0x004099d6
//   XREF to: 004099d6 (UNCONDITIONAL_JUMP)
// 00409ad0: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_00409ad0
//   XREF to: 00679398 (READ)
// 00409ad6: JGE 0x004099f0
//   XREF to: 004099f0 (CONDITIONAL_JUMP)
// 00409adc: PUSH EAX
// 00409add: PUSH EDX
// 00409ade: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409ae3: ADD ESP,0x8
// 00409ae6: JMP 0x004099f0
//   XREF to: 004099f0 (UNCONDITIONAL_JUMP)
// 00409aeb: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_00409aeb
//   XREF to: 00679398 (READ)
// 00409af1: JGE 0x00409a0a
//   XREF to: 00409a0a (CONDITIONAL_JUMP)
// 00409af7: PUSH EAX
// 00409af8: PUSH EDX
// 00409af9: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409afe: ADD ESP,0x8
// 00409b01: JMP 0x00409a0a
//   XREF to: 00409a0a (UNCONDITIONAL_JUMP)
// 00409b06: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409b06
//   XREF to: 00679398 (READ)
// 00409b0c: JGE 0x00409a24
//   XREF to: 00409a24 (CONDITIONAL_JUMP)
// 00409b12: PUSH EDX
// 00409b13: PUSH EAX
// 00409b14: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409b19: ADD ESP,0x8
// 00409b1c: JMP 0x00409a24
//   XREF to: 00409a24 (UNCONDITIONAL_JUMP)
// 00409b21: CMP EAX,dword ptr [0x00679398]
//   Label: LAB_00409b21
//   XREF to: 00679398 (READ)
// 00409b27: JGE 0x00409a3e
//   XREF to: 00409a3e (CONDITIONAL_JUMP)
// 00409b2d: PUSH EAX
// 00409b2e: PUSH EDX
// 00409b2f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409b34: ADD ESP,0x8
// 00409b37: JMP 0x00409a3e
//   XREF to: 00409a3e (UNCONDITIONAL_JUMP)
// 00409b3c: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409b3c
//   XREF to: 00679398 (READ)
// 00409b42: JGE 0x00409a58
//   XREF to: 00409a58 (CONDITIONAL_JUMP)
// 00409b48: PUSH EDX
// 00409b49: PUSH EAX
// 00409b4a: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409b4f: ADD ESP,0x8
// 00409b52: JMP 0x00409a58
//   XREF to: 00409a58 (UNCONDITIONAL_JUMP)
// 00409b57: CMP EDX,dword ptr [0x00679398]
//   Label: LAB_00409b57
//   XREF to: 00679398 (READ)
// 00409b5d: JGE 0x00409a72
//   XREF to: 00409a72 (CONDITIONAL_JUMP)
// 00409b63: PUSH EDX
// 00409b64: PUSH EAX
// 00409b65: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409b6a: ADD ESP,0x8
// 00409b6d: JMP 0x00409a72
//   XREF to: 00409a72 (UNCONDITIONAL_JUMP)
// 00409b72: PUSH EBX
//   Label: LAB_00409b72
// 00409b73: PUSH ESI
// 00409b74: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409b79: ADD ESP,0x8
// 00409b7c: ADD ESP,0xc
// 00409b7f: POP ESI
// 00409b80: POP EBX
// 00409b81: RET
