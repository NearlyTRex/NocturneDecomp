// Name: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
// Address: 00501a00
// Address Range: [[00501a00, 00501bbb]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00 (CVector3i *vertex_data,SSurfacePackedNormal *data)

#include "nocturne.h"

void __cdecl
engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
          (CVector3i *vertex_data,SSurfacePackedNormal *data)

{
  CVector3i *pCVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  double dVar16;
  float local_30;
  
  iVar2 = data->vertex_index_1;
  pCVar1 = vertex_data + data->vertex_index_2;
  iVar3 = data->vertex_index_3;
  fVar9 = (float)(pCVar1->z - vertex_data[iVar2].z);
  fVar4 = (float)(vertex_data[iVar3].x - pCVar1->x);
  fVar8 = (float)(pCVar1->x - vertex_data[iVar2].x);
  fVar10 = (float)(vertex_data[iVar3].y - pCVar1->y);
  fVar6 = (float)(pCVar1->y - vertex_data[iVar2].y);
  fVar5 = (float)(vertex_data[iVar3].z - pCVar1->z);
  fVar7 = fVar6 * fVar5 - fVar10 * fVar9;
  fVar5 = fVar4 * fVar9 - fVar8 * fVar5;
  fVar4 = fVar8 * fVar10 - fVar4 * fVar6;
  local_30 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  local_30 = 1.0 / local_30;
  iVar2 = data->vertex_index_1;
  fVar8 = (float)65535;
  fVar6 = fVar7 * local_30 * fVar8;
  fVar5 = fVar5 * local_30 * fVar8;
  fVar8 = fVar4 * local_30 * fVar8;
  fVar14 = (float10)vertex_data[iVar2].x * (float10)fVar6 +
           (float10)vertex_data[iVar2].y * (float10)fVar5;
  fVar11 = (float10)vertex_data[iVar2].z * (float10)fVar8;
  fVar12 = (float10)fVar8;
  dVar15 = round((double)fVar6);
  dVar16 = round((double)fVar5);
  fVar13 = (float10)dVar16;
  dVar16 = round((double)fVar12);
  data->normal_x = (int)ROUND(dVar15);
  data->normal_y = (int)ROUND(fVar13);
  data->normal_z = (int)ROUND(dVar16);
  dVar15 = round((double)(fVar11 + fVar14));
  data->dot_product = (int)ROUND(dVar15);
  return;
}
