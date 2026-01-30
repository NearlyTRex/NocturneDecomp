// Name: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528bed]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

{
  char cVar1;
  CHero *pCVar2;
  int extraout_EAX;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar2 + 1));
  core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(extraout_EAX + -0x21e08) = &g_CMolochVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0x21e04),"moloch_h.dfm");
  pcVar3 = "molochToDemon";
  pcVar4 = (char *)(extraout_EAX + -200);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "molochToHuman";
  pcVar4 = (char *)(extraout_EAX + -100);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(extraout_EAX + -0xd4) = 1;
  *(uint *)(extraout_EAX + -0xd0) = 0;
  *(uint *)(extraout_EAX + -0xcc) = 0;
  return (CMoloch *)(extraout_EAX + -0x21f5c);
}
