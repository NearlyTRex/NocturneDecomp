// Name: core_setutil.cpp_C3DSLight_load_FUN_00514a70
// Address: 00514a70
// Address Range: [[00514a70, 005151eb]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00514a70(C3DSLight *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00514a70(C3DSLight *this_ptr,_FILE *file_handle)

{
  char *pcVar1;
  C3DSLight *pCVar2;
  int iVar3;
  char local_148 [256];
  int local_48;
  char local_44;
  char local_40;
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
  
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%[^\n]\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f\n");
  if (g_CDemonSet_PTR_005be368->set_file_version < 0x15) {
    this_ptr->aspect = 1.0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%f\n");
  }
  if (g_CDemonSet_PTR_005be368->set_file_version < 0x16) {
    this_ptr->intensity = 1.0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%f\n");
  }
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f,%f,%f\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d,%d\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  if (g_CDemonSet_PTR_005be368->set_file_version < 9) {
    this_ptr->blend_filter = 1;
  }
  else {
    _fscanf(file_handle,"%d\n");
  }
  iVar3 = 0;
  if (0 < this_ptr->filter_count) {
    local_28 = this_ptr->filter_indices;
    local_14 = this_ptr->filter_names;
    local_18 = this_ptr;
    do {
      local_1c = iVar3 * 4;
      if (g_CDemonSet_PTR_005be368->set_file_version < 0x10) {
        _fscanf(file_handle,"%f,%s\n");
        *(uint *)((int)this_ptr->filter_indices + local_1c) = 0;
      }
      else {
        _fscanf(file_handle,"%f,%d,%s\n");
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 1;
      pcVar1 = local_18->name;
      local_18->filters[0] = (CDemonFilter *)0x0;
      local_18 = (C3DSLight *)pcVar1;
    } while (iVar3 < this_ptr->filter_count);
  }
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%d\n");
  if (g_CDemonSet_PTR_005be368->set_file_version < 0x13) {
    (this_ptr->filter_vel).x = 0;
    (this_ptr->filter_vel).y = 0;
    (this_ptr->filter_pos).x = 0;
    (this_ptr->filter_pos).y = 0;
    this_ptr->move_filter = 0;
  }
  else {
    _fgets(local_148,0xff,file_handle);
    _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
  }
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_148,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f\n");
  _fgets(local_148,0xff,file_handle);
  if (g_CDemonSet_PTR_005be368->set_file_version < 0xb) {
    local_20 = 100;
    if (6 < g_CDemonSet_PTR_005be368->set_file_version) {
      if (g_CDemonSet_PTR_005be368->set_file_version < 0x1a) {
        local_20 = 200;
      }
      else {
        local_20 = 0xfa;
      }
    }
    if (local_20 != 0) {
      local_24 = this_ptr->camera_light_bounds;
      local_20 = local_20 << 4;
      iVar3 = 0;
      pCVar2 = this_ptr;
      do {
        if (g_CDemonSet_PTR_005be368->set_file_version < 2) {
          _fscanf(file_handle,"%d\n");
          pCVar2->visible_flags[0] = local_44;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].x_min + iVar3) = 1;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].x_max + iVar3) = 0x13e;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].y_min + iVar3) = 1;
          *(uint *)((int)&this_ptr->camera_light_bounds[0].y_max + iVar3) = 0xee;
        }
        else {
          _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
          pCVar2->visible_flags[0] = local_40;
        }
        iVar3 = iVar3 + 0x10;
        pCVar2 = (C3DSLight *)((int)&pCVar2->light_type + 1);
      } while (iVar3 < local_20);
    }
  }
  else {
    memset(this_ptr->visible_flags,0,0xfa);
    memset(this_ptr->camera_light_bounds,0,4000);
    _fscanf(file_handle,"%d\n");
    iVar3 = 0;
    if (0 < local_48) {
      do {
        _fscanf(file_handle,"%d,%d,%d,%d,%d\n");
        if (0xf9 < local_3c) {
          g_CHAR_PTR_01cc4800 = "..\\core\\setutil.cpp";
          g_INT_01cc4804 = 0x2a5;
          core_main_c_FUN_004c8440("Invalid camera number in visiblilty list!");
        }
        this_ptr->visible_flags[local_3c] = '\x01';
        this_ptr->camera_light_bounds[local_3c].x_min = local_38;
        this_ptr->camera_light_bounds[local_3c].x_max = local_30;
        this_ptr->camera_light_bounds[local_3c].y_min = local_34;
        this_ptr->camera_light_bounds[local_3c].y_max = local_2c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_48);
    }
  }
  this_ptr->atten_end_squared = this_ptr->atten_end * this_ptr->atten_end;
  this_ptr->atten_end_reciprocal = 1.0 / this_ptr->atten_end;
  return;
}
