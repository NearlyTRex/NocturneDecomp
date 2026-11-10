// Name: core_confedrt.cpp_CConfederate_ctor_FUN_005a0840
// Address: 005a0840
// Address Range: [[005a0840, 005a09b3]]
// Convention: unknown
// Signature: CConfederate * core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(CConfederate *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConfederate * core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(CConfederate *this_ptr)

{
  byte *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  CConfederate *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr_00 = (CConfederate *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CBasicEnemy_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CConfederateVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"con_david.dfm");
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0x11850 = 0;
  *(uint *)&this_ptr_00->field_0x11854 = 1;
  *(uint *)&this_ptr_00->field_0x11864 = 0;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  pcVar6 = &this_ptr_00->field_0x113d4;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  uVar3 = _DAT_005fedac;
  *(uint *)&this_ptr_00->field_0x1138c = 4;
  uVar4 = _DAT_005fedb0;
  *(uint *)&this_ptr_00->field_0x11398 = 0x40a00000;
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
  core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(this_ptr_00,0.0,0);
  puVar1 = &this_ptr_00->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","RangeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  pcVar6 = &this_ptr_00->field_0x11444;
  pcVar5 = "confedhit0?.wav";
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
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)&this_ptr_00->field_0xfc = 1;
  return this_ptr_00;
}
