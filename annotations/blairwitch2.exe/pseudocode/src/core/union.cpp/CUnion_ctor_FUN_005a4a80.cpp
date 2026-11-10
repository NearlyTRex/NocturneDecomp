// Name: core_union.cpp_CUnion_ctor_FUN_005a4a80
// Address: 005a4a80
// Address Range: [[005a4a80, 005a4bf3]]
// Convention: unknown
// Signature: CUnion * core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CUnion * core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CUnion *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  this_ptr_00 = (CUnion *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(CBasicEnemy_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CUnionVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"union_brett.dfm");
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0x11850 = 0;
  *(uint *)&this_ptr_00->field_0x11854 = 999;
  *(uint *)&this_ptr_00->field_0x11860 = 0;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  pcVar5 = &this_ptr_00->field_0x113d4;
  *(uint *)&this_ptr_00->field_0x1138c = 4;
  uVar2 = _DAT_005ff8ec;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  uVar3 = _DAT_005ff8f0;
  *(uint *)&this_ptr_00->field_0x11398 = 0x40a00000;
  pcVar4 = "flinch";
  *(uint *)&this_ptr_00->field_0x11418 = 1;
  *(uint *)&this_ptr_00->field_0x11370 = uVar2;
  *(uint *)&this_ptr_00->field_0x11394 = uVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_union_cpp_CUnion_processStates_FUN_005a4c50(this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d7f0(&this_ptr_00->field_0x10af8,"ChaseComplete");
  unkaddr_0059d350_cpp_FUN_0059d990(&this_ptr_00->field_0x10af8);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  pcVar5 = &this_ptr_00->field_0x11444;
  pcVar4 = "unionhit0?.wav";
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "uniondeath0?.wav";
  pcVar5 = &this_ptr_00->field_0x11543;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr_00;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return this_ptr_00;
}
