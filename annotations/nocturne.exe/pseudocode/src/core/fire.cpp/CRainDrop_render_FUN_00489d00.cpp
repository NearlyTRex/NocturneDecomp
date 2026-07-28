// Name: core_fire.cpp_CRainDrop_render_FUN_00489d00
// Address: 00489d00
// Address Range: [[00489d00, 0048a0a0]]
// Convention: unknown
// Signature: void core_fire_cpp_CRainDrop_render_FUN_00489d00(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CRainDrop_render_FUN_00489d00(CVector3f *param_1)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  double dVar3;
  int aiStackY_1020 [983];
  uint uVar4;
  int local_a8;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  CVector3i local_50;
  CVector3i local_44;
  uint local_38;
  int iStack_34;
  CVector3i CStack_30;
  uint local_20;
  int aiStack_1c [4];
  
  bVar2 = 0;
  vertex_ptr = DAT_005ae704->vertex_buffer_ptr;
  local_74.x = (int)ROUND(param_1->x * 256.0f);
  local_74.y = (int)ROUND(param_1->y * 256.0f);
  local_74.z = (int)ROUND(param_1->z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_74);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_FUN_00460d90(DAT_005ae704);
  uVar4 = 0;
  local_20 = local_38;
  aiStack_1c[(uint)bVar2 * -2] = (&iStack_34)[(uint)bVar2 * -2];
  aiStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(int *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,&local_20,uVar4);
  local_5c = 0xbe000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_68.x = (int)ROUND(256.0f * -0.125);
  local_68.y = (int)ROUND(256.0f * -0.125);
  local_68.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_68);
  local_5c = 0x3e000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_80.x = (int)ROUND(256.0f * 0.125);
  local_80.y = (int)ROUND(256.0f * -0.125);
  local_80.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_80);
  local_5c = 0x3e000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_44.x = (int)ROUND(256.0f * 0.125);
  local_44.y = (int)ROUND(256.0f * 0.125);
  local_44.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_44);
  local_5c = 0xbe000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_50.x = (int)ROUND(256.0f * -0.125);
  local_50.y = (int)ROUND(256.0f * 0.125);
  local_50.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_50);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b8bbc);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
  aiStack_1c[2] = 0xffff - _DAT_01c038f4;
  _DAT_005c5030 = 0xdc0000;
  _DAT_005c505c = 0xd00000;
  _DAT_005c5060 = 0xdc0000;
  DAT_005c502c = 0x800000;
  _DAT_005c508c = 0x800000;
  _DAT_005c50bc = 0x800000;
  _DAT_005c5090 = 0x900000;
  aiStack_1c[3] = aiStack_1c[2];
  dVar3 = round
                    ((double)((float)aiStack_1c[2] * param_1[2].x * (float)4));
  DAT_005c5040 = (int)ROUND(dVar3);
  _DAT_005c50c0 = 0x900000;
  CStack_30.x = (int)ROUND(param_1->x * 256.0f);
  CStack_30.y = (int)ROUND(param_1->y * 256.0f);
  CStack_30.z = (int)ROUND(param_1->z * 256.0f);
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  aiStack_1c[1] = DAT_005c5040;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
            (0x01E57284,&CStack_30,(CVector3i *)&DAT_01c08d14,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  local_a8 = 4;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (DAT_005ae704,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
