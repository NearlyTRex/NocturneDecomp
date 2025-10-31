// Name: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
// Address: 00608390
// Address Range: [[00608390, 006083fb]]
// Convention: __cdecl
// Signature: int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060effc [UNCONDITIONAL_CALL]
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc (006083fc) at 00608404 [UNCONDITIONAL_CALL]
//   crt_io.c_check_file_access_FUN_0060c9f0 (0060c9f0) at 0060ca12 [UNCONDITIONAL_CALL]
//   crt_io.c_findFirstFileWrapper_FUN_006021f0 (006021f0) at 00602233 [UNCONDITIONAL_CALL]
//   crt_io.c_findNextFileWrapper_FUN_00602300 (00602300) at 00602344 [UNCONDITIONAL_CALL]
//   crt_process.c_spawn_FUN_006105a0 (006105a0) at 00610634 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fca0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_LookupTableStruct
//   undefined4 DAT_00685210
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_errno.c_SetWindowsError_FUN_006027c8

#include "nocturne.h"

int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)

{
  int error_code;
  
  crt_errno_c_SetWindowsError_FUN_006027c8(windows_error);
  if (windows_error == SYSTEM_ERROR_INVALID_NAME) {
    error_code = SYSTEM_EPERM;
  }
  else {
    if (windows_error == SYSTEM_ERROR_FILENAME_EXCED_RANGE) {
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_EBADF);
      return -1;
    }
    if (windows_error == SYSTEM_ERROR_ALREADY_EXISTS) {
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_E2BIG);
      return -1;
    }
    if (0x13 < windows_error) {
      windows_error = 0x13;
    }
    error_code = *(int *)(&g_LookupTableStruct + windows_error) >> 0x18;
  }
  crt_errno_c_setErrno_FUN_00602790(error_code);
  return -1;
}


// Assembly code:
// 00608390: PUSH EBX
//   Label: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
// 00608391: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00608395: PUSH EBX
// 00608396: CALL crt_errno.c_SetWindowsError_FUN_006027c8
//   XREF to: 006027c8 (UNCONDITIONAL_CALL)
// 0060839b: ADD ESP,0x4
// 0060839e: CMP EBX,0x7b
// 006083a1: JNZ 0x006083a7
//   XREF to: 006083a7 (CONDITIONAL_JUMP)
// 006083a3: PUSH 0x1
// 006083a5: JMP 0x006083ed
//   XREF to: 006083ed (UNCONDITIONAL_JUMP)
// 006083a7: CMP EBX,0xce
//   Label: LAB_006083a7
// 006083ad: JNZ 0x006083c0
//   XREF to: 006083c0 (CONDITIONAL_JUMP)
// 006083af: PUSH 0x9
// 006083b1: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006083b6: ADD ESP,0x4
// 006083b9: MOV EAX,0xffffffff
// 006083be: POP EBX
// 006083bf: RET
// 006083c0: CMP EBX,0xb7
//   Label: LAB_006083c0
// 006083c6: JNZ 0x006083d9
//   XREF to: 006083d9 (CONDITIONAL_JUMP)
// 006083c8: PUSH 0x7
// 006083ca: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006083cf: ADD ESP,0x4
// 006083d2: MOV EAX,0xffffffff
// 006083d7: POP EBX
// 006083d8: RET
// 006083d9: CMP EBX,0x13
//   Label: LAB_006083d9
// 006083dc: JBE 0x006083e3
//   XREF to: 006083e3 (CONDITIONAL_JUMP)
// 006083de: MOV EBX,0x13
// 006083e3: MOV EBX,dword ptr [EBX + 0x6851fd]
//   Label: LAB_006083e3
//   XREF to: 006851fd (DATA)
//   XREF to: 00685210 (READ)
// 006083e9: SAR EBX,0x18
// 006083ec: PUSH EBX
// 006083ed: CALL crt_errno.c_setErrno_FUN_00602790
//   Label: LAB_006083ed
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006083f2: ADD ESP,0x4
// 006083f5: MOV EAX,0xffffffff
// 006083fa: POP EBX
// 006083fb: RET
