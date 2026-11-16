// Name: core_sound.cpp_processTrainSounds_FUN_0055f6b0
// Address: 0055f6b0
// Address Range: [[0055f6b0, 0055fbfb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_processTrainSounds_FUN_0055f6b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_processTrainSounds_FUN_0055f6b0(void)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  float afStackY_1050 [961];
  float fStack_138;
  float fStack_134;
  char acStack_130 [100];
  char acStack_cc [100];
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  fStack_24 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->goggles_active == 0) {
    if (_DAT_02cf5f84 != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_0053ec70(g_CDemonSetPtr);
      CStack_5c.x = _DAT_02cf568c;
      *(uint *)((int)&CStack_5c + (uint)bVar9 * -8 + 4) =
           *(uint *)(&DAT_02cf5690 + (uint)bVar9 * -8);
      *(uint *)((int)&CStack_5c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)(&DAT_02cf5694 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      fStack_68 = CStack_5c.x;
      afStack_64[1] = CStack_5c.z;
      pCVar5 = &CStack_50;
      afStack_64[0] = CStack_5c.y + _DAT_005d52c3;
      CStack_50.x = CStack_5c.x;
      *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                        (g_CDemonSetPtr,&CStack_5c,pCVar5);
      if (iVar3 == 0) {
        PTR_DAT_006045f0 = &DAT_005d5280;
      }
      else {
        PTR_DAT_006045f0 = &DAT_005d527c;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      _DAT_02cf5f84 = g_CDemonSetPtr->selected_camera_index;
    }
  }
  else {
    PTR_DAT_006045f0 = &DAT_005d5278;
    _DAT_02cf5f84 = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
  iVar3 = _stricmp(PTR_DAT_006045f0,&DAT_005d5284);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_02cf5f8c);
    fStack_138 = 0.4;
  }
  else {
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(_DAT_02cf5f8c);
    fStack_138 = 0.7;
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(0.4);
      _DAT_02cf5f8c = sound_sndmain_cpp_startSfx_FUN_00556240("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    }
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(_DAT_02cf5f88);
  if (iVar3 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(fStack_138 * (float)_DAT_005d52c7);
    _DAT_02cf5f88 = sound_sndmain_cpp_startSfx_FUN_00556240("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  }
  else {
    iVar3 = _stricmp(PTR_DAT_006045f4,PTR_DAT_006045f0);
    if (iVar3 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_00556ab0(_DAT_02cf5f88,fStack_138 * (float)_DAT_005d52c7);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  PTR_DAT_006045f4 = PTR_DAT_006045f0;
  _DAT_02cf5f74 = 0.0;
  _DAT_02cf5f78 = 0.0;
  _DAT_02cf5f7c = 30.0;
  pCStack_28 = (CVector3f *)0x0;
  iStack_1c = 0;
  pCVar5 = (CVector3f *)&DAT_02cf5ed4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(*(uint *)(iStack_20 + 0x2cf5ee0));
    pCVar2 = pCVar5;
    if (iVar3 != 0) {
      fStack_44 = _DAT_02cf5f74 * fStack_24;
      afStack_40[0] = _DAT_02cf5f78 * fStack_24;
      afStack_40[1] = _DAT_02cf5f7c * fStack_24;
      afStack_40[2] = _DAT_02cf5f74 * fStack_24;
      afStack_40[(uint)bVar9 * -2 + 3] = afStack_40[(uint)bVar9 * -2];
      afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pCVar5->x = pCVar5->x + afStack_40[2];
      pCVar5->y = pCVar5->y + afStack_40[3];
      pCVar5->z = pCVar5->z + fStack_30;
      pCVar2 = pCStack_28;
      if ((float)_DAT_005d52df < ABS(*(float *)(&DAT_02cf5edc + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(iStack_20 + 0x2cf5ee0));
        pCVar2 = pCStack_28;
      }
    }
    pCStack_28 = pCVar2;
    iStack_1c = iStack_1c + 1;
    pCVar5 = (CVector3f *)&pCVar5[1].y;
  } while (iStack_1c < 10);
  _DAT_02cf5f80 = _DAT_02cf5f80 - fStack_24;
  if ((_DAT_02cf5f80 <= 0.0) && (pCStack_28 != (CVector3f *)0x0)) {
    _DAT_02cf5f80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,5.0);
    puVar7 = &DAT_00604818;
    pcVar8 = acStack_cc;
    fStack_18 = _DAT_02cf5f80;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    fStack_2c = 20.0;
    fStack_134 = 1.0;
    iVar3 = rand();
    switch(iVar3 % 5) {
    case 0:
    case 1:
      fStack_134 = fStack_138 * (float)_DAT_005d52d7;
      fStack_2c = 25.0;
      _sprintf(acStack_cc,"rail?%s.wav");
      break;
    case 2:
    case 3:
      fStack_134 = fStack_138 * (float)_DAT_005d52cf;
      pcVar6 = &DAT_005d52ae;
      pcVar8 = acStack_cc;
      fStack_2c = 20.0;
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      break;
    case 4:
      goto switchD_0055fbf5_caseD_4;
    }
    pCStack_28->x = 0.0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.0,2.0);
    fVar4 = fStack_18 * fStack_2c + _DAT_02cf5694;
    pCStack_28->y = 0.0;
    pCStack_28->z = fVar4;
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00555d90((CVector3f *)&DAT_02cf5f74);
    _sprintf(acStack_130,"%s @ %g");
    fVar4 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                             (0x02CF5680,(CDemonActor *)0x0,acStack_130,pCStack_28);
    pCStack_28[1].x = fVar4;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
switchD_0055fbf5_caseD_4:
  return;
}
