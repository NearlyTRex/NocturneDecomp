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
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  CCharacter *in_stack_00000004;
  float fStack_78;
  float fStack_74;
  CVector3f local_60;
  CVector3f CStack_4c;
  byte auStack_40 [16];
  CVector3f local_30;
  int local_20;
  int local_1c;
  float local_14;
  
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar3 == 0) {
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
        pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_30,&local_60);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar4->y - (in_stack_00000004->base_actor).orient.bank);
        if ((((ABS(local_14) <= (float)1.04719755116667) &&
             (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (&this_ptr->base_actor,(CVector3f *)(auStack_40 + 4),
                                  &input_world_point->position), pCVar4->z <= 0.0)) &&
            (((*((this_ptr->base_actor).vtable)->getInteractionInfo)
                        (&this_ptr->base_actor,(SInteractionInfo *)&stack0xffffff80),
             fStack_78 != 0.0 &&
             ((fStack_74 == 0.0 &&
              (core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base_actor,&CStack_4c,(CVector3f *)auStack_40),
              fVar1 = CStack_4c.x - (input_world_point->position).x,
              fVar2 = CStack_4c.z - (in_stack_00000004->base_actor).location.position.z,
              SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)5)))))) &&
           (iVar3 = (*((this_ptr->base_actor).vtable)->startInteraction)
                              (&this_ptr->base_actor,&in_stack_00000004->base_actor), iVar3 != 0)) {
          *(CCharacter **)(in_stack_00000004[2].cloth_data + 0x54d0) = this_ptr;
          return 1;
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return 0;
}
