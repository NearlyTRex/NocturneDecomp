// Name: core_platfrm.cpp_FUN_0054e760
// Address: 0054e760
// Address Range: [[0054e760, 0054e7c8]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_FUN_0054e760(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e760(uint param_1) */

int __cdecl core_platfrm_cpp_FUN_0054e760(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  if (pCVar1[2].location.position.y == 0.0) {
    pCVar1[2].location.area_id = 0x3f800000;
    pCVar1[2].location.position.y = 1.4013e-45;
    core_platfrm_cpp_FUN_0054cab0();
    return 1;
  }
  pCVar1[2].location.area_id = 0;
  pCVar1[2].location.position.y = 0.0;
  core_platfrm_cpp_FUN_0054cab0();
  return 1;
}
