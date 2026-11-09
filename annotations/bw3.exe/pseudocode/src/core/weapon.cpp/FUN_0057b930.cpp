// Name: core_weapon.cpp_FUN_0057b930
// Address: 0057b930
// Address Range: [[0057b930, 0057b9fc]]
// Convention: unknown
// Signature: undefined4 core_weapon_cpp_FUN_0057b930(CDemonActor *param_1)

#include "nocturne.h"

uint core_weapon_cpp_FUN_0057b930(CDemonActor *param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1[2].field_0x54,g_CHeroClassInfo.name_hash);
  if ((0.0 < *(float *)&param_1[2].field_0x50) ||
     (((iVar1 != 0 && (*(int *)(iVar1 + 0x20b60) != 0)) && (*(int *)&param_1[4].field_0xc == 10))))
  {
    return 0;
  }
  if (*(int *)&param_1[4].field_0x30 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1[2].field_0x54,g_CHeroClassInfo.name_hash);
    if (iVar1 != 0) {
      if ((*(int *)&param_1[4].field_0xc == 10) &&
         (*(int *)(iVar1 + 0x20b80) < *(int *)&param_1[4].field_0x2c)) {
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,param_1,"=wp_nomana.wav" + 1,
                   (CVector3f *)&param_1->field_0x20);
        *(uint *)&param_1[2].field_0x50 = 0x3f800000;
        return 0;
      }
      if ((*(int *)&param_1[4].field_0xc == 0xb) &&
         (*(int *)(iVar1 + 0x20b84) < *(int *)&param_1[4].field_0x2c)) {
        return 0;
      }
    }
  }
  return 1;
}
