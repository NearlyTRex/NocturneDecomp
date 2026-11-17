// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004867c0
// Address: 004867c0
// Address Range: [[004867c0, 004868fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

#include "nocturne.h"

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  CVector3i *input;
  float local_48;
  
  pCVar2 = g_CDemonRenderer_PTR_00612560;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 0.25f * 3.141593f *
               (float)0.5;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)((float)u_coord * 0.0625f * 3.141593f *
                   (float)2) + (float10)(float)sky_texture[1].base.count;
  fVar5 = (float10)fsin(fVar4);
  fVar6 = (float10)fcos((float10)local_48);
  fVar4 = (float10)fcos(fVar4);
  fVar7 = (float10)g_SkyDomeVertexScale;
  fVar8 = (float10)256;
  round((double)(fVar3 * fVar7 * fVar8));
  round((double)(fVar5 * fVar7 * (float10)(double)fVar6 * fVar8));
  input = (CVector3i *)0x48689a;
  round((double)(fVar4 * fVar7 * (float10)(double)fVar6 * fVar8));
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&pCVar2->vertex_buffer_ptr[vertex_index].projected_vertex,input);
  iVar1 = (sky_texture->base).type;
  g_SRenderVertex_ARRAY_00629014[vertex_index].r = iVar1;
  g_SRenderVertex_ARRAY_00629014[vertex_index].g = iVar1;
  g_SRenderVertex_ARRAY_00629014[vertex_index].b = iVar1;
  g_SRenderVertex_ARRAY_00629014[vertex_index].a = 0;
  return;
}
