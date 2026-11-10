// Name: core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800
// Address: 0059f800
// Address Range: [[0059f800, 0059f92f]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(CBasicEnemy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(this_ptr + 0x281c) == 0) || (*(int *)(damage_info + 4) == 0x461c3c00)) {
    fVar2 = *(float *)(damage_info + 4);
    fVar1 = *(float *)(this_ptr + 0x25a8);
    *(float *)(this_ptr + 0x25a8) = fVar1 - fVar2;
    if (0.0 < fVar1 - fVar2) {
      core_enemy_cpp_CEnemy_processDamage_FUN_00488890((CEnemy *)this_ptr,damage_info);
      if (*(int *)(damage_info + 0x38) == *(int *)(this_ptr + 0x10a78)) {
        *(uint *)(this_ptr + 0x10a7c) = *(uint *)(this_ptr + 0x11378);
      }
      *(uint *)(this_ptr + 0x11404) = 0;
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
      if ((float)_DAT_005ef9b7 < fVar2) {
        *(uint *)(this_ptr + 0x113d0) = 1;
      }
      if ((this_ptr[0x11444] != (CBasicEnemy)0x0) &&
         (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(this_ptr + 0x1184c)), iVar3 == 0)) {
        uVar4 = (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x34))(this_ptr,this_ptr + 0x11444);
        *(uint *)(this_ptr + 0x1184c) = uVar4;
        return;
      }
    }
    else {
      if (this_ptr[0x11543] != (CBasicEnemy)0x0) {
        core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                  (0x0264B290,(CDemonActor *)this_ptr,(char *)(this_ptr + 0x11543),
                   (CVector3f *)(this_ptr + 0x20));
      }
      *(uint *)(this_ptr + 0x25a8) = 0;
      unkaddr_0059d350_cpp_FUN_0059d8e0(this_ptr + 0x10af8,"Death");
    }
  }
  else {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"ShotInvulnerable")
    ;
  }
  return;
}
