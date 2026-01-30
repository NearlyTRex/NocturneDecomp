// Name: core_dracbrid.cpp_FUN_004864c0
// Address: 004864c0
// Address Range: [[004864c0, 004864df]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_004864c0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_004864c0(uint param_1, uint
   param_2, uint param_3) */

void __cdecl core_dracbrid_cpp_FUN_004864c0(void)

{
  int bone_index;
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  uint uVar5;
  SFreaky *pSVar6;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  float in_stack_0000000c;
  char local_174 [244];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_14;
  
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,7.0);
  *(float *)(in_stack_00000004[0x8e].create_event + 8) = local_14;
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    pSVar6 = SFreaky_ARRAY_02c6d0c0;
    iVar1 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)pSVar6->unk1);
      bone_index = INT_02c6d0a0;
      if (iVar2 == 0) {
        pSVar6->unk1[0x1c] = '\0';
        pSVar6->unk1[0x1d] = '\0';
        pSVar6->unk1[0x1e] = '\0';
        pSVar6->unk1[0x1f] = '\0';
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_44,bone_index
                           );
        pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (in_stack_00000004,&local_50,pCVar3);
        if (pSVar6->unk2 + 1 != pCVar3) {
          pSVar6->unk2[1].x = pCVar3->x;
          pSVar6->unk2[1].y = pCVar3->y;
          pSVar6->unk2[1].z = pCVar3->z;
        }
        local_2c = pSVar6->unk2[1].x;
        local_28 = pSVar6->unk2[1].y;
        local_24 = pSVar6->unk2[1].z;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_2c = local_14 + local_2c;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_28 = local_14 + local_28;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_6c = local_14 + local_24;
        local_74 = local_2c;
        local_70 = local_28;
        if (pSVar6->unk2 != (CVector3f *)&local_74) {
          pSVar6->unk2[0].x = local_2c;
          pSVar6->unk2[0].y = local_28;
          pSVar6->unk2[0].z = local_6c;
        }
        local_80 = pSVar6->unk2[1].x;
        local_7c = pSVar6->unk2[1].y;
        local_78 = pSVar6->unk2[1].z;
        local_24 = local_6c;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_80 = local_14 + local_80;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_7c = local_14 + local_7c;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_78 = local_14 + local_78;
        local_5c = local_80;
        local_58 = local_7c;
        if (pSVar6->unk2 + 2 != (CVector3f *)&local_5c) {
          pSVar6->unk2[2].x = local_80;
          pSVar6->unk2[2].y = local_7c;
          pSVar6->unk2[2].z = local_78;
        }
        local_68 = (float)g_CDemonCameraInstance.base.position.x;
        local_64 = (float)g_CDemonCameraInstance.base.position.y;
        local_60 = (float)g_CDemonCameraInstance.base.position.z;
        local_54 = local_78;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_68 = local_14 + local_68;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_64 = local_14 + local_64;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_60 = local_14 + local_60;
        local_38 = local_68;
        local_34 = local_64;
        if (pSVar6->unk2 + 3 != (CVector3f *)&local_38) {
          pSVar6->unk2[3].x = local_68;
          pSVar6->unk2[3].y = local_64;
          pSVar6->unk2[3].z = local_60;
        }
        local_30 = local_60;
        core_spline_cpp_FUN_005b90a0();
        pfVar4 = core_spline_cpp_FUN_005b92d0();
        if ((float *)(pSVar6->unk1 + 4) != pfVar4) {
          *(float *)(pSVar6->unk1 + 4) = *pfVar4;
          *(float *)(pSVar6->unk1 + 8) = pfVar4[1];
          *(float *)(pSVar6->unk1 + 0xc) = pfVar4[2];
        }
        pfVar4 = core_spline_cpp_FUN_005b9490();
        if ((float *)(pSVar6->unk1 + 0x10) != pfVar4) {
          *(float *)(pSVar6->unk1 + 0x10) = *pfVar4;
          *(float *)(pSVar6->unk1 + 0x14) = pfVar4[1];
          *(float *)(pSVar6->unk1 + 0x18) = pfVar4[2];
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                  ((CVector3f *)(pSVar6->unk1 + 4));
        sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00((CVector3f *)(pSVar6->unk1 + 0x10))
        ;
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_0000000c);
        core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0
                  (g_CSoundPtr,local_174,in_stack_00000008);
        uVar5 = sound_sndmain_cpp_startSfx_FUN_005a8e90(local_174);
        *(uint *)pSVar6->unk1 = uVar5;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        *(CDemonActor **)pSVar6->unk3 = in_stack_00000004;
        return;
      }
      iVar1 = iVar1 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar1 < 6);
  }
  return;
}
