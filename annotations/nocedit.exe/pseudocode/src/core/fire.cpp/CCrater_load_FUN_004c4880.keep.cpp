// Name: core_fire.cpp_CCrater_load_FUN_004c4880
// Address: 004c4880
// MANUAL RECONSTRUCTION
// Address Range: [[004c4880, 004c49bb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle)

{
  int iVar2;

  _fscanf(file_handle,"%d,%d,%f,%f\n",&this_ptr->active,&this_ptr->has_smoke,&this_ptr->smoke_delay,
             &this_ptr->smoke_spawn_timer);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->center_position).x,&(this_ptr->center_position).y,
             &(this_ptr->center_position).z);
  iVar2 = 0;
  do {
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->smoke_positions[iVar2].x,
               &this_ptr->smoke_positions[iVar2].y,&this_ptr->smoke_positions[iVar2].z);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->corner_positions[0].x,
             &this_ptr->corner_positions[0].y,&this_ptr->corner_positions[0].z);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->corner_positions[1].x,
             &this_ptr->corner_positions[1].y,&this_ptr->corner_positions[1].z);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->corner_positions[2].x,
             &this_ptr->corner_positions[2].y,&this_ptr->corner_positions[2].z);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->corner_positions[3].x,
             &this_ptr->corner_positions[3].y,&this_ptr->corner_positions[3].z);
  return;
}
