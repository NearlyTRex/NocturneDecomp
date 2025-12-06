// Name: core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
// Address: 00587710
// Address Range: [[00587710, 00587842]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight *this_ptr,FILE *file_handle)

{
  int iVar1;
  
  core_setutil_cpp_C3DSLight_reset_FUN_005879b0(this_ptr);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"\"%[^\"]\",%d,%f,%f,%f,%f,%f,%f ",this_ptr->name,this_ptr,&this_ptr->pos,
                     &(this_ptr->pos).y,&(this_ptr->pos).z,&this_ptr->color,&(this_ptr->color).g,
                     &(this_ptr->color).b);
  if (iVar1 != 8) goto LAB_00587796;
  do {
    if (this_ptr->light_type == 0) {
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,",%f,%f,%f\n",",%f,%f,%f\n",&this_ptr->orient,
                         &(this_ptr->orient).z,&(this_ptr->orient).y);
      if (iVar1 == 3) {
        return;
      }
    }
    else {
      if (this_ptr->light_type != 1) {
        g_CurrentFilename = "..\\core\\setutil.cpp";
        g_CurrentLineNumber = 0x4a9;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown light type!");
        return;
      }
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,",%f,%f\n",",%f,%f\n",&this_ptr->atten_start,
                         &this_ptr->atten_end);
      if (iVar1 == 2) {
        if (this_ptr->atten_start < 0.0) {
          this_ptr->atten_start = 0.0;
        }
        if (0.0 <= this_ptr->atten_end) {
          return;
        }
        this_ptr->atten_end = 0.0;
        return;
      }
    }
LAB_00587796:
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x49d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't parse light from S3D file.");
  } while( true );
}
