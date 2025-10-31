// Name: core_wateract.cpp_staticInit_FUN_005ea810
// Address: 005ea810
// Address Range: [[005ea810, 005ea85b]]
// Convention: __cdecl
// Signature: CDemonActorType * core_wateract.cpp_staticInit_FUN_005ea810(void)
// Globals:
//   TerminatedCString s_CWaterActor_00657247
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomTypeInfo g_SCollisionInfoTypeInfo
//   int g_CWaterActorVersion = 0x6
//   CDemonActorType g_CDemonActorClassInfo
//   CVector3f[100] DAT_03f8f638
//   SCollisionInfo[100] DAT_03f8fae8
//   CDemonActorType g_CWaterActorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CDemonActorType * __cdecl core_wateract_cpp_staticInit_FUN_005ea810(void)

{
  CDemonActorType *pCVar1;
  
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_03f8f638,100,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_03f8fae8,100,&g_SCollisionInfoTypeInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CWaterActorClassInfo,"CWaterActor",core_wateract_cpp_FUN_005ea860,
                      &g_CWaterActorVersion,6,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005ea810: PUSH 0x6598c0
//   Label: core_wateract.cpp_staticInit_FUN_005ea810
//   XREF to: 006598c0 (DATA)
// 005ea815: PUSH 0x64
// 005ea817: PUSH 0x3f8f638
//   XREF to: 03f8f638 (DATA)
// 005ea81c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005ea821: ADD ESP,0xc
// 005ea824: PUSH 0x65c5d0
//   XREF to: 0065c5d0 (DATA)
// 005ea829: PUSH 0x64
// 005ea82b: PUSH 0x3f8fae8
//   XREF to: 03f8fae8 (DATA)
// 005ea830: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005ea835: ADD ESP,0xc
// 005ea838: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 005ea83d: PUSH 0x6
// 005ea83f: PUSH 0x684870
//   XREF to: 00684870 (DATA)
// 005ea844: PUSH 0x5ea860
//   XREF to: 005ea860 (DATA)
// 005ea849: PUSH 0x657247
//   XREF to: 00657247 (DATA)
// 005ea84e: PUSH 0x3f93968
//   XREF to: 03f93968 (DATA)
// 005ea853: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005ea858: ADD ESP,0x18
// 005ea85b: RET
