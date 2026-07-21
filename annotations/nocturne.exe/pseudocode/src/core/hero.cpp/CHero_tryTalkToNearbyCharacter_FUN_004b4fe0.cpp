// Name: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
// Address: 004b4fe0
// Address Range: [[004b4fe0, 004b5106]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte local_44 [12];
  byte local_38 [12];
  byte local_2c [12];
  float local_20 [3];
  int local_14;
  
  iVar4 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x3fc00000;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_38,&local_50);
  local_14 = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar4) {
      return 0;
    }
    iVar1 = *(int *)(0x01E57284 + local_14 + 0x14ecb4);
    if ((*(char *)(iVar1 + 0x252c) != '\0') && (iVar1 != param_1)) {
      local_20[0] = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
      local_20[2] = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
      if (ABS(*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)_DAT_0058582b) {
        local_20[1] = 0.0;
        if (SQRT(local_20[2] * local_20[2] + local_20[0] * local_20[0]) <= (float)_DAT_00585833) {
          uVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                            (param_1,local_2c,local_20);
          iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_44,uVar2);
          if (ABS(*(float *)(iVar3 + 4)) <= (float)_DAT_0058583b) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,iVar1 + 0x252c);
            return 1;
          }
        }
      }
    }
    local_14 = local_14 + 4;
    iVar4 = iVar4 + 1;
  } while( true );
}
