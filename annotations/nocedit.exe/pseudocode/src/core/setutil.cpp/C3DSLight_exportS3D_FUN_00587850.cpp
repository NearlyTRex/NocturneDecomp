// Name: core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
// Address: 00587850
// Address Range: [[00587850, 00587948]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,_FILE *file_handle)

{
  _fprintf(file_handle,"\"%s\",%d,%g,%g,%g,%g,%g,%g ",this_ptr->name,this_ptr->light_type,
             (double)(this_ptr->pos).x,(double)(this_ptr->pos).y,(double)(this_ptr->pos).z,
             (double)(float)(this_ptr->color).r,(double)(float)(this_ptr->color).g,
             (double)(float)(this_ptr->color).b);
  if (this_ptr->light_type == 0) {
    _fprintf(file_handle,",%g,%g,%g\n",(double)(this_ptr->orient).x,
               (double)(this_ptr->orient).z,(double)(this_ptr->orient).y);
    return;
  }
  if (this_ptr->light_type == 1) {
    _fprintf(file_handle,",%g,%g\n",(double)this_ptr->atten_start,(double)this_ptr->atten_end)
    ;
    return;
  }
  g_CurrentFilename = "..\\core\\setutil.cpp";
  g_CurrentLineNumber = 0x4c5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown light type!");
  return;
}
