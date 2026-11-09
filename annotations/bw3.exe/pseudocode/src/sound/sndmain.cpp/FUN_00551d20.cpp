// Name: sound_sndmain.cpp_FUN_00551d20
// Address: 00551d20
// Address Range: [[00551d20, 005522c4]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_00551d20(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_00551d20(char *filename)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  short *output_buffer;
  uint uVar4;
  CSfxSample *pCVar5;
  int iVar6;
  CSfxSample *pCVar7;
  bool bVar8;
  byte bVar9;
  char *pcVar10;
  char local_23c;
  byte local_23b [511];
  CInStreamFile local_3c;
  
  bVar9 = 0;
  pCVar5 = g_SfxSamples;
  iVar6 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar5,filename);
    if (iVar2 == 0) goto LAB_00551d58;
    iVar6 = iVar6 + 1;
    pCVar5 = pCVar5 + 1;
  } while (iVar6 < 0x40);
  pCVar5 = (CSfxSample *)0x0;
LAB_00551d58:
  if (pCVar5 != (CSfxSample *)0x0) {
    return pCVar5;
  }
  iVar6 = 0;
  do {
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    if ((((*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x150 == 0) &&
         (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x154 == 0)) &&
        (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x15c == 0)) &&
       (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x1ac == 0)) {
      pCVar5 = g_SfxSamples + _DAT_02cebc20;
      bVar8 = pCVar5 == (CSfxSample *)0x0;
      goto LAB_00551d88;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  pCVar5 = (CSfxSample *)0x0;
  bVar8 = true;
LAB_00551d88:
  if (!bVar8) {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(pCVar5);
    if ((DAT_02cdafb0 & 1) == 0) {
      DAT_02cdafb0 = DAT_02cdafb0 | 1;
      sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(&g_CMP3DecoderInstance);
      _atexit(&g_CMP3DecoderDestructorNode1);
    }
    iVar6 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",filename);
    pcVar10 = filename;
    pCVar7 = pCVar5;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar10;
        *(char *)pCVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pCVar7->field_0x1 = cVar1;
        pcVar10 = pcVar10 + 2;
        pCVar7 = (CSfxSample *)&pCVar7->field_0x2;
      } while (cVar1 != '\0');
      engine_dosio_cpp_FUN_00465e50(filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_23c);
      if (local_23c == '.') {
        uVar4 = 0xffffffff;
        pcVar10 = &local_23c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_23c,local_23b,~uVar4 - 1);
      }
      iVar6 = _stricmp(&local_23c,&DAT_005d2895);
      if (iVar6 == 0) {
        unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_3c);
        iVar6 = support_trstream_cpp_FUN_00573fc0(&local_3c,"sound",filename,1);
        if (iVar6 == 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x36d;
          core_main_c_FUN_004e4330("Can't open %s",filename);
        }
        *(uint *)&pCVar5->field_0x178 = 0;
        iVar6 = sound_sndmain_cpp_FUN_00551000(&local_3c,&pCVar5->field_0x178,pCVar5);
        if (iVar6 != 0) {
          sound_sndmain_cpp_FUN_00551620(pCVar5);
          *(uint *)&pCVar5->field_0x150 = 0;
          *(uint *)&pCVar5->field_0x154 = 0;
          *(uint *)&pCVar5->field_0x158 = 0;
          *(uint *)&pCVar5->field_0x15c = 0;
          *(uint *)&pCVar5->field_0x160 = 0xffffffff;
          uVar3 = *(uint *)&pCVar5->field_0x110;
          *(uint *)&pCVar5->field_0x164 = uVar3;
          *(uint *)&pCVar5->field_0x16c = uVar3;
          *(uint *)&pCVar5->field_0x170 = uVar3;
          uVar3 = sound_sndmain_cpp_FUN_00555900(pCVar5,uVar3);
          *(uint *)&pCVar5->field_0x168 = uVar3;
          iVar6 = sound_sndmain_cpp_FUN_005533b0(pCVar5);
          if (iVar6 != 0) {
            unkafter_turret_cpp_FUN_00573cf0(&local_3c,*(uint *)&pCVar5->field_0x178,0);
            iVar6 = sound_sndmain_cpp_FUN_00553660(pCVar5,0,*(uint *)&pCVar5->field_0x110);
            if (iVar6 == 0) {
              pcVar10 = "Failed to lock sample %s\n";
            }
            else {
              iVar2 = sound_sndmain_cpp_FUN_00555900(pCVar5,*(uint *)&pCVar5->field_0x110);
              iVar6 = unkafter_turret_cpp_FUN_00573c00(&local_3c,iVar6,iVar2);
              if (iVar6 == iVar2) {
                unkafter_turret_cpp_FUN_00573db0(&local_3c);
                if ((*(int *)&pCVar5->field_0x104 == 0x10) &&
                   (iVar6 = 0, 0 < *(int *)&pCVar5->field_0x110)) {
                  do {
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)&pCVar5->field_0x110);
                }
                sound_sndmain_cpp_FUN_00553760(pCVar5);
                unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
                goto LAB_005520db;
              }
              pcVar10 = "Error reading file data for %s\n";
            }
            sound_sndmain_cpp_FUN_0055a560(pcVar10,filename);
          }
        }
        unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
      }
      else {
        iVar6 = _stricmp(&local_23c,&DAT_005d28fc);
        if (iVar6 != 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x40f;
          core_main_c_FUN_004e4330("Unknown sample file format extension: %s",filename);
LAB_005520db:
          FUN_005a28c0(&local_23c,"SOUND: Loaded sample %s\n",filename);
          wincore_winrun_cpp_FUN_00581c70(&local_23c);
          return pCVar5;
        }
        sound_mp3_cpp_FUN_005027b0(&g_CMP3DecoderInstance,filename);
        *(uint *)&pCVar5->field_0x104 = 0x10;
        *(uint *)&pCVar5->field_0x108 = g_CMP3DecoderInstance._260_4_;
        uVar3 = g_CMP3DecoderInstance._256_4_;
        *(uint *)&pCVar5->field_0x110 = 0xffffffff;
        *(uint *)&pCVar5->field_0x10c = uVar3;
        sound_sndmain_cpp_FUN_00551620(pCVar5);
        if (*(int *)&pCVar5->field_0x110 < 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x3df;
          core_main_c_FUN_004e4330("Don't know length of sample %s",filename);
        }
        *(uint *)&pCVar5->field_0x150 = 0;
        *(uint *)&pCVar5->field_0x154 = 0;
        *(uint *)&pCVar5->field_0x158 = 0;
        *(uint *)&pCVar5->field_0x15c = 0;
        *(uint *)&pCVar5->field_0x160 = 0xffffffff;
        uVar3 = *(uint *)&pCVar5->field_0x110;
        *(uint *)&pCVar5->field_0x164 = uVar3;
        *(uint *)&pCVar5->field_0x16c = uVar3;
        *(uint *)&pCVar5->field_0x170 = uVar3;
        uVar3 = sound_sndmain_cpp_FUN_00555900(pCVar5,uVar3);
        *(uint *)&pCVar5->field_0x168 = uVar3;
        iVar6 = sound_sndmain_cpp_FUN_005533b0(pCVar5);
        if (iVar6 != 0) {
          output_buffer =
               (short *)sound_sndmain_cpp_FUN_00553660(pCVar5,0,*(uint *)&pCVar5->field_0x110)
          ;
          if (output_buffer == (short *)0x0) {
            sound_sndmain_cpp_FUN_0055a560("Failed to lock sample %s\n",filename);
          }
          else {
            iVar6 = sound_mp3_cpp_CMP3Decoder_read_FUN_00502a80
                              (&g_CMP3DecoderInstance,output_buffer,*(int *)&pCVar5->field_0x110);
            if (iVar6 == *(int *)&pCVar5->field_0x110) {
              sound_sndmain_cpp_FUN_00553760(pCVar5);
              goto LAB_005520db;
            }
            sound_sndmain_cpp_FUN_0055a560("Error decoding file data from %s\n",filename);
          }
        }
      }
    }
    sound_mp3_cpp_CMP3Decoder_free_FUN_00502a10(&g_CMP3DecoderInstance);
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(pCVar5);
    pCVar5 = (CSfxSample *)0x0;
  }
  return pCVar5;
}
