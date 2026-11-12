// Name: core_hero.cpp_FUN_004ec350
// Address: 004ec350
// Address Range: [[004ec350, 004ec535]]
// Convention: unknown
// Signature: CCharacter * core_hero_cpp_FUN_004ec350(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CCharacter * core_hero_cpp_FUN_004ec350(int param_1,float *param_2)

{
  CCharacter *this_ptr;
  CDemonActor *pCVar1;
  EDeathState EVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1030 [985];
  CVector3f aCStack_c0 [10];
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CCharacter *local_28;
  float fStack_24;
  int local_20;
  float *local_1c;
  int local_18;
  
  bVar4 = 0;
  local_20 = 0;
  *param_2 = 9999.9;
  local_18 = 0;
  local_1c = (float *)(param_1 + 0x20);
  local_28 = (CCharacter *)0x0;
  for (; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
    this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->enemies + local_18);
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                       (&this_ptr->base,g_CVehicleClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (&this_ptr->base,g_CMobsterClassInfo.name_hash);
      if ((pCVar1 == (CDemonActor *)0x0) || (pCVar1[0x90].scale.y == 0)) {
        EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
        if (EVar2 == DEATH_STATE_ALIVE) {
          iVar3 = (*((this_ptr->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr->base);
          if (iVar3 == 0) {
            __arrinit(aCStack_c0,10,&g_CVectorTypeInfo);
            iVar3 = (*((this_ptr->base).vtable._ub)->getTargetPoints)(&this_ptr->base,aCStack_c0);
            if (0 < iVar3) {
              fStack_48 = *local_1c - (this_ptr->base).location.position.x;
              afStack_44[0] = local_1c[1] - (this_ptr->base).location.position.y;
              afStack_44[1] = local_1c[2] - (this_ptr->base).location.position.z;
              afStack_44[2] = fStack_48;
              afStack_44[(uint)bVar4 * -2 + 3] = afStack_44[(uint)bVar4 * -2];
              afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                   afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              afStack_44[3] = afStack_44[3] * (float)_DAT_005e493d;
              fStack_24 = fStack_34 * fStack_34 +
                          afStack_44[2] * afStack_44[2] + afStack_44[3] * afStack_44[3];
              if (fStack_24 < *param_2) {
                *param_2 = fStack_24;
                local_28 = this_ptr;
              }
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  if (local_28 == (CCharacter *)0x0) {
    return (CCharacter *)0x0;
  }
  *param_2 = SQRT(*param_2);
  return local_28;
}
