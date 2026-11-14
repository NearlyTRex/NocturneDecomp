// Name: core_setutil.cpp_C3DSCamera_load_FUN_0053a8e0
// Address: 0053a8e0
// Address Range: [[0053a8e0, 0053ac60]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_0053a8e0(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_0053a8e0(C3DSCamera *this_ptr,_FILE *file_handle)

{
  CDemonSet *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  char local_110 [256];
  
  core_setutil_cpp_C3DSCamera_reset_FUN_0053a870(this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fgets(local_110,0xff,file_handle);
  sscanf(local_110,&DAT_005e60b1);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,&DAT_005e60c9);
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  pCVar1 = g_CDemonSetPtr;
  if (g_CDemonSetPtr->set_file_version < 0x12) {
    this_ptr->use_global_fog = 1;
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
    _fscanf(file_handle,&DAT_005e60eb);
    if (this_ptr->use_global_fog == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00443400
                (&this_ptr->fog,file_handle,g_CDemonSetPtr->set_file_version);
    }
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%f,%f,%f\n");
    _fscanf(file_handle,"%f,%f,%f\n");
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e6103);
  }
  if (g_CDemonSetPtr->set_file_version == 0x1b) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e6107);
    if (this_ptr->is_panning != 0) {
      _DAT_01d046a0 = "..\\core\\setutil.cpp";
      _DAT_01d046a4 = 0xd5;
      core_main_c_FUN_004e4500("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    this_ptr->is_panning = 0;
  }
  return;
}
