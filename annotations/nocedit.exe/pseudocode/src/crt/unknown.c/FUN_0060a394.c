// Name: crt_unknown.c_FUN_0060a394
// Address: 0060a394
// Address Range: [[0060a394, 0060a3b1]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060a394()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_0060a4cc (0060a4cc) at 0060a552 [UNCONDITIONAL_CALL]
// Globals:
//   TlsFree* PTR_TlsFree_00611650 = 00212254
//   DWORD g_TLSIndex = 0xffffffff
// Function calls:
//   TlsFree

#include "nocturne.h"

void crt_unknown_c_FUN_0060a394(void)

{
  if (g_TLSIndex != 0xffffffff) {
    (*PTR_TlsFree_00611650)(g_TLSIndex);
    g_TLSIndex = 0xffffffff;
  }
  return;
}


// Assembly code:
// 0060a394: MOV EDX,dword ptr [0x00684ee0]
//   Label: crt_unknown.c_FUN_0060a394
//   XREF to: 00684ee0 (READ)
// 0060a39a: CMP EDX,-0x1
// 0060a39d: JZ 0x0060a3b1
//   XREF to: 0060a3b1 (CONDITIONAL_JUMP)
// 0060a39f: PUSH EDX
// 0060a3a0: CALL dword ptr CS:[0x611650]
//   XREF to: EXTERNAL:0000009f (COMPUTED_CALL)
//   XREF to: 00611650 (READ)
// 0060a3a7: MOV dword ptr [0x00684ee0],0xffffffff
//   XREF to: 00684ee0 (WRITE)
// 0060a3b1: RET
//   Label: LAB_0060a3b1
