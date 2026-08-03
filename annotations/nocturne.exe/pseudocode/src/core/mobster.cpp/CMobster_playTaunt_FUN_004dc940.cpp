// Name: core_mobster.cpp_CMobster_playTaunt_FUN_004dc940
// Address: 004dc940
// Address Range: [[004dc940, 004dcab6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(CMobster *this_ptr,int taunt_category)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(CMobster *this_ptr,int taunt_category)

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
      pCVar1 = g_CGame_PTR_005b9354;
      iVar4 = *(int *)(iVar5 + 0x1ccdb94) + 1;
      *(int *)(iVar5 + 0x1ccdb94) = iVar4;
      if (((pCVar1->foul_language_flag != 0) || (taunt_category != 1)) || (iVar4 != 6)) {
        _sprintf(local_80,"mobster-cheese-%c-%c-%d.wav");
        local_14 = (float)core_sound_cpp_FUN_0052ebc0(g_CSound_PTR_005bed68,local_80);
        this_ptr->taunt_timer = local_14;
        if (0.0 < this_ptr->taunt_timer) break;
        *(uint *)(iVar5 + 0x1ccdb94) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if (0.0 < this_ptr->taunt_timer) {
      this_ptr->taunt_timer = this_ptr->taunt_timer + 5.0f;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
      if (iVar5 == 0) {
        iVar6 = 0;
        iVar5 = 0;
        local_18 = 0;
        while( true ) {
          if (g_CDemonSet_PTR_005be368->enemy_count <= iVar6) {
            uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,local_80);
            this_ptr->sfx_handles[1] = uVar3;
            return;
          }
          pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->enemies + local_18),
                              g_CMobsterActorType_01ccdbd8.name_hash);
          if (((pCVar2 != (CDemonActor *)0x0) &&
              (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                 (*(uint *)(pCVar2[0x90].create_event + 0x44)), iVar4 != 0)) &&
             (iVar5 = iVar5 + 1, 3 < iVar5)) break;
          local_18 = local_18 + 4;
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}
