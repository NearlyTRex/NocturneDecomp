// Name: core_sound.cpp_FUN_00559b4e
// Address: 00559b4e
// Address Range: [[00559b4e, 00559f00] [00559f33, 00559fee] [0055a030, 0055a09b]]
// Convention: unknown
// Signature: uint core_sound_cpp_FUN_00559b4e(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_sound_cpp_FUN_00559b4e(void)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint extraout_EAX;
  uint uVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  float afStackY_1050 [961];
  float fVar10;
  float fVar11;
  char acStack_130 [100];
  char acStack_cc [100];
  byte auStack_68 [4];
  float afStack_64 [2];
  byte auStack_5c [4];
  float afStack_58 [2];
  byte auStack_50 [8];
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  fStack_24 = *(float *)&g_CGamePtr->field_0x284;
  if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    if (_DAT_0264bb94 != *(int *)&g_CDemonSetPtr->field_0x15aeb8) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
      auStack_5c = (byte  [4])_DAT_0264b29c;
      afStack_58[(uint)bVar9 * -2] = *(float *)(&DAT_0264b2a0 + (uint)bVar9 * -8);
      afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)(&DAT_0264b2a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      auStack_68 = auStack_5c;
      afStack_64[1] = afStack_58[1];
      pCVar5 = (CVector3f *)auStack_50;
      afStack_64[0] = afStack_58[0] + _DAT_005ea870;
      auStack_50._0_4_ = auStack_5c;
      *(float *)(auStack_50 + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
      *(float *)(auStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                        (g_CDemonSetPtr,(CVector3f *)auStack_5c,pCVar5);
      if (iVar3 == 0) {
        PTR_DAT_0061c060 = &DAT_005ea82d;
      }
      else {
        PTR_DAT_0061c060 = &DAT_005ea829;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      _DAT_0264bb94 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
    }
  }
  else {
    PTR_DAT_0061c060 = &DAT_005ea825;
    _DAT_0264bb94 = -1;
  }
  sound_sndmain_cpp_FUN_00550450();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
  iVar3 = _stricmp(PTR_DAT_0061c060,&DAT_005ea831);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(_DAT_0264bb9c);
    fVar10 = 0.4;
  }
  else {
    iVar3 = sound_sndmain_cpp_FUN_00550b70(_DAT_0264bb9c);
    fVar10 = 0.7;
    if (iVar3 == 0) {
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_FUN_00550270(0.4);
      _DAT_0264bb9c = sound_sndmain_cpp_FUN_005506b0();
      sound_sndmain_cpp_FUN_005504d0();
    }
  }
  iVar3 = sound_sndmain_cpp_FUN_00550b70(_DAT_0264bb98);
  if (iVar3 == 0) {
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_FUN_00550270(fVar10 * (float)_DAT_005ea874);
    _DAT_0264bb98 = sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_FUN_005504d0();
  }
  else {
    iVar3 = _stricmp(PTR_DAT_0061c064,PTR_DAT_0061c060);
    if (iVar3 != 0) {
      sound_sndmain_cpp_FUN_00550f20(_DAT_0264bb98);
    }
  }
  sound_sndmain_cpp_FUN_005504d0();
  PTR_DAT_0061c064 = PTR_DAT_0061c060;
  _DAT_0264bb84 = 0.0;
  _DAT_0264bb88 = 0.0;
  _DAT_0264bb8c = 30.0;
  pCStack_28 = (CVector3f *)0x0;
  iStack_1c = 0;
  pCVar5 = (CVector3f *)&DAT_0264bae4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(iStack_20 + 0x264baf0));
    pCVar2 = pCVar5;
    if (iVar3 != 0) {
      afStack_48[1] = _DAT_0264bb84 * fStack_24;
      afStack_48[2] = _DAT_0264bb88 * fStack_24;
      afStack_48[3] = _DAT_0264bb8c * fStack_24;
      fStack_38 = _DAT_0264bb84 * fStack_24;
      afStack_48[(uint)bVar9 * -2 + 5] = afStack_48[(uint)bVar9 * -2 + 2];
      afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6] =
           afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3];
      *(float *)pCVar5 = *(float *)pCVar5 + fStack_38;
      *(float *)&pCVar5->field_0x4 = *(float *)&pCVar5->field_0x4 + fStack_34;
      *(float *)&pCVar5->field_0x8 = *(float *)&pCVar5->field_0x8 + fStack_30;
      pCVar2 = pCStack_28;
      if ((float)_DAT_005ea88c < ABS(*(float *)(&DAT_0264baec + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(iStack_20 + 0x264baf0));
        pCVar2 = pCStack_28;
      }
    }
    pCStack_28 = pCVar2;
    iStack_1c = iStack_1c + 1;
    pCVar5 = (CVector3f *)&pCVar5[1].field_0x4;
  } while (iStack_1c < 10);
  _DAT_0264bb90 = _DAT_0264bb90 - fStack_24;
  uVar4 = (uint)(ushort)((ushort)(0.0 < _DAT_0264bb90) << 8 | (ushort)NAN(_DAT_0264bb90) << 10 |
                        (ushort)(_DAT_0264bb90 == 0.0) << 0xe);
  if ((0.0 >= _DAT_0264bb90) && (pCStack_28 != (CVector3f *)0x0)) {
    _DAT_0264bb90 = (float)core_actor_cpp_FUN_0040cf60(0x3f800000);
    puVar7 = &DAT_0061c288;
    pcVar8 = acStack_cc;
    fStack_18 = _DAT_0264bb90;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    fStack_2c = 20.0;
    fVar11 = 1.0;
    iVar3 = rand();
    uVar4 = iVar3 / 5;
    switch(iVar3 % 5) {
    case 0:
    case 1:
      fVar11 = fVar10 * (float)_DAT_005ea884;
      fStack_2c = 25.0;
      FUN_005b7790(acStack_cc,"rail?%s.wav",PTR_DAT_0061c060,fVar10,fVar11);
      break;
    case 2:
    case 3:
      fVar11 = fVar10 * (float)_DAT_005ea87c;
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
      goto LAB_00559e1d;
    }
    *(float *)pCStack_28 = 0.0;
    fStack_18 = (float)core_actor_cpp_FUN_0040cf60(0xc0400000);
    fVar10 = fStack_18 * fStack_2c + _DAT_0264b2a4;
    *(uint *)&pCStack_28->field_0x4 = 0;
    *(float *)&pCStack_28->field_0x8 = fVar10;
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00550310(3);
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210((CVector3f *)&DAT_0264bb84);
    FUN_005b7790(acStack_130,"%s @ %g",acStack_cc,(double)fVar11);
    uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                      (0x0264B290,(CDemonActor *)0x0,acStack_130,pCStack_28);
    *(uint *)(pCStack_28 + 1) = uVar4;
    sound_sndmain_cpp_FUN_005504d0();
    return extraout_EAX;
  }
LAB_00559e1d:
  return uVar4;
}
