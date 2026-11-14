// Name: core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0
// Address: 0056f2c0
// Address Range: [[0056f2c0, 0056f394]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0(CSuccubus *this_ptr)

{
  CSuccubus *pCVar1;
  char cVar2;
  SMRGLTextureModel *pSVar3;
  int iVar4;
  uint uVar5;
  CEnemy *pCVar6;
  CDeformableModelInstance *pCVar7;
  CClothList *pCVar8;
  CMorph *pCVar9;
  char *pcVar10;
  int *piVar11;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
                     ((CDeformableModelInstance *)(pCVar6 + 1));
  pCVar8 = core_cloth_cpp_CClothList_ctor_FUN_005b1440((CClothList *)(pCVar7 + 1));
  pCVar9 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)(pCVar8[1].filenames[0] + 0xc));
  pCVar1 = (CSuccubus *)(pCVar9[-0x19].models[0].textures[1].texture_name + 0x1c);
  pCVar9[-0x19].models[0].textures[0xb].base.count = (int)&g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)pCVar9[-0x19].models[0].textures[0xb].texture_name,
             "succubus.dfm");
  pcVar10 = "hdwing.cth";
  piVar11 = &pCVar9[-1].models[1].textures[0xe].base.count;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)pCVar9[-3].models[0].parts,"hotdemon.dfm");
  pSVar3 = pCVar9[-0x15].models[0].textures;
  pSVar3[0xd].texture_name[0x3c] = -0x66;
  iVar4 = _DAT_005fc3cc;
  pSVar3[0xd].texture_name[0x3d] = -0x67;
  pSVar3[0xd].texture_name[0x3e] = '\x19';
  pSVar3[0xd].texture_name[0x3f] = '?';
  pCVar9[-0x15].models[0].textures[0xe].base.type = 0x3f666666;
  uVar5 = _DAT_005fc3d0;
  pCVar9[-1].models[1].textures[0xe].base.type = 1;
  pCVar9[-0x15].models[0].textures[0xe].base.count = iVar4;
  *(uint *)pCVar9[-0x15].models[0].textures[0xe].texture_name = uVar5;
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
