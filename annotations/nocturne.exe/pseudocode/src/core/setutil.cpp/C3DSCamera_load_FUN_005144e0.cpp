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
  sscanf(local_110,"%s\n");
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f\n");
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
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
    _fscanf(file_handle,"%d\n");
    if (this_ptr->camera_group == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00447d10
                ((SFog *)&this_ptr->fog_enabled,file_handle,*(int *)(0x01E57284 + 0x15a8c4));
    }
  }
  if (0x16 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%f,%f,%f\n");
    _fscanf(file_handle,"%f,%f,%f\n");
  }
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x17) {
    return;
  }
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  return;
}
