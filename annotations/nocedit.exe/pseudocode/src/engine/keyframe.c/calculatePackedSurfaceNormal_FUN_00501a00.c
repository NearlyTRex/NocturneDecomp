// Name: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// Address: 00501a00
// Address Range: [[00501a00, 00501bbb]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data)

#include "nocturne.h"

void __cdecl
engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
          (CVector3i *vertex_data,SSurfacePackedNormal *data)

{
  CVector3i *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  float local_30;
  
  iVar10 = data->vertex_index_1;
  pCVar1 = vertex_data + data->vertex_index_2;
  iVar2 = data->vertex_index_3;
  fVar8 = (float)(pCVar1->z - vertex_data[iVar10].z);
  fVar3 = (float)(vertex_data[iVar2].x - pCVar1->x);
  fVar7 = (float)(pCVar1->x - vertex_data[iVar10].x);
  fVar9 = (float)(vertex_data[iVar2].y - pCVar1->y);
  fVar5 = (float)(pCVar1->y - vertex_data[iVar10].y);
  fVar4 = (float)(vertex_data[iVar2].z - pCVar1->z);
  fVar6 = fVar5 * fVar4 - fVar9 * fVar8;
  fVar4 = fVar3 * fVar8 - fVar7 * fVar4;
  fVar3 = fVar7 * fVar9 - fVar3 * fVar5;
  local_30 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  local_30 = 1.0 / local_30;
  iVar10 = data->vertex_index_1;
  fVar7 = (float)65535;
  fVar5 = fVar6 * local_30 * fVar7;
  fVar4 = fVar4 * local_30 * fVar7;
  fVar7 = fVar3 * local_30 * fVar7;
  fVar15 = (float10)vertex_data[iVar10].x * (float10)fVar5 +
           (float10)vertex_data[iVar10].y * (float10)fVar4;
  fVar11 = (float10)vertex_data[iVar10].z * (float10)fVar7;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar4;
  fVar14 = (float10)fVar7;
  dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(data,iVar10 * 3));
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  iVar10 = (int)((ulonglong)dVar16 >> 0x20);
  *(int *)(iVar10 + 8) = (int)ROUND(fVar12);
  *(int *)(iVar10 + 0xc) = (int)ROUND(fVar13);
  *(int *)(iVar10 + 0x10) = (int)ROUND(fVar14);
  fVar11 = fVar11 + fVar15;
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  *(int *)((int)((ulonglong)dVar16 >> 0x20) + 0x14) = (int)ROUND(fVar11);
  return;
}
