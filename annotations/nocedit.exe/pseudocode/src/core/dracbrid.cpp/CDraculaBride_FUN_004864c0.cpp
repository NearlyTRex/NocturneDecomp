// Name: core_dracbrid.cpp_CDraculaBride_FUN_004864c0
// Address: 004864c0
// Address Range: [[004864c0, 004864df]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_004864c0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_004864c0(CDraculaBride *this_ptr)

{
  int bone_index;
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint uVar4;
  SFreaky *pSVar5;
  char *in_stack_00000008;
  float in_stack_0000000c;
  char local_174 [200];
  float local_ac [8];
  CVector3f local_8c;
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
  CVector3f local_20;
  float local_14;
  
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,7.0);
  *(float *)this_ptr->unk2 = local_14;
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    pSVar5 = SFreaky_ARRAY_02c6d0c0;
    iVar1 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)pSVar5->unk1);
      bone_index = INT_02c6d0a0;
      if (iVar2 == 0) {
        pSVar5->unk1[0x1c] = '\0';
        pSVar5->unk1[0x1d] = '\0';
        pSVar5->unk1[0x1e] = '\0';
        pSVar5->unk1[0x1f] = '\0';
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (&(this_ptr->base).base.model,&local_44,bone_index);
        pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&local_50,pCVar3);
        if (pSVar5->unk2 + 1 != pCVar3) {
          pSVar5->unk2[1].x = pCVar3->x;
          pSVar5->unk2[1].y = pCVar3->y;
          pSVar5->unk2[1].z = pCVar3->z;
        }
        local_2c = pSVar5->unk2[1].x;
        local_28 = pSVar5->unk2[1].y;
        local_24 = pSVar5->unk2[1].z;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_2c = local_14 + local_2c;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_28 = local_14 + local_28;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_6c = local_14 + local_24;
        local_74 = local_2c;
        local_70 = local_28;
        if (pSVar5->unk2 != (CVector3f *)&local_74) {
          pSVar5->unk2[0].x = local_2c;
          pSVar5->unk2[0].y = local_28;
          pSVar5->unk2[0].z = local_6c;
        }
        local_80 = pSVar5->unk2[1].x;
        local_7c = pSVar5->unk2[1].y;
        local_78 = pSVar5->unk2[1].z;
        local_24 = local_6c;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_80 = local_14 + local_80;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_7c = local_14 + local_7c;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_78 = local_14 + local_78;
        local_5c = local_80;
        local_58 = local_7c;
        if (pSVar5->unk2 + 2 != (CVector3f *)&local_5c) {
          pSVar5->unk2[2].x = local_80;
          pSVar5->unk2[2].y = local_7c;
          pSVar5->unk2[2].z = local_78;
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
        if (pSVar5->unk2 + 3 != (CVector3f *)&local_38) {
          pSVar5->unk2[3].x = local_68;
          pSVar5->unk2[3].y = local_64;
          pSVar5->unk2[3].z = local_60;
        }
        local_30 = local_60;
        core_spline_cpp_computeSplineBasis_FUN_005b90a0
                  (local_ac,*(float *)(pSVar5->unk1 + 0x1c),0.0);
        pCVar3 = core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0
                           (local_ac,&local_8c,pSVar5->unk2,pSVar5->unk2 + 1,pSVar5->unk2 + 2,
                            pSVar5->unk2 + 3);
        if ((CVector3f *)(pSVar5->unk1 + 4) != pCVar3) {
          ((CVector3f *)(pSVar5->unk1 + 4))->x = pCVar3->x;
          *(float *)(pSVar5->unk1 + 8) = pCVar3->y;
          *(float *)(pSVar5->unk1 + 0xc) = pCVar3->z;
        }
        pCVar3 = core_spline_cpp_evaluateSplineTangent3D_FUN_005b9490
                           (local_ac,&local_20,pSVar5->unk2,pSVar5->unk2 + 1,pSVar5->unk2 + 2,
                            pSVar5->unk2 + 3);
        if ((CVector3f *)(pSVar5->unk1 + 0x10) != pCVar3) {
          ((CVector3f *)(pSVar5->unk1 + 0x10))->x = pCVar3->x;
          *(float *)(pSVar5->unk1 + 0x14) = pCVar3->y;
          *(float *)(pSVar5->unk1 + 0x18) = pCVar3->z;
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
                  ((CVector3f *)(pSVar5->unk1 + 4));
        sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00((CVector3f *)(pSVar5->unk1 + 0x10))
        ;
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_0000000c);
        core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0
                  (g_CSoundPtr,local_174,in_stack_00000008);
        uVar4 = sound_sndmain_cpp_startSfx_FUN_005a8e90(local_174);
        *(uint *)pSVar5->unk1 = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        *(CDraculaBride **)pSVar5->unk3 = this_ptr;
        return;
      }
      iVar1 = iVar1 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar1 < 6);
  }
  return;
}
