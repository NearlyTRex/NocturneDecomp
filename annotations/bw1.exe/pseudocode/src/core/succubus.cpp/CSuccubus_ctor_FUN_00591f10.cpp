// Name: core_succubus.cpp_CSuccubus_ctor_FUN_00591f10
// Address: 00591f10
// Address Range: [[00591f10, 00591fe4]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(CSuccubus *this_ptr)

{
  CSuccubus *pCVar1;
  char cVar2;
  SMRGLTextureModel *pSVar3;
  uint uVar4;
  uint uVar5;
  CEnemy *pCVar6;
  CDeformableModelInstance *pCVar7;
  CClothList *pCVar8;
  CMorph *pCVar9;
  char *pcVar10;
  int *piVar11;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar6 + 1));
  pCVar8 = core_cloth_cpp_CClothList_ctor_FUN_00441c60((CClothList *)(pCVar7 + 1));
  pCVar9 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)(pCVar8[1].filenames[0] + 0xc));
  pCVar1 = (CSuccubus *)(pCVar9[-0x14].models[1].textures[0x12].texture_name + 0x10);
  *(CEnemy_full_vtable **)(pCVar9[-0x13].models[0].textures[1].texture_name + 8) =
       &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar9[-0x13].models[0].textures[1].texture_name + 0xc),
             "succubus.dfm");
  pcVar10 = "hdwing.cth";
  piVar11 = &pCVar9[-1].models[1].textures[0xe].base.count;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)pCVar9[-4].models[1].textures[0x11].texture_name,
             "hotdemon.dfm");
  pSVar3 = pCVar9[-0x10].models[1].textures;
  pSVar3[0xf].texture_name[0x24] = -0x66;
  uVar4 = _DAT_0060626c;
  pSVar3[0xf].texture_name[0x25] = -0x67;
  pSVar3[0xf].texture_name[0x26] = '\x19';
  pSVar3[0xf].texture_name[0x27] = '?';
  pSVar3 = pCVar9[-0x10].models[1].textures;
  pSVar3[0xf].texture_name[0x28] = 'f';
  uVar5 = _DAT_00606270;
  pSVar3[0xf].texture_name[0x29] = 'f';
  pSVar3[0xf].texture_name[0x2a] = 'f';
  pSVar3[0xf].texture_name[0x2b] = '?';
  pCVar9[-1].models[1].textures[0xe].base.type = 1;
  *(uint *)(pCVar9[-0x10].models[1].textures[0xf].texture_name + 0x2c) = uVar4;
  *(uint *)(pCVar9[-0x10].models[1].textures[0xf].texture_name + 0x30) = uVar5;
  do {
    cVar2 = *pcVar10;
    *(char *)piVar11 = cVar2;
    if (cVar2 == '\0') {
      return pCVar1;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    *(char *)((int)piVar11 + 1) = cVar2;
    piVar11 = (int *)((int)piVar11 + 2);
  } while (cVar2 != '\0');
  return pCVar1;
}
