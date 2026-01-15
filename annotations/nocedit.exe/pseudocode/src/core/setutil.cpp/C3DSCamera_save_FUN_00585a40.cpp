// Name: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
// Address: 00585a40
// Address Range: [[00585a40, 00585c84]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"-- camera name ------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"pos\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"orient\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->orientation).x,
             (double)(this_ptr->orientation).z,(double)(this_ptr->orientation).y);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fov\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f\n",(double)this_ptr->projection_scale);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"vmat\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation_matrix).m[0].x,
             (double)(this_ptr->rotation_matrix).m[0].y,(double)(this_ptr->rotation_matrix).m[0].z);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation_matrix).m[1].x,
             (double)(this_ptr->rotation_matrix).m[1].y,(double)(this_ptr->rotation_matrix).m[1].z);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation_matrix).m[2].x,
             (double)(this_ptr->rotation_matrix).m[2].y,(double)(this_ptr->rotation_matrix).m[2].z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (this_ptr->fog_enabled == 0) {
    core_dcamera_cpp_saveCameraFog_FUN_00453f10(&this_ptr->fog,file_handle);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"box min, max\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",(double)(this_ptr->box_min).x,
             (double)(this_ptr->box_min).y,(double)(this_ptr->box_min).z);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",(double)(this_ptr->box_max).x,
             (double)(this_ptr->box_max).y,(double)(this_ptr->box_max).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"reverbPreset\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  return;
}
