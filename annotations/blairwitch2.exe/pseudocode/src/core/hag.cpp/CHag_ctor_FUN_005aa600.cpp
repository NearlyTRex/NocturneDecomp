// Name: core_hag.cpp_CHag_ctor_FUN_005aa600
// Address: 005aa600
// Address Range: [[005aa600, 005aa7d8]]
// Convention: unknown
// Signature: CHag * core_hag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHag * core_hag_cpp_CHag_ctor_FUN_005aa600(CHag *this_ptr)

{
  byte *puVar1;
  char cVar2;
  CHag *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  this_ptr_00 = (CHag *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CHag_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CHagVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5f0af3);
  puVar1 = &this_ptr_00->field_0x2d0c;
  core_cloth_cpp_CClothList_add_FUN_005b15c0((CClothList *)puVar1,"hagdress.cth");
  core_cloth_cpp_CClothList_add_FUN_005b15c0((CClothList *)puVar1,"haghair.cth");
  core_cloth_cpp_CClothList_add_FUN_005b15c0((CClothList *)puVar1,"hagshal.cth");
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f000000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x113c4 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x2a8 = 0x3dcccccd;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 1;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  pcVar3 = "flinch";
  *(uint *)&this_ptr_00->field_0x11858 = 0;
  core_hag_cpp_CHag_processStates_FUN_005aa970(this_ptr_00,0.0,0);
  pcVar4 = &this_ptr_00->field_0x113d4;
  *(uint *)&this_ptr_00->field_0x11418 = 1;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  puVar1 = &this_ptr_00->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
  *(uint *)&this_ptr_00->field_0x11394 = _DAT_00600a6c;
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  pcVar4 = &this_ptr_00->field_0x11444;
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  pcVar3 = (char *)0x5f0b47;
  *(uint *)&this_ptr_00->field_0x11348 = 1;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar3 = "hagdeath0?.wav";
  pcVar4 = &this_ptr_00->field_0x11543;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar3 = (char *)0x5f0b63;
  pcVar4 = &this_ptr_00->field_0x11741;
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  *(uint *)&this_ptr_00->field_0x11844 = 0x40c00000;
  *(uint *)&this_ptr_00->field_0x1185c = 0;
  return this_ptr_00;
}
