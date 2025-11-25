// Name: shape_design.c_displayHeapStatus_FUN_0046e760
// Address: 0046e760
// Address Range: [[0046e760, 0046e7d6] [0046e7e8, 0046e800]]
// Convention: __cdecl
// Signature: void shape_design.c_displayHeapStatus_FUN_0046e760(int line_number)
// Globals:
//   void* switchdataD_0046e7d8 = 0046e779
//   TerminatedCString s_OK_heap_is_good_0061ded0
//   TerminatedCString s_OK_heap_is_empty_0061dee2
//   TerminatedCString s_ERROR_heap_is_damaged_0061def5
//   TerminatedCString s_ERROR_bad_node_in_heap_0061df0d
// Function calls:
//   crt_watcom.c_heapchk_FUN_00600ad0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl shape_design_c_displayHeapStatus_FUN_0046e760(int line_number)

{
  undefined4 uVar1;
  
  uVar1 = crt_watcom_c_heapchk_FUN_00600ad0();
  switch(uVar1) {
  case 0:
    engine_2d_c_drawText_FUN_00401fd0("OK - heap is good",0,line_number * 0xb);
    break;
  case 1:
    engine_2d_c_drawText_FUN_00401fd0("OK - heap is empty",0,line_number * 0xb);
    break;
  case 2:
    engine_2d_c_drawText_FUN_00401fd0("ERROR - heap is damaged",0,line_number * 0xb);
    break;
  case 3:
    engine_2d_c_drawText_FUN_00401fd0("ERROR - bad node in heap",0,line_number * 0xb);
  }
  return;
}


// Assembly code:
// 0046e760: PUSH EBX
//   Label: shape_design.c_displayHeapStatus_FUN_0046e760
// 0046e761: PUSH ESI
// 0046e762: PUSH EDI
// 0046e763: PUSH EBP
// 0046e764: MOV EBP,ESP
// 0046e766: SUB ESP,0x54
// 0046e76c: CALL crt_watcom.c_heapchk_FUN_00600ad0
//   XREF to: 00600ad0 (UNCONDITIONAL_CALL)
// 0046e771: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046e774: JMP 0x0046e7e8
//   XREF to: 0046e7e8 (UNCONDITIONAL_JUMP)
// 0046e779: IMUL EAX,dword ptr [EBP + 0x14],0xb
//   Label: caseD_0
//   XREF to: Stack[0x4] (READ)
// 0046e77d: PUSH EAX
// 0046e77e: PUSH 0x0
// 0046e780: MOV EAX,0x61ded0
//   XREF to: 0061ded0 (PARAM)
// 0046e785: PUSH EAX
//   XREF to: 0061ded0 (DATA)
// 0046e786: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e78b: ADD ESP,0xc
// 0046e78e: JMP 0x0046e7fa
//   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)
// 0046e790: IMUL EAX,dword ptr [EBP + 0x14],0xb
//   Label: caseD_1
//   XREF to: Stack[0x4] (READ)
// 0046e794: PUSH EAX
// 0046e795: PUSH 0x0
// 0046e797: MOV EAX,0x61dee2
//   XREF to: 0061dee2 (PARAM)
// 0046e79c: PUSH EAX
//   XREF to: 0061dee2 (DATA)
// 0046e79d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e7a2: ADD ESP,0xc
// 0046e7a5: JMP 0x0046e7fa
//   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)
// 0046e7a7: IMUL EAX,dword ptr [EBP + 0x14],0xb
//   Label: caseD_2
//   XREF to: Stack[0x4] (READ)
// 0046e7ab: PUSH EAX
// 0046e7ac: PUSH 0x0
// 0046e7ae: MOV EAX,0x61def5
//   XREF to: 0061def5 (PARAM)
// 0046e7b3: PUSH EAX
//   XREF to: 0061def5 (DATA)
// 0046e7b4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e7b9: ADD ESP,0xc
// 0046e7bc: JMP 0x0046e7fa
//   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)
// 0046e7be: IMUL EAX,dword ptr [EBP + 0x14],0xb
//   Label: caseD_3
//   XREF to: Stack[0x4] (READ)
// 0046e7c2: PUSH EAX
// 0046e7c3: PUSH 0x0
// 0046e7c5: MOV EAX,0x61df0d
//   XREF to: 0061df0d (PARAM)
// 0046e7ca: PUSH EAX
//   XREF to: 0061df0d (DATA)
// 0046e7cb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0046e7d0: ADD ESP,0xc
// 0046e7d3: JMP 0x0046e7fa
//   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)
// 0046e7d5: JMP 0x0046e7fa
//   Label: LAB_0046e7d5
//   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)
// 0046e7e8: CMP dword ptr [EBP + -0x4],0x3
//   Label: LAB_0046e7e8
//   XREF to: Stack[-0x14] (READ)
// 0046e7ec: JA 0x0046e7d5
//   XREF to: 0046e7d5 (CONDITIONAL_JUMP)
// 0046e7ee: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e7f1: SHL EAX,0x2
// 0046e7f4: JMP dword ptr [EAX + 0x46e7d8]
//   Label: switchD
//   XREF to: 0046e779 (COMPUTED_JUMP)
//   XREF to: 0046e790 (COMPUTED_JUMP)
//   XREF to: 0046e7a7 (COMPUTED_JUMP)
//   XREF to: 0046e7be (COMPUTED_JUMP)
//   XREF to: 0046e7d8 (DATA)
// 0046e7fa: MOV ESP,EBP
//   Label: default
// 0046e7fc: POP EBP
// 0046e7fd: POP EDI
// 0046e7fe: POP ESI
// 0046e7ff: POP EBX
// 0046e800: RET
