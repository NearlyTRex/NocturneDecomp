// Name: core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_0047d920
// Address: 0047d920
// Address Range: [[0047d920, 0047ddf4]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_0047d920(CDraculaBride *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_0047d920(CDraculaBride *this_ptr,char *sound_name,float volume)

{
  int bone_index;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ac [6];
  uint auStackY_1094 [3];
  float afStackY_1088 [6];
  uint auStackY_1070 [6];
  float afStackY_1058 [3];
  uint auStackY_104c [9];
  float afStackY_1028 [9];
  uint auStackY_1004 [912];
  float fVar6;
  float fVar7;
  char local_1ac [200];
  float local_e4 [8];
  float local_c4;
  float local_c0 [4];
  float local_b0;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  uint local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c;
  uint local_68;
  float local_64;
  uint local_60 [2];
  CVector3f local_58;
  float local_4c;
  uint local_48 [2];
  float local_40;
  float local_3c [5];
  float local_28;
  float local_24;
  uint local_20;
  float local_1c;
  uint local_18 [2];
  float local_10;
  
  bVar5 = 0;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,7.0);
  this_ptr->freaky_timer = local_10;
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar1 != 0) {
    puVar4 = (uint *)&DAT_01bc0d54;
    iVar1 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(*puVar4);
      bone_index = g_INT_ARRAY_01bc0d34[0];
      if (iVar2 == 0) {
        puVar4[7] = 0;
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (&(this_ptr->base).base.model,bone_index,&local_94);
        local_7c.x = local_94.x;
        *(uint *)((int)&local_7c + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&local_94 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&local_7c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&local_94 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,&local_7c,&local_88);
        local_4c = local_88.x;
        local_48[(uint)bVar5 * -2] = *(uint *)((int)&local_88 + (uint)bVar5 * -8 + 4);
        local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        if ((float *)(puVar4 + 0xb) != &local_4c) {
          puVar4[0xb] = (uint)local_4c;
          puVar4[0xc] = local_48[0];
          puVar4[0xd] = local_48[1];
        }
        fVar7 = 5.0;
        fVar6 = -5.0;
        local_c0[2] = (float)puVar4[0xb];
        local_c0[(uint)bVar5 * -2 + 3] = (float)puVar4[(uint)bVar5 * -2 + 0xc];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             (float)(puVar4 + (uint)bVar5 * -2 + 0xc)[(uint)bVar5 * -2 + 1];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar6,fVar7);
        local_c0[2] = local_10 + local_c0[2];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
        local_c0[3] = local_10 + local_c0[3];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        local_b0 = local_10 + local_b0;
        local_a0 = local_c0[2];
        (&local_9c)[(uint)bVar5 * -2] = local_c0[(uint)bVar5 * -2 + 3];
        (&local_9c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if ((float *)(puVar4 + 8) != &local_a0) {
          puVar4[8] = (uint)local_a0;
          puVar4[9] = (uint)local_9c;
          puVar4[10] = local_98;
        }
        fVar7 = 5.0;
        fVar6 = -5.0;
        local_40 = (float)puVar4[0xb];
        local_3c[(uint)bVar5 * -2] = (float)puVar4[(uint)bVar5 * -2 + 0xc];
        local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             (float)(puVar4 + (uint)bVar5 * -2 + 0xc)[(uint)bVar5 * -2 + 1];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar6,fVar7);
        local_40 = local_10 + local_40;
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
        local_3c[0] = local_10 + local_3c[0];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        local_3c[1] = local_10 + local_3c[1];
        local_70 = local_40;
        (&local_6c)[(uint)bVar5 * -2] = local_3c[(uint)bVar5 * -2];
        (&local_6c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if ((float *)(puVar4 + 0xe) != &local_70) {
          puVar4[0xe] = (uint)local_70;
          puVar4[0xf] = (uint)local_6c;
          puVar4[0x10] = local_68;
        }
        fVar7 = 5.0;
        fVar6 = -5.0;
        local_3c[2] = g_CDemonCameraInstance.base.position.f.x;
        local_3c[(uint)bVar5 * -2 + 3] =
             *(float *)((int)&g_CDemonCameraInstance + (uint)bVar5 * -8 + 8);
        local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             *(float *)((uint)bVar5 * -8 + 0x1fe37f8 + (uint)bVar5 * -8);
        fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar6,fVar7);
        local_10 = fVar6;
        local_c4 = local_3c[2];
        local_c0[(uint)bVar5 * -2] = local_3c[(uint)bVar5 * -2 + 3];
        local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        local_c4 = fVar6 + local_c4;
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
        local_c0[0] = local_10 + local_c0[0];
        local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
        local_c0[1] = local_10 + local_c0[1];
        local_28 = local_c4;
        (&local_24)[(uint)bVar5 * -2] = local_c0[(uint)bVar5 * -2];
        (&local_24)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             local_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if ((float *)(puVar4 + 0x11) != local_3c + 5) {
          puVar4[0x11] = (uint)local_28;
          puVar4[0x12] = (uint)local_24;
          puVar4[0x13] = local_20;
        }
        core_spline_cpp_computeSplineBasis_FUN_00583d60(local_e4,(float)puVar4[7],0.0);
        core_spline_cpp_evaluateSplinePoint3D_FUN_00583f90
                  (local_e4,(CVector3f *)(puVar4 + 8),(CVector3f *)(puVar4 + 0xb),
                   (CVector3f *)(puVar4 + 0xe),(CVector3f *)(puVar4 + 0x11),&local_58);
        local_1c = local_58.x;
        local_18[(uint)bVar5 * -2] = *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4);
        local_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        if ((float *)(puVar4 + 1) != &local_1c) {
          puVar4[1] = (uint)local_1c;
          puVar4[2] = local_18[0];
          puVar4[3] = local_18[1];
        }
        core_spline_cpp_evaluateSplineTangent3D_FUN_005841d0
                  (local_e4,(CVector3f *)(puVar4 + 8),(CVector3f *)(puVar4 + 0xb),
                   (CVector3f *)(puVar4 + 0xe),(CVector3f *)(puVar4 + 0x11),&local_ac);
        local_64 = local_ac.x;
        local_60[(uint)bVar5 * -2] = *(uint *)((int)&local_ac + (uint)bVar5 * -8 + 4);
        local_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(uint *)((int)&local_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        if ((float *)(puVar4 + 4) != &local_64) {
          puVar4[4] = (uint)local_64;
          puVar4[5] = local_60[0];
          puVar4[6] = local_60[1];
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
        sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005727e0((CVector3f *)(puVar4 + 1));
        sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00572880((CVector3f *)(puVar4 + 4));
        sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(volume);
        core_sound_cpp_CSound_findRandomSoundFile_FUN_0057be00
                  (g_CSound_PTR_006236b8,local_1ac,sound_name);
        uVar3 = sound_sndmain_cpp_startSfx_FUN_00572d20(local_1ac);
        *puVar4 = uVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
        puVar4[0x14] = (uint)this_ptr;
        return;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x15;
    } while (iVar1 < 6);
  }
  return;
}
