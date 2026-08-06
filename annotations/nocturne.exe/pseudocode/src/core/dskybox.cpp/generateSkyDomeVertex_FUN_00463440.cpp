// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_00463440
// Address: 00463440
// Address Range: [[00463440, 0046357a]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

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
  
  pCVar2 = g_CDemonRenderer_PTR_005ae704;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * 5.1806537865363094e-315._0_4_ * (float)3.1415926535000001 *
               (float)0.5;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)((float)u_coord * 0.0625f * (float)3.1415926535000001 *
                   (float)2) + (float10)(float)sky_texture[1].base.count;
  fVar5 = (float10)fsin(fVar4);
  fVar6 = (float10)fcos((float10)local_48);
  fVar4 = (float10)fcos(fVar4);
  fVar7 = (float10)_DAT_005b0678;
  fVar8 = (float10)256;
  round((double)(fVar3 * fVar7 * fVar8));
  round((double)(fVar5 * fVar7 * (float10)(double)fVar6 * fVar8));
  input = (CVector3i *)0x46351a;
  round((double)(fVar4 * fVar7 * (float10)(double)fVar6 * fVar8));
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&pCVar2->vertex_buffer_ptr[vertex_index].projected_vertex,input);
  iVar1 = (sky_texture->base).type;
  (&DAT_005c5034)[vertex_index * 0xc] = iVar1;
  (&DAT_005c5038)[vertex_index * 0xc] = iVar1;
  (&DAT_005c503c)[vertex_index * 0xc] = iVar1;
  (&DAT_005c5040)[vertex_index * 0xc] = 0;
  return;
}
