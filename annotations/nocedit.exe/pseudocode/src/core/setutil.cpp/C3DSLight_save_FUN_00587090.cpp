// Name: core_setutil.cpp_C3DSLight_save_FUN_00587090
// Address: 00587090
// Address Range: [[00587090, 00587447]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,_FILE *file_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,_FILE *file_ptr)

{
  C3DSLight *pCVar1;
  int iVar2;
  
  _fprintf(file_ptr,"-- light name ------------------------\n");
  _fprintf(file_ptr,"%s\n");
  _fprintf(file_ptr,"pos\n");
  _fprintf(file_ptr,"%f,%f,%f\n",(double)(this_ptr->pos).x,(double)(this_ptr->pos).y,
             (double)(this_ptr->pos).z);
  _fprintf(file_ptr,"orient\n");
  _fprintf(file_ptr,"%f,%f,%f\n",(double)(this_ptr->orient).x,(double)(this_ptr->orient).z,
             (double)(this_ptr->orient).y);
  _fprintf(file_ptr,"fov\n");
  _fprintf(file_ptr,"%f\n",(double)this_ptr->fov);
  _fprintf(file_ptr,"aspect\n");
  _fprintf(file_ptr,"%f\n",(double)this_ptr->aspect);
  _fprintf(file_ptr,"intensity\n");
  _fprintf(file_ptr,"%f\n",(double)this_ptr->intensity);
  _fprintf(file_ptr,"type\n");
  _fprintf(file_ptr,"%d\n");
  _fprintf(file_ptr,"R,G,B, attenStart, attenEnd\n");
  _fprintf(file_ptr,"%f,%f,%f,%f,%f\n",(double)(this_ptr->color).r,(double)(this_ptr->color).g,
             (double)(this_ptr->color).b,(double)this_ptr->atten_start,(double)this_ptr->atten_end);
  _fprintf(file_ptr,"sizeX, sizeY\n");
  _fprintf(file_ptr,"%d,%d\n",(this_ptr->size).x);
  _fprintf(file_ptr,"filterCount\n");
  _fprintf(file_ptr,"%d\n");
  _fprintf(file_ptr,"blendFilter\n");
  _fprintf(file_ptr,"%d\n");
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      _fprintf(file_ptr,"%f,%d,%s\n",(double)pCVar1->filter_durations[0],
                 pCVar1->filter_indices[0]);
      iVar2 = iVar2 + 1;
      pCVar1 = (C3DSLight *)pCVar1->name;
    } while (iVar2 < this_ptr->filter_count);
  }
  _fprintf(file_ptr,"filterFrame\n");
  _fprintf(file_ptr,"%d\n");
  _fprintf(file_ptr,"moveFilter,filterVelX,filterVelY,filterPosX,filterPosY\n");
  _fprintf(file_ptr,"%d,%d,%d,%d,%d\n");
  _fprintf(file_ptr,"onTime, cycleTime\n");
  _fprintf(file_ptr,"%f,%f\n",(double)this_ptr->on_time,(double)this_ptr->cycle_time);
  _fprintf(file_ptr,"visible\n");
  pCVar1 = this_ptr;
  do {
    pCVar1 = (C3DSLight *)((int)&pCVar1->light_type + 1);
  } while (pCVar1 != (C3DSLight *)(this_ptr->name + 0xf6));
  _fprintf(file_ptr,"%d\n");
  iVar2 = 0;
  do {
    if (this_ptr->visible_flags[0] != '\0') {
      _fprintf(file_ptr,"%d,%d,%d,%d,%d\n");
    }
    iVar2 = iVar2 + 1;
    this_ptr = (C3DSLight *)((int)&this_ptr->light_type + 1);
  } while (iVar2 < 0xfa);
  return;
}
