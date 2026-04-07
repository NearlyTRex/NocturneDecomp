// Name: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004f33b0
// Address: 004f33b0
// MANUAL RECONSTRUCTION
// Address Range: [[004f33b0, 004f3576]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004f33b0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004f33b0(CHero *this_ptr)

{
  CLocation *input_world_point_00;
  int iVar3;
  CVector3f *pCVar4;
  float fVar3;
  CVector3f *pCVar5;
  int iVar6;
  SInteractionInfo SStack_80;
  CVector3f local_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f local_3c;
  CVector3f local_30;
  int local_20;
  int local_1c;
  float local_14;
  CDemonActor *this_ptr_00;
  CLocation *input_world_point;
  float fVar1;
  float fVar2;
  
  iVar3 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_0042d360(&this_ptr->base);
  if (iVar3 == 0) {
    if (this_ptr->nearby_interactive_actor != (CDemonActor *)0x0) {
      return 1;
    }
    input_world_point_00 = &(this_ptr->base).base.location;
    local_1c = 0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c);
      local_60.x = (this_ptr_00->location).position.x - (input_world_point_00->position).x;
      local_60.z = (this_ptr_00->location).position.z - (this_ptr->base).base.location.position.z;
      if (((ABS((this_ptr_00->location).position.y - (this_ptr->base).base.location.position.y) <=
            (float)10) &&
          (local_60.y = 0.0,
          SQRT(local_60.z * local_60.z + local_60.x * local_60.x) <= (float)10)) &&
         ((CHero *)this_ptr_00 != this_ptr)) {
        pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_30,&local_60);
        fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar4->y - (this_ptr->base).base.orient.vec.y);
        if (((ABS(fVar3) <= (float)1.04719755116667) &&
            (pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (this_ptr_00,&local_3c,&input_world_point_00->position),
            pCVar5->z <= 0.0)) &&
           (((*((this_ptr_00->vtable)._ub)->getInteractionInfo)(this_ptr_00,&SStack_80),
            SStack_80.can_interact != 0 && (SStack_80.interacting_actor == (CDemonActor *)0x0)))) {
          CStack_48.z = SStack_80.approach_offset;
          CStack_48.x = 0.0f;
          CStack_48.y = 0.0f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (this_ptr_00,&CStack_54,&CStack_48);
          fVar1 = CStack_54.x - (input_world_point_00->position).x;
          fVar2 = CStack_54.z - (this_ptr->base).base.location.position.z;
          if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)5) &&
             (iVar6 = (*((this_ptr_00->vtable)._ub)->startInteraction)
                                (this_ptr_00,(CDemonActor *)this_ptr), iVar6 != 0)) {
            this_ptr->nearby_interactive_actor = this_ptr_00;
            return 1;
          }
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return 0;
}
