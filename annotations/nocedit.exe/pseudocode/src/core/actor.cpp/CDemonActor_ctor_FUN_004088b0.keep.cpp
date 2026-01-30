// Name: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
// Address: 004088b0
// MANUAL RECONSTRUCTION

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr)
{
    // Initialize transform cache
    core_actor_cpp_initTransformCache_FUN_00408870(&this_ptr->previous_transform_state);

    // Set vtable
    this_ptr->vtable._ub = &g_CDemonActorVTable;

    // Initialize name
    this_ptr->actor_name[0] = '\0';

    // Initialize linked list pointers
    this_ptr->next_actor = NULL;
    this_ptr->unk15 = 0;

    // Initialize location
    this_ptr->location.position.x = 0.0f;
    this_ptr->location.position.y = 0.0f;
    this_ptr->location.position.z = 0.0f;
    this_ptr->location.area_id = 0;

    // Initialize orientation
    this_ptr->orient.heading = 0.0f;
    this_ptr->orient.bank = 0.0f;
    this_ptr->orient.pitch = 0.0f;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);

    // Initialize creation event
    strcpy(this_ptr->create_event, "none");
    this_ptr->create_prob = 1.0f;
    this_ptr->was_created = 0;

    // Initialize unknown vectors
    this_ptr->unk2 = 0;
    this_ptr->unk3.x = 0.0f;
    this_ptr->unk3.y = 0.0f;
    this_ptr->unk3.z = 0.0f;
    this_ptr->unk4.x = 0.0f;
    this_ptr->unk4.y = 0.0f;
    this_ptr->unk4.z = 0.0f;

    // Initialize scale (fixed-point 1.0 = 0x10000)
    this_ptr->scale.x = 0x10000;
    this_ptr->scale.y = 0x10000;
    this_ptr->scale.z = 0x10000;

    // Initialize flags
    this_ptr->unk5 = 1;
    this_ptr->is_transparent = 0;
    this_ptr->unk8 = 0;
    this_ptr->unk6 = 0;
    this_ptr->unk7 = 0;

    // Initialize health
    this_ptr->health = 100;

    // Initialize validation
    this_ptr->unk14 = 0;
    strcpy((char*)&this_ptr->unk10, "str");
    this_ptr->validation_magic = (uintptr_t)&g_ActorMagicNumber;

    return this_ptr;
}
