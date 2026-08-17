// Name: core_sound.cpp_playSfxInternal_FUN_0052d120
// Address: 0052d120
// Address Range: [[0052d120, 0052d704]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_playSfxInternal_FUN_0052d120(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)

#include "nocturne.h"

uint __cdecl core_sound_cpp_playSfxInternal_FUN_0052d120(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  float local_178;
  float local_174;
  char local_170 [100];
  char local_10c [100];
  char local_a8 [100];
  CVector3f local_44;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  char *local_14;
  
  bVar10 = 0;
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = 0;
  if ((sound_name != (char *)0x0) && (*sound_name != '\0')) {
    cVar5 = *sound_name;
    local_14 = sound_name;
    pcVar7 = local_170;
    while ((((cVar5 != '\0' && ((g_CharacterClassificationTable[(byte)(*local_14 + 1)] & 2) == 0))
            && (cVar5 = *local_14, cVar5 != '@')) && (cVar5 != '*'))) {
      if (cVar5 == '[') {
        local_34 = -1;
        sscanf(local_14,"[%d,%d]%n");
        if ((local_34 < 5) || (local_2c < local_30)) {
          g_CurrentFilename = "..\\core\\sound.cpp";
          g_CurrentLineNumber = 311;
          core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid sfx string: %s");
        }
        iVar2 = _sprintf(pcVar7,"?");
        pcVar6 = pcVar7 + iVar2;
        if (9 < local_2c) {
          iVar2 = _sprintf(pcVar6,"?");
          pcVar6 = pcVar6 + iVar2;
        }
        local_14 = local_14 + local_34;
      }
      else {
        pcVar6 = pcVar7 + 1;
        *pcVar7 = cVar5;
        local_14 = local_14 + 1;
      }
      cVar5 = *local_14;
      pcVar7 = pcVar6;
    }
    *pcVar7 = '\0';
    pcVar7 = local_170;
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '.') goto LAB_0052d1a2;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '.') goto LAB_0052d1a2;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_0052d1a2:
    if (pcVar6 == (char *)0x0) {
      pcVar6 = ".wav";
      iVar2 = -1;
      pcVar7 = local_170;
      do {
        pcVar9 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
        cVar5 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar5 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar5 = *pcVar6;
        *pcVar9 = cVar5;
        if (cVar5 == '\0') break;
        cVar5 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar5;
        pcVar9 = pcVar9 + 2;
      } while (cVar5 != '\0');
    }
    puVar8 = &DAT_005bef20;
    pcVar7 = local_a8;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
    }
    pcVar7 = local_170;
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '!') goto LAB_0052d202;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '!') goto LAB_0052d202;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_0052d202:
    if (pcVar6 == (char *)0x0) {
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
      local_18 = (int)local_28 + 5;
      do {
        fVar1 = local_1c;
        iVar2 = 0;
        local_38 = local_28;
        do {
          fVar4 = local_38;
          if (iVar2 == 0) {
            fVar4 = fVar1;
          }
          if ((-1 < (int)fVar4) && ((int)fVar4 < 6)) {
            pcVar7 = local_170;
            pcVar6 = local_10c;
            cVar5 = local_170[0];
            while (cVar5 != '\0') {
              cVar5 = *pcVar7;
              if (cVar5 == '!') {
                cVar5 = SUB41(fVar4,0) + '0';
              }
              *pcVar6 = cVar5;
              pcVar6 = pcVar6 + 1;
              pcVar9 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              cVar5 = *pcVar9;
            }
            *pcVar6 = '\0';
            core_sound_cpp_CSound_findRandomSoundFile_FUN_0052d030
                      (g_CSound_PTR_005bed68,local_a8,local_10c);
            if (local_a8[0] != '\0') break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        if (local_a8[0] != '\0') break;
        local_1c = (float)((int)local_1c + 1);
        local_28 = (float)((int)local_28 + -1);
      } while ((int)local_1c < local_18);
    }
    if (local_a8[0] == '\0') {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"Can't find wav: %s\n");
      return 0;
    }
    local_174 = 1.0;
    local_178 = 1.0;
    cVar5 = *local_14;
    while (cVar5 != '\0') {
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
      cVar5 = *local_14;
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
    uVar3 = sound_sndmain_cpp_startSfx_FUN_005265a0(local_a8);
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  return uVar3;
}
