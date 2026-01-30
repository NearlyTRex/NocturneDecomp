// Name: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
// Address: 004088b0
// Address Range: [[004088b0, 00408a23]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr)

{
  CDemonActor *this_ptr_00;
  char cVar1;
  CDemonActor_ptr_296 pCVar2;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_initTransformCache_FUN_00408870(&this_ptr->previous_transform_state);
  this_ptr_00 = ADJ(pCVar2);
  (ADJ(pCVar2)->vtable)._ub = &g_CDemonActorVTable;
  this_ptr_00->actor_name[0] = '\0';
  ADJ(pCVar2)->next_actor = (CDemonActor *)0x0;
  ADJ(pCVar2)->unk15 = 0;
  (ADJ(pCVar2)->location).position.z = 0.0;
  (ADJ(pCVar2)->location).position.y = (ADJ(pCVar2)->location).position.z;
  (ADJ(pCVar2)->location).position.x = (ADJ(pCVar2)->location).position.y;
  (ADJ(pCVar2)->location).area_id = 0;
  pcVar2 = "none";
  (ADJ(pCVar2)->orient).heading = 0.0;
  (ADJ(pCVar2)->orient).bank = (ADJ(pCVar2)->orient).heading;
  (ADJ(pCVar2)->orient).pitch = (ADJ(pCVar2)->orient).bank;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr_00);
  pcVar3 = ADJ(pCVar2)->create_event;
  ADJ(pCVar2)->create_prob = 1.0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pCVar2)->was_created = 0;
  ADJ(pCVar2)->unk2 = 0;
  (ADJ(pCVar2)->unk3).z = 0.0;
  (ADJ(pCVar2)->unk3).y = (ADJ(pCVar2)->unk3).z;
  (ADJ(pCVar2)->unk3).x = (ADJ(pCVar2)->unk3).y;
  (ADJ(pCVar2)->unk4).z = 0.0;
  (ADJ(pCVar2)->unk4).y = (ADJ(pCVar2)->unk4).z;
  (ADJ(pCVar2)->unk4).x = (ADJ(pCVar2)->unk4).y;
  (ADJ(pCVar2)->scale).x = 0x10000;
  (ADJ(pCVar2)->scale).y = 0x10000;
  (ADJ(pCVar2)->scale).z = 0x10000;
  ADJ(pCVar2)->unk5 = 1;
  ADJ(pCVar2)->is_transparent = 0;
  ADJ(pCVar2)->unk8 = 0;
  ADJ(pCVar2)->unk6 = 0;
  ADJ(pCVar2)->unk7 = 0;
  ADJ(pCVar2)->health = 100;
  pcVar3 = "str";
  ADJ(pCVar2)->unk14 = 0;
  piVar4 = &ADJ(pCVar2)->unk10;
  ADJ(pCVar2)->validation_magic = (int)&g_ActorMagicNumber;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr_00;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  return this_ptr_00;
}
