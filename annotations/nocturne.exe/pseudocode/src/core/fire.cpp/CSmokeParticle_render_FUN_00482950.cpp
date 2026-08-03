// Name: core_fire.cpp_CSmokeParticle_render_FUN_00482950
// Address: 00482950
// Address Range: [[00482950, 00482c7d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00482950(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00482950(CSmokeParticle *this_ptr)

{
  CVector3f *world_position;
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  double dVar3;
  CVector3i local_64;
  float local_58;
  uint local_54;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i local_2c;
  float local_20;
  int local_1c;
  float local_18;
  
  vertex_ptr = DAT_005ae704->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * 256.0f);
  local_64.y = (int)ROUND((this_ptr->position).y * 256.0f);
  local_64.z = (int)ROUND((this_ptr->position).z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,vertex_ptr);
  if (iVar2 != 0) {
    dVar3 = round((double)this_ptr->age);
    local_1c = (int)ROUND(dVar3);
    if ((local_1c < 0) || (0x27 < local_1c)) {
      g_CHAR_PTR_01cc4800 = "..\\core\\fire.cpp";
      g_INT_01cc4804 = 0x11d;
      core_main_c_FUN_004c8440("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(&DAT_005b80f4 + local_1c * 0x18));
    world_position = &this_ptr->position;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
              (DAT_005ae704,(CVector3i *)&DAT_01c08d08,(CVector3i *)0x0);
    local_18 = this_ptr->drag_factor;
    local_54 = 0;
    local_64.z = (int)-local_18;
    local_2c.x = (int)ROUND((float)local_64.z * 256.0f);
    local_2c.y = (int)ROUND((float)local_64.z * 256.0f);
    local_2c.z = (int)ROUND(256.0f * 0.0);
    local_58 = (float)local_64.z;
    local_20 = (float)local_64.z;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_2c);
    local_64.z = (int)local_18;
    local_58 = local_20;
    local_54 = 0;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffff8c);
    local_54 = 0;
    local_64.z = (int)local_18;
    local_58 = local_18;
    local_38.x = (int)ROUND(local_18 * 256.0f);
    local_38.y = (int)ROUND(local_18 * 256.0f);
    local_38.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_64.z = (int)local_20;
    local_58 = local_18;
    local_54 = 0;
    local_50.x = (int)ROUND(local_20 * 256.0f);
    local_50.y = (int)ROUND(local_18 * 256.0f);
    local_50.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_50);
    DAT_005c502c = 0x80000;
    _DAT_005c5030 = 0xf80000;
    _DAT_005c505c = 0xf80000;
    _DAT_005c5060 = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c5090 = 0x80000;
    _DAT_005c50bc = 0x80000;
    _DAT_005c50c0 = 0x80000;
    local_44.x = (int)ROUND(world_position->x * 256.0f);
    local_44.y = (int)ROUND((this_ptr->position).y * 256.0f);
    local_44.z = (int)ROUND((this_ptr->position).z * 256.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
              (g_CDemonSet_PTR_005be368,&local_44,(CVector3i *)&DAT_01c08d14,0,4);
    core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
              (_DAT_007f7370,world_position,0);
    lVar1 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
              (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  }
  return;
}
