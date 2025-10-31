// Name: crt_process.c_getpid_FUN_006099c0
// Address: 006099c0
// Address Range: [[006099c0, 006099c7]]
// Convention: __cdecl
// Signature: undefined crt_process.c_getpid_FUN_006099c0(void)
// Cross-references:
//   crt_io.c_generateTempFilename_FUN_00601f1c (00601f1c) at 00601f24 [UNCONDITIONAL_CALL]
// Globals:
//   GetCurrentProcessId* PTR_GetCurrentProcessId_00611580 = 00211e6e
// Function calls:
//   GetCurrentProcessId

#include "nocturne.h"

void __cdecl crt_process_c_getpid_FUN_006099c0(void)

{
  (*PTR_GetCurrentProcessId_00611580)();
  return;
}


// Assembly code:
// 006099c0: CALL dword ptr CS:[0x611580]
//   Label: crt_process.c_getpid_FUN_006099c0
//   XREF to: EXTERNAL:0000006b (COMPUTED_CALL)
//   XREF to: 00611580 (READ)
// 006099c7: RET
