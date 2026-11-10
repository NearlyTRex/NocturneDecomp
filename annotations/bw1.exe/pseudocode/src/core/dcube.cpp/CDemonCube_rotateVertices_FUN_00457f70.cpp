// Name: core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70
// Address: 00457f70
// Address Range: [[00457f70, 004581d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457f70(CDemonCube *this_ptr,uint rendering_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457f70(CDemonCube *this_ptr,uint rendering_mode)

{
  CDemonCubeTriangle *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
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
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&DAT_02c8af28);
  if (20000 < this_ptr->vertex_count) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x7bb;
    core_main_c_FUN_005030e0("CDemonCube::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",this_ptr->vertex_count,20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  pCVar3 = this_ptr->vertex_buffer;
  local_20 = 0;
  local_1c = 0;
  output = DAT_00612560->vertex_buffer_ptr;
  if (0 < this_ptr->vertex_count) {
    do {
      local_48.x = (int)ROUND(pCVar3->x * _DAT_005fe660);
      local_48.y = (int)ROUND(pCVar3->y * _DAT_005fe660);
      local_48.z = (int)ROUND(pCVar3->z * _DAT_005fe660);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)output,&local_48);
      if (((byte)*(SProjectedVertex *)(output + 0x13) & 0x80) == 0) {
        local_20 = local_20 + 1;
      }
      output = output + 0x30;
      pCVar3 = pCVar3 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->vertex_count);
  }
  if (local_20 == this_ptr->vertex_count) {
    if (DAT_00612560->advanced_culling_enabled == 0) {
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,0);
    }
  }
  if ((DAT_0152bd48 & 1) == 0) {
    DAT_0152bd48 = DAT_0152bd48 | 1;
    _DAT_0152bd3c = 0x3f13cd3a;
    _DAT_0152bd44 = 0x3f13cd3a;
    _DAT_0152bd40 = 0xbf13cd3a;
  }
  local_14 = 0;
  if (0 < this_ptr->triangle_count) {
    local_24 = rendering_mode << 2;
    local_18 = 0;
    do {
      if (rendering_mode < 5) {
                    /* WARNING: Could not recover jumptable at 0x0045808e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&PTR_LAB_00457f50 + local_24))();
        return;
      }
      pCVar1 = this_ptr->triangle_buffer;
      if ((CDemonCubeTriangle *)&local_3c != pCVar1 + local_18 + 0xc) {
        local_3c = *(float *)(pCVar1 + local_18 + 0xc);
        local_38 = *(float *)(pCVar1 + local_18 + 0x10);
        local_34 = *(float *)(pCVar1 + local_18 + 0x14);
      }
      local_3c = local_3c * _DAT_005d7cff;
      local_38 = local_38 * _DAT_005d7cff;
      local_34 = _DAT_005d7cff * local_34;
      local_28 = (uint)ROUND(local_34);
      local_2c = (uint)ROUND(local_38);
      local_30 = (uint)ROUND(local_3c);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
                (DAT_00612560,local_30 & 0xff,local_2c & 0xff,local_28 & 0xff);
      iVar2 = local_18 + 0x20;
      iVar4 = local_14 + 1;
      core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_00457af0
                (this_ptr->triangle_buffer + local_18,this_ptr->vertex_buffer);
      local_18 = iVar2;
      local_14 = iVar4;
    } while (iVar4 < this_ptr->triangle_count);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
