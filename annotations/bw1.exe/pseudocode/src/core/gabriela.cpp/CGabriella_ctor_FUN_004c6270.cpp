// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004c6270
// Address: 004c6270
// Address Range: [[004c6270, 004c6387]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004c6270(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004c6270(CGabriella *this_ptr)

{
  float fVar1;
  uint uVar2;
  CHero *pCVar3;
  CCloth *pCVar4;
  
  pCVar3 = core_hero_cpp_CHero_ctor_FUN_004ea830(&this_ptr->base);
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0
                     ((CCloth *)&pCVar3[1].base.base.orient_matrix.m[0].y);
  pCVar4[-1].vertices[0x17f].velocity.y = (float)&g_CGabriellaVTable;
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
  uVar2 = _DAT_00600d8c;
  pCVar4[-1].last_position.x = 0.0;
  *(uint *)pCVar4[1].model.model_filename = uVar2;
  pCVar4[-1].last_position.y = 0.0;
  pCVar4[-1].last_position.z = 0.0;
  fVar1 = pCVar4[-1].last_euler.y;
  pCVar4[-1].wind_velocity.x = (float)pCVar4[-1].version_num;
  pCVar4[-1].last_euler.z = fVar1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar4[-1].vertices[0x17f].velocity.z,
             "?gabriela.dfm" + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar4[-1].locked_vertex_indices[0x31e] + 0x158),
             (char *)0x5e0e49);
  return (CGabriella *)&pCVar4[-1].vertices[0x17d].bone_positions[1].z;
}
