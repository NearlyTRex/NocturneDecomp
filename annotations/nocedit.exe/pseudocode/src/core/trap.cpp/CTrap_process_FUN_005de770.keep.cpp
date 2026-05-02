// Name: core_trap.cpp_CTrap_process_FUN_005de770
// Address: 005de770
// MANUAL RECONSTRUCTION
// Address Range: [[005de770, 005de918]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr,float delta_time)

{
  CWerewolf *this_ptr_00;
  EDeathState EVar1;
  CWerewolf *pCVar2;
  int iVar3;
  SDamageInfo SStack_98;
  SCollisionInfo SStack_5c;
  CBoundingBox3D local_34;
  CVector3f CStack_1c;
  
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    this_ptr_00 = this_ptr->wolf_in_trap;
    if (this_ptr_00 != (CWerewolf *)0x0) {
      EVar1 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr_00);
      if (EVar1 == DEATH_STATE_ALIVE) {
        return;
      }
      this_ptr->wolf_in_trap->chain_anchor = (CDemonActor *)0x0;
      this_ptr->wolf_in_trap = (CWerewolf *)0x0;
    }
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_34);
    for (iVar3 = 0; iVar3 < g_CDemonSetPtr->enemy_count; iVar3 = iVar3 + 1) {
      pCVar2 = (CWerewolf *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         ((CDemonActor *)g_CDemonSetPtr->enemies[iVar3],
                          g_CWerewolfClassInfo.name_hash);
      if ((pCVar2 != (CWerewolf *)0x0) && (pCVar2->chain_anchor == (CDemonActor *)0x0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_5c);
        (*((pCVar2->base).base.base.vtable._ub)->getCollisionType)((CDemonActor *)pCVar2,&SStack_5c)
        ;
        if (((pCVar2->base).base.base.location.position.y <=
             (this_ptr->base).location.position.y + local_34.max.y) &&
           ((this_ptr->base).location.position.y + local_34.min.y <=
            (pCVar2->base).base.base.location.position.y + SStack_5c.cylinder_top_y)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr->base,&CStack_1c,&(pCVar2->base).base.base.location.position);
          if ((((local_34.min.x <= CStack_1c.x + SStack_5c.cylinder_radius) &&
               (CStack_1c.x - SStack_5c.cylinder_radius <= local_34.max.x)) &&
              (local_34.min.z <= CStack_1c.z + SStack_5c.cylinder_radius)) &&
             (CStack_1c.z - SStack_5c.cylinder_radius <= local_34.max.z)) {
            this_ptr->wolf_in_trap = pCVar2;
            pCVar2->chain_length = 2.0;
            pCVar2->chain_anchor = &this_ptr->base;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_98);
            SStack_98.damage_amount = 10.0;
            (*(((pCVar2->base).base.base.vtable._uc)->_uc).processDamage)
                      ((CCharacter *)pCVar2,&SStack_98);
            return;
          }
        }
      }
    }
  }
  return;
}
