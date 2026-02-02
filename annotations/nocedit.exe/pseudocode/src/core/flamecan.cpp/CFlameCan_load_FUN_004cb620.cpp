// Name: core_flamecan.cpp_CFlameCan_load_FUN_004cb620
// Address: 004cb620
// Address Range: [[004cb620, 004cb67f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_load_FUN_004cb620(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_CFlameCan_load(CFlameCan* pFlameCan) */

void __cdecl core_flamecan_cpp_CFlameCan_load_FUN_004cb620(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"onFire");
  core_actor_cpp_archiveFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"timeToExplode");
  core_actor_cpp_archiveString_FUN_0040b5c0
            ((char *)&in_stack_00000004[2].location.area_id,"onFireCondition");
  return;
}
