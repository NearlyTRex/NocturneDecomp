// Name: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
// Address Range: [[00545b30, 00545c01]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

{
  char cVar1;
  CNPC *pCVar2;
  CMorph *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  pcVar4 = "wolfbrn.dfm";
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_0052b310((CMorph *)&pCVar2[1].base.base.scale.y);
  piVar6 = &pCVar3[-1].models[1].textures[0x12].base.base.count;
  *(CDemonActor_vtable **)(pCVar3[-0x2a].models[1].textures[7].base.texture_name + 8) =
       &g_CPassengerVTable;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  pcVar5 = "false";
  pcVar4 = pCVar3[-1].models[1].textures[0x10].unknown + 0x18;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar5 = "nameMePlease";
  pCVar3[-1].rescale_enabled = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)
             (pCVar3[-0x2a].models[1].textures[7].base.texture_name + 0xc),"trainman.dfm");
  pcVar4 = pCVar3[-1].models[1].textures[0x12].unknown + 0xc;
  pCVar3[1].models[0].parts[0].vertex_count = 0x3f800000;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar3[-1].models[1].textures[0x12].unknown[0x2c] = '\0';
  return (CPassenger *)(pCVar3[-0x2a].models[1].textures[2].unknown + 0xc);
}
