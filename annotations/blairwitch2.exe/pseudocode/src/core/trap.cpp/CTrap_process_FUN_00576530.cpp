// Name: core_trap.cpp_CTrap_process_FUN_00576530
// Address: 00576530
// Address Range: [[00576530, 0057674b]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_process_FUN_00576530(CTrap *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_process_FUN_00576530(CTrap *this_ptr,float delta_time)

{
  float fVar1;
  EDeathState EVar2;
  CWerewolf *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_1004 [975];
  CBoundingBox3D *in_stack_ffffff40;
  SDamageInfo aSStack_b0 [4];
  uint uStack_ac;
  byte auStack_7c [36];
  float fStack_58;
  uint auStack_54 [4];
  uint auStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint auStack_18 [2];
  int iVar8;
  float fVar9;
  
  bVar7 = 0;
  if (this_ptr->carrier == (CDemonActor *)0x0) {
    pCVar3 = this_ptr->wolf_in_trap;
    if (pCVar3 != (CWerewolf *)0x0) {
      EVar2 = (*(((pCVar3->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)pCVar3);
      if (EVar2 == DEATH_STATE_ALIVE) {
        return;
      }
      this_ptr->wolf_in_trap->chain_anchor = (CDemonActor *)0x0;
      this_ptr->wolf_in_trap = (CWerewolf *)0x0;
    }
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff40);
    fVar9 = 0.0;
    iVar8 = 0;
    puVar5 = auStack_54;
    puVar6 = auStack_44;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (; (int)fVar9 < g_CDemonSetPtr->enemy_count; fVar9 = (float)((int)fVar9 + 1)) {
      pCVar3 = (CWerewolf *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)((int)g_CDemonSetPtr->enemies + iVar8),
                          g_CWerewolfClassInfo.name_hash);
      if ((pCVar3 != (CWerewolf *)0x0) && (pCVar3->chain_anchor == (CDemonActor *)0x0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)auStack_7c);
        (*((pCVar3->base).base.base.vtable._ub)->getCollisionType)
                  ((CDemonActor *)pCVar3,(SCollisionInfo *)auStack_7c);
        if ((*(float *)&(pCVar3->base).base.base.field_0x24 <=
             *(float *)&(this_ptr->base).field_0x24 + fStack_24) &&
           (*(float *)&(this_ptr->base).field_0x24 + fStack_30 <=
            *(float *)&(pCVar3->base).base.base.field_0x24 + (float)auStack_7c._32_4_)) {
          core_actor_cpp_FUN_00408de0(this_ptr,&(pCVar3->base).base.base.field_0x20);
          fVar1 = fStack_1c;
          *(uint *)(&stack0xfffffff4 + (uint)bVar7 * -8) = auStack_18[(uint)bVar7 * -2];
          *(uint *)(&stack0xfffffff8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               auStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if ((((fStack_34 <= fVar1 + fStack_58) && (fVar1 - fStack_58 <= fStack_28)) &&
              (fStack_2c <= fVar9 + fStack_58)) && (fVar9 - fStack_58 <= fStack_20)) {
            this_ptr->wolf_in_trap = pCVar3;
            pCVar3->chain_length = 2.0;
            pCVar3->chain_anchor = &this_ptr->base;
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_b0);
            uStack_ac = 0x41200000;
            (*(((pCVar3->base).base.base.vtable._uc)->_uc).processDamage)
                      ((CCharacter *)pCVar3,aSStack_b0);
            return;
          }
        }
      }
      iVar8 = iVar8 + 4;
    }
  }
  return;
}
