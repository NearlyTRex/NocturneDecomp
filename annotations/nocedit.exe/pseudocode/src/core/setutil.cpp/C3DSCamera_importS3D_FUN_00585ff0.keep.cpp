// Name: core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
// Address: 00585ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00585ff0, 00586149]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int iVar1;
  float10 fVar2;
  byte local_18 [4];
  byte local_14 [4];
  byte local_10 [4];
  
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  iVar1 = _fscanf(file_handle,"\"%[^\"]\",%f,%f,%f,%f,%f,%f,%f\n",this_ptr->name,
                     &(this_ptr->position).x,&(this_ptr->position).y,&(this_ptr->position).z,
                     &(this_ptr->orientation).x,&(this_ptr->orientation).z,
                     &(this_ptr->orientation).y,&this_ptr->projection_scale);
  if (iVar1 != 8) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 467;
    core_main_c_displayErrorAndQuit_FUN_00506f10("File is corrupt in C3DSCamera::importS3D");
  }
  fVar2 = (float10)fptan((float10)this_ptr->projection_scale * (float10)0.5);
  this_ptr->projection_scale = (float)((float10)18 / fVar2);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->rotation_matrix).m[0].x,
             &(this_ptr->rotation_matrix).m[1].x,&(this_ptr->rotation_matrix).m[2].x);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->rotation_matrix).m[0].y,
             &(this_ptr->rotation_matrix).m[1].y,&(this_ptr->rotation_matrix).m[2].y);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->rotation_matrix).m[0].z,
             &(this_ptr->rotation_matrix).m[1].z,&(this_ptr->rotation_matrix).m[2].z);
  _fscanf(file_handle,"%f,%f,%f\n",(float *)local_18,(float *)local_14,(float *)local_10);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->rotation_matrix,&this_ptr->orientation);
  if ((float)11 < this_ptr->projection_scale) {
    return;
  }
  this_ptr->is_panning = 0;
  return;
}
