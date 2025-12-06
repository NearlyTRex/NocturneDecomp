// Name: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
// Address: 00585a40
// Address Range: [[00585a40, 00585c84]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera *this_ptr,FILE *file_handle)

{
  uint uStack0000002c;
  int iStack00000038;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"-- camera name ------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"pos\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"orient\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->orientation).x,
             (double)(this_ptr->orientation).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fov\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"vmat\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (this_ptr->fog_enabled == 0) {
    core_dcamera_cpp_saveCameraFog_FUN_00453f10(&this_ptr->fog,file_handle);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"box min, max\n");
  uStack0000002c = (uint)((ulonglong)(double)(this_ptr->box_min).z >> 0x20);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%g,%g,%g\n");
  uStack0000002c = SUB84 /* extract 2-byte value */((double)(this_ptr->box_max).z,0);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%g,%g,%g\n");
  uStack0000002c = 0x585c54;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"reverbPreset\n");
  iStack00000038 = this_ptr->reverb_preset;
  uStack0000002c = 0x585c69;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  return;
}
