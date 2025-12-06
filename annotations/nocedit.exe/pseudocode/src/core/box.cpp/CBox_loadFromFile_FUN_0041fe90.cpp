// Name: core_box.cpp_CBox_loadFromFile_FUN_0041fe90
// Address: 0041fe90
// Address Range: [[0041fe90, 0042001b]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_loadFromFile_FUN_0041fe90(CBox * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox *this_ptr,FILE *file_handle)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_28 [2];
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffebc,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffec4,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f\n");
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            (this_ptr,(CVector3f *)&stack0xfffffffc,(CVector3f *)&stack0xfffffff0,local_28,
             (float)file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %d\n");
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&this_ptr->rotation_matrix,(CVector3f *)&stack0xfffffff4,
                      &this_ptr->linear_velocity_local);
  if (&this_ptr->linear_velocity == pCVar1) {
    return;
  }
  (this_ptr->linear_velocity).x = pCVar1->x;
  (this_ptr->linear_velocity).y = pCVar1->y;
  (this_ptr->linear_velocity).z = pCVar1->z;
  return;
}
