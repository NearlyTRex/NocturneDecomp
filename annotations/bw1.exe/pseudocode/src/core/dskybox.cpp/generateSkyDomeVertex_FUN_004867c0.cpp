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
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  CVector3i *input;
  float local_48;
  CVector3i local_44;
  double local_38;
  double local_30;
  float local_1c;
  int local_18;
  
  local_18 = u_coord;
  local_1c = (float)u_coord * _DAT_005db6f8 * _DAT_005db6fc * (float)_DAT_005db704;
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * _DAT_005db70c * _DAT_005db6fc * (float)_DAT_005db714;
    local_18 = v_coord;
  }
  fVar3 = (float10)fsin((float10)local_48);
  fVar4 = (float10)local_1c + (float10)(float)sky_texture[1].base.count;
  fVar5 = (float10)fsin(fVar4);
  fVar6 = (float10)fcos((float10)local_48);
  fVar4 = (float10)fcos(fVar4);
  fVar7 = (float10)_DAT_006144d4;
  local_30 = (double)fVar6;
  fVar6 = (float10)_DAT_005db71c;
  fVar3 = fVar3 * fVar7 * fVar6;
  fVar5 = fVar5 * fVar7 * (float10)local_30 * fVar6;
  fVar6 = fVar4 * fVar7 * (float10)local_30 * fVar6;
  input = &local_44;
  local_38 = local_30;
  round();
  local_44.y = (int)ROUND(fVar3);
  round();
  uVar8 = round();
  iVar2 = (int)uVar8;
  local_44.x = (int)ROUND(fVar5);
  local_44.z = (int)ROUND(fVar6);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)((ulonglong)uVar8 >> 0x20) + iVar2 * 0x10),input);
  iVar1 = (sky_texture->base).type;
  (&DAT_00629034)[iVar2 * 4] = iVar1;
  (&DAT_00629038)[iVar2 * 4] = iVar1;
  (&DAT_0062903c)[iVar2 * 4] = iVar1;
  (&DAT_00629040)[iVar2 * 4] = 0;
  return;
}
