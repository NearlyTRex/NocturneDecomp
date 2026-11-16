// Name: core_fire.cpp_CCrater_save_FUN_00499da0
// Address: 00499da0
// Address Range: [[00499da0, 00499eda]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_save_FUN_00499da0(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_00499da0(CCrater *this_ptr,_FILE *file_handle)

{
  CVector3f *pCVar1;
  
  _fprintf(file_handle,"%d,%d,%f,%f\n");
  pCVar1 = this_ptr->smoke_positions;
  _fprintf(file_handle,"%f,%f,%f\n");
  do {
    this_ptr = (CCrater *)&this_ptr->center_position;
    _fprintf(file_handle,"%f,%f,%f\n");
  } while (this_ptr != (CCrater *)&pCVar1->z);
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  return;
}
