// Name: core_sound.cpp_playSfxInternal_FUN_005b1fd0
// Address: 005b1fd0
// Address Range: [[005b1fd0, 005b26e9]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_playSfxInternal_FUN_005b1fd0 (void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker, uint flags)

#include "nocturne.h"

uint __cdecl
core_sound_cpp_playSfxInternal_FUN_005b1fd0
          (void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker,
          uint flags)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  _FILE *file;
  _tm *timeptr;
  float fVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float local_180;
  float local_17c;
  char local_178 [100];
  char local_114 [100];
  char local_b0 [100];
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  float local_3c;
  char *local_38;
  int local_34;
  int local_30;
  int local_2c;
  time_t local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = 0;
  if ((sound_name != (char *)0x0) && (*sound_name != '\0')) {
    cVar5 = *sound_name;
    local_38 = sound_name;
    pcVar7 = local_114;
    while ((((cVar5 != '\0' && ((g_CharacterClassificationTable[(byte)(*local_38 + 1)] & 2U) == 0))
            && (cVar5 = *local_38, cVar5 != '@')) && (cVar5 != '*'))) {
      if (cVar5 == '[') {
        local_34 = -1;
        sscanf(local_38,"[%d,%d]%n");
        if ((local_34 < 5) || (local_2c < local_30)) {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x137;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s");
        }
        iVar2 = sprintf(pcVar7,"?");
        pcVar6 = pcVar7 + iVar2;
        if (9 < local_2c) {
          iVar2 = sprintf(pcVar6,"?");
          pcVar6 = pcVar6 + iVar2;
        }
        local_38 = local_38 + local_34;
      }
      else {
        pcVar6 = pcVar7 + 1;
        *pcVar7 = cVar5;
        local_38 = local_38 + 1;
      }
      cVar5 = *local_38;
      pcVar7 = pcVar6;
    }
    *pcVar7 = '\0';
    pcVar7 = local_114;
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '.') goto LAB_005b2052;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '.') goto LAB_005b2052;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_005b2052:
    if (pcVar6 == (char *)0x0) {
      pcVar6 = ".wav";
      iVar2 = -1;
      pcVar7 = local_114;
      do {
        pcVar8 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
        cVar5 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar5 != '\0');
      pcVar8 = pcVar8 + -1;
      do {
        cVar5 = *pcVar6;
        *pcVar8 = cVar5;
        if (cVar5 == '\0') break;
        cVar5 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar5;
        pcVar8 = pcVar8 + 2;
      } while (cVar5 != '\0');
    }
    pcVar7 = g_SoundResultBufferTemplate;
    pcVar6 = local_b0;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar6 = *(uint *)pcVar7;
      pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    pcVar7 = local_114;
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '!') goto LAB_005b20b2;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '!') goto LAB_005b20b2;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_005b20b2:
    if (pcVar6 == (char *)0x0) {
      core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(g_CSoundPtr,local_b0,local_114);
    }
    else {
      local_4c = x;
      local_48 = y;
      local_44 = z;
      if (position_tracker != (CVector3f *)0x0) {
        local_4c = x + position_tracker->x;
        local_48 = y + position_tracker->y;
        local_44 = z + position_tracker->z;
      }
      local_18 = core_set_cpp_CDemonSet_FUN_0056fac0(g_CDemonSetPtr);
      local_1c = local_18;
      local_40 = (int)local_18 + 5;
      do {
        fVar1 = local_18;
        iVar2 = 0;
        local_3c = local_1c;
        do {
          fVar4 = fVar1;
          if (iVar2 == 0) {
            fVar4 = local_3c;
          }
          if ((-1 < (int)fVar4) && ((int)fVar4 < 6)) {
            pcVar7 = local_114;
            pcVar6 = local_178;
            cVar5 = local_114[0];
            while (cVar5 != '\0') {
              cVar5 = *pcVar7;
              if (cVar5 == '!') {
                cVar5 = SUB41(fVar4,0) + '0';
              }
              *pcVar6 = cVar5;
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              cVar5 = *pcVar8;
            }
            *pcVar6 = '\0';
            core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(g_CSoundPtr,local_b0,local_178);
            if (local_b0[0] != '\0') break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        if (local_b0[0] != '\0') break;
        local_1c = (float)((int)local_1c + 1);
        local_18 = (float)((int)local_18 + -1);
      } while ((int)local_1c < local_40);
    }
    if (local_b0[0] == '\0') {
      engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Can't find wav: %s\n");
      if ((g_MissingSoundsInitFlag & 1) == 0) {
        g_MissingSoundsInitFlag = g_MissingSoundsInitFlag | 1;
        shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&g_MissingSoundsList);
        _atexit(&g_MissingSoundsListDestructorNode);
      }
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&g_MissingSoundsList,local_114);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_MissingSoundsList,local_114);
        file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         ("\\\\q\\xfer\\fletch\\missingwavs.txt",(char *)0x0,"at",
                          "..\\core\\sound.cpp",0x181);
        if (file != (_FILE *)0x0) {
          _fprintf(file,"----------------------------------------------------------------\n");
          time(&local_28);
          _fprintf(file,"Missing: %s\n");
          timeptr = localtime(&local_28);
          asctime(timeptr);
          _fprintf(file,"Time: %s");
          pcVar7 = getenv("USERNAME");
          if (pcVar7 != (char *)0x0) {
            _fprintf(file,"USERNAME: %s\n");
          }
          pcVar7 = getenv("COMPUTERNAME");
          if (pcVar7 != (char *)0x0) {
            _fprintf(file,"COMPUTERNAME: %s\n");
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\sound.cpp",400);
          return 0;
        }
      }
      return 0;
    }
    local_180 = 1.0;
    local_17c = 1.0;
    cVar5 = *local_38;
    while (cVar5 != '\0') {
      if ((g_CharacterClassificationTable[(byte)(*local_38 + 1)] & 2U) == 0) {
        if (*local_38 == '@') {
          local_24 = -1;
          sscanf(local_38,"@%f%n",&local_17c);
          if ((local_24 < 2) || (local_17c < 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 0x1a4;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s");
            local_38 = local_38 + local_24;
          }
          else {
            local_38 = local_38 + local_24;
          }
        }
        else if (*local_38 == '*') {
          local_20 = -1;
          sscanf(local_38,"*%f%n",&local_180);
          if ((local_20 < 2) || (local_180 <= 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 0x1aa;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s");
            local_38 = local_38 + local_20;
          }
          else {
            local_38 = local_38 + local_20;
          }
        }
        else {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x1ad;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s");
        }
      }
      else {
        local_38 = local_38 + 1;
      }
      cVar5 = *local_38;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    if (position_tracker == (CVector3f *)0x0) {
      sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0((double)x,(double)y,(double)z);
    }
    else {
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(position_tracker);
    }
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(flags);
    sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(0,user_data);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(local_17c);
    sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(local_180);
    uVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90(local_b0);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return uVar3;
}
