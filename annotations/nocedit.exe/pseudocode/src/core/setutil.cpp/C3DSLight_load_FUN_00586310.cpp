// Name: core_setutil.cpp_C3DSLight_load_FUN_00586310
// Address: 00586310
// Address Range: [[00586310, 00586a8b]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,FILE *file_handle)

{
  char *pcVar1;
  float *pfVar2;
  C3DSLight *pCVar3;
  int iVar4;
  char local_148 [256];
  int local_48;
  char local_44 [4];
  char local_40 [4];
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  C3DSLight *local_18;
  char (*local_14) [40];
  
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n",this_ptr->name);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->pos,&(this_ptr->pos).y,&(this_ptr->pos).z);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->orient,&(this_ptr->orient).z,
             &(this_ptr->orient).y);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->fov);
  if (g_CDemonSetPtr->set_file_version < 0x15) {
    this_ptr->aspect = 1.0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->aspect);
  }
  if (g_CDemonSetPtr->set_file_version < 0x16) {
    this_ptr->intensity = 1.0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->intensity);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f,%f,%f\n",&this_ptr->color,&(this_ptr->color).g,
             &(this_ptr->color).b,&this_ptr->atten_start,&this_ptr->atten_end);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d\n",&this_ptr->size,&(this_ptr->size).y);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->filter_count);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  if (g_CDemonSetPtr->set_file_version < 9) {
    this_ptr->blend_filter = 1;
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->blend_filter);
  }
  iVar4 = 0;
  if (0 < this_ptr->filter_count) {
    local_28 = this_ptr->filter_indices;
    pfVar2 = this_ptr->filter_durations;
    local_14 = this_ptr->filter_names;
    local_18 = this_ptr;
    do {
      local_1c = iVar4 * 4;
      if (g_CDemonSetPtr->set_file_version < 0x10) {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%s\n",pfVar2,local_14);
        *(uint *)((int)this_ptr->filter_indices + local_1c) = 0;
      }
      else {
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (file_handle,"%f,%d,%s\n",pfVar2,local_28 + iVar4,local_14);
      }
      pfVar2 = pfVar2 + 1;
      iVar4 = iVar4 + 1;
      local_14 = local_14 + 1;
      pcVar1 = local_18->name;
      local_18->filters[0] = (CDemonFilter *)0x0;
      local_18 = (C3DSLight *)pcVar1;
    } while (iVar4 < this_ptr->filter_count);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->current_filter_frame);
  if (g_CDemonSetPtr->set_file_version < 0x13) {
    (this_ptr->filter_vel).x = 0;
    (this_ptr->filter_vel).y = 0;
    (this_ptr->filter_pos).x = 0;
    (this_ptr->filter_pos).y = 0;
    this_ptr->move_filter = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (file_handle,"%d,%d,%d,%d,%d\n",&this_ptr->move_filter,&this_ptr->filter_vel,
               &(this_ptr->filter_vel).y,&this_ptr->filter_pos,&(this_ptr->filter_pos).y);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f\n",&this_ptr->on_time,&this_ptr->cycle_time);
  crt_stdio_c_fgets_FUN_005fefd0(local_148,0xff,file_handle);
  if (g_CDemonSetPtr->set_file_version < 0xb) {
    local_20 = 100;
    if (6 < g_CDemonSetPtr->set_file_version) {
      if (g_CDemonSetPtr->set_file_version < 0x1a) {
        local_20 = 200;
      }
      else {
        local_20 = 0xfa;
      }
    }
    if (local_20 != 0) {
      local_24 = this_ptr->unk1 + 6;
      local_20 = local_20 << 4;
      iVar4 = 0;
      pCVar3 = this_ptr;
      do {
        if (g_CDemonSetPtr->set_file_version < 2) {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",local_44);
          pCVar3->visible_flags[0] = local_44[0];
          pcVar1 = this_ptr->unk1 + iVar4 + 6;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->unk1 + iVar4 + 10;
          pcVar1[0] = '>';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->unk1 + iVar4 + 0xe;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->unk1 + iVar4 + 0x12;
          pcVar1[0] = -0x12;
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
        }
        else {
          pcVar1 = local_24 + iVar4;
          crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"%d,%d,%d,%d,%d\n",local_40,pcVar1,pcVar1 + 4,pcVar1 + 8,
                     pcVar1 + 0xc);
          pCVar3->visible_flags[0] = local_40[0];
        }
        iVar4 = iVar4 + 0x10;
        pCVar3 = (C3DSLight *)((int)&pCVar3->light_type + 1);
      } while (iVar4 < local_20);
    }
  }
  else {
    crt_memory_c_memset_FUN_005fde40(this_ptr->visible_flags,0,0xfa);
    crt_memory_c_memset_FUN_005fde40(this_ptr->unk1 + 6,0,4000);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&local_48);
    iVar4 = 0;
    if (0 < local_48) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_30,&local_34,
                   &local_2c);
        if (0xf9 < local_3c) {
          g_CurrentFilename = "..\\core\\setutil.cpp";
          g_CurrentLineNumber = 0x2d8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid camera number in visiblilty list!");
        }
        this_ptr->visible_flags[local_3c] = '\x01';
        *(uint *)(this_ptr->unk1 + local_3c * 0x10 + 6) = local_38;
        *(uint *)(this_ptr->unk1 + local_3c * 0x10 + 10) = local_30;
        *(uint *)(this_ptr->unk1 + local_3c * 0x10 + 0xe) = local_34;
        *(uint *)(this_ptr->unk1 + local_3c * 0x10 + 0x12) = local_2c;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_48);
    }
  }
  *(float *)this_ptr->unk2 = this_ptr->atten_end * this_ptr->atten_end;
  *(float *)(this_ptr->unk2 + 4) = 1.0 / this_ptr->atten_end;
  return;
}
