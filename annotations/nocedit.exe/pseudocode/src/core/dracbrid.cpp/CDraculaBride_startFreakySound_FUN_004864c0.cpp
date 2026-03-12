// Name: core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_004864c0
// Address: 004864c0
// Address Range: [[004864c0, 004864df]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(CDraculaBride *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(CDraculaBride *this_ptr,char *sound_name,float volume)

{
  float fVar1;
  float fVar2;
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  uint uVar4;
  SFreaky *pSVar5;
  int iVar7;
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
  int bone_index;
  
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,7.0);
  this_ptr->freaky_timer = fVar2;
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    pSVar5 = SFreaky_ARRAY_02c6d0c0;
    iVar7 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(pSVar5->sfx_handle);
      bone_index = INT_02c6d0a0;
      if (iVar2 == 0) {
        pSVar5->t = 0.0;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (&(this_ptr->base).base.model,&local_44,bone_index);
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&local_50,pCVar3);
        if (pSVar5->control_points + 1 != pCVar4) {
          pSVar5->control_points[1].x = pCVar4->x;
          pSVar5->control_points[1].y = pCVar4->y;
          pSVar5->control_points[1].z = pCVar4->z;
        }
        local_2c = pSVar5->control_points[1].x;
        local_28 = pSVar5->control_points[1].y;
        local_24 = pSVar5->control_points[1].z;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_2c = fVar2 + local_2c;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_28 = fVar2 + local_28;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_6c = fVar2 + local_24;
        local_74 = local_2c;
        local_70 = local_28;
        if (pSVar5->control_points != (CVector3f *)&local_74) {
          pSVar5->control_points[0].x = local_2c;
          pSVar5->control_points[0].y = local_28;
          pSVar5->control_points[0].z = local_6c;
        }
        fVar2 = pSVar5->control_points[1].x;
        fVar6 = pSVar5->control_points[1].y;
        fVar1 = pSVar5->control_points[1].z;
        local_24 = local_6c;
        fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        fVar5 = fVar5 + fVar2;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        fVar2 = fVar2 + fVar6;
        fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_54 = fVar6 + fVar1;
        if (pSVar5->control_points + 2 != (CVector3f *)&local_5c) {
          pSVar5->control_points[2].x = fVar5;
          pSVar5->control_points[2].y = fVar2;
          pSVar5->control_points[2].z = local_54;
        }
        local_68 = g_CDemonCameraInstance.base.position.f.x;
        local_64 = g_CDemonCameraInstance.base.position.f.y;
        local_60 = g_CDemonCameraInstance.base.position.f.z;
        local_5c = fVar5;
        local_58 = fVar2;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_68 = fVar2 + local_68;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
        local_64 = fVar2 + local_64;
        fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
        local_60 = fVar2 + local_60;
        local_38 = local_68;
        local_34 = local_64;
        if (pSVar5->control_points + 3 != (CVector3f *)&local_38) {
          pSVar5->control_points[3].x = local_68;
          pSVar5->control_points[3].y = local_64;
          pSVar5->control_points[3].z = local_60;
        }
        local_30 = local_60;
        core_spline_cpp_computeSplineBasis_FUN_005b90a0(local_ac,pSVar5->t,0.0);
        pCVar4 = core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0
                           (local_ac,&local_8c,pSVar5->control_points,pSVar5->control_points + 1,
                            pSVar5->control_points + 2,pSVar5->control_points + 3);
        if (&pSVar5->position != pCVar4) {
          (pSVar5->position).x = pCVar4->x;
          (pSVar5->position).y = pCVar4->y;
          (pSVar5->position).z = pCVar4->z;
        }
        pCVar4 = core_spline_cpp_evaluateSplineTangent3D_FUN_005b9490
                           (local_ac,&local_20,pSVar5->control_points,pSVar5->control_points + 1,
                            pSVar5->control_points + 2,pSVar5->control_points + 3);
        if (&pSVar5->tangent != pCVar4) {
          (pSVar5->tangent).x = pCVar4->x;
          (pSVar5->tangent).y = pCVar4->y;
          (pSVar5->tangent).z = pCVar4->z;
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(&pSVar5->position);
        sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(&pSVar5->tangent);
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(volume);
        core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(g_CSoundPtr,local_174,sound_name);
        uVar4 = sound_sndmain_cpp_startSfx_FUN_005a8e90(local_174);
        pSVar5->sfx_handle = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
        pSVar5->owner = this_ptr;
        return;
      }
      iVar7 = iVar7 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar7 < 6);
  }
  return;
}
