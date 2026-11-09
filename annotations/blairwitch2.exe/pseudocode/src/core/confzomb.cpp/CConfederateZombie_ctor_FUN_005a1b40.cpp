// Name: core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40
// Address: 005a1b40
// Address Range: [[005a1b40, 005a1cbd]]
// Convention: unknown
// Signature: CConfederateZombie * core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConfederateZombie * core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)

{
  byte *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  CConfederateZombie *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CConfederateZombie *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(byte **)&pCVar5->field_0x2b0 = &g_CConfederateZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar5->field_0x2b4,"conzombie_david.dfm");
  *(uint *)&pCVar5->field_0x3434 = 0x3f333333;
  *(uint *)&pCVar5->field_0xfc = 1;
  *(uint *)&pCVar5->field_0x2814 = 0;
  *(uint *)&pCVar5->field_0x113c4 = 0;
  *(uint *)&pCVar5->field_0x1134c = 0x40200000;
  *(uint *)&pCVar5->field_0x11380 = 0;
  pcVar7 = &pCVar5->field_0x113d4;
  *(uint *)&pCVar5->field_0x11384 = 0;
  uVar3 = _DAT_005fef8c;
  *(uint *)&pCVar5->field_0x11388 = 1;
  uVar4 = _DAT_005fef90;
  *(uint *)&pCVar5->field_0x1138c = 1;
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
  core_confzomb_cpp_FUN_005a1e10(pCVar5,0,0);
  puVar1 = &pCVar5->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","RangeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"AlertInvisible");
  pcVar7 = &pCVar5->field_0x11444;
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  *(uint *)&pCVar5->field_0x11430 = 0;
  *(uint *)&pCVar5->field_0x280c = 1;
  pcVar6 = "confedhit0?.wav";
  *(uint *)&pCVar5->field_0x11348 = 1;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar6 = "uniondeath0?.wav";
  pcVar7 = &pCVar5->field_0x11543;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') {
      return pCVar5;
    }
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  return pCVar5;
}
