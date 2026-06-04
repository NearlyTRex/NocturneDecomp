// Name: core_fire.cpp_CCrater_save_FUN_004c49c0
// Address: 004c49c0
// MANUAL RECONSTRUCTION
// Address Range: [[004c49c0, 004c4afa]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,_FILE *file_handle)

{
  int iVar1;

  _fprintf(file_handle,"%d,%d,%f,%f\n",this_ptr->active,this_ptr->has_smoke,
             (double)this_ptr->smoke_delay,(double)this_ptr->smoke_spawn_timer);
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->center_position).x,
             (double)(this_ptr->center_position).y,(double)(this_ptr->center_position).z);
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    _fprintf(file_handle,"%f,%f,%f\n",(double)this_ptr->smoke_positions[iVar1].x,
               (double)this_ptr->smoke_positions[iVar1].y,(double)this_ptr->smoke_positions[iVar1].z);
  }
  _fprintf(file_handle,"%f,%f,%f\n",(double)this_ptr->corner_positions[0].x,
             (double)this_ptr->corner_positions[0].y,(double)this_ptr->corner_positions[0].z);
  _fprintf(file_handle,"%f,%f,%f\n",(double)this_ptr->corner_positions[1].x,
             (double)this_ptr->corner_positions[1].y,(double)this_ptr->corner_positions[1].z);
  _fprintf(file_handle,"%f,%f,%f\n",(double)this_ptr->corner_positions[2].x,
             (double)this_ptr->corner_positions[2].y,(double)this_ptr->corner_positions[2].z);
  _fprintf(file_handle,"%f,%f,%f\n",(double)this_ptr->corner_positions[3].x,
             (double)this_ptr->corner_positions[3].y,(double)this_ptr->corner_positions[3].z);
  return;
}
