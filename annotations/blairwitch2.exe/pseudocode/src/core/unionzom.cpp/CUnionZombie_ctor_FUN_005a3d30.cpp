// Name: core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30
// Address: 005a3d30
// Address Range: [[005a3d30, 005a3e6b]]
// Convention: unknown
// Signature: CUnionZombie * core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CUnionZombie * core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)

{
  byte *puVar1;
  char cVar2;
  uint uVar3;
  CUnionZombie *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_00 = (CUnionZombie *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CUnionZombie_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CUnionZombieVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"unzombie_brett.dfm");
  *(uint *)&this_ptr_00->field_0x2814 = 0;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f333333;
  *(uint *)&this_ptr_00->field_0x113c4 = 0;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  pcVar5 = &this_ptr_00->field_0x113d4;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  uVar3 = _DAT_005ff53c;
  *(uint *)&this_ptr_00->field_0x1138c = 1;
  pcVar4 = "flinch";
  *(uint *)&this_ptr_00->field_0x11418 = 1;
  *(uint *)&this_ptr_00->field_0x11370 = uVar3;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)&this_ptr_00->field_0x11858 = 0;
  core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(this_ptr_00,0.0,0);
  puVar1 = &this_ptr_00->field_0x10af8;
  *(uint *)&this_ptr_00->field_0x11394 = _DAT_005ff540;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","VanishAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"AlertInvisible");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  *(uint *)&this_ptr_00->field_0x11430 = 0;
  *(uint *)&this_ptr_00->field_0x280c = 1;
  *(uint *)&this_ptr_00->field_0x11348 = 1;
  return this_ptr_00;
}
