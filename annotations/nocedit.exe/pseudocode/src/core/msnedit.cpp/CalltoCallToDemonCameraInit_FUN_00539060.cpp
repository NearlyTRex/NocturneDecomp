// Name: core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
// Address: 00539060
// Address Range: [[00539060, 005390c4]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
// Cross-references:
//   core_msnedit.cpp_FUN_005374b0 (005374b0) at 005374ef [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053aa25 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_CalltoCallToDemonCameraInit(CDemonMission* param_1,
   undefined4 param_2) */

void core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x24)) {
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
    *(int *)(in_stack_00000004 + 0x24) = in_stack_00000008;
    *(undefined4 *)(in_stack_00000004 + 0x18) = 0;
    if (*(int *)(in_stack_00000004 + 0x24) == 0) {
      *(int *)(in_stack_00000004 + 0x1c) = g_WindowWidth;
      *(int *)(in_stack_00000004 + 0x20) = g_WindowHeight;
    }
    else {
      *(undefined4 *)(in_stack_00000004 + 0x20) = 0xf0;
      *(undefined4 *)(in_stack_00000004 + 0x1c) = 0x140;
    }
    core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
  }
  return;
}


// Assembly code:
// 00539060: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: Stack[0x4] (READ)
// 00539064: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00539068: CMP EDX,dword ptr [EAX + 0x24]
// 0053906b: JZ 0x005390b4
//   XREF to: 005390b4 (CONDITIONAL_JUMP)
// 0053906d: PUSH EDI
// 0053906e: PUSH ESI
// 0053906f: PUSH EBX
// 00539070: MOV dword ptr [EAX + 0x14],0x0
// 00539077: MOV dword ptr [EAX + 0x24],EDX
// 0053907a: MOV EBX,dword ptr [EAX + 0x24]
// 0053907d: MOV dword ptr [EAX + 0x18],0x0
// 00539084: TEST EBX,EBX
// 00539086: JNZ 0x005390b5
//   XREF to: 005390b5 (CONDITIONAL_JUMP)
// 00539088: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0053908e: MOV dword ptr [EAX + 0x1c],EDX
// 00539091: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00539097: MOV dword ptr [EAX + 0x20],EDX
// 0053909a: MOV ESI,dword ptr [EAX + 0x20]
//   Label: LAB_0053909a
// 0053909d: PUSH ESI
// 0053909e: PUSH 0x0
// 005390a0: PUSH 0x0
// 005390a2: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005390a8: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005390a9: CALL core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)
// 005390ae: ADD ESP,0x10
// 005390b1: POP EBX
// 005390b2: POP ESI
// 005390b3: POP EDI
// 005390b4: RET
//   Label: LAB_005390b4
// 005390b5: MOV dword ptr [EAX + 0x20],0xf0
//   Label: LAB_005390b5
// 005390bc: MOV dword ptr [EAX + 0x1c],0x140
// 005390c3: JMP 0x0053909a
//   XREF to: 0053909a (UNCONDITIONAL_JUMP)
