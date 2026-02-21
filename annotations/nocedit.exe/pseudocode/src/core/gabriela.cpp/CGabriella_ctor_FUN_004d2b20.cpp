// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004d2b20
// Address: 004d2b20
// Address Range: [[004d2b20, 004d2c37]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(CGabriella *this_ptr)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(CGabriella *this_ptr)

{
  float fVar1;
  CHero *pCVar2;
  CCloth *pCVar3;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0
                     ((CCloth *)&pCVar2[1].base.base.orient_matrix.m[0].y);
  pCVar3[-1].vertices[0x182].rest_lengths[10] = (float)&g_CGabriellaVTable;
  pCVar3[-1].locked_vertex_indices[0x381] = 0;
  pCVar3[-1].locked_vertex_indices[0x382] = 0;
  pCVar3[-1].locked_vertex_indices[899] = 0;
  pCVar3[-1].vertex_sort_buffer = (int *)0x0;
  pCVar3[-1].last_euler.x = 0.0;
  pCVar3[-1].inv_delta_time = 0.0;
  pCVar3[-1].floor_y = -0.5235988;
  pCVar3[-1].unk.y = 0.0;
  pCVar3[-1].version_num = 0;
  pCVar3[-1].last_euler.y = 0.0;
  pCVar3[-1].unk.z = 0.0;
  fVar1 = 10.0f;
  pCVar3[-1].last_position.x = 0.0;
  *(float *)pCVar3[1].model.model_filename = fVar1;
  pCVar3[-1].last_position.y = 0.0;
  pCVar3[-1].last_position.z = 0.0;
  fVar1 = pCVar3[-1].last_euler.y;
  pCVar3[-1].unk.x = (float)pCVar3[-1].version_num;
  pCVar3[-1].last_euler.z = fVar1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar3[-1].vertices[0x182].rest_lengths + 0xb),
             "gabriela.dfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(pCVar3[-1].locked_vertex_indices[0x326] + 0x158),
             "gabgun.kfm");
  return (CGabriella *)(pCVar3[-1].vertices[0x181].connected_indices + 0xd);
}
