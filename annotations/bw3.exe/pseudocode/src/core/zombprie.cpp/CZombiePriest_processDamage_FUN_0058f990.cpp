// Name: core_zombprie.cpp_CZombiePriest_processDamage_FUN_0058f990
// Address: 0058f990
// Address Range: [[0058f990, 0058fb11]]
// Convention: __cdecl
// Signature: void __cdecl core_zombprie_cpp_CZombiePriest_processDamage_FUN_0058f990(CZombiePriest *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_zombprie_cpp_CZombiePriest_processDamage_FUN_0058f990(CZombiePriest *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd0dc);
  unkafter_zombiepr_cpp_FUN_0058f630(this_ptr,damage_info);
  if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0e4 * 4) == 0) &&
     (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0ec * 4) == 0)) {
    *(uint *)(damage_info + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  this_ptr_00 = &this_ptr->field_0x158;
  *(float *)&this_ptr->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar3 + 0x24) != 5) && (*(int *)(pSVar3 + 0x24) != 4)) {
      *(uint *)&this_ptr->field_0x2540 = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr_00,4,1);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
      if (*(int *)&this_ptr->field_0xd0d8 == 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd0d4);
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"@mobster-die-?.wav" + 1);
        *(uint *)&this_ptr->field_0xd0d8 = 1;
        *(uint *)&this_ptr->field_0xd0d4 = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
        return;
      }
    }
    goto LAB_0058fa47;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)(damage_info + 0x34),g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_0058fa23:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr_00,3,1);
  }
  else {
    iVar2 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
    if (iVar2 != 0) goto LAB_0058fa23;
  }
  iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0d4);
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                      (this_ptr,"mobster-hit-?.wav");
    *(uint *)&this_ptr->field_0xd0d4 = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
    return;
  }
LAB_0058fa47:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80((CEnemy *)this_ptr,damage_info);
  return;
}
