// Name: core_trap.cpp_CTrap_process_FUN_00546900
// Address: 00546900
// Address Range: [[00546900, 00546aa8]]
// Convention: unknown
// Signature: void core_trap_cpp_CTrap_process_FUN_00546900(CDemonActor *param_1)

#include "nocturne.h"

void core_trap_cpp_CTrap_process_FUN_00546900(CDemonActor *param_1)

{
  float fVar1;
  CCharacter *pCVar2;
  CCharacter *this_ptr;
  int iVar3;
  int iVar4;
  SDamageInfo SStack_98;
  SCollisionInfo SStack_5c;
  CBoundingBox3D local_34;
  CVector3f CStack_1c;
  
  if (param_1[2].location.area_id == 0) {
    fVar1 = param_1[2].orient.vec.x;
    if (fVar1 != 0.0) {
      iVar3 = (**(code **)(*(int *)((int)fVar1 + 0x14c) + 0x104))(fVar1);
      if (iVar3 == 0) {
        return;
      }
      *(uint *)((int)param_1[2].orient.vec.x + 0xbd50) = 0;
      param_1[2].orient.vec.x = 0.0;
    }
    iVar4 = 0;
    (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_34);
    for (iVar3 = 0; iVar3 < g_CDemonSet_PTR_005be368->enemy_count; iVar3 = iVar3 + 1) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->enemies + iVar4),
                            g_CWerewolfActorType_02de078c.name_hash);
      if ((this_ptr != (CCharacter *)0x0) && (*(int *)(this_ptr[1].base.create_event + 0x4c) == 0))
      {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_5c);
        (*((this_ptr->base).vtable._ub)->getCollisionType)((CDemonActor *)this_ptr,&SStack_5c);
        if (((this_ptr->base).location.position.y <= (param_1->location).position.y + local_34.max.y
            ) && ((param_1->location).position.y + local_34.min.y <=
                  (this_ptr->base).location.position.y + SStack_5c.cylinder_top_y)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                    (param_1,&CStack_1c,&(this_ptr->base).location.position);
          if ((((local_34.min.x <= CStack_1c.x + SStack_5c.cylinder_radius) &&
               (CStack_1c.x - SStack_5c.cylinder_radius <= local_34.max.x)) &&
              (local_34.min.z <= CStack_1c.z + SStack_5c.cylinder_radius)) &&
             (CStack_1c.z - SStack_5c.cylinder_radius <= local_34.max.z)) {
            *(CCharacter **)&param_1[2].orient = this_ptr;
            pCVar2 = this_ptr + 1;
            (pCVar2->base).create_event[0x50] = '\0';
            (pCVar2->base).create_event[0x51] = '\0';
            (pCVar2->base).create_event[0x52] = '\0';
            (pCVar2->base).create_event[0x53] = '@';
            *(CDemonActor **)(this_ptr[1].base.create_event + 0x4c) = param_1;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_98);
            SStack_98.damage_amount = 10.0;
            (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,&SStack_98);
            return;
          }
        }
      }
      iVar4 = iVar4 + 4;
    }
  }
  return;
}
