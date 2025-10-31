// Name: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
// Address: 00476cf0
// Address Range: [[00476cf0, 00476d8d]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_cloth.cpp_FUN_00438ba0 (00438ba0) at 00438ba5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047eecd [UNCONDITIONAL_CALL]
//   core_level.cpp_staticInit_FUN_00503d80 (00503d80) at 00503d92 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005077c2 [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_00529a80 (00529a80) at 00529a88 [UNCONDITIONAL_CALL]
//   core_moon.cpp_staticInit_FUN_005299f0 (005299f0) at 00529a65 [UNCONDITIONAL_CALL]
//   core_set.cpp_staticInit_FUN_00569040 (00569040) at 00569093 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00596cd3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel *this_ptr)

{
  this_ptr->vertex_count = 0;
  this_ptr->vertex_list = (CVector3i **)0x0;
  this_ptr->vertex_normal_list = (CVector3i **)0x0;
  this_ptr->poly_count = 0;
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad **)0x0;
  this_ptr->poly_texture_index_list = (int *)0x0;
  this_ptr->env_map_opac_list = (uchar *)0x0;
  this_ptr->texture_count = 0;
  this_ptr->part_count = 0;
  this_ptr->frame_bounds = (CVector3f *)0x0;
  this_ptr->frame_count = 0;
  this_ptr->collision_triangle_count = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  this_ptr->transparent_pixel_flag = 0;
  this_ptr->disable_backface_culling = 0;
  this_ptr->model_filename[0] = '\0';
  return this_ptr;
}


// Assembly code:
// 00476cf0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: Stack[0x4] (READ)
// 00476cf4: MOV dword ptr [EAX + 0x104],0x0
// 00476cfe: MOV dword ptr [EAX + 0x10c],0x0
// 00476d08: MOV dword ptr [EAX + 0x108],0x0
// 00476d12: MOV dword ptr [EAX + 0x110],0x0
// 00476d1c: MOV dword ptr [EAX + 0x114],0x0
// 00476d26: MOV dword ptr [EAX + 0x118],0x0
// 00476d30: MOV dword ptr [EAX + 0x11c],0x0
// 00476d3a: MOV dword ptr [EAX + 0x120],0x0
// 00476d44: MOV dword ptr [EAX + 0x5584],0x0
// 00476d4e: MOV dword ptr [EAX + 0x5690],0x0
// 00476d58: MOV dword ptr [EAX + 0x100],0x0
// 00476d62: MOV dword ptr [EAX + 0x5694],0x0
// 00476d6c: MOV dword ptr [EAX + 0x5698],0x0
// 00476d76: MOV dword ptr [EAX + 0x569c],0x0
// 00476d80: MOV dword ptr [EAX + 0x56a0],0x0
// 00476d8a: MOV byte ptr [EAX],0x0
// 00476d8d: RET
