// Name: crt_io.c_IsSpecialDevice_FUN_0060c270
// Address: 0060c270
// Address Range: [[0060c270, 0060c2db]]
// Convention: __cdecl
// Signature: int crt_io.c_IsSpecialDevice_FUN_0060c270(int handle_index)
// Cross-references:
//   crt_io.c_getFileTypeFlags_FUN_006088b0 (006088b0) at 006088e7 [UNCONDITIONAL_CALL]
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 00609275 [UNCONDITIONAL_CALL]
//   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0 (00608ee0) at 00608eef [UNCONDITIONAL_CALL]
// Globals:
//   GetFileType* PTR_GetFileType_0061159c = 00211f00
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   SIOControlBlock* g_IOControlBlock = 00000000
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
// Function calls:
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   GetFileType

#include "nocturne.h"

int __cdecl crt_io_c_IsSpecialDevice_FUN_0060c270(int handle_index)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uStack0000000c;
  undefined4 uStack00000014;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(handle_index);
  if (g_IsSpecialDeviceFuncPtr != (IS_SPECIAL_DEVICE_FUNC *)0x0) {
    iVar1 = (*g_IsSpecialDeviceFuncPtr)(handle_index);
    if (iVar1 != 0) {
      uStack0000000c = 0x60c29e;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
      return 1;
    }
  }
  uStack0000000c = 0x60c2b8;
  DVar2 = (*PTR_GetFileType_0061159c)(g_IOControlBlock->standard_handles[handle_index]);
  if (DVar2 == 2) {
    uStack00000014 = 0x60c2c4;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
    return 1;
  }
  uStack00000014 = 0x60c2d5;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
  return 0;
}


// Assembly code:
// 0060c270: PUSH EBX
//   Label: crt_io.c_IsSpecialDevice_FUN_0060c270
// 0060c271: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060c275: PUSH EBX
// 0060c276: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060c27c: MOV EDX,dword ptr [0x00685284]
//   XREF to: 00685284 (READ)
// 0060c282: ADD ESP,0x4
// 0060c285: TEST EDX,EDX
// 0060c287: JZ 0x0060c2a8
//   XREF to: 0060c2a8 (CONDITIONAL_JUMP)
// 0060c289: PUSH EBX
// 0060c28a: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 0060c290: ADD ESP,0x4
// 0060c293: TEST EAX,EAX
// 0060c295: JZ 0x0060c2a8
//   XREF to: 0060c2a8 (CONDITIONAL_JUMP)
// 0060c297: PUSH EBX
// 0060c298: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060c29e: MOV EAX,0x1
// 0060c2a3: ADD ESP,0x4
// 0060c2a6: POP EBX
// 0060c2a7: RET
// 0060c2a8: MOV EAX,[0x0068526c]
//   Label: LAB_0060c2a8
//   XREF to: 0068526c (READ)
// 0060c2ad: MOV EAX,dword ptr [EAX + EBX*0x4]
// 0060c2b0: PUSH EAX
// 0060c2b1: CALL dword ptr CS:[0x61159c]
//   XREF to: EXTERNAL:00000072 (COMPUTED_CALL)
//   XREF to: 0061159c (READ)
// 0060c2b8: CMP EAX,0x2
// 0060c2bb: JNZ 0x0060c2ce
//   XREF to: 0060c2ce (CONDITIONAL_JUMP)
// 0060c2bd: PUSH EBX
// 0060c2be: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060c2c4: MOV EAX,0x1
// 0060c2c9: ADD ESP,0x4
// 0060c2cc: POP EBX
// 0060c2cd: RET
// 0060c2ce: PUSH EBX
//   Label: LAB_0060c2ce
// 0060c2cf: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060c2d5: ADD ESP,0x4
// 0060c2d8: XOR EAX,EAX
// 0060c2da: POP EBX
// 0060c2db: RET
