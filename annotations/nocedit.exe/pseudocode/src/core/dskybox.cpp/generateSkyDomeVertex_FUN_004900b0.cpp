// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// Address: 004900b0
// Address Range: [[004900b0, 004901ea]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(float *light_color,int u_coord,int v_coord,float *uv_offset)

#include "nocturne.h"

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(float *light_color,int u_coord,int v_coord,float *uv_offset)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  CVector3i *input;
  float local_48;
  
  pCVar2 = g_CDemonRendererPtr2;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 0.25f * (float)3.1415926535000001 *
               (float)0.5;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)((float)u_coord * 0.0625f * (float)3.1415926535000001 *
                   (float)2) + (float10)light_color[7];
  fVar5 = (float10)fsin(fVar4);
  fVar6 = (float10)fcos((float10)local_48);
  fVar4 = (float10)fcos(fVar4);
  fVar7 = (float10)g_SkyDomeVertexScale;
  fVar8 = (float10)256;
  fVar5 = fVar5 * fVar7 * (float10)(double)fVar6 * fVar8;
  round((double)(fVar3 * fVar7 * fVar8));
  round((double)fVar5);
  input = (CVector3i *)0x49018a;
  round((double)(fVar4 * fVar7 * (float10)(double)fVar6 * fVar8));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar2->vertex_buffer_ptr[(int)uv_offset].projected_vertex,input);
  fVar1 = *light_color;
  g_RenderVertexBuffer[(int)uv_offset].light = (int)fVar1;
  g_RenderVertexBuffer[(int)uv_offset].color = (int)fVar1;
  g_RenderVertexBuffer[(int)uv_offset].fog = (int)fVar1;
  g_RenderVertexBuffer[(int)uv_offset].w_recip = 0.0;
  return;
}
