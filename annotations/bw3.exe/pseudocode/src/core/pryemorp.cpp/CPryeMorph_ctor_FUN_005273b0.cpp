// Name: core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0
// Address: 005273b0
// Address Range: [[005273b0, 005274df]]
// Convention: __cdecl
// Signature: CPryeMorph * __cdecl core_pryemorp_cpp_CPryeMorph_ctor_FUN_005273b0(CPryeMorph *this_ptr)

#include "nocturne.h"

CPryeMorph * __cdecl core_pryemorp_cpp_CPryeMorph_ctor_FUN_005273b0(CPryeMorph *this_ptr)

{
  char cVar1;
  CNPC *pCVar2;
  CMorph *pCVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  
  pCVar2 = core_npc_cpp_CNPC_ctor_FUN_00508f40(&this_ptr->base);
  pcVar4 = (char *)0x5cda15;
  pCVar3 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)&pCVar2[1].base.base.next_actor);
  pcVar5 = pCVar3[-1].models[1].textures[0x11].texture_name + 4;
  pCVar3[-0x2b].models[0].textures[0xf].base.count = (int)&g_CPryeMorphVTable;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = (char *)0x5cda21;
  piVar6 = &pCVar3[-1].models[1].textures[0x12].base.count;
  do {
    cVar1 = *pcVar5;
    *(char *)piVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    *(char *)((int)piVar6 + 1) = cVar1;
    piVar6 = (int *)((int)piVar6 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "stand";
  pcVar5 = pCVar3[-1].models[1].textures[0x12].texture_name + 0x1c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "false";
  pcVar5 = pCVar3[-1].models[1].textures[0xf].texture_name + 0x30;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "nameMePlease";
  pCVar3[-1].rescale_enabled = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)pCVar3[-0x2b].models[0].textures[0xf].texture_name,
             "bwp3_prye_morph.dfm");
  pcVar5 = pCVar3[-1].models[1].textures[0x11].texture_name + 0x24;
  pCVar3[1].models[0].parts[0].vertex_count = 0x3f800000;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pCVar3[-1].models[1].textures[0x12].texture_name[0x3c] = '\0';
  core_cloth_cpp_CClothList_add_FUN_0043fa40
            ((CClothList *)(pCVar3[-0x27].models[0].textures[4].texture_name + 0x18),
             (char *)0x5cda56);
  return (CPryeMorph *)(pCVar3[-0x2b].models[0].textures[10].texture_name + 0x10);
}
