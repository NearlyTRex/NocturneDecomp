// Name: core_twigzomb.cpp_CTwigZombie_ctor_FUN_005a26d0
// Address: 005a26d0
// Address Range: [[005a26d0, 005a281b]]
// Convention: unknown
// Signature: CTwigZombie * core_twigzomb_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTwigZombie * core_twigzomb_cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie *this_ptr)

{
  byte *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  CTwigZombie *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CTwigZombie *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(byte **)&pCVar5->field_0x2b0 = &g_CTwigZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar5->field_0x2b4,"twigzombie.dfm");
  *(uint *)&pCVar5->field_0x1134c = 0x3f400000;
  *(uint *)&pCVar5->field_0x11380 = 0;
  *(uint *)&pCVar5->field_0x11384 = 0;
  pcVar7 = &pCVar5->field_0x113d4;
  *(uint *)&pCVar5->field_0x11388 = 1;
  uVar3 = _DAT_005ff16c;
  *(uint *)&pCVar5->field_0x1138c = 6;
  uVar4 = _DAT_005ff170;
  *(uint *)&pCVar5->field_0x11398 = 0x4479c000;
  pcVar6 = "flinch";
  *(uint *)&pCVar5->field_0x11418 = 1;
  *(uint *)&pCVar5->field_0x11370 = uVar3;
  *(uint *)&pCVar5->field_0x11394 = uVar4;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_twigzomb_cpp_FUN_005a28a0(pCVar5,0,0);
  puVar1 = &pCVar5->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","Attacking");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  pcVar7 = &pCVar5->field_0x11444;
  pcVar6 = "twighit0?.wav";
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar6 = "twigloop01.wav";
  pcVar7 = &pCVar5->field_0x11741;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  *(uint *)&pCVar5->field_0x2ac = 0;
  return pCVar5;
}
