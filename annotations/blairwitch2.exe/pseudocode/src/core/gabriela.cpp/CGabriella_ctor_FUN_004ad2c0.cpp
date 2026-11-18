// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0
// Address: 004ad2c0
// Address Range: [[004ad2c0, 004ad3de]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella *this_ptr)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella *this_ptr)

{
  float fVar1;
  CHero *pCVar2;
  CCloth *pCVar3;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004ce240(&this_ptr->base);
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_005adda0
                     ((CCloth *)&pCVar2[1].base.base.orient_matrix.m[0].y);
  pCVar3[-1].vertices[0x132].connected_indices[7] = (int)&g_CGabriellaVTable;
  pCVar3[-1].locked_vertex_indices[0x381] = 0;
  pCVar3[-1].locked_vertex_indices[0x382] = 0;
  pCVar3[-1].locked_vertex_indices[899] = 0;
  pCVar3[-1].vertex_sort_buffer = (int *)0x0;
  pCVar3[-1].last_euler.x = 0.0;
  pCVar3[-1].inv_delta_time = 0.0;
  pCVar3[-1].floor_y = -0.5235988;
  pCVar3[-1].wind_velocity.y = 0.0;
  pCVar3[-1].version_num = 0;
  pCVar3[-1].last_euler.y = 0.0;
  pCVar3[-1].wind_velocity.z = 0.0;
  fVar1 = 10.0f;
  pCVar3[-1].last_position.x = 0.0;
  *(float *)pCVar3[1].model.model_filename = fVar1;
  pCVar3[-1].last_position.y = 0.0;
  pCVar3[-1].last_position.z = 0.0;
  fVar1 = pCVar3[-1].last_euler.y;
  pCVar3[-1].wind_velocity.x = (float)pCVar3[-1].version_num;
  pCVar3[-1].last_euler.z = fVar1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar3[-1].vertices[0x132].connected_indices + 8),
             "gabriela.dfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             (*(int *)((int)pCVar3 +
                      (int)pCVar3[-1].collide_bones[0x31].world_matrix.m[1].w * 4 + -0xcf4) + 0x2b4)
             ,"gabgun.kfm");
  return (CGabriella *)&pCVar3[-1].vertices[0x12f].bone_positions[0].z;
}
