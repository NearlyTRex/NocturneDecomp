// Name: shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
// Address: 00469140
// Address Range: [[00469140, 00469219]]
// Convention: __cdecl
// Signature: void shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle, float pitch_angle, float radius)

#include "nocturne.h"

void __cdecl
shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
          (float heading_angle,float pitch_angle,float radius)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)fsin((float10)pitch_angle * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  fVar2 = (float10)fcos((float10)pitch_angle * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  fVar3 = (float10)fcos((float10)heading_angle * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  fVar4 = (float10)fsin((float10)heading_angle * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  g_LoadedVertices[g_VertexCount].vertex.x =
       (float)((float10)(float)fVar2 * (float10)radius * fVar3);
  g_LoadedVertices[g_VertexCount].vertex.y = (float)((float10)radius * fVar1);
  g_LoadedVertices[g_VertexCount].vertex.z =
       (float)((float10)(float)fVar2 * (float10)radius * fVar4);
  g_LoadedVertices[g_VertexCount].u = heading_angle * (float)0.011111111111111099;
  g_LoadedVertices[g_VertexCount].v = pitch_angle * (float)0.011111111111111099;
  g_VertexCount = g_VertexCount + 1;
  return;
}
