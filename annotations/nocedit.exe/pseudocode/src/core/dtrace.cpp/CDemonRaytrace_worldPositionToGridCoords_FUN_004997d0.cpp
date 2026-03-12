// Name: core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
// Address: 004997d0
// Address Range: [[004997d0, 00499871]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0(CDemonRaytrace *this_ptr,CVector3f *world_position,CVector3i *output_grid_coords)

{
  int *unaff_ESI;
  byte bVar2;
  int aiStackY_1004 [1016];
  int local_18;
  int local_14;
  double local_10;
  double dVar1;
  
  bVar2 = 0;
  local_10 = floor
                       ((double)((world_position->x - (this_ptr->bbox_min).x) /
                                (this_ptr->cell_size).x));
  dVar1 = ROUND(local_10);
  local_10 = floor
                       ((double)((world_position->y - (this_ptr->bbox_min).y) /
                                (this_ptr->cell_size).y));
  local_18 = (int)ROUND(ROUND(local_10));
  local_10 = floor
                       ((double)((world_position->z - (this_ptr->bbox_min).z) /
                                (this_ptr->cell_size).z));
  local_14 = (int)ROUND(ROUND(local_10));
  *unaff_ESI = (int)ROUND(dVar1);
  unaff_ESI[(uint)bVar2 * -2 + 1] = (&local_18)[(uint)bVar2 * -2];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (&local_14)[(uint)bVar2 * -2 + (uint)bVar2 * -2];
  return;
}
