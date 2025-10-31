// Name: core_boxactor.cpp_staticInit_FUN_00421650
// Address: 00421650
// Address Range: [[00421650, 004216b7]]
// Convention: __cdecl
// Signature: CDemonActorType * core_boxactor.cpp_staticInit_FUN_00421650(void)
// Globals:
//   TerminatedCString s_CBoxActor_006165ff
//   TerminatedCString s_CLightActor_00616609
//   WatcomTypeInfo g_CDemonFilterTypeInfo
//   WatcomStaticDestructorNode DAT_0066e5cc
//   int g_CBoxActorClassVersion = 0xf
//   int g_CLightActorClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CBoxActorClassInfo
//   CDemonFilter[8] CDemonFilter_ARRAY_008229ec
//   CDemonActorType g_CLightActorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

CDemonActorType * __cdecl core_boxactor_cpp_staticInit_FUN_00421650(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBoxActorClassInfo,"CBoxActor",core_boxactor_cpp_FUN_004216c0,
             &g_CBoxActorClassVersion,0xf,&g_CDemonActorClassInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (CDemonFilter_ARRAY_008229ec,8,&g_CDemonFilterTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0066e5cc);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLightActorClassInfo,"CLightActor",core_boxactor_cpp_FUN_00422950,
                      &g_CLightActorClassVersion,2,&g_CBoxActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00421650: PUSH 0x821ff8
//   Label: core_boxactor.cpp_staticInit_FUN_00421650
//   XREF to: 00821ff8 (DATA)
// 00421655: PUSH 0xf
// 00421657: PUSH 0x66e604
//   XREF to: 0066e604 (DATA)
// 0042165c: PUSH 0x4216c0
//   XREF to: 004216c0 (DATA)
// 00421661: PUSH 0x6165ff
//   XREF to: 006165ff (DATA)
// 00421666: PUSH 0x8229b0
//   XREF to: 008229b0 (DATA)
// 0042166b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00421670: ADD ESP,0x18
// 00421673: PUSH 0x65b390
//   XREF to: 0065b390 (DATA)
// 00421678: PUSH 0x8
// 0042167a: PUSH 0x8229ec
//   XREF to: 008229ec (DATA)
// 0042167f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00421684: ADD ESP,0xc
// 00421687: PUSH 0x66e5cc
//   XREF to: 0066e5cc (DATA)
// 0042168c: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00421691: ADD ESP,0x4
// 00421694: PUSH 0x8229b0
//   XREF to: 008229b0 (DATA)
// 00421699: PUSH 0x2
// 0042169b: PUSH 0x66e608
//   XREF to: 0066e608 (DATA)
// 004216a0: PUSH 0x422950
//   XREF to: 00422950 (DATA)
// 004216a5: PUSH 0x616609
//   XREF to: 00616609 (DATA)
// 004216aa: PUSH 0x822c4c
//   XREF to: 00822c4c (DATA)
// 004216af: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004216b4: ADD ESP,0x18
// 004216b7: RET
