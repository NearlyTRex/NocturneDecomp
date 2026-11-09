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
  byte *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  CUnion *pCVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar5 = (CUnion *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(byte **)&pCVar5->field_0x2b0 = &g_CUnionVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar5->field_0x2b4,"union_brett.dfm");
  *(uint *)&pCVar5->field_0x3434 = 0x3f800000;
  *(uint *)&pCVar5->field_0x1134c = 0x40200000;
  *(uint *)&pCVar5->field_0x11850 = 0;
  *(uint *)&pCVar5->field_0x11854 = 999;
  *(uint *)&pCVar5->field_0x11860 = 0;
  *(uint *)&pCVar5->field_0x11380 = 0;
  *(uint *)&pCVar5->field_0x11384 = 0;
  *(uint *)&pCVar5->field_0x11388 = 1;
  pcVar7 = &pCVar5->field_0x113d4;
  *(uint *)&pCVar5->field_0x1138c = 4;
  uVar3 = _DAT_005ff8ec;
  *(uint *)&pCVar5->field_0x11390 = 0;
  uVar4 = _DAT_005ff8f0;
  *(uint *)&pCVar5->field_0x11398 = 0x40a00000;
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
  core_union_cpp_FUN_005a4c50(pCVar5,0,0);
  puVar1 = &pCVar5->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","RangeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  pcVar7 = &pCVar5->field_0x11444;
  pcVar6 = "unionhit0?.wav";
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
