// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
// Address Range: [[004997d0, 00499871] [0060c959, 0060c975]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __stack2_esi core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

{
  double dVar2;
  double dVar3;
  int aiStackY_1004 [1016];
  int local_18;
  int local_14;
  double local_10;
  double dVar1;
  
  dVar2 = floor
                    ((double)((world_position->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x
                             ));
  dVar1 = ROUND(dVar2);
  dVar2 = floor
                    ((double)((world_position->y - (this_ptr->bbox_min).y) / (this_ptr->cell_size).y
                             ));
  dVar3 = floor
                    ((double)((world_position->z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z
                             ));
  output_grid_coords->x = (int)ROUND(dVar1);
  output_grid_coords->y = (int)ROUND(ROUND(dVar2));
  output_grid_coords->z = (int)ROUND(ROUND(dVar3));
  return;
}
