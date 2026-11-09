// Name: core_mobster.cpp_FUN_0051f330
// Address: 0051f330
// Address Range: [[0051f330, 0051f4a6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_0051f330(CMobster *this_ptr,int taunt_category)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_FUN_0051f330(CMobster *this_ptr,int taunt_category)

{
  CGame *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_80 [100];
  int local_1c;
  int local_18;
  float local_14;
  
  if (*(float *)&this_ptr->field_0xc280 <= 0.0) {
    iVar5 = 0;
    local_1c = taunt_category + 0x60;
    iVar4 = taunt_category * 4;
    do {
      pCVar1 = g_CGamePtr;
      iVar3 = *(int *)(iVar4 + 0x1d33bec) + 1;
      *(int *)(iVar4 + 0x1d33bec) = iVar3;
      if (((*(int *)&pCVar1->field_0x1c != 0) || (taunt_category != 1)) || (iVar3 != 6)) {
        FUN_005bfb40
                  (local_80,"mobster-cheese-%c-%c-%d.wav",this_ptr->field_0xc27c,local_1c,
                   *(uint *)(iVar4 + 0x1d33bec));
        local_14 = core_sound_cpp_CSound_getSoundDuration_FUN_0057d9e0(0x02C82A60,local_80);
        *(float *)&this_ptr->field_0xc280 = local_14;
        if (0.0 < *(float *)&this_ptr->field_0xc280) break;
        *(uint *)(iVar4 + 0x1d33bec) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < *(float *)&this_ptr->field_0xc280) {
      *(float *)&this_ptr->field_0xc280 = *(float *)&this_ptr->field_0xc280 + _DAT_005e9f82;
      iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc308);
      if (iVar4 == 0) {
        iVar5 = 0;
        iVar4 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)&g_CDemonSetPtr->field_0x150fec <= iVar5) {
            uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,local_80);
            *(uint *)&this_ptr->field_0xc300 = uVar2;
            return;
          }
          iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + local_18),
                             g_CMobsterClassInfo.name_hash);
          if (((iVar3 != 0) &&
              (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(iVar3 + 0xc300)), iVar3 != 0)) &&
             (iVar4 = iVar4 + 1, 3 < iVar4)) break;
          local_18 = local_18 + 4;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return;
}
