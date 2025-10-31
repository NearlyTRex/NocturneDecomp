// Name: crt_io.c_close_FUN_00609bd0
// Address: 00609bd0
// Address Range: [[00609bd0, 00609c73]]
// Convention: __cdecl
// Signature: int crt_io.c_close_FUN_00609bd0(int fd)
// Cross-references:
//   crt_io.c_close_handle_safe_FUN_0060c2e0 (0060c2e0) at 0060c30f [UNCONDITIONAL_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 0060203e [UNCONDITIONAL_CALL]
// Globals:
//   CloseHandle* CloseHandle = 00211c38
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc = 00000000
//   SPECIAL_DEVICE_CLOSE_FUNC* g_SpecialDeviceCloseFunc = 00000000
// Function calls:
//   CloseHandle
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_setFileDescriptorFlags_FUN_00608908

#include "nocturne.h"

int __cdecl crt_io_c_close_FUN_00609bd0(int fd)

{
  int iVar1;
  int cleanup_result;
  BOOL BVar2;
  HANDLE in_stack_00000010;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    if ((g_SpecialDeviceCloseFunc == (SPECIAL_DEVICE_CLOSE_FUNC *)0x0) ||
       (cleanup_result = (*g_IsSpecialDeviceFuncPtr)(fd), cleanup_result == 0)) {
      BVar2 = (*CloseHandle)(in_stack_00000010);
      if (BVar2 == 0) {
        crt_errno_c_setErrno_FUN_00602790(4);
        return -1;
      }
    }
    else {
      (*g_SpecialDeviceCleanupFunc)(fd);
      (*g_SpecialDeviceCloseFunc)(cleanup_result);
    }
    crt_io_c_setFileDescriptorFlags_FUN_00608908(fd,0);
  }
  return iVar1;
}


// Assembly code:
// 00609bd0: PUSH EBX
//   Label: crt_io.c_close_FUN_00609bd0
// 00609bd1: PUSH ESI
// 00609bd2: PUSH EDI
// 00609bd3: PUSH EBP
// 00609bd4: SUB ESP,0x4
// 00609bd7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00609bdb: TEST EBX,EBX
// 00609bdd: JL 0x00609be7
//   XREF to: 00609be7 (CONDITIONAL_JUMP)
// 00609bdf: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 00609be5: JBE 0x00609bfb
//   XREF to: 00609bfb (CONDITIONAL_JUMP)
// 00609be7: PUSH 0x4
//   Label: LAB_00609be7
// 00609be9: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00609bee: MOV EAX,0xffffffff
// 00609bf3: ADD ESP,0x4
// 00609bf6: JMP 0x00609c6c
//   XREF to: 00609c6c (UNCONDITIONAL_JUMP)
// 00609bfb: MOV ESI,dword ptr [0x0068526c]
//   Label: LAB_00609bfb
//   XREF to: 0068526c (READ)
// 00609c01: MOV ECX,dword ptr [0x00685290]
//   XREF to: 00685290 (READ)
// 00609c07: XOR EBP,EBP
// 00609c09: MOV EAX,dword ptr [ESI + EBX*0x4]
// 00609c0c: XOR EDI,EDI
// 00609c0e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00609c11: TEST ECX,ECX
// 00609c13: JZ 0x00609c3b
//   XREF to: 00609c3b (CONDITIONAL_JUMP)
// 00609c15: PUSH EBX
// 00609c16: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 00609c1c: MOV ESI,EAX
// 00609c1e: ADD ESP,0x4
// 00609c21: TEST EAX,EAX
// 00609c23: JZ 0x00609c3b
//   XREF to: 00609c3b (CONDITIONAL_JUMP)
// 00609c25: PUSH EBX
// 00609c26: CALL dword ptr [g_SpecialDeviceCleanupFunc]
//   XREF to: 00685288 (READ)
// 00609c2c: ADD ESP,0x4
// 00609c2f: PUSH ESI
// 00609c30: CALL dword ptr [g_SpecialDeviceCloseFunc]
//   XREF to: 00685290 (READ)
// 00609c36: ADD ESP,0x4
// 00609c39: JMP 0x00609c5f
//   XREF to: 00609c5f (UNCONDITIONAL_JUMP)
// 00609c3b: TEST EBP,EBP
//   Label: LAB_00609c3b
// 00609c3d: JNZ 0x00609c5f
//   XREF to: 00609c5f (CONDITIONAL_JUMP)
// 00609c3f: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00609c42: PUSH ESI
// 00609c43: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 00609c4a: TEST EAX,EAX
// 00609c4c: JNZ 0x00609c5f
//   XREF to: 00609c5f (CONDITIONAL_JUMP)
// 00609c4e: PUSH 0x4
// 00609c50: MOV EDI,0xffffffff
// 00609c55: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00609c5a: ADD ESP,0x4
// 00609c5d: JMP 0x00609c6a
//   XREF to: 00609c6a (UNCONDITIONAL_JUMP)
// 00609c5f: PUSH 0x0
//   Label: LAB_00609c5f
// 00609c61: PUSH EBX
// 00609c62: CALL crt_io.c_setFileDescriptorFlags_FUN_00608908
//   XREF to: 00608908 (UNCONDITIONAL_CALL)
// 00609c67: ADD ESP,0x8
// 00609c6a: MOV EAX,EDI
//   Label: LAB_00609c6a
// 00609c6c: ADD ESP,0x4
//   Label: LAB_00609c6c
// 00609c6f: POP EBP
// 00609c70: POP EDI
// 00609c71: POP ESI
// 00609c72: POP EBX
// 00609c73: RET
