// Name: core_sound.cpp_playSfxInternal_FUN_0052d120
// Address: 0052d120
// Address Range: [[0052d120, 0052d704]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_playSfxInternal_FUN_0052d120(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)

#include "nocturne.h"

uint __cdecl core_sound_cpp_playSfxInternal_FUN_0052d120(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  float local_178;
  float local_174;
  char local_170 [100];
  char local_10c [100];
  char local_a8 [100];
  CVector3f local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar10 = 0;
  iVar1 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = 0;
  if ((sound_name != (char *)0x0) && (*sound_name != '\0')) {
    cVar4 = *sound_name;
    local_14 = sound_name;
    pcVar6 = local_170;
    while ((((cVar4 != '\0' && ((g_CharacterClassificationTable[(byte)(*local_14 + 1)] & 2) == 0))
            && (cVar4 = *local_14, cVar4 != '@')) && (cVar4 != '*'))) {
      if (cVar4 == '[') {
        local_34 = -1;
        sscanf(local_14,"[%d,%d]%n");
        if ((local_34 < 5) || (local_2c < local_30)) {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 311;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid sfx string: %s");
        }
        iVar1 = _sprintf(pcVar6,"?");
        pcVar5 = pcVar6 + iVar1;
        if (9 < local_2c) {
          iVar1 = _sprintf(pcVar5,"?");
          pcVar5 = pcVar5 + iVar1;
        }
        local_14 = local_14 + local_34;
      }
      else {
        pcVar5 = pcVar6 + 1;
        *pcVar6 = cVar4;
        local_14 = local_14 + 1;
      }
      cVar4 = *local_14;
      pcVar6 = pcVar5;
    }
    *pcVar6 = '\0';
    pcVar6 = local_170;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '.') goto LAB_0052d1a2;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '.') goto LAB_0052d1a2;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_0052d1a2:
    if (pcVar5 == (char *)0x0) {
      pcVar5 = ".wav";
      iVar1 = -1;
      pcVar6 = local_170;
      do {
        pcVar9 = pcVar6;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        pcVar9 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar4 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar4 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar4 = *pcVar5;
        *pcVar9 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar4;
        pcVar9 = pcVar9 + 2;
      } while (cVar4 != '\0');
    }
    puVar7 = &DAT_005bef20;
    pcVar6 = local_a8;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pcVar6 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
    }
    pcVar6 = local_170;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '!') goto LAB_0052d202;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '!') goto LAB_0052d202;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_0052d202:
    if (pcVar5 == (char *)0x0) {
      core_sound_cpp_CSound_findRandomSoundFile_FUN_0052d030
                (g_CSound_PTR_005bed68,local_a8,local_170);
    }
    else {
      local_44.x = x;
      local_44.y = y;
      local_44.z = z;
      if (position_tracker != (CVector3f *)0x0) {
        local_44.x = x + position_tracker->x;
        local_44.y = y + position_tracker->y;
        local_44.z = z + position_tracker->z;
      }
      local_28 = core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0
                           (g_CDemonSet_PTR_005be368,&local_44);
      local_1c = local_28;
      local_18 = local_28 + 5;
      do {
        iVar1 = local_1c;
        iVar8 = 0;
        local_38 = local_28;
        do {
          iVar3 = local_38;
          if (iVar8 == 0) {
            iVar3 = iVar1;
          }
          if ((-1 < iVar3) && (iVar3 < 6)) {
            pcVar6 = local_170;
            pcVar5 = local_10c;
            cVar4 = local_170[0];
            while (cVar4 != '\0') {
              cVar4 = *pcVar6;
              if (cVar4 == '!') {
                cVar4 = (char)iVar3 + '0';
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
              pcVar9 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
              cVar4 = *pcVar9;
            }
            *pcVar5 = '\0';
            core_sound_cpp_CSound_findRandomSoundFile_FUN_0052d030
                      (g_CSound_PTR_005bed68,local_a8,local_10c);
            if (local_a8[0] != '\0') break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 2);
        if (local_a8[0] != '\0') break;
        local_1c = local_1c + 1;
        local_28 = local_28 + -1;
      } while (local_1c < local_18);
    }
    if (local_a8[0] == '\0') {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"Can't find wav: %s\n");
      return 0;
    }
    local_174 = 1.0;
    local_178 = 1.0;
    cVar4 = *local_14;
    while (cVar4 != '\0') {
      if ((g_CharacterClassificationTable[(byte)(*local_14 + 1)] & 2) == 0) {
        if (*local_14 == '@') {
          local_24 = -1;
          sscanf(local_14,"@%f%n",&local_178);
          if ((local_24 < 2) || (local_178 < 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 420;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid sfx string: %s");
            local_14 = local_14 + local_24;
          }
          else {
            local_14 = local_14 + local_24;
          }
        }
        else if (*local_14 == '*') {
          local_20 = -1;
          sscanf(local_14,"*%f%n",&local_174);
          if ((local_20 < 2) || (local_174 <= 0.0)) {
            g_CurrentFilename = "..\\core\\sound.cpp";
            g_CurrentLineNumber = 426;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid sfx string: %s");
            local_14 = local_14 + local_20;
          }
          else {
            local_14 = local_14 + local_20;
          }
        }
        else {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 429;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid sfx string: %s");
        }
      }
      else {
        local_14 = local_14 + 1;
      }
      cVar4 = *local_14;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    if (position_tracker == (CVector3f *)0x0) {
      sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50((double)x,(double)y,(double)z);
    }
    else {
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(position_tracker);
    }
    sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(flags);
    sound_sndmain_cpp_setNextSfxUserData_FUN_00526150(0,user_data);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(local_178);
    sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00526120(local_174);
    uVar2 = sound_sndmain_cpp_startSfx_FUN_005265a0(local_a8);
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  return uVar2;
}
