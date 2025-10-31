// Name: crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
// Address: 0060cd90
// Address Range: [[0060cd90, 0060cdb8]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90(_INPUT_RECORD * pInputRecord)
// Cross-references:
//   crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0 (0060b2e0) at 0060b36c [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __watcallStack crt_stdio_c_IsRelevantKeyEvent_FUN_0060cd90(_INPUT_RECORD *pInputRecord)

{
  ushort uVar1;
  
  if (((pInputRecord->EventType == 1) && ((pInputRecord->Event).KeyEvent.bKeyDown != 0)) &&
     ((uVar1 = (pInputRecord->Event).KeyEvent.wVirtualKeyCode, uVar1 < 0x10 || (0x12 < uVar1)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 0060cd90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
//   XREF to: Stack[0x4] (READ)
// 0060cd94: CMP word ptr [EAX],0x1
// 0060cd98: JNZ 0x0060cdb6
//   XREF to: 0060cdb6 (CONDITIONAL_JUMP)
// 0060cd9a: CMP dword ptr [EAX + 0x4],0x0
// 0060cd9e: JZ 0x0060cdb6
//   XREF to: 0060cdb6 (CONDITIONAL_JUMP)
// 0060cda0: MOV AX,word ptr [EAX + 0xa]
// 0060cda4: CMP AX,0x10
// 0060cda8: JC 0x0060cdb0
//   XREF to: 0060cdb0 (CONDITIONAL_JUMP)
// 0060cdaa: CMP AX,0x12
// 0060cdae: JBE 0x0060cdb6
//   XREF to: 0060cdb6 (CONDITIONAL_JUMP)
// 0060cdb0: MOV EAX,0x1
//   Label: LAB_0060cdb0
// 0060cdb5: RET
// 0060cdb6: XOR EAX,EAX
//   Label: LAB_0060cdb6
// 0060cdb8: RET
