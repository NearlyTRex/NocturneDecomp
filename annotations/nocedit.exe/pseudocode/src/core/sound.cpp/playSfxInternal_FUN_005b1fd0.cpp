// Name: core_sound.cpp_playSfxInternal_FUN_005b1fd0
// Address: 005b1fd0
// Address Range: [[005b1fd0, 005b26e9]]
// Convention: __cdecl
// Signature: uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, float z, CVector3f * position_tracker, uint flags)

#include "nocturne.h"

uint __cdecl
core_sound_cpp_playSfxInternal_FUN_005b1fd0
          (void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker,
          uint flags)

{
  int iVar1;
  uint uVar2;
  FILE *file;
  tm *timeptr;
  float fVar3;
  char cVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float fVar9;
  double pos_z;
  char acStack_174 [100];
  char acStack_110 [100];
  char acStack_ac [100];
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  char *local_34;
  int local_30;
  int local_2c;
  int local_28;
  time_t local_24;
  int local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar1 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = 0;
  if ((sound_name != (char *)0x0) && (*sound_name != '\0')) {
    cVar4 = *sound_name;
    local_34 = sound_name;
    pcVar6 = acStack_110;
    while ((((cVar4 != '\0' && ((g_CharacterClassificationTable[(byte)(*local_34 + 1)] & 2U) == 0))
            && (cVar4 = *local_34, cVar4 != '@')) && (cVar4 != '*'))) {
      if (cVar4 == '[') {
        local_30 = -1;
        crt_stdio_c_sscanf_FUN_0060013c(local_34,"[%d,%d]%n",&local_2c,&local_28,&local_30);
        if ((local_30 < 5) || (local_28 < local_2c)) {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x137;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s",sound_name);
        }
        iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar6,"?");
        pcVar5 = pcVar6 + iVar1;
        if (9 < local_28) {
          iVar1 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"?");
          pcVar5 = pcVar5 + iVar1;
        }
        local_34 = local_34 + local_30;
      }
      else {
        pcVar5 = pcVar6 + 1;
        *pcVar6 = cVar4;
        local_34 = local_34 + 1;
      }
      cVar4 = *local_34;
      pcVar6 = pcVar5;
    }
    *pcVar6 = '\0';
    pcVar6 = acStack_110;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '.') goto LAB_005b2052;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '.') goto LAB_005b2052;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_005b2052:
    if (pcVar5 == (char *)0x0) {
      pcVar5 = ".wav";
      iVar1 = -1;
      pcVar6 = acStack_110;
      do {
        pcVar7 = pcVar6;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
        cVar4 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar4 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar4 = *pcVar5;
        *pcVar7 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar4;
        pcVar7 = pcVar7 + 2;
      } while (cVar4 != '\0');
    }
    pcVar6 = g_SoundResultBufferTemplate;
    pcVar5 = acStack_ac;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pcVar5 = *(uint *)pcVar6;
      pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
      pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    }
    pcVar6 = acStack_110;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '!') goto LAB_005b20b2;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '!') goto LAB_005b20b2;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_005b20b2:
    if (pcVar5 == (char *)0x0) {
      core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(g_CSoundPtr,acStack_ac,acStack_110);
    }
    else {
      local_48 = x;
      local_44 = y;
      local_40 = z;
      if (position_tracker != (CVector3f *)0x0) {
        local_48 = x + position_tracker->x;
        local_44 = y + position_tracker->y;
        local_40 = z + position_tracker->z;
      }
      fStack_14 = core_set_cpp_CDemonSet_FUN_0056fac0(g_CDemonSetPtr);
      local_18 = fStack_14;
      local_3c = (int)fStack_14 + 5;
      do {
        fVar9 = fStack_14;
        iVar1 = 0;
        local_38 = local_18;
        do {
          fVar3 = fVar9;
          if (iVar1 == 0) {
            fVar3 = local_38;
          }
          if ((-1 < (int)fVar3) && ((int)fVar3 < 6)) {
            pcVar6 = acStack_110;
            pcVar5 = acStack_174;
            cVar4 = acStack_110[0];
            while (cVar4 != '\0') {
              cVar4 = *pcVar6;
              if (cVar4 == '!') {
                cVar4 = SUB41 /* extract 2-byte value */(fVar3,0) + '0';
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
              pcVar7 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
              cVar4 = *pcVar7;
            }
            *pcVar5 = '\0';
            core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0
                      (g_CSoundPtr,acStack_ac,acStack_174);
            if (acStack_ac[0] != '\0') break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        if (acStack_ac[0] != '\0') break;
        local_18 = (float)((int)local_18 + 1);
        fStack_14 = (float)((int)fStack_14 + -1);
      } while ((int)local_18 < local_3c);
    }
    if (acStack_ac[0] == '\0') {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Can't find wav: %s\n",acStack_110);
      if ((g_MissingSoundsInitFlag & 1) == 0) {
        g_MissingSoundsInitFlag = g_MissingSoundsInitFlag | 1;
        shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&g_MissingSoundsList);
        crt_stdlib_c_atexit_FUN_005ff060(&g_MissingSoundsListDestructorNode);
      }
      iVar1 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&g_MissingSoundsList,acStack_110);
      if (iVar1 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_MissingSoundsList,acStack_110);
        file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         ("\\\\q\\xfer\\fletch\\missingwavs.txt",(char *)0x0,"at",
                          "..\\core\\sound.cpp",0x181);
        if (file != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"----------------------------------------------------------------\n");
          crt_time_c_time_with_rounding_FUN_006001f0(&local_24);
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"Missing: %s\n",acStack_110);
          timeptr = crt_time_c_localtime_FUN_00600288(&local_24);
          pcVar6 = crt_time_c_asctime_FUN_00601768(timeptr);
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"Time: %s",pcVar6);
          pcVar6 = crt_env_c_getenv_FUN_006013f0("USERNAME");
          if (pcVar6 != (char *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(file,"USERNAME: %s\n",pcVar6);
          }
          pcVar6 = crt_env_c_getenv_FUN_006013f0("COMPUTERNAME");
          if (pcVar6 != (char *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(file,"COMPUTERNAME: %s\n",pcVar6);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\sound.cpp",400);
          return 0;
        }
      }
      return 0;
    }
    fVar9 = 1.0;
    cVar4 = *local_34;
    while (cVar4 != '\0') {
      if ((g_CharacterClassificationTable[(byte)(*local_34 + 1)] & 2U) == 0) {
        if (*local_34 == '@') {
          local_20 = -1;
          crt_stdio_c_sscanf_FUN_0060013c(local_34,"@%f%n");
          if (local_20 < 2) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 0x1a4;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s",sound_name)
            ;
            local_34 = local_34 + local_20;
          }
          else {
            local_34 = local_34 + local_20;
          }
        }
        else if (*local_34 == '*') {
          local_1c = -1;
          crt_stdio_c_sscanf_FUN_0060013c(local_34,"*%f%n");
          if ((local_1c < 2) || (fVar9 <= 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 0x1aa;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s",sound_name)
            ;
            local_34 = local_34 + local_1c;
          }
          else {
            local_34 = local_34 + local_1c;
          }
        }
        else {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x1ad;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s",sound_name);
        }
      }
      else {
        local_34 = local_34 + 1;
      }
      cVar4 = *local_34;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    if (position_tracker == (CVector3f *)0x0) {
      pos_z = (double)z;
      sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0((double)x,(double)y,pos_z);
      position_tracker = (CVector3f *)((ulonglong)pos_z >> 0x20);
    }
    else {
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(position_tracker);
    }
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(flags);
    sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(0,user_data);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(1.0);
    sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80((float)position_tracker);
    uVar2 = sound_sndmain_cpp_startSfx_FUN_005a8e90(acStack_ac);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return uVar2;
}
