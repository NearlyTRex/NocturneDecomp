// Name: core_sound.cpp_FUN_0055f6ae
// Address: 0055f6ae
// Address Range: [[0055f6ae, 0055fa60] [0055fa93, 0055fb4e] [0055fb90, 0055fbfb]]
// Convention: unknown
// Signature: uint core_sound_cpp_FUN_0055f6ae(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_sound_cpp_FUN_0055f6ae(void)

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
  fStack_24 = *(float *)&g_CGamePtr->field_0x314;
  if (*(int *)&g_CGamePtr->field_0x264 == 0) {
    if (_DAT_02cf5f84 != *(int *)&g_CDemonSetPtr->field_0x15aeb8) {
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      core_setcolid_cpp_FUN_0053ec70(g_CDemonSetPtr);
      auStack_5c = (byte  [4])_DAT_02cf568c;
      afStack_58[(uint)bVar9 * -2] = *(float *)(&DAT_02cf5690 + (uint)bVar9 * -8);
      afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)(&DAT_02cf5694 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      auStack_68 = auStack_5c;
      afStack_64[1] = afStack_58[1];
      pCVar5 = (CVector3f *)auStack_50;
      afStack_64[0] = afStack_58[0] + _DAT_005d52c3;
      auStack_50._0_4_ = auStack_5c;
      *(float *)(auStack_50 + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
      *(float *)(auStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                        (g_CDemonSetPtr,(CVector3f *)auStack_5c,pCVar5);
      if (iVar3 == 0) {
        PTR_DAT_006045f0 = &DAT_005d5280;
      }
      else {
        PTR_DAT_006045f0 = &DAT_005d527c;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      _DAT_02cf5f84 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
    }
  }
  else {
    PTR_DAT_006045f0 = &DAT_005d5278;
    _DAT_02cf5f84 = -1;
  }
  sound_sndmain_cpp_FUN_00555fd0();
  sound_sndmain_cpp_FUN_00555f00(1);
  sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
  iVar3 = _stricmp(PTR_DAT_006045f0,&DAT_005d5284);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_02cf5f8c);
    fVar10 = 0.4;
  }
  else {
    iVar3 = sound_sndmain_cpp_FUN_00556700(_DAT_02cf5f8c);
    fVar10 = 0.7;
    if (iVar3 == 0) {
      sound_sndmain_cpp_FUN_00555fd0();
      sound_sndmain_cpp_FUN_00555df0(0.4);
      _DAT_02cf5f8c = sound_sndmain_cpp_FUN_00556240();
      sound_sndmain_cpp_FUN_00556050();
    }
  }
  iVar3 = sound_sndmain_cpp_FUN_00556700(_DAT_02cf5f88);
  if (iVar3 == 0) {
    sound_sndmain_cpp_FUN_00555fd0();
    sound_sndmain_cpp_FUN_00555df0(fVar10 * (float)_DAT_005d52c7);
    _DAT_02cf5f88 = sound_sndmain_cpp_FUN_00556240();
    sound_sndmain_cpp_FUN_00556050();
  }
  else {
    iVar3 = _stricmp(PTR_DAT_006045f4,PTR_DAT_006045f0);
    if (iVar3 != 0) {
      sound_sndmain_cpp_FUN_00556ab0(_DAT_02cf5f88);
    }
  }
  sound_sndmain_cpp_FUN_00556050();
  PTR_DAT_006045f4 = PTR_DAT_006045f0;
  _DAT_02cf5f74 = 0.0;
  _DAT_02cf5f78 = 0.0;
  _DAT_02cf5f7c = 30.0;
  pCStack_28 = (CVector3f *)0x0;
  iStack_1c = 0;
  pCVar5 = (CVector3f *)&DAT_02cf5ed4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(iStack_20 + 0x2cf5ee0));
    pCVar2 = pCVar5;
    if (iVar3 != 0) {
      afStack_48[1] = _DAT_02cf5f74 * fStack_24;
      afStack_48[2] = _DAT_02cf5f78 * fStack_24;
      afStack_48[3] = _DAT_02cf5f7c * fStack_24;
      fStack_38 = _DAT_02cf5f74 * fStack_24;
      afStack_48[(uint)bVar9 * -2 + 5] = afStack_48[(uint)bVar9 * -2 + 2];
      afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6] =
           afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3];
      *(float *)pCVar5 = *(float *)pCVar5 + fStack_38;
      *(float *)&pCVar5->field_0x4 = *(float *)&pCVar5->field_0x4 + fStack_34;
      *(float *)&pCVar5->field_0x8 = *(float *)&pCVar5->field_0x8 + fStack_30;
      pCVar2 = pCStack_28;
      if ((float)_DAT_005d52df < ABS(*(float *)(&DAT_02cf5edc + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(iStack_20 + 0x2cf5ee0));
        pCVar2 = pCStack_28;
      }
    }
    pCStack_28 = pCVar2;
    iStack_1c = iStack_1c + 1;
    pCVar5 = (CVector3f *)&pCVar5[1].field_0x4;
  } while (iStack_1c < 10);
  _DAT_02cf5f80 = _DAT_02cf5f80 - fStack_24;
  uVar4 = (uint)(ushort)((ushort)(0.0 < _DAT_02cf5f80) << 8 | (ushort)NAN(_DAT_02cf5f80) << 10 |
                        (ushort)(_DAT_02cf5f80 == 0.0) << 0xe);
  if ((0.0 >= _DAT_02cf5f80) && (pCStack_28 != (CVector3f *)0x0)) {
    _DAT_02cf5f80 = (float)core_actor_cpp_FUN_0040ce40(0x3f800000);
    puVar7 = &DAT_00604818;
    pcVar8 = acStack_cc;
    fStack_18 = _DAT_02cf5f80;
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
      fVar11 = fVar10 * (float)_DAT_005d52d7;
      fStack_2c = 25.0;
      FUN_005a28c0(acStack_cc,"rail?%s.wav",PTR_DAT_006045f0,fVar10,fVar11);
      break;
    case 2:
    case 3:
      fVar11 = fVar10 * (float)_DAT_005d52cf;
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
      goto LAB_0055f97d;
    }
    *(float *)pCStack_28 = 0.0;
    fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0xc0400000);
    fVar10 = fStack_18 * fStack_2c + _DAT_02cf5694;
    *(uint *)&pCStack_28->field_0x4 = 0;
    *(float *)&pCStack_28->field_0x8 = fVar10;
    sound_sndmain_cpp_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(3);
    sound_sndmain_cpp_FUN_00555d90((CVector3f *)&DAT_02cf5f74);
    FUN_005a28c0(acStack_130,"%s @ %g",acStack_cc,(double)fVar11);
    uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                      (0x02CF5680,(CDemonActor *)0x0,acStack_130,pCStack_28);
    *(uint *)(pCStack_28 + 1) = uVar4;
    sound_sndmain_cpp_FUN_00556050();
    return extraout_EAX;
  }
LAB_0055f97d:
  return uVar4;
}
