// Name: core_setutil.cpp_C3DSLight_save_FUN_00587090
// Address: 00587090
// Address Range: [[00587090, 00587447]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,FILE *file_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,FILE *file_ptr)

{
  C3DSLight *pCVar1;
  int iVar2;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"-- light name ------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"pos\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f\n",(double)(this_ptr->pos).x,(double)(this_ptr->pos).y,
             (double)(this_ptr->pos).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"orient\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f\n",(double)(this_ptr->orient).x,(double)(this_ptr->orient).z,
             (double)(this_ptr->orient).y);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"fov\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n",(double)this_ptr->fov);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"aspect\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n",(double)this_ptr->aspect);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"intensity\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n",(double)this_ptr->intensity);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"R,G,B, attenStart, attenEnd\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f,%f,%f\n",(double)(this_ptr->color).r,(double)(this_ptr->color).g,
             (double)(this_ptr->color).b,(double)this_ptr->atten_start,(double)this_ptr->atten_end);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"sizeX, sizeY\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d\n",(this_ptr->size).x);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"filterCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"blendFilter\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_ptr,"%f,%d,%s\n",(double)pCVar1->filter_durations[0],
                 pCVar1->filter_indices[0]);
      iVar2 = iVar2 + 1;
      pCVar1 = (C3DSLight *)pCVar1->name;
    } while (iVar2 < this_ptr->filter_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"filterFrame\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"moveFilter,filterVelX,filterVelY,filterPosX,filterPosY\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d,%d,%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"onTime, cycleTime\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f\n",(double)this_ptr->on_time,(double)this_ptr->cycle_time);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"visible\n");
  pCVar1 = this_ptr;
  do {
    pCVar1 = (C3DSLight *)((int)&pCVar1->light_type + 1);
  } while (pCVar1 != (C3DSLight *)(this_ptr->name + 0xf6));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  iVar2 = 0;
  do {
    if (this_ptr->visible_flags[0] != '\0') {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d,%d,%d,%d\n");
    }
    iVar2 = iVar2 + 1;
    this_ptr = (C3DSLight *)((int)&this_ptr->light_type + 1);
  } while (iVar2 < 0xfa);
  return;
}
