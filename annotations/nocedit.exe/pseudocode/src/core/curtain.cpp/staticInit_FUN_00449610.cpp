// Name: core_curtain.cpp_staticInit_FUN_00449610
// Address: 00449610
// Address Range: [[00449610, 0044965b]]
// Convention: __cdecl
// Signature: CDemonActorType * core_curtain.cpp_staticInit_FUN_00449610(void)
// Globals:
//   TerminatedCString s_CCurtain_00619bba
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomTypeInfo g_SCollisionInfoTypeInfo
//   int g_CCurtainClassVersion = 0x6
//   CDemonActorType g_CDemonActorClassInfo
//   CVector3f[100] DAT_008879c0
//   SCollisionInfo[100] DAT_00887e70
//   CDemonActorType g_CCurtainClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CDemonActorType * __cdecl core_curtain_cpp_staticInit_FUN_00449610(void)

{
  CDemonActorType *pCVar1;
  
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_008879c0,100,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_00887e70,100,&g_SCollisionInfoTypeInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CCurtainClassInfo,"CCurtain",core_curtain_cpp_FUN_00449660,
                      &g_CCurtainClassVersion,6,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00449610: PUSH 0x6598c0
//   Label: core_curtain.cpp_staticInit_FUN_00449610
//   XREF to: 006598c0 (DATA)
// 00449615: PUSH 0x64
// 00449617: PUSH 0x8879c0
//   XREF to: 008879c0 (DATA)
// 0044961c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00449621: ADD ESP,0xc
// 00449624: PUSH 0x65c5d0
//   XREF to: 0065c5d0 (DATA)
// 00449629: PUSH 0x64
// 0044962b: PUSH 0x887e70
//   XREF to: 00887e70 (DATA)
// 00449630: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00449635: ADD ESP,0xc
// 00449638: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 0044963d: PUSH 0x6
// 0044963f: PUSH 0x66eca4
//   XREF to: 0066eca4 (DATA)
// 00449644: PUSH 0x449660
//   XREF to: 00449660 (DATA)
// 00449649: PUSH 0x619bba
//   XREF to: 00619bba (DATA)
// 0044964e: PUSH 0x888e10
//   XREF to: 00888e10 (DATA)
// 00449653: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00449658: ADD ESP,0x18
// 0044965b: RET
