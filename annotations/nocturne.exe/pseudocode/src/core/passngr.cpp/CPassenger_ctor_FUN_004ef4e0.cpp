// Name: core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0
// Address: 004ef4e0
// Address Range: [[004ef4e0, 004ef5b1]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(CPassenger *this_ptr)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(CPassenger *this_ptr)

{
  char cVar1;
  CNPC *pCVar2;
  CMorph *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_004ee950(&this_ptr->base);
  pcVar4 = "wolfbrn.dfm";
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_004e0050((CMorph *)&pCVar2[1].base.base.scale.y);
  piVar6 = &pCVar3[-1].models[1].textures[0x12].base.count;
  *(CCharacter_full_vtable **)(pCVar3[-0x2a].models[1].textures[0xc].texture_name + 0x30) =
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
  pcVar4 = pCVar3[-1].models[1].textures[0x10].texture_name + 0x28;
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
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar3[-0x2a].models[1].textures[0xc].texture_name + 0x34)
             ,"trainman.dfm");
  pcVar4 = pCVar3[-1].models[1].textures[0x12].texture_name + 0x1c;
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
  pCVar3[-1].models[1].textures[0x12].texture_name[0x3c] = '\0';
  return (CPassenger *)(pCVar3[-0x2a].models[1].textures[8].texture_name + 4);
}
