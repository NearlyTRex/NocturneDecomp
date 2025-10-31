// Name: core_armour.cpp_staticInit_FUN_00412130
// Address: 00412130
// Address Range: [[00412130, 00412153]]
// Convention: __cdecl
// Signature: CDemonActorType * core_armour.cpp_staticInit_FUN_00412130(void)
// Globals:
//   TerminatedCString s_CArmour_00614da0
//   int g_CArmourClassVersion = 0x1
//   CDemonActorType g_CArmourClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_armour_cpp_staticInit_FUN_00412130(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CArmourClassInfo,"CArmour",
                      core_armour_cpp_constructor_FUN_00412160,&g_CArmourClassVersion,1,
                      &g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00412130: PUSH 0x2cf2bb8
//   Label: core_armour.cpp_staticInit_FUN_00412130
//   XREF to: 02cf2bb8 (DATA)
// 00412135: PUSH 0x1
// 00412137: PUSH 0x66e3fc
//   XREF to: 0066e3fc (DATA)
// 0041213c: PUSH 0x412160
//   XREF to: 00412160 (DATA)
// 00412141: PUSH 0x614da0
//   XREF to: 00614da0 (DATA)
// 00412146: PUSH 0x822420
//   XREF to: 00822420 (DATA)
// 0041214b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00412150: ADD ESP,0x18
// 00412153: RET
