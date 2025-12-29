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
  int iStack_6c;
  float fVar5;
  byte local_30 [12];
  CVector3f CStack_24;
  int iStack_18;
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar2 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54d0) != 0) {
      return 1;
    }
    input_world_point = &(in_stack_00000004->base_actor).location;
    iStack_18 = 0;
    for (CStack_24.z = 0.0; (int)CStack_24.z < (int)g_CDemonSetPtr->actor_list_ptr;
        CStack_24.z = (float)((int)CStack_24.z + 1)) {
      this_ptr = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iStack_18);
      fVar5 = (this_ptr->base_actor).location.position.x - (input_world_point->position).x;
      fVar1 = (this_ptr->base_actor).location.position.z -
              (in_stack_00000004->base_actor).location.position.z;
      if (((ABS((this_ptr->base_actor).location.position.y -
                (in_stack_00000004->base_actor).location.position.y) <= (float)10) &&
          (SQRT(fVar1 * fVar1 + fVar5 * fVar5) <= (float)10)) &&
         (this_ptr != in_stack_00000004)) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           ((CVector3f *)(local_30 + 4),(CVector3f *)&stack0xffffffa4);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - (in_stack_00000004->base_actor).orient.bank);
        if (ABS(fVar4) <= (float)1.04719755116667) {
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (&this_ptr->base_actor,(CVector3f *)local_30,
                              &input_world_point->position);
          if ((pCVar3->z <= 0.0) &&
             ((*((this_ptr->base_actor).vtable)->getInteractionInfo)
                        (&this_ptr->base_actor,(SInteractionInfo *)&stack0xffffff90), fVar5 != 0.0))
          {
            CStack_24.x = 0.0;
            CStack_24.y = 0.0;
            iStack_6c = 0x4f3525;
            CStack_24.z = fVar1;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      (&this_ptr->base_actor,(CVector3f *)local_30,&CStack_24);
            fVar5 = (float)local_30._4_4_ - (input_world_point->position).x;
            fVar1 = CStack_24.x - (in_stack_00000004->base_actor).location.position.z;
            if ((SQRT(fVar1 * fVar1 + fVar5 * fVar5) <= (float)5) &&
               (iVar2 = (*((this_ptr->base_actor).vtable)->startInteraction)
                                  (&this_ptr->base_actor,&in_stack_00000004->base_actor), iVar2 != 0
               )) {
              *(CCharacter **)(in_stack_00000004[2].cloth_data + 0x54d0) = this_ptr;
              return 1;
            }
          }
        }
      }
      iStack_18 = iStack_18 + 4;
    }
  }
  return 0;
}
