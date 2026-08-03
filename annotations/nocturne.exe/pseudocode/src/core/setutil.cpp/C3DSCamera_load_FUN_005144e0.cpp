// Name: core_setutil.cpp_C3DSCamera_load_FUN_005144e0
// Address: 005144e0
// Address Range: [[005144e0, 005147f0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera *this_ptr,_FILE *file_handle)

{
  CDemonSet *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  char local_110 [256];
  
  core_setutil_cpp_FUN_00514470(this_ptr);
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fgets(local_110,0xff,file_handle);
  sscanf(local_110,"%s\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f\n");
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  pCVar1 = g_CDemonSet_PTR_005be368;
  if (g_CDemonSet_PTR_005be368->set_file_version < 0x12) {
    this_ptr->fog_enabled = 1;
    (this_ptr->fog).color_index.r = (pCVar1->scene_fog).color_index.r;
    (this_ptr->fog).color_index.g = (pCVar1->scene_fog).color_index.g;
    pCVar3 = &(this_ptr->fog).scroll;
    pCVar2 = &(pCVar1->scene_fog).scroll;
    (this_ptr->fog).color_index.b = (pCVar1->scene_fog).color_index.b;
    if (pCVar3 != pCVar2) {
      pCVar3->x = pCVar2->x;
      (this_ptr->fog).scroll.y = (pCVar1->scene_fog).scroll.y;
      (this_ptr->fog).scroll.z = (pCVar1->scene_fog).scroll.z;
    }
    (this_ptr->fog).height_threshold = (pCVar1->scene_fog).height_threshold;
    (this_ptr->fog).density_multiplier = (pCVar1->scene_fog).density_multiplier;
    (this_ptr->fog).temperature = (pCVar1->scene_fog).temperature;
  }
  else {
    _fscanf(file_handle,"%d\n");
    if (this_ptr->fog_enabled == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00447d10
                (&this_ptr->fog,file_handle,g_CDemonSet_PTR_005be368->set_file_version);
    }
  }
  if (0x16 < g_CDemonSet_PTR_005be368->set_file_version) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%f,%f,%f\n");
    _fscanf(file_handle,"%f,%f,%f\n");
  }
  if (g_CDemonSet_PTR_005be368->set_file_version < 0x17) {
    return;
  }
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  return;
}
