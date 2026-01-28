// Name: crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
// Address: 0060cd90
// Address Range: [[0060cd90, 0060cdb8]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_IsRelevantKeyEvent_FUN_0060cd90(_INPUT_RECORD *pInputRecord)

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
