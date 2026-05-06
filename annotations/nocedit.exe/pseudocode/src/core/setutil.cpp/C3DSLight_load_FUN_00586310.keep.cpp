// Name: core_setutil.cpp_C3DSLight_load_FUN_00586310
// Address: 00586310
// MANUAL RECONSTRUCTION
// Address Range: [[00586310, 00586a8b]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,_FILE *file_handle)

{
  char *pcVar1;
  int iVar2;
  float *pfVar3;
  C3DSLight *pCVar4;
  int iVar5;
  char local_148 [256];
  int local_48;
  char local_44 [4];
  char local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  CRect *local_24;
  int local_20;
  int local_1c;
  C3DSLight *local_18;
  char (*local_14) [40];
  
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%[^\n]\n",this_ptr->name);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->pos).x,&(this_ptr->pos).y,&(this_ptr->pos).z);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->orient).x,&(this_ptr->orient).z,
             &(this_ptr->orient).y);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f\n",&this_ptr->fov);
  if (g_CDemonSetPtr->set_file_version < 0x15) {
    this_ptr->aspect = 1.0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%f\n",&this_ptr->aspect);
  }
  if (g_CDemonSetPtr->set_file_version < 0x16) {
    this_ptr->intensity = 1.0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%f\n",&this_ptr->intensity);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d\n",&this_ptr->light_type);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f,%f,%f\n",(float *)&(this_ptr->color).r,(float *)&(this_ptr->color).g,
             (float *)&(this_ptr->color).b,&this_ptr->atten_start,&this_ptr->atten_end);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d,%d\n",&(this_ptr->size).x,&(this_ptr->size).y);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d\n",&this_ptr->filter_count);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  if (g_CDemonSetPtr->set_file_version < 9) {
    this_ptr->blend_filter = 1;
  }
  else {
    _fscanf(file_handle,"%d\n",&this_ptr->blend_filter);
  }
  iVar5 = 0;
  if (0 < this_ptr->filter_count) {
    local_28 = this_ptr->filter_indices;
    pfVar3 = this_ptr->filter_durations;
    local_14 = this_ptr->filter_names;
    local_18 = this_ptr;
    do {
      local_1c = iVar5 * 4;
      if (g_CDemonSetPtr->set_file_version < 0x10) {
        _fscanf(file_handle,"%f,%s\n",pfVar3,(char *)local_14);
        *(uint *)((int)this_ptr->filter_indices + local_1c) = 0;
      }
      else {
        _fscanf(file_handle,"%f,%d,%s\n",pfVar3,local_28 + iVar5,(char *)local_14);
      }
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + 1;
      local_14 = local_14 + 1;
      pcVar1 = local_18->name;
      local_18->filters[0] = (CDemonFilter *)0x0;
      local_18 = (C3DSLight *)pcVar1;
    } while (iVar5 < this_ptr->filter_count);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d\n",&this_ptr->current_filter_frame);
  if (g_CDemonSetPtr->set_file_version < 0x13) {
    (this_ptr->filter_vel).x = 0;
    (this_ptr->filter_vel).y = 0;
    (this_ptr->filter_pos).x = 0;
    (this_ptr->filter_pos).y = 0;
    this_ptr->move_filter = 0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&this_ptr->move_filter,&(this_ptr->filter_vel).x,
               &(this_ptr->filter_vel).y,&(this_ptr->filter_pos).x,&(this_ptr->filter_pos).y);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f\n",&this_ptr->on_time,&this_ptr->cycle_time);
  _fgets(local_148,0xff,file_handle);
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
      local_24 = this_ptr->camera_light_bounds;
      local_20 = local_20 << 4;
      iVar5 = 0;
      pCVar4 = this_ptr;
      do {
        if (g_CDemonSetPtr->set_file_version < 2) {
          _fscanf(file_handle,"%d\n",(int *)local_44);
          pCVar4->visible_flags[0] = local_44[0];
          *(uint *)((int)&this_ptr->camera_light_bounds[0].x_min + iVar5) = 1;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].x_max + iVar5) = 0x13e;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].y_min + iVar5) = 1;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].y_max + iVar5) = 0xee;
        }
        else {
          iVar2 = (int)&local_24->x_min + iVar5;
          _fscanf(file_handle,"%d,%d,%d,%d,%d\n",(int *)local_40,(int *)iVar2,(int *)(iVar2 + 4),
                     (int *)(iVar2 + 8),(int *)(iVar2 + 0xc));
          pCVar4->visible_flags[0] = local_40[0];
        }
        iVar5 = iVar5 + 0x10;
        pCVar4 = (C3DSLight *)((int)&pCVar4->light_type + 1);
      } while (iVar5 < local_20);
    }
  }
  else {
    memset(this_ptr->visible_flags,0,0xfa);
    memset(this_ptr->camera_light_bounds,0,4000);
    _fscanf(file_handle,"%d\n",&local_48);
    iVar5 = 0;
    if (0 < local_48) {
      do {
        _fscanf(file_handle,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_30,&local_34,
                   &local_2c);
        if (0xf9 < local_3c) {
          g_CurrentFilename = "..\\core\\setutil.cpp";
          g_CurrentLineNumber = 0x2d8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid camera number in visiblilty list!");
        }
        this_ptr->visible_flags[local_3c] = '\x01';
        this_ptr->camera_light_bounds[local_3c].x_min = local_38;
        this_ptr->camera_light_bounds[local_3c].x_max = local_30;
        this_ptr->camera_light_bounds[local_3c].y_min = local_34;
        this_ptr->camera_light_bounds[local_3c].y_max = local_2c;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_48);
    }
  }
  this_ptr->atten_end_squared = this_ptr->atten_end * this_ptr->atten_end;
  this_ptr->atten_end_reciprocal = 1.0 / this_ptr->atten_end;
  return;
}
