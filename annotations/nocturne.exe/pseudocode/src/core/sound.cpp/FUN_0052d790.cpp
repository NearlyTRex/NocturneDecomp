// Name: core_sound.cpp_FUN_0052d790
// Address: 0052d790
// Address Range: [[0052d790, 0052db19] [0052db4b, 0052dc06] [0052dc48, 0052dcb3]]
// Convention: unknown
// Signature: int core_sound_cpp_FUN_0052d790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_sound_cpp_FUN_0052d790(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort extraout_var;
  ushort uVar4;
  float *pfVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  char acStack_118 [100];
  byte auStack_b4 [100];
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  fStack_18 = *(float *)(0x01C775EC + 0x264);
  if (*(int *)(0x01C775EC + 0x240) == 0) {
    if (_DAT_02dc9d54 != *(int *)(0x01E57284 + 0x15aabc)) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750();
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0();
      uStack_50 = _DAT_02dc945c;
      fStack_4c = _DAT_02dc9460;
      fStack_48 = _DAT_02dc9464;
      uStack_38 = 0;
      uStack_44 = _DAT_02dc945c;
      uStack_34 = 0x41a00000;
      fStack_3c = _DAT_02dc9464;
      uStack_30 = 0;
      fStack_40 = _DAT_02dc9460 + 20.0f;
      iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                        (0x01E57284,&uStack_50,&uStack_44);
      if (iVar2 == 0) {
        PTR_s_int_005bed60 = "ext";
      }
      else {
        PTR_s_int_005bed60 = "int";
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00511750();
      _DAT_02dc9d54 = *(int *)(0x01E57284 + 0x15aabc);
    }
  }
  else {
    PTR_s_int_005bed60 = "ext";
    _DAT_02dc9d54 = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxFlags_FUN_00526240();
  sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0();
  iVar2 = _stricmp(PTR_s_int_005bed60,"int");
  if (iVar2 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230();
    fVar10 = 0.4;
  }
  else {
    fVar10 = 0.7;
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
    if (iVar2 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
      _DAT_02dc9d5c = sound_sndmain_cpp_startSfx_FUN_005265a0();
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
  if (iVar2 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
    _DAT_02dc9d58 = sound_sndmain_cpp_startSfx_FUN_005265a0();
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  else {
    iVar2 = _stricmp(PTR_s_x_005bed64,PTR_s_int_005bed60);
    if (iVar2 != 0) {
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(_DAT_02dc9d58,fVar10 * (float)1.5);
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  pfVar5 = (float *)&DAT_02dc9ca4;
  iVar2 = 0;
  PTR_s_x_005bed64 = PTR_s_int_005bed60;
  _DAT_02dc9d44 = 0.0;
  _DAT_02dc9d48 = 0.0;
  pfStack_1c = (float *)0x0;
  _DAT_02dc9d4c = 30.0;
  do {
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
    if (iVar3 == 0) {
      uVar4 = 0;
      pfStack_1c = pfVar5;
    }
    else {
      fStack_2c = _DAT_02dc9d44 * fStack_18;
      fStack_28 = _DAT_02dc9d48 * fStack_18;
      fStack_24 = _DAT_02dc9d4c * fStack_18;
      *pfVar5 = *pfVar5 + fStack_2c;
      pfVar5[1] = pfVar5[1] + fStack_28;
      pfVar5[2] = pfVar5[2] + fStack_24;
      uVar4 = (ushort)((uint)iVar3 >> 0x10);
      if ((float)510 < ABS(*(float *)(&DAT_02dc9cac + iVar2 * 0x10))) {
        sound_sndmain_cpp_killSfx_FUN_00527230();
        uVar4 = extraout_var;
      }
    }
    iVar2 = iVar2 + 1;
    pfVar5 = pfVar5 + 4;
  } while (iVar2 < 10);
  _DAT_02dc9d50 = _DAT_02dc9d50 - fStack_18;
  iVar2 = CONCAT22(uVar4,(ushort)(0.0 < _DAT_02dc9d50) << 8 | (ushort)NAN(_DAT_02dc9d50) << 10 |
                         (ushort)(_DAT_02dc9d50 == 0.0) << 0xe);
  if ((0.0 >= _DAT_02dc9d50) && (pfStack_1c != (float *)0x0)) {
    _DAT_02dc9d50 =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f800000,0x40a00000);
    fStack_20 = 20.0;
    fVar11 = 1.0;
    puVar7 = &DAT_005bef88;
    pcVar8 = acStack_118;
    fStack_14 = _DAT_02dc9d50;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    iVar3 = rand(fVar10,0x3f800000);
    iVar2 = iVar3 / 5;
    switch(iVar3 % 5) {
    case 0:
    case 1:
      fVar11 = fVar10 * (float)0.59999999999999998;
      fStack_20 = 25.0;
      _sprintf(acStack_118,"rail?%s.wav",PTR_s_int_005bed60,fVar10,fVar11);
      break;
    case 2:
    case 3:
      fVar11 = fVar10 * (float)0.80000000000000004;
      pcVar8 = acStack_118;
      fStack_20 = 20.0;
      pcVar6 = "bump?.wav";
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
      goto LAB_0052da35;
    }
    *pfStack_1c = 0.0;
    fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0400000,0x40000000);
    fVar10 = fStack_14 * fStack_20 + _DAT_02dc9464;
    pfStack_1c[1] = 0.0;
    pfStack_1c[2] = fVar10;
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0();
    sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090();
    _sprintf(auStack_b4,"%s @ %g",acStack_118,(double)fVar11);
    fVar10 = (float)core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                              (0x02DC9450,0,auStack_b4,pfStack_1c);
    pfStack_1c[3] = fVar10;
    iVar2 = sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return iVar2;
  }
LAB_0052da35:
  return iVar2;
}
