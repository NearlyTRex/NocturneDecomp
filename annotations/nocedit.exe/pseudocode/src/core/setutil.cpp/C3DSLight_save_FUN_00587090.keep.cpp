// Name: core_setutil.cpp_C3DSLight_save_FUN_00587090
// Address: 00587090
// MANUAL RECONSTRUCTION
// Address Range: [[00587090, 00587447]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,_FILE *file_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,_FILE *file_ptr)

{
  int iVar2;
  int iVar3;
  
  _fprintf(file_ptr,"-- light name ------------------------\n");
  _fprintf(file_ptr,"%s\n",this_ptr->name);
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
  _fprintf(file_ptr,"%d\n",this_ptr->light_type);
  _fprintf(file_ptr,"R,G,B, attenStart, attenEnd\n");
  _fprintf(file_ptr,"%f,%f,%f,%f,%f\n",(double)(float)(this_ptr->color).r,
             (double)(float)(this_ptr->color).g,(double)(float)(this_ptr->color).b,
             (double)this_ptr->atten_start,(double)this_ptr->atten_end);
  _fprintf(file_ptr,"sizeX, sizeY\n");
  _fprintf(file_ptr,"%d,%d\n",(this_ptr->size).x,(this_ptr->size).y);
  _fprintf(file_ptr,"filterCount\n");
  _fprintf(file_ptr,"%d\n",this_ptr->filter_count);
  _fprintf(file_ptr,"blendFilter\n");
  _fprintf(file_ptr,"%d\n",this_ptr->blend_filter);
  if (0 < this_ptr->filter_count) {
    iVar2 = 0;
    do {
      _fprintf(file_ptr,"%f,%d,%s\n",(double)this_ptr->filter_durations[iVar2],
                 this_ptr->filter_indices[iVar2],(char *)this_ptr->filter_names[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->filter_count);
  }
  _fprintf(file_ptr,"filterFrame\n");
  _fprintf(file_ptr,"%d\n",this_ptr->current_filter_frame);
  _fprintf(file_ptr,"moveFilter,filterVelX,filterVelY,filterPosX,filterPosY\n");
  _fprintf(file_ptr,"%d,%d,%d,%d,%d\n",this_ptr->move_filter,
             (this_ptr->filter_vel).x,(this_ptr->filter_vel).y,
             (this_ptr->filter_pos).x,(this_ptr->filter_pos).y);
  _fprintf(file_ptr,"onTime, cycleTime\n");
  _fprintf(file_ptr,"%f,%f\n",(double)this_ptr->on_time,(double)this_ptr->cycle_time);
  _fprintf(file_ptr,"visible\n");
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (this_ptr->visible_flags[iVar3] != '\0') {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xfa);
  _fprintf(file_ptr,"%d\n",iVar2);
  iVar3 = 0;
  do {
    if (this_ptr->visible_flags[iVar3] != '\0') {
      _fprintf(file_ptr,"%d,%d,%d,%d,%d\n",iVar3,
               this_ptr->camera_light_bounds[iVar3].x_min,
               this_ptr->camera_light_bounds[iVar3].x_max,
               this_ptr->camera_light_bounds[iVar3].y_min,
               this_ptr->camera_light_bounds[iVar3].y_max);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xfa);
  return;
}
