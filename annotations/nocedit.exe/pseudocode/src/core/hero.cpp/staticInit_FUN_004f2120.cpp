// Name: core_hero.cpp_staticInit_FUN_004f2120
// Address: 004f2120
// Address Range: [[004f2120, 004f2163]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hero.cpp_staticInit_FUN_004f2120(void)
// Globals:
//   TerminatedCString s_CHero_0062ea66
//   TerminatedCString s_CHeroPlaceholder_0062ea6c
//   int g_CHeroPlaceholderClassVersion = 0xc
//   int g_CHeroPlaceholderClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CCharacterClassInfo
//   CDemonActorType g_CHeroClassInfo
//   CDemonActorType g_CHeroPlaceholderClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_hero_cpp_staticInit_FUN_004f2120(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CHeroClassInfo,"CHero",(CDemonActorFactoryFunction *)0x0,
             &g_CHeroPlaceholderClassVersion,0xc,&g_CCharacterClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHeroPlaceholderClassInfo,"CHeroPlaceholder",
                      core_hero_cpp_FUN_004f3bc0,&g_CHeroPlaceholderClassVersion,1,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f2120: PUSH 0x823c14
//   Label: core_hero.cpp_staticInit_FUN_004f2120
//   XREF to: 00823c14 (DATA)
// 004f2125: PUSH 0xc
// 004f2127: PUSH 0x67cc1c
//   XREF to: 0067cc1c (DATA)
// 004f212c: PUSH 0x0
// 004f212e: PUSH 0x62ea66
//   XREF to: 0062ea66 (DATA)
// 004f2133: PUSH 0x2db87d4
//   XREF to: 02db87d4 (DATA)
// 004f2138: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f213d: ADD ESP,0x18
// 004f2140: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 004f2145: PUSH 0x1
// 004f2147: PUSH 0x67cc20
//   XREF to: 0067cc20 (DATA)
// 004f214c: PUSH 0x4f3bc0
//   XREF to: 004f3bc0 (DATA)
// 004f2151: PUSH 0x62ea6c
//   XREF to: 0062ea6c (DATA)
// 004f2156: PUSH 0x2db8810
//   XREF to: 02db8810 (DATA)
// 004f215b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f2160: ADD ESP,0x18
// 004f2163: RET
