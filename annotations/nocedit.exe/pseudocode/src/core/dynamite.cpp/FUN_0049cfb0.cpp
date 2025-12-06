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
  CWeapon *pCVar2;
  CSound *this_ptr;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  CWeapon *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  pCVar2 = in_stack_00000004;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  if (0.0 <= *(float *)pCVar2[1].base_actor.actor_name) {
    fVar1 = *(float *)pCVar2[1].base_actor.actor_name - in_stack_00000008;
    *(float *)pCVar2[1].base_actor.actor_name = fVar1;
    this_ptr = g_CSoundPtr;
    if (fVar1 < 0.0) {
      sfx_handle = *(uint *)(pCVar2[1].base_actor.actor_name + 0x10);
      pCVar2[1].base_actor.actor_name[0] = '\0';
      pCVar2[1].base_actor.actor_name[1] = '\0';
      pCVar2[1].base_actor.actor_name[2] = '\0';
      pCVar2[1].base_actor.actor_name[3] = '\0';
      core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,sfx_handle);
      pCVar2 = pCVar2 + 1;
      (pCVar2->base_actor).actor_name[0x10] = '\0';
      (pCVar2->base_actor).actor_name[0x11] = '\0';
      (pCVar2->base_actor).actor_name[0x12] = '\0';
      (pCVar2->base_actor).actor_name[0x13] = '\0';
    }
    else {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd10
                        ((in_stack_00000008 * (float)5 * fVar1) / _DAT_0065d30c);
      if (iVar3 != 0) {
        (*((pCVar2->base_actor).vtable)->getBoundingBox)
                  (&pCVar2->base_actor,(CBoundingBox3D *)&stack0xffffffc0);
        pCVar4 = (*((pCVar2->base_actor).vtable)->getBoundingBox)
                           (&pCVar2->base_actor,(CBoundingBox3D *)&stack0xffffffbc);
        in_stack_00000008 = (pCVar4->max).z;
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&pCVar2->base_actor,(CVector3f *)&stack0x00000018,
                            (CVector3f *)&stack0x00000000);
        if ((CVector3f *)&stack0x00000004 != pCVar5) {
          in_stack_00000004 = (CWeapon *)pCVar5->x;
          in_stack_00000008 = pCVar5->y;
          in_stack_0000000c = pCVar5->z;
        }
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        return;
      }
    }
  }
  return;
}
