// Name: sound_sndmain.cpp_getSampleInfo_FUN_005279e0
// Address: 005279e0
// Address Range: [[005279e0, 00527c27]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005279e0(CSfxSample *out_sample)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005279e0(CSfxSample *out_sample)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_114;
  byte local_113 [255];
  long local_14;
  
  bVar6 = 0;
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar4 = 0;
  do {
    if (0 < *(int *)(iVar4 + 0x2dc1fec)) {
      iVar2 = _stricmp(&DAT_02dc1edc + iVar4,(char *)out_sample);
      if (iVar2 == 0) {
        pcVar5 = &DAT_02dc1edc + iVar4;
        for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)(out_sample->sample_info).name = *(uint *)pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
          out_sample = (CSfxSample *)((int)out_sample + (uint)bVar6 * -8 + 4);
        }
        sound_sndmain_cpp_unlockSound_FUN_00528890();
        return 1;
      }
    }
    iVar4 = iVar4 + 0x168;
  } while (iVar4 < 0x5a00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  iVar4 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",(char *)out_sample);
  if (0 < iVar4) {
    splitpath
              ((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&local_114);
    if (local_114 == '.') {
      uVar3 = 0xffffffff;
      pcVar5 = &local_114;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      memmove(&local_114,local_113,~uVar3 - 1);
    }
    iVar4 = _stricmp(&local_114,"wav");
    if (iVar4 != 0) {
      iVar4 = _stricmp(&local_114,"mp3");
      if (iVar4 == 0) {
        if ((DAT_02dbd348 & 1) == 0) {
          DAT_02dbd348 = DAT_02dbd348 | 1;
          sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90((CMP3Decoder *)&DAT_02db4d18);
          _atexit(&g_WatcomStaticDestructorNode_005bea44);
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(&DAT_02db4d18,out_sample);
        (out_sample->sample_info).bit_depth = 0x10;
        (out_sample->sample_info).num_channels = _DAT_02db4e1c;
        iVar4 = _DAT_02db4e18;
        (out_sample->sample_info).sample_count = -1;
        (out_sample->sample_info).sample_rate = iVar4;
        sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260((CMP3Decoder *)&DAT_02db4d18);
      }
      else {
        PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        INT_01cc4804 = 0x1084;
        core_main_c_FUN_004c8440("Unknown sample file format extension: %s",out_sample);
      }
LAB_00527b18:
      sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(out_sample);
      if (0 < (out_sample->sample_info).sample_count) {
        return 1;
      }
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x108f;
      core_main_c_FUN_004c8440("getSampleInfo - can't determine length for %s",out_sample);
      return 1;
    }
    file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                            ("sound",(char *)out_sample,"rb");
    if (file_handle != (_FILE *)0x0) {
      local_14 = _ftell(file_handle);
      iVar4 = sound_sndmain_cpp_parseWavFile_FUN_00521830(file_handle,&local_14,out_sample);
      if (iVar4 != 0) {
        _fclose(file_handle);
        goto LAB_00527b18;
      }
    }
    if (file_handle != (_FILE *)0x0) {
      _fclose(file_handle);
      return 0;
    }
  }
  return 0;
}
