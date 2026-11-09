// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
// Address: 00427fb0
// Address Range: [[00427fb0, 004281ce]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  uint uVar1;
  CVector3f *impact_point;
  byte bVar2;
  float10 fVar3;
  uint auStackY_1030 [1012];
  float flame_scale;
  int include_hero;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  if (*(int *)&this_ptr->field_0x281c != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0
              (0x01C38BC0,"?ShotInvulnerable" + 1);
    return;
  }
  if (*(float *)(damage_info + 4) <= 0.0) {
    return;
  }
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT(*(float *)(damage_info + 0x14) * *(float *)(damage_info + 0x14) +
                 *(float *)(damage_info + 0xc) * *(float *)(damage_info + 0xc) +
                 *(float *)(damage_info + 0x10) * *(float *)(damage_info + 0x10))) {
    impact_point = (CVector3f *)(damage_info + 0xc);
  }
  uVar1 = *(uint *)(damage_info + 0x30);
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_FUN_00427260(this_ptr,impact_point,*(uint *)(damage_info + 0x18));
      }
      goto LAB_00428034;
    }
    if (4 < uVar1) {
      core_charactr_cpp_FUN_00427210(this_ptr);
      goto LAB_00428034;
    }
LAB_0042815e:
    core_charactr_cpp_CCharacter_dismember_FUN_00427360
              (this_ptr,impact_point,*(float *)(damage_info + 0x18),0);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00428034;
        goto LAB_0042815e;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_FUN_00426a10(this_ptr);
        goto LAB_00428034;
      }
      if (uVar1 != 0x6a) goto LAB_00428034;
    }
    *(uint *)&this_ptr->field_0x1022c = 0x40000000;
  }
LAB_00428034:
  if (*(int *)(damage_info + 0x28) == 5) {
    core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
    include_hero = 0;
    flame_scale = 1.0;
    local_30._0_4_ = local_24._0_4_;
    *(uint *)((int)&local_30 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&local_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              (this_ptr,&local_30,*(int *)damage_info,0,flame_scale,include_hero);
  }
  if (0.0 < *(float *)(damage_info + 8)) {
    fVar3 = (float10)*(float *)(damage_info + 4) * (float10)*(float *)(damage_info + 8);
    round();
    local_14 = (int)ROUND(fVar3);
    local_18 = local_14 + 1;
    core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
    local_48._0_4_ = local_3c._0_4_;
    *(uint *)((int)&local_48 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&local_3c + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&local_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_gore_cpp_FUN_004c9850
              (g_CGorePtr,&local_48,(CVector3f *)(damage_info + 0xc),local_18,
               *(EBloodType *)&this_ptr->field_0x280c);
  }
  if ((*(int *)&this_ptr->field_0x25b0 == 1) &&
     (this_ptr != *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0
              (g_CGamePtr,&this_ptr->field_0x25b4,
               *(float *)&this_ptr->field_0x25a8 / *(float *)&this_ptr->field_0x25ac,5.0);
  }
  if (0.0 < *(float *)&this_ptr->field_0x25a8) {
    return;
  }
  core_charactr_cpp_FUN_00428e00(this_ptr);
  return;
}
