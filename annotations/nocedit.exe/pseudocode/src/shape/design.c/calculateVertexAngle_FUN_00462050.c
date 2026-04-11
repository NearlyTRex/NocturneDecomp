// Name: shape_design.c_calculateVertexAngle_FUN_00462050
// Address: 00462050
// Address Range: [[00462050, 00462122] [00608bb5, 00608c29]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculateVertexAngle_FUN_00462050(int vertex1_index,int vertex2_index,int vertex3_index)

#include "nocturne.h"

double __cdecl shape_design_c_calculateVertexAngle_FUN_00462050(int vertex1_index,int vertex2_index,int vertex3_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar1;
  CVector3d local_84;
  CVector3d local_6c;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  
  fVar1 = g_LoadedVertices[vertex2_index].vertex.x;
  fVar2 = g_LoadedVertices[vertex2_index].vertex.y;
  fVar3 = g_LoadedVertices[vertex2_index].vertex.z;
  local_84.x = (double)(g_LoadedVertices[vertex1_index].vertex.x - fVar1);
  local_84.y = (double)(g_LoadedVertices[vertex1_index].vertex.y - fVar2);
  local_84.z = (double)(g_LoadedVertices[vertex1_index].vertex.z - fVar3);
  local_6c.x = (double)(g_LoadedVertices[vertex3_index].vertex.x - fVar1);
  local_6c.y = (double)(g_LoadedVertices[vertex3_index].vertex.y - fVar2);
  local_6c.z = (double)(g_LoadedVertices[vertex3_index].vertex.z - fVar3);
  shape_design_c_normalizeVertex_FUN_00461e60(&local_84);
  shape_design_c_normalizeVertex_FUN_00461e60(&local_6c);
  dVar1 = shape_design_c_clampedArccos_FUN_00461c50
                    (local_84.z * local_6c.z + local_84.x * local_6c.x + local_84.y * local_6c.y);
  return dVar1 * 57.295779513079999;
}
