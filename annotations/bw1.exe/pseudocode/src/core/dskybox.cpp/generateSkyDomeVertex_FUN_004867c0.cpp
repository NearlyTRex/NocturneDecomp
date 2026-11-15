// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004867c0
// Address: 004867c0
// Address Range: [[004867c0, 004868fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)

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
  
  piVar2 = DAT_00612560;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * _DAT_005db70c * _DAT_005db6fc * (float)_DAT_005db714;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)((float)u_coord * _DAT_005db6f8 * _DAT_005db6fc * (float)_DAT_005db704) +
          (float10)(float)sky_texture[1].base.count;
  fVar5 = (float10)fsin(fVar4);
  fVar6 = (float10)fcos((float10)local_48);
  fVar4 = (float10)fcos(fVar4);
  fVar7 = (float10)_DAT_006144d4;
  fVar8 = (float10)_DAT_005db71c;
  round((double)(fVar3 * fVar7 * fVar8));
  round((double)(fVar5 * fVar7 * (float10)(double)fVar6 * fVar8));
  input = (CVector3i *)0x48689a;
  round((double)(fVar4 * fVar7 * (float10)(double)fVar6 * fVar8));
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            ((SProjectedVertex *)(*piVar2 + vertex_index * 0x30),input);
  iVar1 = (sky_texture->base).type;
  (&DAT_00629034)[vertex_index * 0xc] = iVar1;
  (&DAT_00629038)[vertex_index * 0xc] = iVar1;
  (&DAT_0062903c)[vertex_index * 0xc] = iVar1;
  (&DAT_00629040)[vertex_index * 0xc] = 0;
  return;
}
