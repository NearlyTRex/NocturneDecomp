// Name: core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
// Address: 00587850
// Address Range: [[00587850, 00587948]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,FILE *file_handle)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)(this_ptr->color).b;
  dVar2 = (double)(this_ptr->color).g;
  dVar3 = (double)(this_ptr->color).r;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"\"%s\",%d,%g,%g,%g,%g,%g,%g ",this_ptr->name,this_ptr->light_type,
             (double)(this_ptr->pos).x,(double)(this_ptr->pos).y,(double)(this_ptr->pos).z,
             SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84 /* extract 2-byte value */(dVar2,0),
             (int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  if (this_ptr->light_type == 0) {
    dVar1 = (double)(this_ptr->orient).y;
    dVar2 = (double)(this_ptr->orient).z;
    dVar3 = (double)(this_ptr->orient).x;
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file_handle,",%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
               SUB84 /* extract 2-byte value */(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),
               (int)((ulonglong)dVar1 >> 0x20));
    return;
  }
  if (this_ptr->light_type == 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file_handle,",%g,%g\n",SUB84 /* extract 2-byte value */((double)this_ptr->atten_start,0),
               (int)((ulonglong)(double)this_ptr->atten_start >> 0x20),
               SUB84 /* extract 2-byte value */((double)this_ptr->atten_end,0),
               (int)((ulonglong)(double)this_ptr->atten_end >> 0x20));
    return;
  }
  g_CurrentFilename = "..\\core\\setutil.cpp";
  g_CurrentLineNumber = 0x4c5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown light type!");
  return;
}
