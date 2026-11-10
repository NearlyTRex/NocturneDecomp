// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530
// Address: 00581530
// Address Range: [[00581530, 0058165f]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(CVampireBoss *this_ptr)

{
  CEnemy *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CMorph *pCVar4;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
                     ((CDeformableModelInstance *)(pCVar1 + 1));
  iVar3 = core_necklace_cpp_FUN_005adda0(pCVar2 + 1);
  iVar3 = core_necklace_cpp_FUN_005adda0(iVar3 + 0x3ab30);
  iVar3 = core_necklace_cpp_FUN_005adda0(iVar3 + 0x3ab30);
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)(iVar3 + 0x3ab34));
  *(CEnemy_full_vtable **)(pCVar4[-0x101].models[1].textures[0x12].texture_name + 0x14) =
       &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)
             (pCVar4[-0x101].models[1].textures[0x12].texture_name + 0x18),(char *)0x5ed991);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar4[-0xeb].models[1].textures[5].texture_name + 0x3c),
             "batboss.dfm");
  pCVar4[-0xfc].models[0].parts[3].start_face = 0x40000000;
  pCVar4[-0xfc].models[0].parts[4].vertex_count = 0x40400000;
  pCVar4[-0xfc].models[0].parts[4].face_count = 0x42480000;
  pCVar4[-0xfc].models[0].parts[4].start_vertex = 0x42c80000;
  pCVar4[1].models[0].parts[0].vertex_count = 0;
  pCVar4[-1].rescale_enabled = 0;
  pCVar4[1].models[0].part_count = 0;
  pCVar4[1].models[0].parts[1].start_vertex = 0;
  pCVar4[1].models[0].parts[1].start_face = 0;
  pCVar4[1].models[0].parts[2].vertex_count = 0;
  pCVar4[1].models[0].parts[2].face_count = 0;
  pCVar4[1].models[0].parts[1].face_count = 0;
  pCVar4[1].models[0].parts[2].start_vertex = 0;
  pCVar4[1].models[0].parts[0].face_count = 0x41200000;
  pCVar4[1].models[0].parts[1].vertex_count = 1;
  pCVar4[-0xfd].models[0].textures[0].base.type = 0;
  return (CVampireBoss *)(pCVar4[-0x101].models[1].textures[8].texture_name + 0x34);
}
