// Name: core_fire.cpp_CFireEffect_FUN_004c76a0
// Address: 004c76a0
// Address Range: [[004c76a0, 004c77f1] [004c7800, 004c79c1]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c76a0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c76a0(CFireEffect *this_ptr)

{
  int iVar1;
  int iVar2;
  CSmokeParticle *this_ptr_00;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  CBulletHole *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  uint in_stack_00000010;
  CDemonActor *in_stack_00000014;
  char cVar8;
  uint in_stack_ffffffac;
  char acStack_4c [4];
  char acStack_48 [28];
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar7 = 0;
  if ((in_stack_0000000c->y < (float)0.20000000000000001) &&
     (-0.20000000000000001 < (double)in_stack_0000000c->y)) {
    pCVar4 = g_BulletHolePool;
    local_14 = 1;
    if ((in_stack_00000014 == (CDemonActor *)0x0) ||
       (iVar2 = (*in_stack_00000014->vtable->allowBulletHoles)(in_stack_00000014), iVar2 != 0)) {
      if ((local_14 != 0) && (iVar2 = 0, 0 < g_BulletHoleActiveCount)) {
        do {
          local_20 = in_stack_00000008->x - (pCVar4->position).x;
          local_1c = in_stack_00000008->y - (pCVar4->position).y;
          local_18 = in_stack_00000008->z - (pCVar4->position).z;
          if (&local_2c != &local_20) {
            local_2c = local_20;
            fStack_28 = local_1c;
            fStack_24 = local_18;
          }
          if (fStack_24 * fStack_24 + local_2c * local_2c + fStack_28 * fStack_28 <
              (float)0.057799999999999997) goto LAB_004c7785;
          iVar2 = iVar2 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar2 < g_BulletHoleActiveCount);
      }
      if (local_14 != 0) {
        pCVar4 = core_fire_cpp_allocateBulletHole_FUN_004c6c10();
        core_fire_cpp_CBulletHole_ctor_FUN_004bf7f0
                  (pCVar4,in_stack_00000008,in_stack_0000000c,in_stack_00000014);
      }
    }
  }
LAB_004c7785:
  iVar2 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730
                    (&g_CDemonCameraInstance,in_stack_00000008,0.5);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = g_SmokeParticleAllocIndex + 1;
      this_ptr_00 = g_SmokeParticlePool + g_SmokeParticleAllocIndex;
      g_SmokeParticleAllocIndex = iVar1;
      if (0x7ff < iVar1) {
        g_SmokeParticleAllocIndex = 0;
      }
      iVar2 = iVar2 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0
                (this_ptr_00,in_stack_00000008,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar2 < 8);
    switch(in_stack_00000010) {
    case 2:
    case 5:
    case 8:
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_FUN_004c79d0(this_ptr);
      } while (iVar2 < 8);
    }
  }
  puVar5 = &DAT_0067aeb8;
  puVar6 = (uint *)&stack0xffffffac;
  for (iVar2 = 0xc; cVar8 = (char)in_stack_ffffffac, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  *(ushort *)puVar6 = *(ushort *)puVar5;
  switch(in_stack_00000010) {
  case 2:
  case 8:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(2);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4c,"ric-%s!?.wav",pcVar3);
      if (acStack_48[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 3:
  case 4:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(3);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4c,"ric-%s.wav",pcVar3);
      if (acStack_48[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 5:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(5);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4c,"ric-%s!?.wav",pcVar3);
      if (acStack_48[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 7:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar2 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(7);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4c,"ric-%s!?.wav",pcVar3);
      if (acStack_48[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
  }
  if (cVar8 == '\0') {
    return;
  }
LAB_004c79a0:
  core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
            (g_CSoundPtr,(CDemonActor *)0x0,acStack_48,in_stack_00000008,0.17);
  return;
}
