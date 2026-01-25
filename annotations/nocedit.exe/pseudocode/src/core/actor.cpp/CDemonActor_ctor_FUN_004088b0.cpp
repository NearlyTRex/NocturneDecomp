// Name: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
// Address: 004088b0
// Address Range: [[004088b0, 00408a23]]
// Convention: __cdecl
// Signature: CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr)

{
  CVector3f *this_ptr_00;
  char cVar1;
  CDemonActorTransformState *pCVar2;
  char *pcVar3;
  float *pfVar4;
  
  pCVar2 = core_actor_cpp_initTransformCache_FUN_00408870(&this_ptr->previous_transform_state);
  this_ptr_00 = &pCVar2[-0xb].orientation;
  pCVar2[1].orientation.y = (float)&g_CDemonActorVTable;
  *(byte *)&this_ptr_00->x = 0;
  pCVar2[1].position.z = 0.0;
  pCVar2[1].orientation.x = 0.0;
  pCVar2[-10].dirty_flags = 0;
  pCVar2[-10].orientation.z = (float)pCVar2[-10].dirty_flags;
  pCVar2[-10].orientation.y = pCVar2[-10].orientation.z;
  pCVar2[-9].position.x = 0.0;
  pcVar3 = "none";
  pCVar2[-9].orientation.x = 0.0;
  pCVar2[-9].position.z = pCVar2[-9].orientation.x;
  pCVar2[-9].position.y = pCVar2[-9].position.z;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr_00);
  pfVar4 = &pCVar2[-7].orientation.z;
  pCVar2[-7].orientation.y = 1.0;
  do {
    cVar1 = *pcVar3;
    *(char *)pfVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pfVar4 + 1) = cVar1;
    pfVar4 = (float *)((int)pfVar4 + 2);
  } while (cVar1 != '\0');
  pCVar2[-7].orientation.x = 0.0;
  pCVar2[-3].position.z = 0.0;
  pCVar2[-3].orientation.z = 0.0;
  pCVar2[-3].orientation.y = pCVar2[-3].orientation.z;
  pCVar2[-3].orientation.x = pCVar2[-3].orientation.y;
  pCVar2[-2].position.y = 0.0;
  pCVar2[-2].position.x = pCVar2[-2].position.y;
  pCVar2[-3].dirty_flags = (int)pCVar2[-2].position.x;
  pCVar2[-2].dirty_flags = 0x10000;
  pCVar2[-1].position.x = 9.18355e-41;
  pCVar2[-1].position.y = 9.18355e-41;
  pCVar2[-2].position.z = 1.4013e-45;
  pCVar2[-2].orientation.x = 0.0;
  pCVar2[-1].position.z = 0.0;
  pCVar2[-2].orientation.y = 0.0;
  pCVar2[-2].orientation.z = 0.0;
  pCVar2[-7].position.x = 1.4013e-43;
  pcVar3 = "str";
  pCVar2[1].position.y = 0.0;
  pfVar4 = &pCVar2[-1].orientation.y;
  pCVar2[-7].position.y = (float)&g_ActorMagicNumber;
  do {
    cVar1 = *pcVar3;
    *(char *)pfVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CDemonActor *)this_ptr_00;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pfVar4 + 1) = cVar1;
    pfVar4 = (float *)((int)pfVar4 + 2);
  } while (cVar1 != '\0');
  return (CDemonActor *)this_ptr_00;
}
