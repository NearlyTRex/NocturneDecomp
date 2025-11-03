// Name: core_msnedit.cpp_FUN_0053c4f0
// Address: 0053c4f0
// Address Range: [[0053c4f0, 0053c72a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c4f0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053972b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_Selected:_%s_0063c874
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   WatcomStaticDestructorNode DAT_0068064c
//   CEdButton* g_ActiveButton
//   int g_MouseX
//   int g_MouseY
//   int g_ActiveRenderColor
//   undefined4 DAT_02f797e4
//   undefined4 DAT_02f797e8
//   undefined4 DAT_02f797ec
//   undefined4 DAT_02f797f0
//   undefined1 DAT_02f79818
//   undefined4 DAT_02f7a024
//   undefined4 DAT_02f7a028
//   undefined4 DAT_02f7c510
//   undefined4 DAT_02f7c528
//   undefined4 DAT_02f7c538
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e770
//   core_actor.cpp_CActorPropertyList_FUN_0040e850
//   core_actor.cpp_CActorPropertyList_FUN_0040e9c0
//   core_actor.cpp_FUN_0040e150
//   core_msnedit.cpp_FUN_00536e20
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_drawVLine_FUN_00402ff0
//   engine_matrix.c_popViewport_FUN_0050e480
//   engine_matrix.c_pushViewport_FUN_0050e320
//   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_msnedit_cpp_FUN_0053c4f0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonRenderer *unaff_EDI;
  int x;
  int in_stack_00000004;
  char acStack_13c [300];
  int iStack_10;
  
  core_actor_cpp_FUN_0040e150();
  DAT_02f7c528 = 0xffffffff;
  DAT_02f7c538 = 0;
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x28) + 0x154) + 0xd4))();
  if ((DAT_02f79818 & 1) == 0) {
    DAT_02f79818 = DAT_02f79818 | 1;
    shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&DAT_02f797e4);
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_0068064c);
  }
  iVar1 = g_WindowWidth;
  if (*(int *)(in_stack_00000004 + 0x24) != 0) {
    iStack_10 = 0x141;
    engine_matrix_c_pushViewport_FUN_0050e320(0x141,0,g_WindowWidth + -0x14c,0xf0);
    core_actor_cpp_CActorPropertyList_FUN_0040e770();
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              ((CEdScrollBar *)&DAT_02f797e4,iVar1 + -0xb,1,iVar1 + -1,0xee);
    _DAT_02f797ec = 0xf0;
    _DAT_02f797e8 = DAT_02f7c510;
    _DAT_02f797f0 = DAT_02f7c510 / _DAT_02f7a028;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_02f797e4);
    core_actor_cpp_CActorPropertyList_FUN_0040e770();
    if ((((g_ActiveButton == (CEdButton *)0x0) && (0x140 < g_MouseX)) && (g_MouseX <= iVar1 + -0xc))
       && ((-1 < g_MouseY && (g_MouseY < 0xf0)))) {
      DAT_02f7c528 = core_actor_cpp_CActorPropertyList_FUN_0040e9c0();
    }
    core_actor_cpp_CActorPropertyList_FUN_0040e850();
    engine_matrix_c_popViewport_FUN_0050e480(unaff_EDI);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_02f797e4);
    x = iStack_10 + -1;
    g_ActiveRenderColor = 7;
    engine_2d_c_drawVLine_FUN_00402ff0(x,0,0xf0);
    engine_2d_c_drawHLine_FUN_00402ee0(x,0xf0,iVar1 + -1);
    core_msnedit_cpp_FUN_00536e20();
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_13c,"@Selected: %s" + 1,*(undefined4 *)(in_stack_00000004 + 0x28));
  engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,g_WindowHeight + -0xb);
  shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
            ((CEdScrollBar *)&DAT_02f797e4);
  core_msnedit_cpp_FUN_00536e20();
  return;
}


// Assembly code:
// 0053c4f0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053c4f0
// 0053c4f1: PUSH ESI
// 0053c4f2: PUSH EBP
// 0053c4f3: SUB ESP,0x130
// 0053c4f9: MOV EBX,dword ptr [ESP + 0x140]
//   XREF to: Stack[0x4] (READ)
// 0053c500: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c505: CALL core_actor.cpp_FUN_0040e150
//   XREF to: 0040e150 (UNCONDITIONAL_CALL)
// 0053c50a: MOV EDX,0xffffffff
// 0053c50f: ADD ESP,0x4
// 0053c512: MOV ESI,dword ptr [EBX + 0x28]
// 0053c515: XOR ECX,ECX
// 0053c517: MOV dword ptr [0x02f7c528],EDX
//   XREF to: 02f7c528 (WRITE)
// 0053c51d: MOV dword ptr [0x02f7c538],ECX
//   XREF to: 02f7c538 (WRITE)
// 0053c523: TEST ESI,ESI
// 0053c525: JNZ 0x0053c531
//   XREF to: 0053c531 (CONDITIONAL_JUMP)
// 0053c527: ADD ESP,0x130
// 0053c52d: POP EBP
// 0053c52e: POP ESI
// 0053c52f: POP EBX
// 0053c530: RET
// 0053c531: PUSH 0x2f7a024
//   Label: LAB_0053c531
//   XREF to: 02f7a024 (DATA)
// 0053c536: MOV EDX,dword ptr [ESI + 0x154]
// 0053c53c: PUSH ESI
// 0053c53d: CALL dword ptr [EDX + 0xd4]
// 0053c543: MOV AH,byte ptr [0x02f79818]
//   XREF to: 02f79818 (READ)
// 0053c549: ADD ESP,0x8
// 0053c54c: TEST AH,0x1
// 0053c54f: JZ 0x0053c6b7
//   XREF to: 0053c6b7 (CONDITIONAL_JUMP)
// 0053c555: PUSH EDI
//   Label: LAB_0053c555
// 0053c556: MOV EDI,dword ptr [EBX + 0x24]
// 0053c559: TEST EDI,EDI
// 0053c55b: JZ 0x0053c6e1
//   XREF to: 0053c6e1 (CONDITIONAL_JUMP)
// 0053c561: MOV dword ptr [ESP + 0x130],0x141
// 0053c56c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053c571: PUSH 0xf0
// 0053c576: SUB EAX,0x14c
// 0053c57b: PUSH EAX
// 0053c57c: XOR EDI,EDI
// 0053c57e: PUSH EDI
// 0053c57f: PUSH 0x141
// 0053c584: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0053c58a: CALL engine_matrix.c_pushViewport_FUN_0050e320
//   XREF to: 0050e320 (UNCONDITIONAL_CALL)
// 0053c58f: ADD ESP,0x10
// 0053c592: SUB EBX,0xc
// 0053c595: PUSH EBX
// 0053c596: PUSH EDI
// 0053c597: PUSH 0x141
// 0053c59c: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c5a1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e770
//   XREF to: 0040e770 (UNCONDITIONAL_CALL)
// 0053c5a6: ADD ESP,0x10
// 0053c5a9: LEA EAX,[EBX + 0x1]
// 0053c5ac: PUSH 0xee
// 0053c5b1: LEA ESI,[EBX + 0xb]
// 0053c5b4: PUSH ESI
// 0053c5b5: PUSH 0x1
// 0053c5b7: PUSH EAX
// 0053c5b8: PUSH 0x2f797e4
//   XREF to: 02f797e4 (DATA)
// 0053c5bd: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 0053c5c2: MOV EDX,0xf0
// 0053c5c7: MOV EAX,[0x02f7c510]
//   XREF to: 02f7c510 (READ)
// 0053c5cc: MOV dword ptr [0x02f797ec],EDX
//   XREF to: 02f797ec (WRITE)
// 0053c5d2: MOV EDX,EAX
// 0053c5d4: MOV ECX,dword ptr [0x02f7a028]
//   XREF to: 02f7a028 (READ)
// 0053c5da: SAR EDX,0x1f
// 0053c5dd: MOV [0x02f797e8],EAX
//   XREF to: 02f797e8 (WRITE)
// 0053c5e2: IDIV ECX
// 0053c5e4: ADD ESP,0x14
// 0053c5e7: PUSH 0x2f797e4
//   XREF to: 02f797e4 (DATA)
// 0053c5ec: MOV [0x02f797f0],EAX
//   XREF to: 02f797f0 (WRITE)
// 0053c5f1: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 0053c5f6: ADD ESP,0x4
// 0053c5f9: MOV EAX,[0x02f797e4]
//   XREF to: 02f797e4 (READ)
// 0053c5fe: PUSH EBX
// 0053c5ff: NEG EAX
// 0053c601: PUSH EAX
// 0053c602: PUSH 0x141
// 0053c607: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c60c: MOV EBP,0xef
// 0053c611: CALL core_actor.cpp_CActorPropertyList_FUN_0040e770
//   XREF to: 0040e770 (UNCONDITIONAL_CALL)
// 0053c616: MOV EAX,[0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 0053c61b: ADD ESP,0x10
// 0053c61e: TEST EAX,EAX
// 0053c620: JNZ 0x0053c656
//   XREF to: 0053c656 (CONDITIONAL_JUMP)
// 0053c622: MOV EDX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0053c628: CMP EDX,0x141
// 0053c62e: JL 0x0053c656
//   XREF to: 0053c656 (CONDITIONAL_JUMP)
// 0053c630: CMP EBX,EDX
// 0053c632: JL 0x0053c656
//   XREF to: 0053c656 (CONDITIONAL_JUMP)
// 0053c634: MOV EBX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0053c63a: TEST EBX,EBX
// 0053c63c: JL 0x0053c656
//   XREF to: 0053c656 (CONDITIONAL_JUMP)
// 0053c63e: CMP EBX,EBP
// 0053c640: JG 0x0053c656
//   XREF to: 0053c656 (CONDITIONAL_JUMP)
// 0053c642: PUSH EBX
// 0053c643: PUSH EDX
// 0053c644: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c649: CALL core_actor.cpp_CActorPropertyList_FUN_0040e9c0
//   XREF to: 0040e9c0 (UNCONDITIONAL_CALL)
// 0053c64e: ADD ESP,0xc
// 0053c651: MOV [0x02f7c528],EAX
//   XREF to: 02f7c528 (WRITE)
// 0053c656: MOV EBX,dword ptr [0x02f7c528]
//   Label: LAB_0053c656
//   XREF to: 02f7c528 (READ)
// 0053c65c: PUSH EBX
// 0053c65d: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 0053c662: CALL core_actor.cpp_CActorPropertyList_FUN_0040e850
//   XREF to: 0040e850 (UNCONDITIONAL_CALL)
// 0053c667: ADD ESP,0x8
// 0053c66a: CALL engine_matrix.c_popViewport_FUN_0050e480
//   XREF to: 0050e480 (UNCONDITIONAL_CALL)
// 0053c66f: PUSH 0x2f797e4
//   XREF to: 02f797e4 (DATA)
// 0053c674: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 0053c679: ADD ESP,0x4
// 0053c67c: LEA EBX,[EBP + 0x1]
// 0053c67f: PUSH EBX
// 0053c680: PUSH EDI
// 0053c681: MOV EDI,dword ptr [ESP + 0x138]
// 0053c688: DEC EDI
// 0053c689: MOV EAX,0x7
// 0053c68e: PUSH EDI
// 0053c68f: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0053c694: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 0053c699: ADD ESP,0xc
// 0053c69c: PUSH ESI
// 0053c69d: PUSH EBX
// 0053c69e: PUSH EDI
// 0053c69f: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 0053c6a4: ADD ESP,0xc
// 0053c6a7: CALL core_msnedit.cpp_FUN_00536e20
//   XREF to: 00536e20 (UNCONDITIONAL_CALL)
// 0053c6ac: POP EDI
// 0053c6ad: ADD ESP,0x130
// 0053c6b3: POP EBP
// 0053c6b4: POP ESI
// 0053c6b5: POP EBX
// 0053c6b6: RET
// 0053c6b7: MOV DL,AH
//   Label: LAB_0053c6b7
// 0053c6b9: OR DL,0x1
// 0053c6bc: PUSH 0x2f797e4
//   XREF to: 02f797e4 (DATA)
// 0053c6c1: MOV byte ptr [0x02f79818],DL
//   XREF to: 02f79818 (WRITE)
// 0053c6c7: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 0053c6cc: ADD ESP,0x4
// 0053c6cf: PUSH 0x68064c
//   XREF to: 0068064c (DATA)
// 0053c6d4: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0053c6d9: ADD ESP,0x4
// 0053c6dc: JMP 0x0053c555
//   XREF to: 0053c555 (UNCONDITIONAL_JUMP)
// 0053c6e1: MOV EBP,dword ptr [EBX + 0x28]
//   Label: LAB_0053c6e1
// 0053c6e4: PUSH EBP
// 0053c6e5: PUSH 0x63c874
//   XREF to: 0063c874 (DATA)
// 0053c6ea: LEA EAX,[ESP + 0xc]
// 0053c6ee: PUSH EAX
// 0053c6ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053c6f4: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053c6f9: ADD ESP,0xc
// 0053c6fc: SUB EAX,0xb
// 0053c6ff: PUSH EAX
// 0053c700: PUSH EDI
// 0053c701: LEA EAX,[ESP + 0xc]
// 0053c705: PUSH EAX
// 0053c706: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053c70b: ADD ESP,0xc
// 0053c70e: PUSH 0x2f797e4
//   XREF to: 02f797e4 (DATA)
// 0053c713: CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
//   XREF to: 004a5b40 (UNCONDITIONAL_CALL)
// 0053c718: ADD ESP,0x4
// 0053c71b: CALL core_msnedit.cpp_FUN_00536e20
//   XREF to: 00536e20 (UNCONDITIONAL_CALL)
// 0053c720: POP EDI
// 0053c721: ADD ESP,0x130
// 0053c727: POP EBP
// 0053c728: POP ESI
// 0053c729: POP EBX
// 0053c72a: RET
