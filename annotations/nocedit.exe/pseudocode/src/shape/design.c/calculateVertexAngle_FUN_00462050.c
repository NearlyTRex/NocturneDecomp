// Name: shape_design.c_calculateVertexAngle_FUN_00462050
// Address: 00462050
// Address Range: [[00462050, 00462122]]
// Convention: __cdecl
// Signature: double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)

#include "nocturne.h"

double __cdecl
shape_design_c_calculateVertexAngle_FUN_00462050
          (int vertex1_index,int vertex2_index,int vertex3_index)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  double dVar3;
  int in_stack_00000004;
  float fVar4;
  float fStack_80;
  double local_6c;
  double local_64;
  double local_5c;
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
  
  local_2c = g_LoadedVertices[in_stack_00000004].vertex.x;
  local_28 = g_LoadedVertices[in_stack_00000004].vertex.y;
  local_24 = g_LoadedVertices[in_stack_00000004].vertex.z;
  fStack_20 = g_LoadedVertices[in_stack_00000004].u;
  fStack_1c = g_LoadedVertices[in_stack_00000004].v;
  local_54 = g_LoadedVertices[vertex1_index].vertex.x;
  local_50 = g_LoadedVertices[vertex1_index].vertex.y;
  local_4c = g_LoadedVertices[vertex1_index].vertex.z;
  fStack_48 = g_LoadedVertices[vertex1_index].u;
  fStack_44 = g_LoadedVertices[vertex1_index].v;
  local_40 = g_LoadedVertices[vertex2_index].vertex.x;
  local_3c = g_LoadedVertices[vertex2_index].vertex.y;
  local_38 = g_LoadedVertices[vertex2_index].vertex.z;
  fStack_34 = g_LoadedVertices[vertex2_index].u;
  fStack_30 = g_LoadedVertices[vertex2_index].v;
  fVar4 = SUB84 /* extract 2-byte value */((double)(local_2c - local_54),0);
  fStack_80 = (float)((ulonglong)(double)(local_2c - local_54) >> 0x20);
  fVar1 = local_28 - local_50;
  fVar2 = local_24 - local_4c;
  local_6c = (double)(local_40 - local_54);
  local_64 = (double)(local_3c - local_50);
  local_5c = (double)(local_38 - local_4c);
  shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&stack0xffffff7c);
  shape_design_c_normalizeVertex_FUN_00461e60((CVector3f *)&local_6c);
  dVar3 = shape_design_c_clampedArccos_FUN_00461c50
                    ((double)CONCAT44 /* combine 2-byte values */(fVar4,(int)((ulonglong)
                                                  ((double)fVar2 * local_5c +
                                                  (double)CONCAT44 /* combine 2-byte values */(fStack_80,fVar4) * local_6c +
                                                  (double)fVar1 * local_64) >> 0x20)));
  return dVar3 * 57.295779513079999;
}
