// Name: core_script.cpp_FUN_0055a540
// Address: 0055a540
// Address Range: [[0055a540, 0055a6b3]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_0055a540()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_script.cpp_FUN_0055a540(CScript* param_1) */

void core_script_cpp_FUN_0055a540(void)

{
  char cVar1;
  CGame *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint *in_stack_00000004;
  char acStack_64 [88];
  
  bVar7 = 0;
  in_stack_00000004[0x12] = 0;
  *(byte *)(in_stack_00000004 + 0x15) = 0;
  in_stack_00000004[0x13] = 0xbf800000;
  in_stack_00000004[0x14] = 0xbf800000;
  *in_stack_00000004 = 0;
  iVar3 = g_LocalHeroIndex;
  in_stack_00000004[1] = 0;
  in_stack_00000004[3] = g_HeroActors[iVar3];
  pCVar2 = g_CGamePtr;
  in_stack_00000004[4] = 1;
  pCVar2->allow_damage_flag = 1;
  pCVar2->allow_enemy_attack_flag = 1;
  pCVar2->letterbox_mode = 0;
  _DAT_0310f4a0 = 0;
  in_stack_00000004[0x115] = 0xbf800000;
  in_stack_00000004[0x116] = 0xffffffff;
  pcVar6 = g_CDemonSetPtr->geometry_filename;
  in_stack_00000004[0x117] = 0;
  DAT_0310f4a8 = 0;
  in_stack_00000004[5] = 0;
  crt_string_c_splitpath_FUN_005ff178(pcVar6,(char *)0x0,(char *)0x0,&stack0xffffff90,(char *)0x0);
  pcVar4 = ".wav";
  iVar3 = -1;
  pcVar6 = &stack0xffffff94;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff94,"smill.wav");
  if (iVar3 == 0) {
    pcVar4 = "@0.85";
    iVar3 = -1;
    pcVar6 = &stack0xffffff98;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff98,"town.wav");
  if (iVar3 == 0) {
    pcVar4 = "@0.85";
    iVar3 = -1;
    pcVar6 = acStack_64;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(g_CSoundPtr,acStack_64);
  in_stack_00000004[6] = 0;
  return;
}
