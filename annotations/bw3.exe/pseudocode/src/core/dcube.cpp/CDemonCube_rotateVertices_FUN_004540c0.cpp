// Name: core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0
// Address: 004540c0
// Address Range: [[004540c0, 00454326]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_004540c0(CDemonCube *this_ptr,uint rendering_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_004540c0(CDemonCube *this_ptr,uint rendering_mode)

{
  float *pfVar1;
  CDemonCubeTriangle *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  SRenderVertex *output;
  CVector3i local_48;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
  if (25000 < this_ptr->vertex_count) {
    _DAT_01d71de0 = "..\\core\\dcube.cpp";
    _DAT_01d71de4 = 0x7bb;
    core_main_c_FUN_004e4330("CDemonCube::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",this_ptr->vertex_count,25000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  pCVar4 = this_ptr->vertex_buffer;
  local_20 = 0;
  local_1c = 0;
  output = DAT_005f2afc->vertex_buffer_ptr;
  if (0 < this_ptr->vertex_count) {
    do {
      local_48.x = (int)ROUND(pCVar4->x * _DAT_005de020);
      local_48.y = (int)ROUND(pCVar4->y * _DAT_005de020);
      local_48.z = (int)ROUND(pCVar4->z * _DAT_005de020);
      engine_special_cpp_FUN_005632a3(&output->projected_vertex,&local_48);
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        local_20 = local_20 + 1;
      }
      output = output + 1;
      pCVar4 = pCVar4 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->vertex_count);
  }
  if (local_20 == this_ptr->vertex_count) {
    if (DAT_005f2afc->advanced_culling_enabled == 0) {
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,0);
    }
  }
  if ((DAT_015485f8 & 1) == 0) {
    DAT_015485f8 = DAT_015485f8 | 1;
    _DAT_015485ec = 0x3f13cd3a;
    _DAT_015485f4 = 0x3f13cd3a;
    _DAT_015485f0 = 0xbf13cd3a;
  }
  local_14 = 0;
  if (0 < this_ptr->triangle_count) {
    local_24 = rendering_mode << 2;
    local_18 = 0;
    do {
      if (rendering_mode < 5) {
                    /* WARNING: Could not recover jumptable at 0x004541de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&PTR_LAB_004540a0 + local_24))();
        return;
      }
      pCVar2 = this_ptr->triangle_buffer;
      pfVar1 = (float *)((int)(pCVar2->triangle).vertices + local_18 + 0xc);
      if (&local_3c != pfVar1) {
        local_3c = *pfVar1;
        local_38 = *(float *)((int)(pCVar2->triangle).vertices + local_18 + 0x10);
        local_34 = *(float *)((int)(pCVar2->triangle).vertices + local_18 + 0x14);
      }
      local_3c = local_3c * _DAT_005ba366;
      local_38 = local_38 * _DAT_005ba366;
      local_34 = _DAT_005ba366 * local_34;
      local_28 = (uint)ROUND(local_34);
      local_2c = (uint)ROUND(local_38);
      local_30 = (uint)ROUND(local_3c);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
                (DAT_005f2afc,local_30 & 0xff,local_2c & 0xff,local_28 & 0xff);
      iVar3 = local_18 + 0x20;
      iVar5 = local_14 + 1;
      core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00453c40
                ((CVector3f **)((int)(this_ptr->triangle_buffer->triangle).vertices + local_18),
                 this_ptr->vertex_buffer);
      local_18 = iVar3;
      local_14 = iVar5;
    } while (iVar5 < this_ptr->triangle_count);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  return;
}
