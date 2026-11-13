// Name: core_sound.cpp_FUN_0057c580
// Address: 0057c580
// Address Range: [[0057c580, 0057c930] [0057c963, 0057ca1e] [0057ca60, 0057cacb]]
// Convention: unknown
// Signature: uint core_sound_cpp_FUN_0057c580(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_sound_cpp_FUN_0057c580(void)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  uint extraout_EAX;
  uint uVar5;
  CVector3f *pCVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
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
  
  bVar10 = 0;
  fStack_24 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->goggles_active == 0) {
    if (_DAT_02c83364 != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(g_CDemonSetPtr);
      CStack_5c.x = _DAT_02c82a6c;
      *(uint *)((int)&CStack_5c + (uint)bVar10 * -8 + 4) =
           *(uint *)(&DAT_02c82a70 + (uint)bVar10 * -8);
      *(uint *)((int)&CStack_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)(&DAT_02c82a74 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      fStack_68 = CStack_5c.x;
      afStack_64[1] = CStack_5c.z;
      pCVar6 = &CStack_50;
      afStack_64[0] = CStack_5c.y + _DAT_005f5a6a;
      CStack_50.x = CStack_5c.x;
      *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                        (g_CDemonSetPtr,&CStack_5c,pCVar6);
      if (iVar3 == 0) {
        PTR_DAT_006236b0 = &DAT_005f5a27;
      }
      else {
        PTR_DAT_006236b0 = &DAT_005f5a23;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      _DAT_02c83364 = g_CDemonSetPtr->selected_camera_index;
    }
  }
  else {
    PTR_DAT_006236b0 = &DAT_005f5a1f;
    _DAT_02c83364 = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_setNextSfxFlags_FUN_005729f0(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(3);
  iVar3 = _stricmp(PTR_DAT_006236b0,&DAT_005f5a2b);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(_DAT_02c8336c);
    fStack_138 = 0.4;
  }
  else {
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(_DAT_02c8336c);
    fStack_138 = 0.7;
    if (iVar3 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(0.4);
      _DAT_02c8336c = sound_sndmain_cpp_startSfx_FUN_00572d20("trainext.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    }
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(_DAT_02c83368);
  if (iVar3 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(fStack_138 * (float)_DAT_005f5a6e);
    _DAT_02c83368 = sound_sndmain_cpp_startSfx_FUN_00572d20("railnoiz.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  }
  else {
    iVar3 = _stricmp(PTR_DAT_006236b4,PTR_DAT_006236b0);
    if (iVar3 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_00573950(_DAT_02c83368,fStack_138 * (float)_DAT_005f5a6e);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  PTR_DAT_006236b4 = PTR_DAT_006236b0;
  _DAT_02c83354 = 0.0;
  _DAT_02c83358 = 0.0;
  _DAT_02c8335c = 30.0;
  pCStack_28 = (CVector3f *)0x0;
  iStack_1c = 0;
  pCVar6 = (CVector3f *)&DAT_02c832b4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(*(uint *)(iStack_20 + 0x2c832c0));
    pCVar2 = pCVar6;
    if (iVar3 != 0) {
      fStack_44 = _DAT_02c83354 * fStack_24;
      afStack_40[0] = _DAT_02c83358 * fStack_24;
      afStack_40[1] = _DAT_02c8335c * fStack_24;
      afStack_40[2] = _DAT_02c83354 * fStack_24;
      afStack_40[(uint)bVar10 * -2 + 3] = afStack_40[(uint)bVar10 * -2];
      afStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      pCVar6->x = pCVar6->x + afStack_40[2];
      pCVar6->y = pCVar6->y + afStack_40[3];
      pCVar6->z = pCVar6->z + fStack_30;
      pCVar2 = pCStack_28;
      if ((float)_DAT_005f5a86 < ABS(*(float *)(&DAT_02c832bc + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(iStack_20 + 0x2c832c0));
        pCVar2 = pCStack_28;
      }
    }
    pCStack_28 = pCVar2;
    iStack_1c = iStack_1c + 1;
    pCVar6 = (CVector3f *)&pCVar6[1].y;
  } while (iStack_1c < 10);
  _DAT_02c83360 = _DAT_02c83360 - fStack_24;
  uVar5 = (uint)(ushort)((ushort)(0.0 < _DAT_02c83360) << 8 | (ushort)NAN(_DAT_02c83360) << 10 |
                        (ushort)(_DAT_02c83360 == 0.0) << 0xe);
  if ((0.0 >= _DAT_02c83360) && (pCStack_28 != (CVector3f *)0x0)) {
    _DAT_02c83360 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,5.0);
    puVar8 = &DAT_006238d8;
    pcVar9 = acStack_cc;
    fStack_18 = _DAT_02c83360;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
    }
    fStack_2c = 20.0;
    fStack_134 = 1.0;
    iVar3 = rand();
    uVar5 = iVar3 / 5;
    switch(iVar3 % 5) {
    case 0:
    case 1:
      fStack_134 = fStack_138 * (float)dRam005f5a7e;
      fStack_2c = 25.0;
      _sprintf(acStack_cc,"rail?%s.wav");
      break;
    case 2:
    case 3:
      fStack_134 = fStack_138 * (float)dRam005f5a76;
      pcVar7 = &DAT_005f5a55;
      pcVar9 = acStack_cc;
      fStack_2c = 20.0;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      break;
    case 4:
      goto LAB_0057c84d;
    }
    pCStack_28->x = 0.0;
    fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.0,2.0);
    fVar4 = fStack_18 * fStack_2c + _DAT_02c82a74;
    pCStack_28->y = 0.0;
    pCStack_28->z = fVar4;
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00572980(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00572880((CVector3f *)&DAT_02c83354);
    _sprintf(acStack_130,"%s @ %g");
    fVar4 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                             (0x02C82A60,(CDemonActor *)0x0,acStack_130,pCStack_28);
    pCStack_28[1].x = fVar4;
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return extraout_EAX;
  }
LAB_0057c84d:
  return uVar5;
}
