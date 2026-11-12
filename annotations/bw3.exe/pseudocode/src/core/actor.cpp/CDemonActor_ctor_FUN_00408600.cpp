// Name: core_actor.cpp_CDemonActor_ctor_FUN_00408600
// Address: 00408600
// Address Range: [[00408600, 00408769]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00408600(CDemonActor *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00408600(CDemonActor *this_ptr)

{
  float *this_ptr_00;
  char cVar1;
  CDemonActorTransformState *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_initTransformCache_FUN_004085c0(&this_ptr->previous_transform_state);
  this_ptr_00 = &pCVar2[-0xb].position.z;
  pCVar2[1].orientation.vec.x = (float)&g_CDemonActorVTable;
  *(byte *)this_ptr_00 = 0;
  pCVar2[1].position.y = 0.0;
  pCVar2[1].position.z = 0.0;
  pCVar2[-10].orientation.vec.z = 0.0;
  pCVar2[-10].orientation.vec.y = pCVar2[-10].orientation.vec.z;
  pCVar2[-10].orientation.vec.x = pCVar2[-10].orientation.vec.y;
  pCVar2[-10].dirty_flags = 0;
  pcVar3 = &DAT_005b53cd;
  pCVar2[-9].position.z = 0.0;
  pCVar2[-9].position.y = pCVar2[-9].position.z;
  pCVar2[-9].position.x = pCVar2[-9].position.y;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr_00);
  pcVar4 = (char *)((int)&pCVar2[-7].orientation + 4);
  pCVar2[-7].orientation.vec.x = 1.0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2[-7].position.z = 0.0;
  pCVar2[-3].position.y = 0.0;
  pCVar2[-3].orientation.vec.y = 0.0;
  pCVar2[-3].orientation.vec.x = pCVar2[-3].orientation.vec.y;
  pCVar2[-3].position.z = pCVar2[-3].orientation.vec.x;
  pCVar2[-2].position.x = 0.0;
  pCVar2[-3].dirty_flags = (int)pCVar2[-2].position.x;
  pCVar2[-3].orientation.vec.z = (float)pCVar2[-3].dirty_flags;
  pCVar2[-2].orientation.vec.z = 9.18355e-41;
  pCVar2[-2].dirty_flags = 0x10000;
  pCVar2[-1].position.x = 9.18355e-41;
  pCVar2[-2].position.y = 1.4013e-45;
  pCVar2[-2].position.z = 0.0;
  pCVar2[-1].position.y = 0.0;
  pCVar2[-2].orientation.vec.x = 0.0;
  pCVar2[-2].orientation.vec.y = 0.0;
  pcVar3 = &DAT_005b53d2;
  pCVar2[-8].dirty_flags = 100;
  pcVar4 = (char *)((int)&pCVar2[-1].orientation + 4);
  pCVar2[-7].position.x = (float)&DAT_0078a123;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CDemonActor *)this_ptr_00;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return (CDemonActor *)this_ptr_00;
}
