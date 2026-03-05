// Name: core_charactr.cpp_projectPointToVertex_FUN_0042f930
// Address: 0042f930
// Address Range: [[0042f930, 0042f984]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_projectPointToVertex_FUN_0042f930(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_projectPointToVertex_FUN_0042f930(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position)

{
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_position->x * 256.0f);
  local_10.y = (int)ROUND(world_position->y * 256.0f);
  local_10.z = (int)ROUND(world_position->z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (*vertex_array + vertex_index * 2,&local_10);
  return;
}
