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
  CConfederateZombie *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr_00 = (CConfederateZombie *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CConfederateZombie_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CConfederateZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"conzombie_david.dfm");
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f333333;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x2814 = 0;
  *(uint *)&this_ptr_00->field_0x113c4 = 0;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  pcVar6 = &this_ptr_00->field_0x113d4;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  uVar3 = _DAT_005fef8c;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  uVar4 = _DAT_005fef90;
  *(uint *)&this_ptr_00->field_0x1138c = 1;
  pcVar5 = "flinch";
  *(uint *)&this_ptr_00->field_0x11418 = 1;
  *(uint *)&this_ptr_00->field_0x11370 = uVar3;
  *(uint *)&this_ptr_00->field_0x11394 = uVar4;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  core_confzomb_cpp_CConfederateZombie_processStates_FUN_005a1e10(this_ptr_00,0.0,0);
  puVar1 = &this_ptr_00->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","RangeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"AlertInvisible");
  pcVar6 = &this_ptr_00->field_0x11444;
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  *(uint *)&this_ptr_00->field_0x11430 = 0;
  *(uint *)&this_ptr_00->field_0x280c = 1;
  pcVar5 = "confedhit0?.wav";
  *(uint *)&this_ptr_00->field_0x11348 = 1;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "uniondeath0?.wav";
  pcVar6 = &this_ptr_00->field_0x11543;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') {
      return this_ptr_00;
    }
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  return this_ptr_00;
}
