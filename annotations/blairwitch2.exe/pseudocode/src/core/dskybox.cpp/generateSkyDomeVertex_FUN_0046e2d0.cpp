// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_0046e2d0
// Address: 0046e2d0
// Address Range: [[0046e2d0, 0046e40a]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_0046e2d0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_0046e2d0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  CVector3i *input;
  float local_48;
  
  piVar2 = DAT_0060b280;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * _DAT_005d1913 * _DAT_005d1903 * (float)_DAT_005d191b;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)((float)u_coord * _DAT_005d18ff * _DAT_005d1903 * (float)_DAT_005d190b) +
          (float10)(float)sky_texture[1].base.count;
  fVar5 = (float10)fsin(fVar4);
  fVar6 = (float10)fcos((float10)local_48);
  fVar4 = (float10)fcos(fVar4);
  fVar7 = (float10)_DAT_0060d1f4;
  fVar8 = (float10)_DAT_005d1923;
  round((double)(fVar3 * fVar7 * fVar8));
  round((double)(fVar5 * fVar7 * (float10)(double)fVar6 * fVar8));
  input = (CVector3i *)0x46e3aa;
  round((double)(fVar4 * fVar7 * (float10)(double)fVar6 * fVar8));
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            ((SProjectedVertex *)(*piVar2 + vertex_index * 0x30),input);
  iVar1 = (sky_texture->base).type;
  (&DAT_00622034)[vertex_index * 0xc] = iVar1;
  (&DAT_00622038)[vertex_index * 0xc] = iVar1;
  (&DAT_0062203c)[vertex_index * 0xc] = iVar1;
  (&DAT_00622040)[vertex_index * 0xc] = 0;
  return;
}
