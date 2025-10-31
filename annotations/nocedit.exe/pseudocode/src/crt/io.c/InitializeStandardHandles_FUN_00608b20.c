// Name: crt_io.c_InitializeStandardHandles_FUN_00608b20
// Address: 00608b20
// Address Range: [[00608b20, 00608b86]]
// Convention: __cdecl
// Signature: int crt_io.c_InitializeStandardHandles_FUN_00608b20(void)
// Cross-references:
//   crt_startup.c_initialize_runtime_FUN_0060245c (0060245c) at 00602491 [UNCONDITIONAL_CALL]
// Globals:
//   GetStdHandle* PTR_GetStdHandle_006115c0 = 00211fa0
// Function calls:
//   crt_io.c_CreateFallbackHandle_FUN_00608b88
//   crt_io.c_register_handle_FUN_00608990
//   GetStdHandle

#include "nocturne.h"

int __cdecl crt_io_c_InitializeStandardHandles_FUN_00608b20(void)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 uStack00000004;
  undefined4 uStack00000014;
  undefined4 uStack00000024;
  
  pvVar1 = (*PTR_GetStdHandle_006115c0)(SYSTEM_STD_ERROR_HANDLE);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    uStack00000004 = 0x608b39;
    pvVar1 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
  }
  uStack00000004 = 0x608b3f;
  crt_io_c_register_handle_FUN_00608990(pvVar1);
  pvVar1 = (*PTR_GetStdHandle_006115c0)(SYSTEM_STD_OUTPUT_HANDLE);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    uStack00000014 = 0x608b5b;
    pvVar1 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
  }
  uStack00000014 = 0x608b61;
  crt_io_c_register_handle_FUN_00608990(pvVar1);
  pvVar1 = (*PTR_GetStdHandle_006115c0)(SYSTEM_STD_INPUT_HANDLE);
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    uStack00000024 = 0x608b7d;
    pvVar1 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
  }
  uStack00000024 = 0x608b83;
  iVar2 = crt_io_c_register_handle_FUN_00608990(pvVar1);
  return iVar2;
}


// Assembly code:
// 00608b20: PUSH -0xa
//   Label: crt_io.c_InitializeStandardHandles_FUN_00608b20
// 00608b22: CALL dword ptr CS:[0x6115c0]
//   XREF to: EXTERNAL:0000007b (COMPUTED_CALL)
//   XREF to: 006115c0 (READ)
// 00608b29: MOV EDX,EAX
// 00608b2b: TEST EAX,EAX
// 00608b2d: JZ 0x00608b34
//   XREF to: 00608b34 (CONDITIONAL_JUMP)
// 00608b2f: CMP EAX,-0x1
// 00608b32: JNZ 0x00608b39
//   XREF to: 00608b39 (CONDITIONAL_JUMP)
// 00608b34: CALL crt_io.c_CreateFallbackHandle_FUN_00608b88
//   Label: LAB_00608b34
//   XREF to: 00608b88 (UNCONDITIONAL_CALL)
// 00608b39: PUSH EAX
//   Label: LAB_00608b39
// 00608b3a: CALL crt_io.c_register_handle_FUN_00608990
//   XREF to: 00608990 (UNCONDITIONAL_CALL)
// 00608b3f: ADD ESP,0x4
// 00608b42: PUSH -0xb
// 00608b44: CALL dword ptr CS:[0x6115c0]
//   XREF to: EXTERNAL:0000007b (COMPUTED_CALL)
//   XREF to: 006115c0 (READ)
// 00608b4b: MOV EDX,EAX
// 00608b4d: TEST EAX,EAX
// 00608b4f: JZ 0x00608b56
//   XREF to: 00608b56 (CONDITIONAL_JUMP)
// 00608b51: CMP EAX,-0x1
// 00608b54: JNZ 0x00608b5b
//   XREF to: 00608b5b (CONDITIONAL_JUMP)
// 00608b56: CALL crt_io.c_CreateFallbackHandle_FUN_00608b88
//   Label: LAB_00608b56
//   XREF to: 00608b88 (UNCONDITIONAL_CALL)
// 00608b5b: PUSH EAX
//   Label: LAB_00608b5b
// 00608b5c: CALL crt_io.c_register_handle_FUN_00608990
//   XREF to: 00608990 (UNCONDITIONAL_CALL)
// 00608b61: ADD ESP,0x4
// 00608b64: PUSH -0xc
// 00608b66: CALL dword ptr CS:[0x6115c0]
//   XREF to: EXTERNAL:0000007b (COMPUTED_CALL)
//   XREF to: 006115c0 (READ)
// 00608b6d: MOV EDX,EAX
// 00608b6f: TEST EAX,EAX
// 00608b71: JZ 0x00608b78
//   XREF to: 00608b78 (CONDITIONAL_JUMP)
// 00608b73: CMP EAX,-0x1
// 00608b76: JNZ 0x00608b7d
//   XREF to: 00608b7d (CONDITIONAL_JUMP)
// 00608b78: CALL crt_io.c_CreateFallbackHandle_FUN_00608b88
//   Label: LAB_00608b78
//   XREF to: 00608b88 (UNCONDITIONAL_CALL)
// 00608b7d: PUSH EAX
//   Label: LAB_00608b7d
// 00608b7e: CALL crt_io.c_register_handle_FUN_00608990
//   XREF to: 00608990 (UNCONDITIONAL_CALL)
// 00608b83: ADD ESP,0x4
// 00608b86: RET
