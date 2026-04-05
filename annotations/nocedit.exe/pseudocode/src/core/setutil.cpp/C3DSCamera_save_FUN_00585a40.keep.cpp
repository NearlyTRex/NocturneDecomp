// Name: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
// Address: 00585a40
// MANUAL RECONSTRUCTION
// Address Range: [[00585a40, 00585c84]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera *this_ptr,_FILE *file_handle)

{
  _fprintf(file_handle,"-- camera name ------------------------\n");
  _fprintf(file_handle,"%s\n",this_ptr->name);
  _fprintf(file_handle,"pos\n");
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  _fprintf(file_handle,"orient\n");
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->orientation).x,
             (double)(this_ptr->orientation).z,(double)(this_ptr->orientation).y);
  _fprintf(file_handle,"fov\n");
  _fprintf(file_handle,"%f\n",(double)this_ptr->projection_scale);
  _fprintf(file_handle,"vmat\n");
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation_matrix).m[0].x,
             (double)(this_ptr->rotation_matrix).m[0].y,(double)(this_ptr->rotation_matrix).m[0].z);
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation_matrix).m[1].x,
             (double)(this_ptr->rotation_matrix).m[1].y,(double)(this_ptr->rotation_matrix).m[1].z);
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation_matrix).m[2].x,
             (double)(this_ptr->rotation_matrix).m[2].y,(double)(this_ptr->rotation_matrix).m[2].z);
  _fprintf(file_handle,"%d\n",this_ptr->fog_enabled);
  if (this_ptr->fog_enabled == 0) {
    core_dcamera_cpp_saveCameraFog_FUN_00453f10(&this_ptr->fog,file_handle);
  }
  _fprintf(file_handle,"box min, max\n");
  _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->box_min).x,
             (double)(this_ptr->box_min).y,(double)(this_ptr->box_min).z);
  _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->box_max).x,
             (double)(this_ptr->box_max).y,(double)(this_ptr->box_max).z);
  _fprintf(file_handle,"reverbPreset\n");
  _fprintf(file_handle,"%d\n",this_ptr->reverb_preset);
  return;
}
