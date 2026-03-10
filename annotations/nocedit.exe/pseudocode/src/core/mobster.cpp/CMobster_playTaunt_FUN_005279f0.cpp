// Name: core_mobster.cpp_CMobster_playTaunt_FUN_005279f0
// Address: 005279f0
// Address Range: [[005279f0, 00527b66]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_005279f0(CMobster *this_ptr,int taunt_category)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_005279f0(CMobster *this_ptr,int taunt_category)

{
  CGame *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char local_80 [100];
  int local_1c;
  int local_18;
  float local_14;
  
  if (this_ptr->taunt_timer <= 0.0) {
    iVar5 = 0;
    local_1c = taunt_category + 0x60;
    do {
      pCVar1 = g_CGamePtr;
      iVar6 = g_MobsterTauntCounters[taunt_category];
      g_MobsterTauntCounters[taunt_category] = iVar6 + 1;
      if (((pCVar1->foul_language_flag != 0) || (taunt_category != 1)) || (iVar6 + 1 != 6)) {
        _sprintf
                  (local_80,"mobster-cheese-%c-%c-%d.wav",
                   (uint)(this_ptr->sound_variant).bytes[0],local_1c,
                   g_MobsterTauntCounters[taunt_category]);
        local_14 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,local_80);
        this_ptr->taunt_timer = local_14;
        if (0.0 < this_ptr->taunt_timer) break;
        g_MobsterTauntCounters[taunt_category] = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < this_ptr->taunt_timer) {
      this_ptr->taunt_timer = this_ptr->taunt_timer + 5.0f;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
      if (iVar5 == 0) {
        iVar6 = 0;
        iVar5 = 0;
        local_18 = 0;
        while( true ) {
          if (g_CDemonSetPtr->enemy_count <= iVar6) {
            uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,local_80);
            this_ptr->sfx_handles[1] = uVar4;
            return;
          }
          pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + local_18),
                              g_CMobsterClassInfo.name_hash);
          if (((pCVar2 != (CDemonActor *)0x0) &&
              (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                 (*(uint *)(pCVar2[0x8e].create_event + 0xc)), iVar3 != 0)) &&
             (iVar5 = iVar5 + 1, 3 < iVar5)) break;
          local_18 = local_18 + 4;
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}
