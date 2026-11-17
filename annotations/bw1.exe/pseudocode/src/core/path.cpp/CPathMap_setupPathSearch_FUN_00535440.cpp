// Name: core_path.cpp_CPathMap_setupPathSearch_FUN_00535440
// Address: 00535440
// Address Range: [[00535440, 00535489]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_00535440(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_00535440(CPathMap *this_ptr)

{
  g_INT_01e6c178 = 100;
  g_INT_01e6c174 = 99;
  g_INT_01e6c16c = 0x32;
  g_INT_01e6c170 = 0x32;
  g_INT_01e6be44 = 2;
  core_path_cpp_CPathMap_searchGrid_FUN_00535490(this_ptr,(this_ptr->voxel_coords).y);
  return;
}
