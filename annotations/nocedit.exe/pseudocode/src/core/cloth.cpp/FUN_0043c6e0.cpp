// Name: core_cloth.cpp_FUN_0043c6e0
// Address: 0043c6e0
// Address Range: [[0043c6e0, 0043c813]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c6e0()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cbdc [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c820 (0043c820) at 0043c86b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d873 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043c6e0(undefined4 param_1) */

void core_cloth_cpp_FUN_0043c6e0(void)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  int x;
  int y;
  int in_stack_00000004;
  int local_14;
  
  pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
  if ((int)(pSVar1[in_stack_00000004].projected_vertex.screen_x & -0x80000000) == 0) {
    iVar2 = pSVar1[in_stack_00000004].projected_vertex.screen_y >> 0x10;
    x = pSVar1[in_stack_00000004].projected_vertex.screen_x >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < iVar2)) && (iVar2 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,iVar2);
    }
    iVar3 = local_14 + 3;
    y = local_14 + 1;
    iVar2 = x;
    do {
      local_14 = local_14 + -1;
      iVar2 = iVar2 + -1;
      x = x + 1;
      if (((-1 < iVar2) && (iVar2 < g_WindowWidth)) &&
         ((-1 < local_14 && (local_14 < g_WindowHeight)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,local_14);
      }
      if (((-1 < iVar2) && (iVar2 < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,y);
      }
      if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < local_14)) && (local_14 < g_WindowHeight)) {
        engine_2d_c_plotPixel_FUN_00401140(x,local_14);
      }
      if (((-1 < x) && (x < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
        engine_2d_c_plotPixel_FUN_00401140(x,y);
      }
      y = y + 1;
    } while (y != iVar3);
  }
  return;
}


// Assembly code:
// 0043c6e0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c6e0
// 0043c6e1: PUSH ESI
// 0043c6e2: PUSH EDI
// 0043c6e3: PUSH EBP
// 0043c6e4: SUB ESP,0x8
// 0043c6e7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043c6eb: LEA EBX,[ESI*0x4 + 0x0]
// 0043c6f2: SUB EBX,ESI
// 0043c6f4: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043c6fa: SHL EBX,0x4
// 0043c6fd: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 0043c6ff: ADD ESI,EBX
// 0043c701: TEST byte ptr [ESI + 0x13],0x80
// 0043c705: JNZ 0x0043c78a
//   XREF to: 0043c78a (CONDITIONAL_JUMP)
// 0043c70b: MOV EAX,dword ptr [ESI + 0x14]
// 0043c70e: MOV EBX,dword ptr [ESI + 0x10]
// 0043c711: SAR EAX,0x10
// 0043c714: SAR EBX,0x10
// 0043c717: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0043c71a: TEST EBX,EBX
// 0043c71c: JL 0x0043c72a
//   XREF to: 0043c72a (CONDITIONAL_JUMP)
// 0043c71e: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0043c724: JL 0x0043c792
//   XREF to: 0043c792 (CONDITIONAL_JUMP)
// 0043c72a: MOV ESI,dword ptr [ESP]
//   Label: LAB_0043c72a
//   XREF to: Stack[-0x18] (DATA)
// 0043c72d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0043c730: LEA EBP,[EBX + -0x1]
// 0043c733: DEC ESI
// 0043c734: LEA EDI,[EBX + 0x1]
// 0043c737: ADD EAX,0x3
// 0043c73a: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0043c73d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043c741: INC EBX
// 0043c742: TEST EBP,EBP
//   Label: LAB_0043c742
// 0043c744: JL 0x0043c74e
//   XREF to: 0043c74e (CONDITIONAL_JUMP)
// 0043c746: CMP EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0043c74c: JL 0x0043c7aa
//   XREF to: 0043c7aa (CONDITIONAL_JUMP)
// 0043c74e: TEST EBP,EBP
//   Label: LAB_0043c74e
// 0043c750: JL 0x0043c75e
//   XREF to: 0043c75e (CONDITIONAL_JUMP)
// 0043c752: CMP EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0043c758: JL 0x0043c7c2
//   XREF to: 0043c7c2 (CONDITIONAL_JUMP)
// 0043c75e: TEST EDI,EDI
//   Label: LAB_0043c75e
// 0043c760: JL 0x0043c76e
//   XREF to: 0043c76e (CONDITIONAL_JUMP)
// 0043c762: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0043c768: JL 0x0043c7da
//   XREF to: 0043c7da (CONDITIONAL_JUMP)
// 0043c76e: TEST EDI,EDI
//   Label: LAB_0043c76e
// 0043c770: JL 0x0043c77e
//   XREF to: 0043c77e (CONDITIONAL_JUMP)
// 0043c772: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0043c778: JL 0x0043c7f5
//   XREF to: 0043c7f5 (CONDITIONAL_JUMP)
// 0043c77e: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0043c77e
//   XREF to: Stack[-0x14] (READ)
// 0043c782: DEC ESI
// 0043c783: INC EDI
// 0043c784: INC EBX
// 0043c785: DEC EBP
// 0043c786: CMP EBX,ECX
// 0043c788: JNZ 0x0043c742
//   XREF to: 0043c742 (CONDITIONAL_JUMP)
// 0043c78a: ADD ESP,0x8
//   Label: LAB_0043c78a
// 0043c78d: POP EBP
// 0043c78e: POP EDI
// 0043c78f: POP ESI
// 0043c790: POP EBX
// 0043c791: RET
// 0043c792: TEST EAX,EAX
//   Label: LAB_0043c792
// 0043c794: JL 0x0043c72a
//   XREF to: 0043c72a (CONDITIONAL_JUMP)
// 0043c796: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0043c79c: JGE 0x0043c72a
//   XREF to: 0043c72a (CONDITIONAL_JUMP)
// 0043c79e: PUSH EAX
// 0043c79f: PUSH EBX
// 0043c7a0: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0043c7a5: ADD ESP,0x8
// 0043c7a8: JMP 0x0043c72a
//   XREF to: 0043c72a (UNCONDITIONAL_JUMP)
// 0043c7aa: TEST ESI,ESI
//   Label: LAB_0043c7aa
// 0043c7ac: JL 0x0043c74e
//   XREF to: 0043c74e (CONDITIONAL_JUMP)
// 0043c7ae: CMP ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0043c7b4: JGE 0x0043c74e
//   XREF to: 0043c74e (CONDITIONAL_JUMP)
// 0043c7b6: PUSH ESI
// 0043c7b7: PUSH EBP
// 0043c7b8: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0043c7bd: ADD ESP,0x8
// 0043c7c0: JMP 0x0043c74e
//   XREF to: 0043c74e (UNCONDITIONAL_JUMP)
// 0043c7c2: TEST EBX,EBX
//   Label: LAB_0043c7c2
// 0043c7c4: JL 0x0043c75e
//   XREF to: 0043c75e (CONDITIONAL_JUMP)
// 0043c7c6: CMP EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0043c7cc: JGE 0x0043c75e
//   XREF to: 0043c75e (CONDITIONAL_JUMP)
// 0043c7ce: PUSH EBX
// 0043c7cf: PUSH EBP
// 0043c7d0: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0043c7d5: ADD ESP,0x8
// 0043c7d8: JMP 0x0043c75e
//   XREF to: 0043c75e (UNCONDITIONAL_JUMP)
// 0043c7da: TEST ESI,ESI
//   Label: LAB_0043c7da
// 0043c7dc: JL 0x0043c76e
//   XREF to: 0043c76e (CONDITIONAL_JUMP)
// 0043c7de: CMP ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0043c7e4: JGE 0x0043c76e
//   XREF to: 0043c76e (CONDITIONAL_JUMP)
// 0043c7e6: PUSH ESI
// 0043c7e7: PUSH EDI
// 0043c7e8: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0043c7ed: ADD ESP,0x8
// 0043c7f0: JMP 0x0043c76e
//   XREF to: 0043c76e (UNCONDITIONAL_JUMP)
// 0043c7f5: TEST EBX,EBX
//   Label: LAB_0043c7f5
// 0043c7f7: JL 0x0043c77e
//   XREF to: 0043c77e (CONDITIONAL_JUMP)
// 0043c7f9: CMP EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0043c7ff: JGE 0x0043c77e
//   XREF to: 0043c77e (CONDITIONAL_JUMP)
// 0043c805: PUSH EBX
// 0043c806: PUSH EDI
// 0043c807: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0043c80c: ADD ESP,0x8
// 0043c80f: JMP 0x0043c77e
//   XREF to: 0043c77e (UNCONDITIONAL_JUMP)
