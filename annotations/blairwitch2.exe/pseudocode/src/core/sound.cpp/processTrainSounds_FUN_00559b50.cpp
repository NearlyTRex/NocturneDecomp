// Name: core_sound.cpp_processTrainSounds_FUN_00559b50
// Address: 00559b50
// Address Range: [[00559b50, 0055a09b]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_processTrainSounds_FUN_00559b50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_processTrainSounds_FUN_00559b50(void)

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
    if (_DAT_0264bb94 != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
      CStack_5c.x = _DAT_0264b29c;
      *(uint *)((int)&CStack_5c + (uint)bVar9 * -8 + 4) =
           *(uint *)(&DAT_0264b2a0 + (uint)bVar9 * -8);
      *(uint *)((int)&CStack_5c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)(&DAT_0264b2a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      fStack_68 = CStack_5c.x;
      afStack_64[1] = CStack_5c.z;
      pCVar5 = &CStack_50;
      afStack_64[0] = CStack_5c.y + _DAT_005ea870;
      CStack_50.x = CStack_5c.x;
      *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                        (g_CDemonSetPtr,&CStack_5c,pCVar5);
      if (iVar3 == 0) {
        PTR_DAT_0061c060 = &DAT_005ea82d;
      }
      else {
        PTR_DAT_0061c060 = &DAT_005ea829;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      _DAT_0264bb94 = g_CDemonSetPtr->selected_camera_index;
    }
  }
  else {
    PTR_DAT_0061c060 = &DAT_005ea825;
    _DAT_0264bb94 = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
  iVar3 = _stricmp(PTR_DAT_0061c060,&DAT_005ea831);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_0264bb9c);
    fStack_138 = 0.4;
  }
  else {
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(_DAT_0264bb9c);
    fStack_138 = 0.7;
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.4);
      _DAT_0264bb9c = sound_sndmain_cpp_startSfx_FUN_005506b0("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    }
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(_DAT_0264bb98);
  if (iVar3 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(fStack_138 * (float)_DAT_005ea874);
    _DAT_0264bb98 = sound_sndmain_cpp_startSfx_FUN_005506b0("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  }
  else {
    iVar3 = _stricmp(PTR_DAT_0061c064,PTR_DAT_0061c060);
    if (iVar3 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_00550f20(_DAT_0264bb98,fStack_138 * (float)_DAT_005ea874);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  PTR_DAT_0061c064 = PTR_DAT_0061c060;
  _DAT_0264bb84 = 0.0;
  _DAT_0264bb88 = 0.0;
  _DAT_0264bb8c = 30.0;
  pCStack_28 = (CVector3f *)0x0;
  iStack_1c = 0;
  pCVar5 = (CVector3f *)&DAT_0264bae4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(*(uint *)(iStack_20 + 0x264baf0));
    pCVar2 = pCVar5;
    if (iVar3 != 0) {
      fStack_44 = _DAT_0264bb84 * fStack_24;
      afStack_40[0] = _DAT_0264bb88 * fStack_24;
      afStack_40[1] = _DAT_0264bb8c * fStack_24;
      afStack_40[2] = _DAT_0264bb84 * fStack_24;
      afStack_40[(uint)bVar9 * -2 + 3] = afStack_40[(uint)bVar9 * -2];
      afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      pCVar5->x = pCVar5->x + afStack_40[2];
      pCVar5->y = pCVar5->y + afStack_40[3];
      pCVar5->z = pCVar5->z + fStack_30;
      pCVar2 = pCStack_28;
      if ((float)_DAT_005ea88c < ABS(*(float *)(&DAT_0264baec + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(iStack_20 + 0x264baf0));
        pCVar2 = pCStack_28;
      }
    }
    pCStack_28 = pCVar2;
    iStack_1c = iStack_1c + 1;
    pCVar5 = (CVector3f *)&pCVar5[1].y;
  } while (iStack_1c < 10);
  _DAT_0264bb90 = _DAT_0264bb90 - fStack_24;
  if ((_DAT_0264bb90 <= 0.0) && (pCStack_28 != (CVector3f *)0x0)) {
    _DAT_0264bb90 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,5.0);
    puVar7 = &DAT_0061c288;
    pcVar8 = acStack_cc;
    fStack_18 = _DAT_0264bb90;
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
      fStack_134 = fStack_138 * (float)_DAT_005ea884;
      fStack_2c = 25.0;
      _sprintf(acStack_cc,"rail?%s.wav");
      break;
    case 2:
    case 3:
      fStack_134 = fStack_138 * (float)_DAT_005ea87c;
      pcVar6 = &DAT_005ea85b;
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
      goto switchD_0055a095_caseD_4;
    }
    pCStack_28->x = 0.0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-3.0,2.0);
    fVar4 = fStack_18 * fStack_2c + _DAT_0264b2a4;
    pCStack_28->y = 0.0;
    pCStack_28->z = fVar4;
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210((CVector3f *)&DAT_0264bb84);
    _sprintf(acStack_130,"%s @ %g");
    fVar4 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                             (0x0264B290,(CDemonActor *)0x0,acStack_130,pCStack_28);
    pCStack_28[1].x = fVar4;
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
switchD_0055a095_caseD_4:
  return;
}
