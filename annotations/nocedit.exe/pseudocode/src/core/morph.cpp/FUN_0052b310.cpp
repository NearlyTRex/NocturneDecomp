// Name: core_morph.cpp_FUN_0052b310
// Address: 0052b310
// Address Range: [[0052b310, 0052b32e]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b310()
// Cross-references:
//   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 (004185c0) at 004185e4 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005078e1 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f1d0 (0051f1d0) at 0051f1f3 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 (00528b30) at 00528b54 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_ctor_FUN_00545b30 (00545b30) at 00545b4b [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 (005c6a80) at 005c6ab2 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 (005e5590) at 005e55dc [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CMorphModelTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void core_morph_cpp_FUN_0052b310(void)

{
  void *pvVar1;
  void *in_stack_00000004;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (in_stack_00000004,2,&g_CMorphModelTypeInfo);
  *(undefined4 *)((int)pvVar1 + 0xc28) = 1;
  return;
}


// Assembly code:
// 0052b310: PUSH 0x661b60
//   Label: core_morph.cpp_FUN_0052b310
//   XREF to: 00661b60 (DATA)
// 0052b315: PUSH 0x2
// 0052b317: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052b31b: PUSH EDX
// 0052b31c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0052b321: ADD ESP,0xc
// 0052b324: MOV dword ptr [EAX + 0xc28],0x1
// 0052b32e: RET
