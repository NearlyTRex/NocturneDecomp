// Name: core_hero.cpp_CHero_FUN_004f33b0
// Address: 004f33b0
// Address Range: [[004f33b0, 004f3576]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f33b0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f33b0(CHero *this_ptr)

{
  CLocation *input_world_point;
  CHero *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  float fStack_78;
  float fStack_74;
  CVector3f local_60;
  CVector3f CStack_4c;
  byte auStack_40 [16];
  CVector3f local_30;
  int local_20;
  int local_1c;
  float local_14;
  
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042d360(&this_ptr->base);
  if (iVar3 == 0) {
    if (*(int *)this_ptr->unk3 != 0) {
      return 1;
    }
    input_world_point = &(this_ptr->base).base.location;
    local_1c = 0;
    for (local_20 = 0; local_20 < (int)g_CDemonSetPtr->actor_list_ptr; local_20 = local_20 + 1) {
      this_ptr_00 = *(CHero **)(g_CDemonSetPtr->actor_list_data + local_1c);
      local_60.x = (this_ptr_00->base).base.location.position.x - (input_world_point->position).x;
      local_60.z = (this_ptr_00->base).base.location.position.z -
                   (this_ptr->base).base.location.position.z;
      if (((ABS((this_ptr_00->base).base.location.position.y -
                (this_ptr->base).base.location.position.y) <= (float)10) &&
          (local_60.y = 0.0,
          SQRT(local_60.z * local_60.z + local_60.x * local_60.x) <= (float)10)) &&
         (this_ptr_00 != this_ptr)) {
        pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_30,&local_60);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar4->y - (this_ptr->base).base.orient.bank);
        if ((((ABS(local_14) <= (float)1.04719755116667) &&
             (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 ((CDemonActor *)this_ptr_00,(CVector3f *)(auStack_40 + 4),
                                  &input_world_point->position), pCVar4->z <= 0.0)) &&
            (((*((this_ptr_00->base).base.vtable._ub)->getInteractionInfo)
                        ((CDemonActor *)this_ptr_00,(SInteractionInfo *)&stack0xffffff80),
             fStack_78 != 0.0 &&
             ((fStack_74 == 0.0 &&
              (core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr_00,&CStack_4c,(CVector3f *)auStack_40),
              fVar1 = CStack_4c.x - (input_world_point->position).x,
              fVar2 = CStack_4c.z - (this_ptr->base).base.location.position.z,
              SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)5)))))) &&
           (iVar3 = (*((this_ptr_00->base).base.vtable._ub)->startInteraction)
                              ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr), iVar3 != 0)) {
          *(CHero **)this_ptr->unk3 = this_ptr_00;
          return 1;
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return 0;
}
