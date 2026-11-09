// Name: core_mobster.cpp_FUN_00500370
// Address: 00500370
// Address Range: [[00500370, 005004e6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_00500370(CMobster *this_ptr,int taunt_category)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_FUN_00500370(CMobster *this_ptr,int taunt_category)

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
  
  if (*(float *)&this_ptr->field_0x10b10 <= 0.0) {
    iVar5 = 0;
    local_1c = taunt_category + 0x60;
    iVar4 = taunt_category * 4;
    do {
      pCVar1 = g_CGamePtr;
      iVar3 = *(int *)(iVar4 + 0x1d1c6fc) + 1;
      *(int *)(iVar4 + 0x1d1c6fc) = iVar3;
      if (((*(int *)&pCVar1->field_0x1c != 0) || (taunt_category != 1)) || (iVar3 != 6)) {
        FUN_005b7790
                  (local_80,"mobster-cheese-%c-%c-%d.wav",this_ptr->field_0x10b0c,local_1c,
                   *(uint *)(iVar4 + 0x1d1c6fc));
        local_14 = core_sound_cpp_CSound_getSoundDuration_FUN_0055af90(0x0264B290,local_80);
        *(float *)&this_ptr->field_0x10b10 = local_14;
        if (0.0 < *(float *)&this_ptr->field_0x10b10) break;
        *(uint *)(iVar4 + 0x1d1c6fc) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (0.0 < *(float *)&this_ptr->field_0x10b10) {
      *(float *)&this_ptr->field_0x10b10 = *(float *)&this_ptr->field_0x10b10 + _DAT_005def35;
      iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x10b98);
      if (iVar4 == 0) {
        iVar5 = 0;
        iVar4 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)&g_CDemonSetPtr->field_0x150fec <= iVar5) {
            uVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,local_80);
            *(uint *)&this_ptr->field_0x10b90 = uVar2;
            return;
          }
          iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + local_18),
                             g_CMobsterClassInfo.name_hash);
          if (((iVar3 != 0) &&
              (iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(iVar3 + 0x10b90)), iVar3 != 0)) &&
             (iVar4 = iVar4 + 1, 3 < iVar4)) break;
          local_18 = local_18 + 4;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return;
}
