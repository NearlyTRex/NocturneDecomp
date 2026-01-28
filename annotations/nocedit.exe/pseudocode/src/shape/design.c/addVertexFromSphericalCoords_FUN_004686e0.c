// Name: shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
// Address: 004686e0
// Address Range: [[004686e0, 004687bf]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_addVertexFromSphericalCoords_FUN_004686e0 (float latitude_degrees,float longitude_degrees,float radius)

#include "nocturne.h"

void __cdecl
shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
          (float latitude_degrees,float longitude_degrees,float radius)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)fsin((float10)longitude_degrees * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  fVar2 = (float10)fcos((float10)longitude_degrees * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  fVar3 = (float10)fcos((float10)latitude_degrees * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  fVar4 = (float10)fsin((float10)latitude_degrees * (float10)0.0055555555555555497 *
                        (float10)3.1415926535000001);
  g_LoadedVertices[g_VertexCount].vertex.x =
       (float)((float10)(float)fVar2 * (float10)radius * fVar3);
  g_LoadedVertices[g_VertexCount].vertex.y = (float)((float10)radius * fVar1);
  g_LoadedVertices[g_VertexCount].vertex.z =
       (float)((float10)(float)fVar2 * (float10)radius * fVar4);
  g_LoadedVertices[g_VertexCount].u = latitude_degrees * (float)0.0027777777777777801;
  g_LoadedVertices[g_VertexCount].v =
       (longitude_degrees + (float)90) * (float)0.0055555555555555497;
  g_VertexCount = g_VertexCount + 1;
  return;
}
