// Name: core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0
// Address: 004d9df0
// Address Range: [[004d9df0, 004d9e48]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(int param_1)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x514);
  iVar3 = 0;
  do {
    if (iVar2 == 0) {
      return iVar3;
    }
    while ((iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (iVar2,g_CEnemyActorType_01bcdebc.name_hash), iVar1 != 0 &&
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1), iVar1 != 0))) {
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar2 + 0x144);
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x144);
  } while( true );
}
