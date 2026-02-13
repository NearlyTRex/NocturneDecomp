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
  
  pCVar2 = core_actor_cpp_initTransformCache_FUN_00408870(&this_ptr->previous_transform_state);
  this_ptr_00 = ADJ(pCVar2);
  (ADJ(pCVar2)->vtable)._ub = &g_CDemonActorVTable;
  this_ptr_00->actor_name[0] = '\0';
  ADJ(pCVar2)->next_actor = (CDemonActor *)0x0;
  ADJ(pCVar2)->prev_actor = (CDemonActor *)0x0;
  (ADJ(pCVar2)->location).position.z = 0.0;
  (ADJ(pCVar2)->location).position.y = (ADJ(pCVar2)->location).position.z;
  (ADJ(pCVar2)->location).position.x = (ADJ(pCVar2)->location).position.y;
  (ADJ(pCVar2)->location).area_id = 0;
  pcVar2 = "none";
  (ADJ(pCVar2)->orient).vec.z = 0.0;
  (ADJ(pCVar2)->orient).vec.y = (ADJ(pCVar2)->orient).vec.z;
  (ADJ(pCVar2)->orient).vec.x = (ADJ(pCVar2)->orient).vec.y;
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
  ADJ(pCVar2)->standing_platform = (CPlatform *)0x0;
  (ADJ(pCVar2)->platform_position_delta).z = 0.0;
  (ADJ(pCVar2)->platform_position_delta).y = (ADJ(pCVar2)->platform_position_delta).z;
  (ADJ(pCVar2)->platform_position_delta).x = (ADJ(pCVar2)->platform_position_delta).y;
  (ADJ(pCVar2)->platform_orientation_delta).z = 0.0;
  (ADJ(pCVar2)->platform_orientation_delta).y = (ADJ(pCVar2)->platform_orientation_delta).z;
  (ADJ(pCVar2)->platform_orientation_delta).x = (ADJ(pCVar2)->platform_orientation_delta).y;
  (ADJ(pCVar2)->scale).x = 0x10000;
  (ADJ(pCVar2)->scale).y = 0x10000;
  (ADJ(pCVar2)->scale).z = 0x10000;
  ADJ(pCVar2)->is_renderable = 1;
  ADJ(pCVar2)->is_transparent = 0;
  ADJ(pCVar2)->blood_effect_timer = 0;
  ADJ(pCVar2)->unk6 = 0;
  ADJ(pCVar2)->unk7 = 0.0;
  ADJ(pCVar2)->health = 100;
  pcVar2 = "str";
  ADJ(pCVar2)->is_editor_hidden = 0;
  pcVar3 = ADJ(pCVar2)->footstep_sound_code;
  ADJ(pCVar2)->validation_magic = (uintptr_t)&g_ActorMagicNumber;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr_00;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return this_ptr_00;
}
