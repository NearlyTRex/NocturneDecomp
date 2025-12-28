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
  char *pcVar1;
  int iVar2;
  uint uVar3;
  FILE *file;
  tm *timeptr;
  char *pcVar4;
  char cVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float in_stack_fffffe98;
  char local_114 [12];
  char acStack_108 [4];
  char acStack_104 [84];
  char local_b0 [4];
  char acStack_ac [4];
  char cStack_a8;
  char acStack_94 [72];
  float local_4c;
  float local_48;
  float local_44;
  char *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  int local_2c;
  int local_28;
  time_t local_24;
  int local_20;
  int local_1c;
  char *local_18;
  char *pcStack_14;
  
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
        local_34 = (char *)0xffffffff;
        crt_stdio_c_sscanf_FUN_0060013c(local_38,"[%d,%d]%n");
        if ((local_30 < 5) || (local_28 < local_2c)) {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 0x137;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid sfx string: %s",sound_name);
        }
        iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"?");
        pcVar6 = pcVar7 + iVar2;
        if (9 < local_28) {
          iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar6,"?");
          pcVar6 = pcVar6 + iVar2;
        }
        local_34 = (char *)((int)local_34 + local_30);
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
      pcStack_14 = (char *)core_set_cpp_CDemonSet_FUN_0056fac0(g_CDemonSetPtr);
      local_18 = pcStack_14;
      local_3c = pcStack_14 + 5;
      do {
        pcVar7 = pcStack_14;
        iVar2 = 0;
        local_38 = local_18;
        do {
          pcVar6 = pcVar7;
          if (iVar2 == 0) {
            pcVar6 = local_38;
          }
          if ((-1 < (int)pcVar6) && ((int)pcVar6 < 6)) {
            pcVar8 = local_114 + 4;
            pcVar4 = &stack0xfffffe8c;
            cVar5 = local_114[4];
            while (cVar5 != '\0') {
              cVar5 = *pcVar8;
              if (cVar5 == '!') {
                cVar5 = (char)pcVar6 + '0';
              }
              *pcVar4 = cVar5;
              pcVar4 = pcVar4 + 1;
              pcVar1 = pcVar8 + 1;
              pcVar8 = pcVar8 + 1;
              cVar5 = *pcVar1;
            }
            *pcVar4 = '\0';
            core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0
                      (g_CSoundPtr,acStack_ac,&stack0xfffffe8c);
            if (cStack_a8 != '\0') break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        if (acStack_ac[0] != '\0') break;
        local_18 = local_18 + 1;
        pcStack_14 = pcStack_14 + -1;
      } while ((int)local_18 < (int)local_3c);
    }
    if (acStack_ac[0] == '\0') {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Can't find wav: %s\n",local_114 + 4);
      if ((g_MissingSoundsInitFlag & 1) == 0) {
        g_MissingSoundsInitFlag = g_MissingSoundsInitFlag | 1;
        shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&g_MissingSoundsList);
        crt_stdlib_c_atexit_FUN_005ff060(&g_MissingSoundsListDestructorNode);
      }
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&g_MissingSoundsList,acStack_108);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&g_MissingSoundsList,acStack_104);
        file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         ("\\\\q\\xfer\\fletch\\missingwavs.txt",(char *)0x0,"at",
                          "..\\core\\sound.cpp",0x181);
        if (file != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"----------------------------------------------------------------\n");
          crt_time_c_time_with_rounding_FUN_006001f0(&local_24);
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"Missing: %s\n");
          timeptr = crt_time_c_localtime_FUN_00600288(&local_24);
          crt_time_c_asctime_FUN_00601768(timeptr);
          crt_stdio_c_fprintf_FUN_005fe6d0(file,"Time: %s");
          pcVar7 = crt_env_c_getenv_FUN_006013f0("USERNAME");
          if (pcVar7 != (char *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(file,"USERNAME: %s\n");
          }
          pcVar7 = crt_env_c_getenv_FUN_006013f0("COMPUTERNAME");
          if (pcVar7 != (char *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(file,"COMPUTERNAME: %s\n",pcVar7);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\sound.cpp",400);
          return 0;
        }
      }
      return 0;
    }
    fVar10 = 1.0;
    fVar11 = 1.0;
    cVar5 = *local_34;
    while (cVar5 != '\0') {
      if ((g_CharacterClassificationTable[(byte)(*local_34 + 1)] & 2U) == 0) {
        if (*local_34 == '@') {
          local_20 = -1;
          crt_stdio_c_sscanf_FUN_0060013c(local_34,"@%f%n");
          if ((local_20 < 2) || (fVar11 < 0.0)) {
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
          if ((local_1c < 2) || (fVar10 <= 0.0)) {
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
      cVar5 = *local_34;
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
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_fffffe98);
    sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(in_stack_fffffe98);
    uVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90(acStack_94);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return uVar3;
}
