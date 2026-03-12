// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// Address: 004900b0
// Address Range: [[004900b0, 004901ea]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(SMRGLTextureBasic *sky_texture,int u_coord,int v_coord,int vertex_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(SMRGLTextureBasic *sky_texture,int u_coord,int v_coord,int vertex_index)

{
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar1;
  float10 fVar6;
  float10 fVar7;
  float local_48;
  CVector3i local_44;
  double local_38;
  double local_30;
  float local_1c;
  int local_18;
  int iVar1;
  
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 0.25f * (float)3.1415926535000001 *
               (float)0.5;
  }
  fVar2 = (float10)fsin((float10)local_48);
  fVar3 = (float10)((float)u_coord * 0.0625f * (float)3.1415926535000001 *
                   (float)2) + (float10)(float)sky_texture[1].base.count;
  fVar4 = (float10)fsin(fVar3);
  fVar5 = (float10)fcos((float10)local_48);
  fVar1 = (float10)fcos(fVar3);
  fVar6 = (float10)g_SkyDomeVertexScale;
  fVar7 = (float10)256;
  local_44.y = (int)ROUND(ROUND(fVar2 * fVar6 * fVar7));
  local_44.x = (int)ROUND(ROUND(fVar4 * fVar6 * (float10)(double)fVar5 * fVar7));
  local_44.z = (int)ROUND(ROUND(fVar1 * fVar6 * (float10)(double)fVar5 * fVar7));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[vertex_index].projected_vertex,&local_44);
  iVar1 = (sky_texture->base).type;
  g_RenderVertexBuffer[vertex_index].r = iVar1;
  g_RenderVertexBuffer[vertex_index].g = iVar1;
  g_RenderVertexBuffer[vertex_index].b = iVar1;
  g_RenderVertexBuffer[vertex_index].a = 0;
  return;
}
