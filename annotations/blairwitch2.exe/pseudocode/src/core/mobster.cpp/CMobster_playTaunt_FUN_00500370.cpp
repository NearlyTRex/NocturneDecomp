// Name: core_mobster.cpp_CMobster_playTaunt_FUN_00500370
// Address: 00500370
// Address Range: [[00500370, 005004e6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_00500370(CMobster *this_ptr,int taunt_category)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_00500370(CMobster *this_ptr,int taunt_category)

{
  CGame *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_80 [100];
  int local_1c;
  int local_18;
  float local_14;
  
  if (this_ptr->taunt_timer <= 0.0) {
    iVar6 = 0;
    local_1c = taunt_category + 0x60;
    iVar5 = taunt_category * 4;
    do {
      pCVar1 = g_CGamePtr;
      iVar4 = *(int *)(iVar5 + 0x1d1c6fc) + 1;
      *(int *)(iVar5 + 0x1d1c6fc) = iVar4;
      if (((pCVar1->foul_language_flag != 0) || (taunt_category != 1)) || (iVar4 != 6)) {
        _sprintf(local_80,"mobster-cheese-%c-%c-%d.wav");
        local_14 = core_sound_cpp_CSound_getSoundDuration_FUN_0055af90(0x0264B290,local_80);
        this_ptr->taunt_timer = local_14;
        if (0.0 < this_ptr->taunt_timer) break;
        *(uint *)(iVar5 + 0x1d1c6fc) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if (0.0 < this_ptr->taunt_timer) {
      this_ptr->taunt_timer = this_ptr->taunt_timer + _DAT_005def35;
      iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
      if (iVar5 == 0) {
        iVar6 = 0;
        iVar5 = 0;
        local_18 = 0;
        while( true ) {
          if (g_CDemonSetPtr->enemy_count <= iVar6) {
            uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,local_80);
            this_ptr->sfx_handles[1] = uVar3;
            return;
          }
          pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + local_18),
                              g_CMobsterClassInfo.name_hash);
          if (((pCVar2 != (CDemonActor *)0x0) &&
              (iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&pCVar2[0x62].field_0x2a8),
              iVar4 != 0)) && (iVar5 = iVar5 + 1, 3 < iVar5)) break;
          local_18 = local_18 + 4;
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}
