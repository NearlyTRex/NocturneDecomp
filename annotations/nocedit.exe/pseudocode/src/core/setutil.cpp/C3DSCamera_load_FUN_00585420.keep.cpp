// Name: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// Address: 00585420
// MANUAL RECONSTRUCTION
// Address Range: [[00585420, 005857a0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,_FILE *file_handle)

{
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  char local_110 [256];
  CDemonSet *pCVar1;
  
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fgets(local_110,0xff,file_handle);
  sscanf(local_110,"%s\n",this_ptr->name);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->position).x,&(this_ptr->position).y,
             &(this_ptr->position).z);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->orientation).x,&(this_ptr->orientation).z,
             &(this_ptr->orientation).y);
  if (10 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f\n",&this_ptr->projection_scale);
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->rotation_matrix).m[0].x,
             &(this_ptr->rotation_matrix).m[0].y,&(this_ptr->rotation_matrix).m[0].z);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->rotation_matrix).m[1].x,
             &(this_ptr->rotation_matrix).m[1].y,&(this_ptr->rotation_matrix).m[1].z);
  _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->rotation_matrix).m[2].x,
             &(this_ptr->rotation_matrix).m[2].y,&(this_ptr->rotation_matrix).m[2].z);
  pCVar1 = g_CDemonSetPtr;
  if (g_CDemonSetPtr->set_file_version < 0x12) {
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
    _fscanf(file_handle,"%d\n",&this_ptr->fog_enabled);
    if (this_ptr->fog_enabled == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00453e50
                (&this_ptr->fog,file_handle,g_CDemonSetPtr->set_file_version);
    }
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->box_min).x,&(this_ptr->box_min).y,
               &(this_ptr->box_min).z);
    _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->box_max).x,&(this_ptr->box_max).y,
               &(this_ptr->box_max).z);
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%d\n",&this_ptr->reverb_preset);
  }
  if (g_CDemonSetPtr->set_file_version == 0x1b) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%d\n",&this_ptr->is_panning);
    if (this_ptr->is_panning != 0) {
      g_CurrentFilename = "..\\core\\setutil.cpp";
      g_CurrentLineNumber = 0xd5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    this_ptr->is_panning = 0;
  }
  return;
}
