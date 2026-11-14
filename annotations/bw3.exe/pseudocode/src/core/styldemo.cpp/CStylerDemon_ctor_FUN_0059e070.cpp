// Name: core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070
// Address: 0059e070
// Address Range: [[0059e070, 0059e127]]
// Convention: __cdecl
// Signature: CStylerDemon * __cdecl core_styldemo_cpp_CStylerDemon_ctor_FUN_0059e070(CStylerDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CStylerDemon * __cdecl core_styldemo_cpp_CStylerDemon_ctor_FUN_0059e070(CStylerDemon *this_ptr)

{
  SMRGLTextureModel *pSVar1;
  int iVar2;
  int iVar3;
  CEnemy *pCVar4;
  CMorph *pCVar5;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0
                     ((CMorph *)(pCVar4[1].base.base.actor_name + 0x10));
  *(CEnemy_full_vtable **)(pCVar5[-0x12].models[1].textures[0x13].texture_name + 0x38) =
       &g_CStylerDemonVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)
             (pCVar5[-0x12].models[1].textures[0x13].texture_name + 0x3c),
             "bwp3_stylerdemon.dfm");
  pCVar5[-0xd].models[0].parts[4].vertex_count = 0x3f19999a;
  pCVar5[-0xd].models[0].parts[4].face_count = 0x3f666666;
  pSVar1 = pCVar5[-1].models[1].textures;
  pSVar1[0xd].texture_name[8] = '\0';
  pSVar1[0xd].texture_name[9] = '\0';
  pSVar1[0xd].texture_name[10] = -0x38;
  pSVar1[0xd].texture_name[0xb] = 'A';
  pCVar5[1].models[0].part_count = 0;
  pCVar5[1].models[0].parts[0].vertex_count = 0;
  pCVar5[1].models[0].parts[0].start_vertex = 0;
  iVar2 = _DAT_005e84e0;
  pCVar5[-1].rescale_enabled = 0;
  iVar3 = _DAT_005e84e4;
  pCVar5[-0xffffffff00000001].dead[0x14] = '\0';
  pCVar5[-0xffffffff00000001].dead[0x15] = '\0';
  pCVar5[-0xffffffff00000001].dead[0x16] = '\0';
  pCVar5[-0xffffffff00000001].dead[0x17] = '\0';
  pCVar5[1].models[0].parts[0].start_face = 0;
  pCVar5[-0xd].models[0].parts[4].start_vertex = iVar2;
  pCVar5[-0xd].models[0].parts[4].start_face = iVar3;
  return (CStylerDemon *)(pCVar5[-0x12].models[1].textures[0xf].texture_name + 4);
}
