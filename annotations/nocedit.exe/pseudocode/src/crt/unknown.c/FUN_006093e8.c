// Name: crt_unknown.c_FUN_006093e8
// Address: 006093e8
// Address Range: [[006093e8, 0060940d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006093e8()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_00608fc0 (00608fc0) at 00608fca [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FreeListHeadPointer
// Function calls:
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

void crt_unknown_c_FUN_006093e8(void)

{
  int *piVar1;
  
  if (g_FreeListHeadPointer != (int *)0x0) {
    do {
      piVar1 = (int *)*g_FreeListHeadPointer;
      crt_memory_c_free_FUN_00601cd0(g_FreeListHeadPointer);
      g_FreeListHeadPointer = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}


// Assembly code:
// 006093e8: PUSH EBX
//   Label: crt_unknown.c_FUN_006093e8
// 006093e9: CMP dword ptr [0x03f9b204],0x0
//   XREF to: 03f9b204 (READ)
// 006093f0: JZ 0x0060940c
//   XREF to: 0060940c (CONDITIONAL_JUMP)
// 006093f2: MOV EAX,[0x03f9b204]
//   Label: LAB_006093f2
//   XREF to: 03f9b204 (READ)
// 006093f7: PUSH EAX
// 006093f8: MOV EBX,dword ptr [EAX]
// 006093fa: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 006093ff: ADD ESP,0x4
// 00609402: MOV dword ptr [0x03f9b204],EBX
//   XREF to: 03f9b204 (WRITE)
// 00609408: TEST EBX,EBX
// 0060940a: JNZ 0x006093f2
//   XREF to: 006093f2 (CONDITIONAL_JUMP)
// 0060940c: POP EBX
//   Label: LAB_0060940c
// 0060940d: RET
