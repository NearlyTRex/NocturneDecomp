// Name: core_ammobox.cpp_staticInit_FUN_00411530
// Address: 00411530
// Address Range: [[00411530, 00411553]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ammobox.cpp_staticInit_FUN_00411530(void)
// Globals:
//   TerminatedCString s_CAmmoBox_00614ba3
//   undefined4 g_CAmmoBoxClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CAmmoBoxClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_ammobox_cpp_staticInit_FUN_00411530(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CAmmoBoxClassInfo,"CAmmoBox",
                      core_ammobox_cpp_constructor_FUN_00411560,&g_CAmmoBoxClassVersion,4,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00411530: PUSH 0x821ff8
//   Label: core_ammobox.cpp_staticInit_FUN_00411530
//   XREF to: 00821ff8 (DATA)
// 00411535: PUSH 0x4
// 00411537: PUSH 0x66e3d4
//   XREF to: 0066e3d4 (DATA)
// 0041153c: PUSH 0x411560
//   XREF to: 00411560 (DATA)
// 00411541: PUSH 0x614ba3
//   XREF to: 00614ba3 (DATA)
// 00411546: PUSH 0x8223a8
//   XREF to: 008223a8 (DATA)
// 0041154b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00411550: ADD ESP,0x18
// 00411553: RET
