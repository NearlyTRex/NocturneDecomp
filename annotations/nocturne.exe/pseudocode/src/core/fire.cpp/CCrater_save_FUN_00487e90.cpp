// Name: core_fire.cpp_CCrater_save_FUN_00487e90
// Address: 00487e90
// Address Range: [[00487e90, 00487fca]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_save_FUN_00487e90(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_00487e90(CCrater *this_ptr,_FILE *file_handle)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CCrater *pCVar4;
  
  _fprintf(file_handle,"%d,%d,%f,%f\n",this_ptr->active,this_ptr->has_smoke,
             (double)this_ptr->smoke_delay,(double)this_ptr->smoke_spawn_timer);
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->center_position).x,
             (double)(this_ptr->center_position).y,(double)(this_ptr->center_position).z);
  pCVar4 = this_ptr;
  do {
    pCVar2 = pCVar4->smoke_positions;
    pCVar3 = pCVar4->smoke_positions;
    pCVar1 = pCVar4->smoke_positions;
    pCVar4 = (CCrater *)&pCVar4->center_position;
    _fprintf(file_handle,"%f,%f,%f\n",(double)pCVar1->x,(double)pCVar3->y,(double)pCVar2->z);
  } while (pCVar4 != (CCrater *)&this_ptr->smoke_positions[0].z);
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
