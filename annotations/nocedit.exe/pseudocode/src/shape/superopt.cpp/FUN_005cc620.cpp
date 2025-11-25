// Name: shape_superopt.cpp_FUN_005cc620
// Address: 005cc620
// Address Range: [[005cc620, 005cc653]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cc620()
// Cross-references:
//   shape_superopt.cpp_CObj_FUN_005d2320 (005d2320) at 005d2393 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2410 (005d2410) at 005d2457 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d47b0 (005d47b0) at 005d520e [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d79a3 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_CPolyVTable = 005cc670
//   WatcomTypeInfo g_CP2DTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   shape_superopt.cpp_CPoly_FUN_005cc670

#include "nocturne.h"

CPoly * shape_superopt_cpp_FUN_005cc620(void)

{
  void *pvVar1;
  int in_stack_00000004;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)(in_stack_00000004 + 0x10),3,&g_CP2DTypeInfo);
  *(void ***)((int)pvVar1 + 0x54) = &g_CPolyVTable;
  shape_superopt_cpp_CPoly_FUN_005cc670((CPoly *)((int)pvVar1 + -0x10));
  return (CPoly *)((int)pvVar1 + -0x10);
}


// Assembly code:
// 005cc620: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005cc620
// 005cc621: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005cc625: PUSH 0x663ca0
//   XREF to: 00663ca0 (DATA)
// 005cc62a: PUSH 0x3
// 005cc62c: ADD EBX,0x10
// 005cc62f: PUSH EBX
// 005cc630: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005cc635: ADD ESP,0xc
// 005cc638: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005cc63c: PUSH EDX
// 005cc63d: LEA EBX,[EAX + -0x10]
// 005cc640: PUSH EBX
// 005cc641: MOV dword ptr [EBX + 0x64],0x663ad4
//   XREF to: 00663ad4 (DATA)
// 005cc648: CALL shape_superopt.cpp_CPoly_FUN_005cc670
//   XREF to: 005cc670 (UNCONDITIONAL_CALL)
// 005cc64d: ADD ESP,0x8
// 005cc650: MOV EAX,EBX
// 005cc652: POP EBX
// 005cc653: RET
