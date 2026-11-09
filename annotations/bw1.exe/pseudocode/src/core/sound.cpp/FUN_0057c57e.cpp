// Name: core_sound.cpp_FUN_0057c57e
// Address: 0057c57e
// Address Range: [[0057c57e, 0057c930] [0057c963, 0057ca1e] [0057ca60, 0057cacb]]
// Convention: unknown
// Signature: uint core_sound_cpp_FUN_0057c57e(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_sound_cpp_FUN_0057c57e(void)

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
  fStack_24 = *(float *)&g_CGamePtr->field_0x294;
  if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    if (_DAT_02c83364 != *(int *)&g_CDemonSetPtr->field_0x15aeb8) {
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(g_CDemonSetPtr);
      auStack_5c = (byte  [4])_DAT_02c82a6c;
      afStack_58[(uint)bVar9 * -2] = *(float *)(&DAT_02c82a70 + (uint)bVar9 * -8);
      afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)(&DAT_02c82a74 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      auStack_68 = auStack_5c;
      afStack_64[1] = afStack_58[1];
      pCVar5 = (CVector3f *)auStack_50;
      afStack_64[0] = afStack_58[0] + _DAT_005f5a6a;
      auStack_50._0_4_ = auStack_5c;
      *(float *)(auStack_50 + (uint)bVar9 * -8 + 4) = afStack_64[(uint)bVar9 * -2];
      *(float *)(auStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                        (g_CDemonSetPtr,(CVector3f *)auStack_5c,pCVar5);
      if (iVar3 == 0) {
        PTR_DAT_006236b0 = &DAT_005f5a27;
      }
      else {
        PTR_DAT_006236b0 = &DAT_005f5a23;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      _DAT_02c83364 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
    }
  }
  else {
    PTR_DAT_006236b0 = &DAT_005f5a1f;
    _DAT_02c83364 = -1;
  }
  sound_sndmain_cpp_FUN_00572ac0();
  sound_sndmain_cpp_FUN_005729f0(1);
  sound_sndmain_cpp_FUN_00572980(3);
  iVar3 = _stricmp(PTR_DAT_006236b0,&DAT_005f5a2b);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(_DAT_02c8336c);
    fVar10 = 0.4;
  }
  else {
    iVar3 = sound_sndmain_cpp_FUN_005735a0(_DAT_02c8336c);
    fVar10 = 0.7;
    if (iVar3 == 0) {
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_005728e0(0.4);
      _DAT_02c8336c = sound_sndmain_cpp_startSfx_FUN_00572d20("trainext.wav");
      sound_sndmain_cpp_FUN_00572b40();
    }
  }
  iVar3 = sound_sndmain_cpp_FUN_005735a0(_DAT_02c83368);
  if (iVar3 == 0) {
    sound_sndmain_cpp_FUN_00572ac0();
    sound_sndmain_cpp_FUN_005728e0(fVar10 * (float)_DAT_005f5a6e);
    _DAT_02c83368 = sound_sndmain_cpp_startSfx_FUN_00572d20("railnoiz.wav");
    sound_sndmain_cpp_FUN_00572b40();
  }
  else {
    iVar3 = _stricmp(PTR_DAT_006236b4,PTR_DAT_006236b0);
    if (iVar3 != 0) {
      sound_sndmain_cpp_FUN_00573950(_DAT_02c83368);
    }
  }
  sound_sndmain_cpp_FUN_00572b40();
  PTR_DAT_006236b4 = PTR_DAT_006236b0;
  _DAT_02c83354 = 0.0;
  _DAT_02c83358 = 0.0;
  _DAT_02c8335c = 30.0;
  pCStack_28 = (CVector3f *)0x0;
  iStack_1c = 0;
  pCVar5 = (CVector3f *)&DAT_02c832b4;
  do {
    iStack_20 = iStack_1c * 0x10;
    iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(iStack_20 + 0x2c832c0));
    pCVar2 = pCVar5;
    if (iVar3 != 0) {
      afStack_48[1] = _DAT_02c83354 * fStack_24;
      afStack_48[2] = _DAT_02c83358 * fStack_24;
      afStack_48[3] = _DAT_02c8335c * fStack_24;
      fStack_38 = _DAT_02c83354 * fStack_24;
      afStack_48[(uint)bVar9 * -2 + 5] = afStack_48[(uint)bVar9 * -2 + 2];
      afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 6] =
           afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 3];
      *(float *)pCVar5 = *(float *)pCVar5 + fStack_38;
      *(float *)&pCVar5->field_0x4 = *(float *)&pCVar5->field_0x4 + fStack_34;
      *(float *)&pCVar5->field_0x8 = *(float *)&pCVar5->field_0x8 + fStack_30;
      pCVar2 = pCStack_28;
      if ((float)_DAT_005f5a86 < ABS(*(float *)(&DAT_02c832bc + iStack_20))) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(iStack_20 + 0x2c832c0));
        pCVar2 = pCStack_28;
      }
    }
    pCStack_28 = pCVar2;
    iStack_1c = iStack_1c + 1;
    pCVar5 = (CVector3f *)&pCVar5[1].field_0x4;
  } while (iStack_1c < 10);
  _DAT_02c83360 = _DAT_02c83360 - fStack_24;
  uVar4 = (uint)(ushort)((ushort)(0.0 < _DAT_02c83360) << 8 | (ushort)NAN(_DAT_02c83360) << 10 |
                        (ushort)(_DAT_02c83360 == 0.0) << 0xe);
  if ((0.0 >= _DAT_02c83360) && (pCStack_28 != (CVector3f *)0x0)) {
    _DAT_02c83360 = (float)core_actor_cpp_FUN_0040cc00(0x3f800000);
    puVar7 = &DAT_006238d8;
    pcVar8 = acStack_cc;
    fStack_18 = _DAT_02c83360;
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
      fVar11 = fVar10 * (float)_DAT_005f5a7e;
      fStack_2c = 25.0;
      FUN_005bfb40(acStack_cc,"rail?%s.wav",PTR_DAT_006236b0,fVar10,fVar11);
      break;
    case 2:
    case 3:
      fVar11 = fVar10 * (float)_DAT_005f5a76;
      pcVar6 = &DAT_005f5a55;
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
      goto LAB_0057c84d;
    }
    *(float *)pCStack_28 = 0.0;
    fStack_18 = (float)core_actor_cpp_FUN_0040cc00(0xc0400000);
    fVar10 = fStack_18 * fStack_2c + _DAT_02c82a74;
    *(uint *)&pCStack_28->field_0x4 = 0;
    *(float *)&pCStack_28->field_0x8 = fVar10;
    sound_sndmain_cpp_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572980(3);
    sound_sndmain_cpp_FUN_00572880((CVector3f *)&DAT_02c83354);
    FUN_005bfb40(acStack_130,"%s @ %g",acStack_cc,(double)fVar11);
    uVar4 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                      (0x02C82A60,(CDemonActor *)0x0,acStack_130,pCStack_28);
    *(uint *)(pCStack_28 + 1) = uVar4;
    sound_sndmain_cpp_FUN_00572b40();
    return extraout_EAX;
  }
LAB_0057c84d:
  return uVar4;
}
