// Name: core_trap.cpp_CTrap_process_FUN_005de770
// Address: 005de770
// Address Range: [[005de770, 005de918]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CCharacter *this_ptr_00;
  int iVar2;
  int iVar3;
  SDamageInfo SStack_98;
  SCollisionInfo SStack_5c;
  CBoundingBox3D local_34;
  CVector3f CStack_1c;
  
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    iVar2 = this_ptr->wolf_in_trap;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x120))(iVar2);
      if (iVar2 == 0) {
        return;
      }
      *(uint *)(this_ptr->wolf_in_trap + 0xbee8) = 0;
      this_ptr->wolf_in_trap = 0;
    }
    iVar3 = 0;
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_34);
    for (iVar2 = 0; iVar2 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar2 = iVar2 + 1) {
      this_ptr_00 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar3 + 8000),
                               g_CWerewolfClassInfo.name_hash);
      if ((this_ptr_00 != (CCharacter *)0x0) &&
         (*(int *)(this_ptr_00[1].base.create_event + 0x4c) == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_5c);
        (*((this_ptr_00->base).vtable._ub)->hasCollision)((CDemonActor *)this_ptr_00,&SStack_5c);
        if (((this_ptr_00->base).location.position.y <=
             (this_ptr->base).location.position.y + local_34.max.y) &&
           ((this_ptr->base).location.position.y + local_34.min.y <=
            (this_ptr_00->base).location.position.y + SStack_5c.cylinder_top_y)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr->base,&CStack_1c,&(this_ptr_00->base).location.position);
          if ((((local_34.min.x <= CStack_1c.x + SStack_5c.cylinder_radius) &&
               (CStack_1c.x - SStack_5c.cylinder_radius <= local_34.max.x)) &&
              (local_34.min.z <= CStack_1c.z + SStack_5c.cylinder_radius)) &&
             (CStack_1c.z - SStack_5c.cylinder_radius <= local_34.max.z)) {
            this_ptr->wolf_in_trap = (int)this_ptr_00;
            pCVar1 = this_ptr_00 + 1;
            (pCVar1->base).create_event[0x50] = '\0';
            (pCVar1->base).create_event[0x51] = '\0';
            (pCVar1->base).create_event[0x52] = '\0';
            (pCVar1->base).create_event[0x53] = '@';
            *(CTrap **)(this_ptr_00[1].base.create_event + 0x4c) = this_ptr;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_98);
            SStack_98.damage_amount = 10.0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_98);
            return;
          }
        }
      }
      iVar3 = iVar3 + 4;
    }
  }
  return;
}
