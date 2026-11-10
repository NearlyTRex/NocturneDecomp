// Name: core_dracbrid.cpp_FUN_0047d920
// Address: 0047d920
// Address Range: [[0047d920, 0047ddf4]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_0047d920(CDraculaBride *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_FUN_0047d920(CDraculaBride *this_ptr,char *sound_name,float volume)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10ac [954];
  float fVar7;
  float fVar8;
  char local_1ac [200];
  float local_e4 [8];
  float local_c4;
  float local_c0 [4];
  float local_b0;
  float local_ac;
  float afStack_a8 [3];
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_88;
  uint local_7c [3];
  float local_70;
  float local_6c;
  uint local_68;
  float local_64;
  uint local_60;
  uint local_5c;
  float local_58;
  float local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c [5];
  float local_28;
  float local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  float local_10;
  
  bVar6 = 0;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,7.0);
  this_ptr->freaky_timer = local_10;
  iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar2 != 0) {
    puVar5 = (uint *)&DAT_01bc0d54;
    iVar2 = 0;
    do {
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*puVar5);
      uVar1 = _DAT_01bc0d34;
      if (iVar3 == 0) {
        puVar5[7] = 0;
        core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,uVar1);
        local_7c[0] = local_94;
        afStack_a8[(uint)bVar6 * -2 + 0xc] = afStack_a8[(uint)bVar6 * -2 + 6];
        afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
             afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_actor_cpp_FUN_00408b40(this_ptr,local_7c);
        local_4c = local_88;
        (&local_6c)[(uint)bVar6 * -2 + 9] = afStack_a8[(uint)bVar6 * -2 + 9];
        (&local_6c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if ((float *)(puVar5 + 0xb) != &local_4c) {
          puVar5[0xb] = (uint)local_4c;
          puVar5[0xc] = local_48;
          puVar5[0xd] = local_44;
        }
        fVar8 = 5.0;
        fVar7 = -5.0;
        local_c0[2] = (float)puVar5[0xb];
        local_c0[(uint)bVar6 * -2 + 3] = (float)puVar5[(uint)bVar6 * -2 + 0xc];
        local_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             (float)(puVar5 + (uint)bVar6 * -2 + 0xc)[(uint)bVar6 * -2 + 1];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar7,fVar8);
        local_c0[2] = local_10 + local_c0[2];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
        local_c0[3] = local_10 + local_c0[3];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        local_b0 = local_10 + local_b0;
        afStack_a8[2] = local_c0[2];
        afStack_a8[(uint)bVar6 * -2 + 3] = local_c0[(uint)bVar6 * -2 + 3];
        afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             local_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        if ((float *)(puVar5 + 8) != afStack_a8 + 2) {
          puVar5[8] = (uint)afStack_a8[2];
          puVar5[9] = local_9c;
          puVar5[10] = local_98;
        }
        fVar8 = 5.0;
        fVar7 = -5.0;
        local_40 = (float)puVar5[0xb];
        local_3c[(uint)bVar6 * -2] = (float)puVar5[(uint)bVar6 * -2 + 0xc];
        local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             (float)(puVar5 + (uint)bVar6 * -2 + 0xc)[(uint)bVar6 * -2 + 1];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar7,fVar8);
        local_40 = local_10 + local_40;
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
        local_3c[0] = local_10 + local_3c[0];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        local_3c[1] = local_10 + local_3c[1];
        local_70 = local_40;
        (&local_6c)[(uint)bVar6 * -2] = local_3c[(uint)bVar6 * -2];
        (&local_6c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if ((float *)(puVar5 + 0xe) != &local_70) {
          puVar5[0xe] = (uint)local_70;
          puVar5[0xf] = (uint)local_6c;
          puVar5[0x10] = local_68;
        }
        fVar8 = 5.0;
        fVar7 = -5.0;
        local_3c[2] = g_CDemonCameraInstance.base.position.f.x;
        local_3c[(uint)bVar6 * -2 + 3] =
             *(float *)((int)&g_CDemonCameraInstance + (uint)bVar6 * -8 + 8);
        local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)((uint)bVar6 * -8 + 0x1fe37f8 + (uint)bVar6 * -8);
        fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar7,fVar8);
        local_10 = fVar7;
        local_c4 = local_3c[2];
        local_c0[(uint)bVar6 * -2] = local_3c[(uint)bVar6 * -2 + 3];
        local_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        local_c4 = fVar7 + local_c4;
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
        local_c0[0] = local_10 + local_c0[0];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        local_c0[1] = local_10 + local_c0[1];
        local_28 = local_c4;
        (&local_24)[(uint)bVar6 * -2] = local_c0[(uint)bVar6 * -2];
        (&local_24)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if ((float *)(puVar5 + 0x11) != local_3c + 5) {
          puVar5[0x11] = (uint)local_28;
          puVar5[0x12] = (uint)local_24;
          puVar5[0x13] = local_20;
        }
        core_spline_cpp_FUN_00583d60(local_e4,(float)puVar5[7],0.0);
        core_spline_cpp_FUN_00583f90(local_e4,puVar5 + 8,puVar5 + 0xb,puVar5 + 0xe,puVar5 + 0x11);
        local_1c = local_58;
        (&local_24)[(uint)bVar6 * -2 + 3] = (&local_6c)[(uint)bVar6 * -2 + 6];
        (&local_24)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             (&local_6c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        if ((float *)(puVar5 + 1) != &local_1c) {
          puVar5[1] = (uint)local_1c;
          puVar5[2] = local_18;
          puVar5[3] = local_14;
        }
        core_spline_cpp_FUN_005841d0(local_e4,puVar5 + 8,puVar5 + 0xb,puVar5 + 0xe,puVar5 + 0x11);
        local_64 = local_ac;
        (&local_6c)[(uint)bVar6 * -2 + 3] = afStack_a8[(uint)bVar6 * -2];
        (&local_6c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if ((float *)(puVar5 + 4) != &local_64) {
          puVar5[4] = (uint)local_64;
          puVar5[5] = local_60;
          puVar5[6] = local_5c;
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
        sound_sndmain_cpp_FUN_005727e0((CVector3f *)(puVar5 + 1));
        sound_sndmain_cpp_FUN_00572880((CVector3f *)(puVar5 + 4));
        sound_sndmain_cpp_FUN_005728e0(volume);
        core_sound_cpp_FUN_0057be00(0x02C82A60,local_1ac,sound_name);
        uVar4 = sound_sndmain_cpp_startSfx_FUN_00572d20(local_1ac);
        *puVar5 = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
        puVar5[0x14] = (uint)this_ptr;
        return;
      }
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x15;
    } while (iVar2 < 6);
  }
  return;
}
