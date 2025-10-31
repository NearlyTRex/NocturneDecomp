// Name: core_biggs.cpp_staticInit_FUN_00418550
// Address: 00418550
// Address Range: [[00418550, 00418573]]
// Convention: __cdecl
// Signature: CDemonActorType * core_biggs.cpp_staticInit_FUN_00418550(void)
// Globals:
//   TerminatedCString s_CBiggs_00615aa1
//   int g_CBiggsClassVersion = 0x1
//   CDemonActorType g_CBiggsClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_biggs_cpp_staticInit_FUN_00418550(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBiggsClassInfo,"CBiggs",core_biggs_cpp_constructor_FUN_00418580,
                      &g_CBiggsClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00418550: PUSH 0x2cf2bb8
//   Label: core_biggs.cpp_staticInit_FUN_00418550
//   XREF to: 02cf2bb8 (DATA)
// 00418555: PUSH 0x1
// 00418557: PUSH 0x66e518
//   XREF to: 0066e518 (DATA)
// 0041855c: PUSH 0x418580
//   XREF to: 00418580 (DATA)
// 00418561: PUSH 0x615aa1
//   XREF to: 00615aa1 (DATA)
// 00418566: PUSH 0x8228cc
//   XREF to: 008228cc (DATA)
// 0041856b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00418570: ADD ESP,0x18
// 00418573: RET
