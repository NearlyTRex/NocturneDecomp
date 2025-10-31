// Name: crt_unknown.c_CallReturnZero6_FUN_0060e880
// Address: 0060e880
// Address Range: [[0060e880, 0060e88e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_CallReturnZero6_FUN_0060e880()
// Cross-references:
//   crt_tls.c_register_thread_data_FUN_0060cbd0 (0060cbd0) at 0060cbf4 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_unk_ReturnZero6_FUN_0060e850_0068559c = 0060e850
// Function calls:
//   crt_unknown.c_ReturnZero6_FUN_0060e850

#include "nocturne.h"

/* Signature: undefined1 unk_CallReturnZero6(undefined4 param_1) */

void crt_unknown_c_CallReturnZero6_FUN_0060e880(void)

{
  (*(code *)PTR_unk_ReturnZero6_FUN_0060e850_0068559c)();
  return;
}


// Assembly code:
// 0060e880: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_unknown.c_CallReturnZero6_FUN_0060e880
//   XREF to: Stack[0x4] (READ)
// 0060e884: PUSH EDX
// 0060e885: CALL dword ptr [PTR_unk_ReturnZero6_FUN_0060e850_0068559c]
//   XREF to: 0060e850 (COMPUTED_CALL)
//   XREF to: 0068559c (READ)
// 0060e88b: ADD ESP,0x4
// 0060e88e: RET
