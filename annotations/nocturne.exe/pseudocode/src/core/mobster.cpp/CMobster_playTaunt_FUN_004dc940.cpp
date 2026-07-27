// Name: core_mobster.cpp_CMobster_playTaunt_FUN_004dc940
// Address: 004dc940
// Address Range: [[004dc940, 004dcab6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_80 [100];
  int local_1c;
  int local_18;
  uint local_14;
  
  if (*(float *)(param_1 + 0xbd3c) <= 0.0) {
    iVar5 = 0;
    local_1c = param_2 + 0x60;
    iVar4 = param_2 * 4;
    do {
      iVar1 = 0x01C775EC;
      iVar3 = *(int *)(iVar4 + 0x1ccdb94) + 1;
      *(int *)(iVar4 + 0x1ccdb94) = iVar3;
      if (((*(int *)(iVar1 + 0x1c) != 0) || (param_2 != 1)) || (iVar3 != 6)) {
        _sprintf(local_80,"mobster-cheese-%c-%c-%d.wav",*(byte *)(param_1 + 0xbd38),
                   local_1c,*(uint *)(iVar4 + 0x1ccdb94));
        local_14 = core_sound_cpp_FUN_0052ebc0(0x02DC9450,local_80);
        *(uint *)(param_1 + 0xbd3c) = local_14;
        if (0.0 < *(float *)(param_1 + 0xbd3c)) break;
        *(uint *)(iVar4 + 0x1ccdb94) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < *(float *)(param_1 + 0xbd3c)) {
      *(float *)(param_1 + 0xbd3c) = *(float *)(param_1 + 0xbd3c) + 5.0f;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdc4));
      if (iVar4 == 0) {
        iVar5 = 0;
        iVar4 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)(0x01E57284 + 0x150bf4) <= iVar5) {
            uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,local_80);
            *(uint *)(param_1 + 0xbdbc) = uVar2;
            return;
          }
          iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(uint *)(0x01E57284 + local_18 + 0x150bf8),
                             g_CMobsterActorType_01ccdbd8.name_hash);
          if (((iVar1 != 0) &&
              (iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(iVar1 + 0xbdbc)),
              iVar1 != 0)) && (iVar4 = iVar4 + 1, 3 < iVar4)) break;
          local_18 = local_18 + 4;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return;
}
