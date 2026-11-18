// Name: core_fire.cpp_CCrater_save_FUN_004b2740
// Address: 004b2740
// Address Range: [[004b2740, 004b287a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_save_FUN_004b2740(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_004b2740(CCrater *this_ptr,_FILE *file_handle)

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
