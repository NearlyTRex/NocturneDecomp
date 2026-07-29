// Name: core_dracbrid.cpp_FUN_0045ab40
// Address: 0045ab40
// Address Range: [[0045ab40, 0045b011]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_0045ab40(CDraculaBride *this_ptr,char *sound_name,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_FUN_0045ab40(CDraculaBride *this_ptr,char *sound_name,float volume)

{
  int bone_index;
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint uVar4;
  uint *puVar5;
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
  
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(1.0,7.0);
  this_ptr->freaky_timer = local_14;
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar1 != 0) {
    puVar5 = (uint *)&DAT_01b4d280;
    iVar1 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*puVar5);
      bone_index = _DAT_01b4d260;
      if (iVar2 == 0) {
        puVar5[7] = 0;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                           (&(this_ptr->base).base.model,&local_44,bone_index);
        pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           ((CDemonActor *)this_ptr,&local_50,pCVar3);
        if ((CVector3f *)(puVar5 + 0xb) != pCVar3) {
          ((CVector3f *)(puVar5 + 0xb))->x = pCVar3->x;
          puVar5[0xc] = (uint)pCVar3->y;
          puVar5[0xd] = (uint)pCVar3->z;
        }
        local_2c = (float)puVar5[0xb];
        local_28 = (float)puVar5[0xc];
        local_24 = (float)puVar5[0xd];
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
        local_2c = local_14 + local_2c;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
        local_28 = local_14 + local_28;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
        local_6c = local_14 + local_24;
        local_74 = local_2c;
        local_70 = local_28;
        if ((float *)(puVar5 + 8) != &local_74) {
          puVar5[8] = (uint)local_2c;
          puVar5[9] = (uint)local_28;
          puVar5[10] = (uint)local_6c;
        }
        local_80 = (float)puVar5[0xb];
        local_7c = (float)puVar5[0xc];
        local_78 = (float)puVar5[0xd];
        local_24 = local_6c;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
        local_80 = local_14 + local_80;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
        local_7c = local_14 + local_7c;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
        local_78 = local_14 + local_78;
        local_5c = local_80;
        local_58 = local_7c;
        if ((float *)(puVar5 + 0xe) != &local_5c) {
          puVar5[0xe] = (uint)local_80;
          puVar5[0xf] = (uint)local_7c;
          puVar5[0x10] = (uint)local_78;
        }
        local_68 = _DAT_01fb860c;
        local_64 = _DAT_01fb8610;
        local_60 = _DAT_01fb8614;
        local_54 = local_78;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
        local_68 = local_14 + local_68;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
        local_64 = local_14 + local_64;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
        local_60 = local_14 + local_60;
        local_38 = local_68;
        local_34 = local_64;
        if ((float *)(puVar5 + 0x11) != &local_38) {
          puVar5[0x11] = (uint)local_68;
          puVar5[0x12] = (uint)local_64;
          puVar5[0x13] = (uint)local_60;
        }
        local_30 = local_60;
        core_spline_cpp_computeSplineBasis_FUN_00533ce0(local_ac,(float)puVar5[7],0.0);
        pCVar3 = core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10
                           (local_ac,&local_8c,(CVector3f *)(puVar5 + 8),(CVector3f *)(puVar5 + 0xb)
                            ,(CVector3f *)(puVar5 + 0xe),(CVector3f *)(puVar5 + 0x11));
        if ((CVector3f *)(puVar5 + 1) != pCVar3) {
          ((CVector3f *)(puVar5 + 1))->x = pCVar3->x;
          puVar5[2] = (uint)pCVar3->y;
          puVar5[3] = (uint)pCVar3->z;
        }
        pCVar3 = core_spline_cpp_evaluateSplineTangent3D_FUN_005340d0
                           (local_ac,&local_20,(CVector3f *)(puVar5 + 8),(CVector3f *)(puVar5 + 0xb)
                            ,(CVector3f *)(puVar5 + 0xe),(CVector3f *)(puVar5 + 0x11));
        if ((CVector3f *)(puVar5 + 4) != pCVar3) {
          ((CVector3f *)(puVar5 + 4))->x = pCVar3->x;
          puVar5[5] = (uint)pCVar3->y;
          puVar5[6] = (uint)pCVar3->z;
        }
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0((CVector3f *)(puVar5 + 1));
        sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090((CVector3f *)(puVar5 + 4));
        sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(volume);
        core_sound_cpp_FUN_0052d030(0x02DC9450,local_174,sound_name);
        uVar4 = sound_sndmain_cpp_startSfx_FUN_005265a0(local_174);
        *puVar5 = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
        puVar5[0x14] = (uint)this_ptr;
        return;
      }
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 0x15;
    } while (iVar1 < 6);
  }
  return;
}
