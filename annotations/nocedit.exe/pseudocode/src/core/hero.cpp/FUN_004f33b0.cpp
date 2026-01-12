// Name: core_hero.cpp_FUN_004f33b0
// Address: 004f33b0
// Address Range: [[004f33b0, 004f3576]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f33b0()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f33b0(uint param_1) */

uint core_hero_cpp_FUN_004f33b0(void)

{
  CLocation *input_world_point;
  CCharacter *this_ptr;
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  SInteractionInfo SStack_80;
  CVector3f local_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f local_3c;
  CVector3f local_30;
  int local_20;
  int local_1c;
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar2 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) != 0) {
      return 1;
    }
    input_world_point = &(in_stack_00000004->base_actor).location;
    local_1c = 0;
    for (local_20 = 0; local_20 < (int)g_CDemonSetPtr->actor_list_ptr; local_20 = local_20 + 1) {
      this_ptr = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + local_1c);
      local_60.x = (this_ptr->base_actor).location.position.x - (input_world_point->position).x;
      local_60.z = (this_ptr->base_actor).location.position.z -
                   (in_stack_00000004->base_actor).location.position.z;
      if (((ABS((this_ptr->base_actor).location.position.y -
                (in_stack_00000004->base_actor).location.position.y) <= (float)10) &&
          (local_60.y = 0.0,
          SQRT(local_60.z * local_60.z + local_60.x * local_60.x) <= (float)10)) &&
         (this_ptr != in_stack_00000004)) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_30,&local_60);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - (in_stack_00000004->base_actor).orient.bank);
        if (ABS(fVar4) <= (float)1.04719755116667) {
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&this_ptr->base_actor,&local_3c,&input_world_point->position);
          if (((pCVar3->z <= 0.0) &&
              ((*((this_ptr->base_actor).vtable)->getInteractionInfo)
                         (&this_ptr->base_actor,&SStack_80), SStack_80.can_interact != 0)) &&
             ((float)SStack_80.reference_data == 0.0)) {
            CStack_48.z = SStack_80.distance_min;
            CStack_48.x = (float)SStack_80.reference_data;
            CStack_48.y = (float)SStack_80.reference_data;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      (&this_ptr->base_actor,&CStack_54,&CStack_48);
            fVar4 = CStack_54.x - (input_world_point->position).x;
            fVar1 = CStack_54.z - (in_stack_00000004->base_actor).location.position.z;
            if ((SQRT(fVar1 * fVar1 + fVar4 * fVar4) <= (float)5) &&
               (iVar2 = (*((this_ptr->base_actor).vtable)->startInteraction)
                                  (&this_ptr->base_actor,&in_stack_00000004->base_actor), iVar2 != 0
               )) {
              *(CCharacter **)(in_stack_00000004[2].cloth_data + 0x54d0) = this_ptr;
              return 1;
            }
          }
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return 0;
}
