// Name: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// Address: 00585420
// MANUAL RECONSTRUCTION
// Address Range: [[00585420, 005857a0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,_FILE *file_handle)

{
  char local_110 [256];
  
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
  if (g_CDemonSetPtr->set_file_version < 0x12) {
    this_ptr->fog_enabled = 1;
    this_ptr->fog = g_CDemonSetPtr->scene_fog;
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
    _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->box.min).x,&(this_ptr->box.min).y,
               &(this_ptr->box.min).z);
    _fscanf(file_handle,"%f,%f,%f\n",&(this_ptr->box.max).x,&(this_ptr->box.max).y,
               &(this_ptr->box.max).z);
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
      g_CurrentLineNumber = 213;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    this_ptr->is_panning = 0;
  }
  return;
}
