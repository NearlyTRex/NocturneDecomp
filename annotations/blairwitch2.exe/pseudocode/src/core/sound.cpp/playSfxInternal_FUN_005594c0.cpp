// Name: core_sound.cpp_playSfxInternal_FUN_005594c0
// Address: 005594c0
// Address Range: [[005594c0, 00559aa4]]
// Convention: __cdecl
// Signature: uint __cdecl core_sound_cpp_playSfxInternal_FUN_005594c0(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_sound_cpp_playSfxInternal_FUN_005594c0(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags)

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
  char local_170 [100];
  char local_10c [100];
  char local_a8 [100];
  float local_44;
  float local_40;
  float local_3c;
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
  iVar1 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = 0;
  if ((sound_name != (char *)0x0) && (*sound_name != '\0')) {
    cVar4 = *sound_name;
    local_14 = sound_name;
    pcVar6 = local_170;
    while ((((cVar4 != '\0' && (((&DAT_0061ed94)[(byte)(*local_14 + 1)] & 2) == 0)) &&
            (cVar4 = *local_14, cVar4 != '@')) && (cVar4 != '*'))) {
      if (cVar4 == '[') {
        local_34 = -1;
        sscanf(local_14,"[%d,%d]%n");
        if ((local_34 < 5) || (local_2c < local_30)) {
          _DAT_01d046a0 = "..\\core\\sound.cpp";
          _DAT_01d046a4 = 0x137;
          core_main_c_FUN_004e4500("Invalid sfx string: %s");
        }
        iVar1 = _sprintf(pcVar6,&DAT_005ea77b);
        pcVar5 = pcVar6 + iVar1;
        if (9 < local_2c) {
          iVar1 = _sprintf(pcVar5,&DAT_005ea77d);
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
      if (*pcVar6 == '.') goto LAB_00559542;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '.') goto LAB_00559542;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_00559542:
    if (pcVar5 == (char *)0x0) {
      pcVar5 = &DAT_005ea77f;
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
    puVar7 = &DAT_0061c220;
    pcVar6 = local_a8;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pcVar6 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
    }
    pcVar6 = local_170;
    do {
      pcVar5 = pcVar6;
      if (*pcVar6 == '!') goto LAB_005595a2;
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      if (*pcVar5 == '!') goto LAB_005595a2;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_005595a2:
    if (pcVar5 == (char *)0x0) {
      core_sound_cpp_FUN_005593d0(0x0264B290,local_a8,local_170);
    }
    else {
      local_44 = x;
      local_40 = y;
      local_3c = z;
      if (position_tracker != (CVector3f *)0x0) {
        local_44 = x + position_tracker->x;
        local_40 = y + position_tracker->y;
        local_3c = z + position_tracker->z;
      }
      local_28 = core_set_cpp_FUN_00533190(g_CDemonSetPtr);
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
            core_sound_cpp_FUN_005593d0(0x0264B290,local_a8,local_10c);
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
      engine_console_cpp_FUN_00436710();
      return 0;
    }
    cVar4 = *local_14;
    while (cVar4 != '\0') {
      if (((&DAT_0061ed94)[(byte)(*local_14 + 1)] & 2) == 0) {
        if (*local_14 == '@') {
          local_24 = -1;
          sscanf(local_14,"@%f%n");
          if (local_24 < 2) {
            _DAT_01d046a0 = "..\\core\\sound.cpp";
            _DAT_01d046a4 = 0x1a4;
            core_main_c_FUN_004e4500("Invalid sfx string: %s");
            local_14 = local_14 + local_24;
          }
          else {
            local_14 = local_14 + local_24;
          }
        }
        else if (*local_14 == '*') {
          local_20 = -1;
          sscanf(local_14,"*%f%n");
          if (local_20 < 2) {
            _DAT_01d046a0 = "..\\core\\sound.cpp";
            _DAT_01d046a4 = 0x1aa;
            core_main_c_FUN_004e4500("Invalid sfx string: %s");
            local_14 = local_14 + local_20;
          }
          else {
            local_14 = local_14 + local_20;
          }
        }
        else {
          _DAT_01d046a0 = "..\\core\\sound.cpp";
          _DAT_01d046a4 = 0x1ad;
          core_main_c_FUN_004e4500("Invalid sfx string: %s");
        }
      }
      else {
        local_14 = local_14 + 1;
      }
      cVar4 = *local_14;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    if (position_tracker == (CVector3f *)0x0) {
      sound_sndmain_cpp_FUN_00550110((double)x,(double)y,(double)z);
    }
    else {
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(position_tracker);
    }
    sound_sndmain_cpp_setNextSfxFlags_FUN_00550380(flags);
    sound_sndmain_cpp_setNextSfxUserData_FUN_005502b0(0,user_data);
    sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(1.0);
    sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(1.0);
    uVar2 = sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  }
  return uVar2;
}
