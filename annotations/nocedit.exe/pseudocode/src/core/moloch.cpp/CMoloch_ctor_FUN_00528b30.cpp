// Name: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528bed]]
// Convention: __cdecl
// Signature: CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_00528b30(CMoloch * this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

{
  char cVar1;
  CHero *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar2 + 1));
  iVar3 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar3 + -0x21e08) = &g_CMolochVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar3 + -0x21e04),"moloch_h.dfm");
  pcVar4 = "molochToDemon";
  pcVar5 = (char *)(iVar3 + -200);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "molochToHuman";
  pcVar5 = (char *)(iVar3 + -100);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -0xd4) = 1;
  *(uint *)(iVar3 + -0xd0) = 0;
  *(uint *)(iVar3 + -0xcc) = 0;
  return (CMoloch *)(iVar3 + -0x21f5c);
}
