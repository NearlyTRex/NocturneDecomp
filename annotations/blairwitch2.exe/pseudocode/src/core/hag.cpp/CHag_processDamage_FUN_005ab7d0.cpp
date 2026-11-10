// Name: core_hag.cpp_CHag_processDamage_FUN_005ab7d0
// Address: 005ab7d0
// Address Range: [[005ab7d0, 005ab8c7]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processDamage_FUN_005ab7d0(CHag *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hag_cpp_CHag_processDamage_FUN_005ab7d0(CHag *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(float *)&this_ptr->field_0x11430 <= 0.0) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005f0c96;
  }
  fVar1 = *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
  *(float *)&this_ptr->field_0x25a8 = fVar1;
  if (0.0 < fVar1) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890((CEnemy *)this_ptr,damage_info);
    if (*(int *)(damage_info + 0x38) == *(int *)&this_ptr->field_0x10a78) {
      *(uint *)&this_ptr->field_0x10a7c = *(uint *)&this_ptr->field_0x11378;
    }
    *(uint *)&this_ptr->field_0x11404 = 0;
    if (this_ptr->field_0x11444 != '\0') {
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x1184c);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                          (this_ptr,&this_ptr->field_0x11444);
        *(uint *)&this_ptr->field_0x1184c = uVar3;
        return;
      }
    }
  }
  else {
    if (this_ptr->field_0x11543 != '\0') {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,&this_ptr->field_0x11543,
                 (CVector3f *)&this_ptr->field_0x20);
    }
    *(uint *)&this_ptr->field_0x25a8 = 0;
    unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"@Death" + 1);
  }
  return;
}
