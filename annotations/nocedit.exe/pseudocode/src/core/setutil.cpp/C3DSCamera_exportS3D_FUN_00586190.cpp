// Name: core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
// Address: 00586190
// Address Range: [[00586190, 005862ea]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

int __cdecl
core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera *this_ptr,FILE *file_handle)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  if (this_ptr->is_panning != 0) {
    this_ptr->projection_scale = 10.5;
  }
  fpatan((float10)18 / (float10)this_ptr->projection_scale,(float10)1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\"%s\",%g,%g,%g,%g,%g,%g,%g\n");
  dVar1 = (double)(this_ptr->rotation_matrix).m[2].x;
  dVar2 = (double)(this_ptr->rotation_matrix).m[1].x;
  dVar3 = (double)(this_ptr->rotation_matrix).m[0].x;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
             SUB84 /* extract 2-byte value */(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),
             (int)((ulonglong)dVar1 >> 0x20));
  dVar1 = (double)(this_ptr->rotation_matrix).m[2].y;
  dVar2 = (double)(this_ptr->rotation_matrix).m[1].y;
  dVar3 = (double)(this_ptr->rotation_matrix).m[0].y;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
             SUB84 /* extract 2-byte value */(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),
             (int)((ulonglong)dVar1 >> 0x20));
  dVar1 = (double)(this_ptr->rotation_matrix).m[1].z;
  dVar2 = (double)(this_ptr->rotation_matrix).m[0].z;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),
             SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
             SUB84 /* extract 2-byte value */((double)(this_ptr->rotation_matrix).m[2].z,0));
  dVar1 = (double)(this_ptr->position).y;
  dVar2 = (double)(this_ptr->position).x;
  iVar4 = crt_stdio_c_fprintf_FUN_005fe6d0
                    (file_handle,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),
                     SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return iVar4;
}
