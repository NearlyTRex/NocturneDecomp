// Name: core_mobster.cpp_CMobster_playTaunt_FUN_005279f0
// Address: 005279f0
// MANUAL RECONSTRUCTION
// Address Range: [[005279f0, 00527b66]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_005279f0(CMobster *this_ptr,int taunt_category)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_005279f0(CMobster *this_ptr,int taunt_category)

{
  float fVar1;
  int iVar2;
  CMobster *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char local_80 [100];
  CGame *pCVar1;
  
  if (this_ptr->taunt_timer <= 0.0) {
    iVar5 = 0;
    do {
      pCVar1 = g_CGamePtr;
      iVar2 = g_MobsterTauntCounters[taunt_category];
      g_MobsterTauntCounters[taunt_category] = iVar2 + 1;
      if (((pCVar1->foul_language_flag != 0) || (taunt_category != 1)) || (iVar2 + 1 != 6)) {
        _sprintf(local_80,"mobster-cheese-%c-%c-%d.wav",
                   (uint)(this_ptr->sound_variant).bytes[0],taunt_category + 0x60,
                   g_MobsterTauntCounters[taunt_category]);
        fVar1 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,local_80);
        this_ptr->taunt_timer = fVar1;
        if (0.0 < this_ptr->taunt_timer) break;
        g_MobsterTauntCounters[taunt_category] = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < this_ptr->taunt_timer) {
      this_ptr->taunt_timer = this_ptr->taunt_timer + 5.0f;
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
      if (iVar2 == 0) {
        iVar6 = 0;
        iVar2 = 0;
        while( true ) {
          if (g_CDemonSetPtr->enemy_count <= iVar6) {
            uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,local_80);
            this_ptr->sfx_handles[1] = uVar4;
            return;
          }
          pCVar2 = (CMobster *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             ((CDemonActor *)g_CDemonSetPtr->enemies[iVar6],
                              g_CMobsterClassInfo.name_hash);
          if (((pCVar2 != (CMobster *)0x0) &&
              (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(pCVar2->sfx_handles[1]),
              iVar3 != 0)) && (iVar2 = iVar2 + 1, 3 < iVar2)) break;
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}
