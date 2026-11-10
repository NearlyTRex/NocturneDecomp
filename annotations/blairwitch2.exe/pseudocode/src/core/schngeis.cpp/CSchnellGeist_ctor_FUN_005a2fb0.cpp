// Name: core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0
// Address: 005a2fb0
// Address Range: [[005a2fb0, 005a313f]]
// Convention: unknown
// Signature: CSchnellGeist * core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSchnellGeist * core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(CSchnellGeist *this_ptr)

{
  byte *puVar1;
  char cVar2;
  uint uVar3;
  CSchnellGeist *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_00 = (CSchnellGeist *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CSchnellGeist_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CSchnellGeistVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"schnell.dfm");
  *(uint *)&this_ptr_00->field_0x3434 = 0x40000000;
  *(uint *)&this_ptr_00->field_0x3444 = 0x40a00000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 2;
  *(uint *)&this_ptr_00->field_0x11860 = 0;
  pcVar5 = &this_ptr_00->field_0x113d4;
  *(uint *)&this_ptr_00->field_0x11864 = 0;
  uVar3 = _DAT_005ff34c;
  *(uint *)&this_ptr_00->field_0x11868 = 2;
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
  core_schngeis_cpp_CSchnellGeist_processStates_FUN_005a31c0(this_ptr_00,0.0,0);
  uVar3 = _DAT_005ff350;
  *(uint *)&this_ptr_00->field_0x11398 = 0;
  puVar1 = &this_ptr_00->field_0x10af8;
  *(uint *)&this_ptr_00->field_0x1186c = 0;
  *(uint *)&this_ptr_00->field_0x11394 = uVar3;
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
  pcVar5 = &this_ptr_00->field_0x11444;
  pcVar4 = "schnellhit0?.wav";
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar4 = "schnellamb0?.wav";
  pcVar5 = &this_ptr_00->field_0x11741;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)&this_ptr_00->field_0x11844 = 0x40a00000;
  *(uint *)&this_ptr_00->field_0x2ac = 0;
  return this_ptr_00;
}
