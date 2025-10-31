// Name: core_minecar.cpp_staticInit_FUN_00520e20
// Address: 00520e20
// Address Range: [[00520e20, 00520e43]]
// Convention: __cdecl
// Signature: CDemonActorType * core_minecar.cpp_staticInit_FUN_00520e20(void)
// Globals:
//   TerminatedCString s_CMineCar_00638958
//   int g_CMineCarClassVersion = 0x1
//   CDemonActorType g_CMineCarClassInfo
//   CDemonActorType g_CPlatformClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_minecar_cpp_staticInit_FUN_00520e20(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMineCarClassInfo,"CMineCar",core_minecar_cpp_FUN_00520e50,
                      &g_CMineCarClassVersion,1,&g_CPlatformClassInfo);
  return pCVar1;
}


// Assembly code:
// 00520e20: PUSH 0x30d5054
//   Label: core_minecar.cpp_staticInit_FUN_00520e20
//   XREF to: 030d5054 (DATA)
// 00520e25: PUSH 0x1
// 00520e27: PUSH 0x67d524
//   XREF to: 0067d524 (DATA)
// 00520e2c: PUSH 0x520e50
//   XREF to: 00520e50 (DATA)
// 00520e31: PUSH 0x638958
//   XREF to: 00638958 (DATA)
// 00520e36: PUSH 0x2f333c8
//   XREF to: 02f333c8 (DATA)
// 00520e3b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00520e40: ADD ESP,0x18
// 00520e43: RET
