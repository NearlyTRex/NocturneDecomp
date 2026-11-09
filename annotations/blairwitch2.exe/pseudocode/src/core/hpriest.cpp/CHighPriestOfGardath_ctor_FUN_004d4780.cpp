// Name: core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004d4780
// Address: 004d4780
// Address Range: [[004d4780, 004d47da]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004d4780(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004d4780(CHighPriestOfGardath *this_ptr)

{
  char cVar1;
  CHighPriestOfGardath *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHighPriestOfGardath *)core_npc_cpp_CNPC_ctor_FUN_00510460((CNPC *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CHighPriestOfGardathVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar2->field_0x2b4,"priest.dfm");
  pcVar3 = "killPriest";
  pcVar4 = &pCVar2->field_0x24348;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}
