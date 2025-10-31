// Name: crt_unknown.c_staticInit_FUN_0060d214
// Address: 0060d214
// Address Range: [[0060d214, 0060d22c]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_0060d214()
// Globals:
//   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24 = 00602458
//   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f28 = 00602458

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_0060d214(void)

{
  PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f24 = crt_unknown_c_FUN_0060d1a8;
  PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f28 = crt_unknown_c_FUN_0060d1ec;
  return;
}


// Assembly code:
// 0060d214: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_0060d214
// 0060d215: MOV EDX,0x60d1a8
//   XREF to: 0060d1a8 (DATA)
// 0060d21a: MOV EBX,0x60d1ec
//   XREF to: 0060d1ec (DATA)
// 0060d21f: MOV dword ptr [0x00684f24],EDX
//   XREF to: 00684f24 (WRITE)
// 0060d225: MOV dword ptr [0x00684f28],EBX
//   XREF to: 00684f28 (WRITE)
// 0060d22b: POP EBX
// 0060d22c: RET
