// Name: core_setutil.cpp_C3DSCamera_load_FUN_005144e0
// Address: 005144e0
// Address Range: [[005144e0, 005147f0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int *piVar2;
  char local_110 [256];
  
  core_setutil_cpp_FUN_00514470(this_ptr);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fgets(local_110,0xff,file_handle);
  sscanf(local_110,"%s\n",this_ptr);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->orientation,&(this_ptr->orientation).z,
             &(this_ptr->orientation).y);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f\n",&this_ptr->is_panning);
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->rotation_matrix,
             &(this_ptr->rotation_matrix).m[0].y,&(this_ptr->rotation_matrix).m[0].z);
  _fscanf(file_handle,"%f,%f,%f\n",(this_ptr->rotation_matrix).m + 1,
             &(this_ptr->rotation_matrix).m[1].y,&(this_ptr->rotation_matrix).m[1].z);
  _fscanf(file_handle,"%f,%f,%f\n",(this_ptr->rotation_matrix).m + 2,
             &(this_ptr->rotation_matrix).m[2].y,&(this_ptr->rotation_matrix).m[2].z);
  iVar1 = 0x01E57284;
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x12) {
    this_ptr->camera_group = 1;
    this_ptr->fog_enabled = *(int *)(iVar1 + 0x15a848);
    (this_ptr->fog).color_index.r = *(int *)(iVar1 + 0x15a84c);
    piVar2 = &(this_ptr->fog).color_index.b;
    (this_ptr->fog).color_index.g = *(int *)(iVar1 + 0x15a850);
    if (piVar2 != (int *)(iVar1 + 0x15a854)) {
      *piVar2 = *(int *)(iVar1 + 0x15a854);
      (this_ptr->fog).scroll.x = *(float *)(iVar1 + 0x15a858);
      (this_ptr->fog).scroll.y = *(float *)(iVar1 + 0x15a85c);
    }
    (this_ptr->fog).scroll.z = *(float *)(iVar1 + 0x15a860);
    (this_ptr->fog).height_threshold = *(float *)(iVar1 + 0x15a864);
    (this_ptr->fog).density_multiplier = *(float *)(iVar1 + 0x15a868);
  }
  else {
    _fscanf(file_handle,"%d\n",&this_ptr->camera_group);
    if (this_ptr->camera_group == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00447d10
                ((SFog *)&this_ptr->fog_enabled,file_handle,*(int *)(0x01E57284 + 0x15a8c4));
    }
  }
  if (0x16 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->reverb_preset,&this_ptr->box,
               &(this_ptr->box).min.y);
    _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->box).min.z,&(this_ptr->box).max,
               &(this_ptr->box).max.y);
  }
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x17) {
    return;
  }
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&(this_ptr->fog).temperature);
  return;
}
