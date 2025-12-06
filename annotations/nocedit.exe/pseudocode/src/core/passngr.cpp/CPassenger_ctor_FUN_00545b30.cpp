// Name: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
// Address Range: [[00545b30, 00545c01]]
// Convention: __cdecl
// Signature: CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_00545b30(CPassenger * this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  core_npc_cpp_FUN_005447e0(&this_ptr->base_npc);
  pcVar3 = "wolfbrn.dfm";
  iVar2 = core_morph_cpp_FUN_0052b310();
  pcVar4 = (char *)(iVar2 + -0xa8);
  *(CDemonActor_vtable **)(iVar2 + -0x1f6c0) = &PTR_core_passngr_cpp_FUN_00545d30_00661f64;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(iVar2 + -0x10c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "nameMePlease";
  *(uint *)(iVar2 + -4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0x1f6bc),"trainman.dfm");
  pcVar4 = (char *)(iVar2 + -0x88);
  *(uint *)(iVar2 + 0xc30) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(byte *)(iVar2 + -0x68) = 0;
  return (CPassenger *)(iVar2 + -0x1f814);
}
