// Name: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
// Address: 004b4fe0
// Address Range: [[004b4fe0, 004b5106]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero *this_ptr)

{
  CHero *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f local_50;
  byte local_44 [12];
  CVector3f local_38;
  byte local_2c [12];
  float local_20 [3];
  int local_14;
  
  iVar4 = 0;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_50.z = 1.5;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&local_38,&local_50);
  local_14 = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar4) {
      return 0;
    }
    pCVar1 = *(CHero **)(0x01E57284 + local_14 + 0x14ecb4);
    if (((pCVar1->base).talk_to_me_event[0] != '\0') && (pCVar1 != this_ptr)) {
      local_20[0] = (pCVar1->base).base.location.position.x -
                    (this_ptr->base).base.location.position.x;
      local_20[2] = (pCVar1->base).base.location.position.z -
                    (this_ptr->base).base.location.position.z;
      if (ABS((pCVar1->base).base.location.position.y - (this_ptr->base).base.location.position.y)
          <= (float)4) {
        local_20[1] = 0.0;
        if (SQRT(local_20[2] * local_20[2] + local_20[0] * local_20[0]) <= (float)5) {
          uVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                            (this_ptr,local_2c,local_20);
          iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_44,uVar2);
          if (ABS(*(float *)(iVar3 + 4)) <= (float)0.34906585038888899) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                      (0x01C03A10,(pCVar1->base).talk_to_me_event);
            return 1;
          }
        }
      }
    }
    local_14 = local_14 + 4;
    iVar4 = iVar4 + 1;
  } while( true );
}
