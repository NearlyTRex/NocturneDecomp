// Name: core_charactr.cpp_projectPointToVertex_FUN_0042b510
// Address: 0042b510
// Address Range: [[0042b510, 0042b564]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_projectPointToVertex_FUN_0042b510(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_projectPointToVertex_FUN_0042b510(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position)

{
  CVector3i local_10;
  
  local_10.x = (int)ROUND(world_position->x * _DAT_0059b070);
  local_10.y = (int)ROUND(world_position->y * _DAT_0059b070);
  local_10.z = (int)ROUND(world_position->z * _DAT_0059b070);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (*vertex_array + vertex_index * 2,&local_10);
  return;
}
