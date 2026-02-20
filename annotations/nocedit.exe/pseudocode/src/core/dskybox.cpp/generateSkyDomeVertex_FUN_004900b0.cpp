// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// Address: 004900b0
// Address Range: [[004900b0, 004901ea]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(float *light_color,int u_coord,int v_coord,float *uv_offset)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(float *light_color,int u_coord,int v_coord,float *uv_offset)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_48;
  CVector3i local_44;
  double local_38;
  double local_30;
  float local_1c;
  int local_18;
  
  local_18 = u_coord;
  local_1c = (float)u_coord * 0.0625f * (float)3.1415926535000001 *
             (float)2;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 0.25f * (float)3.1415926535000001 *
               (float)0.5;
    local_18 = v_coord;
  }
  fVar2 = (float10)fsin((float10)local_48);
  fVar3 = (float10)fsin((float10)local_1c + (float10)light_color[7]);
  fVar4 = (float10)fcos((float10)local_48);
  fVar5 = (float10)fcos((float10)local_1c + (float10)light_color[7]);
  fVar6 = (float10)g_SkyDomeVertexScale;
  local_38 = (double)fVar4;
  fVar4 = (float10)256;
  local_44.y = (int)ROUND(ROUND(fVar2 * fVar6 * fVar4));
  local_44.x = (int)ROUND(ROUND(fVar3 * fVar6 * (float10)local_38 * fVar4));
  local_44.z = (int)ROUND(ROUND(fVar5 * fVar6 * (float10)local_38 * fVar4));
  local_30 = local_38;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[(int)uv_offset].projected_vertex,&local_44);
  fVar1 = *light_color;
  g_RenderVertexBuffer[(int)uv_offset].z = (int)fVar1;
  g_RenderVertexBuffer[(int)uv_offset].r = (int)fVar1;
  g_RenderVertexBuffer[(int)uv_offset].g = (int)fVar1;
  g_RenderVertexBuffer[(int)uv_offset].fog = 0;
  return;
}
