// Name: core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
// Address: 00585ff0
// Address Range: [[00585ff0, 00586149]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera *this_ptr,FILE *file_handle)

{
  C3DSCamera *pCVar1;
  FILE *file;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  
  file = file_handle;
  pCVar1 = this_ptr;
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file,"\"%[^\"]\",%f,%f,%f,%f,%f,%f,%f\n",pCVar1,&pCVar1->position,&(pCVar1->position).y,
                     &(pCVar1->position).z,&pCVar1->orientation,&(pCVar1->orientation).z,
                     &(pCVar1->orientation).y,&pCVar1->projection_scale);
  if (iVar2 != 8) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x1d3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("File is corrupt in C3DSCamera::importS3D");
  }
  fVar3 = (float10)fptan((float10)pCVar1->projection_scale * (float10)0.5);
  pCVar1->projection_scale = (float)((float10)18 / fVar3);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%f,%f,%f\n",&pCVar1->rotation_matrix,(pCVar1->rotation_matrix).m + 1,
             (pCVar1->rotation_matrix).m + 2);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%f,%f,%f\n",&(pCVar1->rotation_matrix).m[0].y,
             &(pCVar1->rotation_matrix).m[1].y,&(pCVar1->rotation_matrix).m[2].y);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%f,%f,%f\n",&(pCVar1->rotation_matrix).m[0].z,
             &(pCVar1->rotation_matrix).m[1].z,&(pCVar1->rotation_matrix).m[2].z);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%f,%f,%f\n",&stack0x00000000,&this_ptr,&file_handle);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&pCVar1->rotation_matrix,&pCVar1->orientation);
  if ((float)11 < pCVar1->projection_scale) {
    return;
  }
  pCVar1->is_panning = 0;
  return;
}
