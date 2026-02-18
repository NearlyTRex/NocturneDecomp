// Name: core_fire.cpp_CCrater_load_FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c49bb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  _fscanf(file_handle,"%d,%d,%f,%f\n",this_ptr,&this_ptr->has_smoke,&this_ptr->smoke_delay,
             &this_ptr->smoke_spawn_timer);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->center_position,&(this_ptr->center_position).y,
             &(this_ptr->center_position).z);
  iVar2 = 0;
  pfVar3 = &this_ptr->smoke_positions[0].z;
  pfVar4 = &this_ptr->smoke_positions[0].y;
  do {
    pCVar1 = this_ptr->smoke_positions + iVar2;
    iVar2 = iVar2 + 1;
    _fscanf(file_handle,"%f,%f,%f\n",pCVar1,pfVar4,pfVar3);
    pfVar3 = pfVar3 + 3;
    pfVar4 = pfVar4 + 3;
  } while (iVar2 < 3);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->corner_positions,
             &this_ptr->corner_positions[0].y,&this_ptr->corner_positions[0].z);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->corner_positions + 1,
             &this_ptr->corner_positions[1].y,&this_ptr->corner_positions[1].z);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->corner_positions + 2,
             &this_ptr->corner_positions[2].y,&this_ptr->corner_positions[2].z);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->corner_positions + 3,
             &this_ptr->corner_positions[3].y,&this_ptr->corner_positions[3].z);
  return;
}
