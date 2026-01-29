// Name: core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
// Address: 00586190
// Address Range: [[00586190, 005862ea]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl
core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int iVar1;
  float10 fVar2;
  
  if (this_ptr->is_panning != 0) {
    this_ptr->projection_scale = 10.5;
  }
  fVar2 = (float10)fpatan((float10)18 / (float10)this_ptr->projection_scale,
                          (float10)1);
  _fprintf(file_handle,"\"%s\",%g,%g,%g,%g,%g,%g,%g\n",this_ptr,(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z,
             (double)(this_ptr->orientation).x,(double)(this_ptr->orientation).z,
             (double)(this_ptr->orientation).y,(double)(fVar2 * (float10)2));
  _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->rotation_matrix).m[0].x,
             (double)(this_ptr->rotation_matrix).m[1].x,(double)(this_ptr->rotation_matrix).m[2].x);
  _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->rotation_matrix).m[0].y,
             (double)(this_ptr->rotation_matrix).m[1].y,(double)(this_ptr->rotation_matrix).m[2].y);
  _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->rotation_matrix).m[0].z,
             (double)(this_ptr->rotation_matrix).m[1].z,(double)(this_ptr->rotation_matrix).m[2].z);
  iVar1 = _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->position).x,
                     (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  return iVar1;
}
