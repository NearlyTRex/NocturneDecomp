// Name: core_dynamite.cpp_FUN_0049cfb0
// Address: 0049cfb0
// Address Range: [[0049cfb0, 0049d11a]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cfb0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_dynamite.cpp_FUN_0049cfb0(uint param_1, uint
   param_2) */

void core_dynamite_cpp_FUN_0049cfb0(void)

{
  uint sfx_handle;
  float fVar1;
  CSound *this_ptr;
  int iVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CWeapon *in_stack_00000004;
  float in_stack_00000008;
  double dStack_64;
  CBoundingBox3D CStack_60;
  byte auStack_40 [20];
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  if (0.0 <= *(float *)in_stack_00000004[1].base_actor.actor_name) {
    fVar1 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
    *(float *)in_stack_00000004[1].base_actor.actor_name = fVar1;
    this_ptr = g_CSoundPtr;
    dStack_64 = (double)fVar1;
    if (dStack_64 < 0.0) {
      sfx_handle = *(uint *)(in_stack_00000004[1].base_actor.actor_name + 0x10);
      in_stack_00000004[1].base_actor.actor_name[0] = '\0';
      in_stack_00000004[1].base_actor.actor_name[1] = '\0';
      in_stack_00000004[1].base_actor.actor_name[2] = '\0';
      in_stack_00000004[1].base_actor.actor_name[3] = '\0';
      core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,sfx_handle);
      in_stack_00000004 = in_stack_00000004 + 1;
      (in_stack_00000004->base_actor).actor_name[0x10] = '\0';
      (in_stack_00000004->base_actor).actor_name[0x11] = '\0';
      (in_stack_00000004->base_actor).actor_name[0x12] = '\0';
      (in_stack_00000004->base_actor).actor_name[0x13] = '\0';
    }
    else {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10
                        ((in_stack_00000008 * (float)5 * fVar1) / _DAT_0065d30c);
      if (iVar2 != 0) {
        dStack_64._0_4_ = (CBoundingBox3D *)auStack_40;
        pCVar3 = (*((in_stack_00000004->base_actor).vtable)->getBoundingBox)
                           (&in_stack_00000004->base_actor,(CBoundingBox3D *)auStack_40);
        CStack_2c.z = (pCVar3->min).x + (pCVar3->max).x;
        fStack_20 = (pCVar3->min).y + (pCVar3->max).y;
        auStack_40._16_4_ = CStack_2c.z * 0.5f;
        fStack_1c = (pCVar3->min).z + (pCVar3->max).z;
        CStack_2c.x = fStack_20 * 0.5f;
        CStack_2c.y = fStack_1c * 0.5f;
        pCVar3 = (*((in_stack_00000004->base_actor).vtable)->getBoundingBox)
                           (&in_stack_00000004->base_actor,(CBoundingBox3D *)((int)in_ESP + -0x60));
        CStack_2c.y = (pCVar3->max).z;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&in_stack_00000004->base_actor,&CStack_18,
                            (CVector3f *)(auStack_40 + 0x10));
        if (&CStack_2c != pCVar4) {
          CStack_2c.x = pCVar4->x;
          CStack_2c.y = pCVar4->y;
          CStack_2c.z = pCVar4->z;
        }
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        return;
      }
    }
  }
  return;
}
