// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0
// Address: 004ad2c0
// Address Range: [[004ad2c0, 004ad3de]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella *this_ptr)

{
  float fVar1;
  uint uVar2;
  CHero *pCVar3;
  CCloth *pCVar4;
  
  pCVar3 = core_hero_cpp_CHero_ctor_FUN_004ce240(&this_ptr->base);
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_005adda0
                     ((CCloth *)&pCVar3[1].base.base.orient_matrix.m[0].y);
  pCVar4[-1].vertices[0x132].connected_indices[7] = (int)&g_CGabriellaVTable;
  pCVar4[-1].locked_vertex_indices[0x381] = 0;
  pCVar4[-1].locked_vertex_indices[0x382] = 0;
  pCVar4[-1].locked_vertex_indices[899] = 0;
  pCVar4[-1].vertex_sort_buffer = (int *)0x0;
  pCVar4[-1].last_euler.x = 0.0;
  pCVar4[-1].inv_delta_time = 0.0;
  pCVar4[-1].floor_y = -0.5235988;
  pCVar4[-1].wind_velocity.y = 0.0;
  pCVar4[-1].version_num = 0;
  pCVar4[-1].last_euler.y = 0.0;
  pCVar4[-1].wind_velocity.z = 0.0;
  uVar2 = _DAT_005f736c;
  pCVar4[-1].last_position.x = 0.0;
  *(uint *)pCVar4[1].model.model_filename = uVar2;
  pCVar4[-1].last_position.y = 0.0;
  pCVar4[-1].last_position.z = 0.0;
  fVar1 = pCVar4[-1].last_euler.y;
  pCVar4[-1].wind_velocity.x = (float)pCVar4[-1].version_num;
  pCVar4[-1].last_euler.z = fVar1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar4[-1].vertices[0x132].connected_indices + 8),
             "?gabriela.dfm" + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             (*(int *)((int)pCVar4 +
                      (int)pCVar4[-1].collide_bones[0x31].world_matrix.m[1].w * 4 + -0xcf4) + 0x2b4)
             ,(char *)0x5d6dd0);
  return (CGabriella *)&pCVar4[-1].vertices[0x12f].bone_positions[0].z;
}
