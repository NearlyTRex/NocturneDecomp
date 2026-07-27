// Name: sound_sndmain.cpp_getSampleInfo_FUN_005279e0
// Address: 005279e0
// Address Range: [[005279e0, 00527c27]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005279e0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005279e0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char local_114;
  byte local_113 [255];
  uint local_14;
  
  bVar8 = 0;
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar5 = 0;
  do {
    if (0 < *(int *)(iVar5 + 0x2dc1fec)) {
      iVar3 = _stricmp((uint *)(iVar5 + 0x2dc1edc),param_1);
      if (iVar3 == 0) {
        puVar6 = (uint *)(iVar5 + 0x2dc1edc);
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          param_1 = param_1 + (uint)bVar8 * -2 + 1;
        }
        sound_sndmain_cpp_unlockSound_FUN_00528890();
        return 1;
      }
    }
    iVar5 = iVar5 + 0x168;
  } while (iVar5 < 0x5a00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",param_1);
  if (0 < iVar5) {
    splitpath(param_1,0,0,0,&local_114);
    if (local_114 == '.') {
      uVar4 = 0xffffffff;
      pcVar7 = &local_114;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      memmove(&local_114,local_113,~uVar4 - 1);
    }
    iVar5 = _stricmp(&local_114,"wav");
    if (iVar5 != 0) {
      iVar5 = _stricmp(&local_114,"mp3");
      if (iVar5 == 0) {
        if ((DAT_02dbd348 & 1) == 0) {
          DAT_02dbd348 = DAT_02dbd348 | 1;
          sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(0x2db4d18);
          FUN_00564bb0(&DAT_005bea44);
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(0x2db4d18,param_1);
        param_1[0x41] = 0x10;
        param_1[0x42] = _DAT_02db4e1c;
        uVar2 = _DAT_02db4e18;
        param_1[0x44] = 0xffffffff;
        param_1[0x43] = uVar2;
        sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(0x2db4d18);
      }
      else {
        PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        INT_01cc4804 = 0x1084;
        core_main_c_FUN_004c8440("Unknown sample file format extension: %s",param_1);
      }
LAB_00527b18:
      sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(param_1);
      if (0 < (int)param_1[0x44]) {
        return 1;
      }
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x108f;
      core_main_c_FUN_004c8440("getSampleInfo - can't determine length for %s",param_1);
      return 1;
    }
    iVar5 = engine_dosio_cpp_getFile_FUN_00456a60("sound",param_1,"rb");
    if (iVar5 != 0) {
      local_14 = _ftell(iVar5);
      iVar3 = sound_sndmain_cpp_parseWavFile_FUN_00521830(iVar5,&local_14,param_1);
      if (iVar3 != 0) {
        _fclose(iVar5);
        goto LAB_00527b18;
      }
    }
    if (iVar5 != 0) {
      _fclose(iVar5);
      return 0;
    }
  }
  return 0;
}
