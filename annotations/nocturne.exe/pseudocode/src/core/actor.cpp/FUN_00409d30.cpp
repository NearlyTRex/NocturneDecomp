// Name: core_actor.cpp_FUN_00409d30
// Address: 00409d30
// Address Range: [[00409d30, 00409e99]]
// Convention: unknown
// Signature: UOrientationVector * core_actor_cpp_FUN_00409d30(int param_1)

#include "nocturne.h"

UOrientationVector * core_actor_cpp_FUN_00409d30(int param_1)

{
  UOrientationVector *this_ptr;
  char cVar1;
  CDemonActorTransformState *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_initTransformCache_FUN_00409cf0
                     ((CDemonActorTransformState *)(param_1 + 0x128));
  this_ptr = &pCVar2[-0xb].orientation;
  pCVar2[1].position.z = (float)&PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_005992d4;
  *(byte *)this_ptr = 0;
  pCVar2[1].position.x = 0.0;
  pCVar2[1].position.y = 0.0;
  pCVar2[-10].dirty_flags = 0;
  pCVar2[-10].orientation.vec.z = (float)pCVar2[-10].dirty_flags;
  pCVar2[-10].orientation.vec.y = pCVar2[-10].orientation.vec.z;
  pCVar2[-9].position.x = 0.0;
  pcVar3 = "none";
  pCVar2[-9].orientation.vec.x = 0.0;
  pCVar2[-9].position.z = pCVar2[-9].orientation.vec.x;
  pCVar2[-9].position.y = pCVar2[-9].position.z;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)&this_ptr->vec);
  pcVar4 = (char *)((int)&pCVar2[-7].orientation + 8);
  pCVar2[-7].orientation.vec.y = 1.0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2[-7].orientation.vec.x = 0.0;
  pCVar2[-3].position.z = 0.0;
  pCVar2[-3].orientation.vec.z = 0.0;
  pCVar2[-3].orientation.vec.y = pCVar2[-3].orientation.vec.z;
  pCVar2[-3].orientation.vec.x = pCVar2[-3].orientation.vec.y;
  pCVar2[-2].position.y = 0.0;
  pCVar2[-2].position.x = pCVar2[-2].position.y;
  pCVar2[-3].dirty_flags = (int)pCVar2[-2].position.x;
  pCVar2[-2].dirty_flags = 0x10000;
  pCVar2[-1].position.x = 9.18355e-41;
  pCVar2[-1].position.y = 9.18355e-41;
  pCVar2[-2].position.z = 1.4013e-45;
  pCVar2[-2].orientation.vec.x = 0.0;
  pCVar2[-1].position.z = 0.0;
  pCVar2[-2].orientation.vec.y = 0.0;
  pCVar2[-2].orientation.vec.z = 0.0;
  pcVar3 = "str";
  pCVar2[-7].position.x = 1.4013e-43;
  pcVar4 = (char *)((int)&pCVar2[-1].orientation + 4);
  pCVar2[-7].position.y = (float)&DAT_0078a123;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return this_ptr;
}
