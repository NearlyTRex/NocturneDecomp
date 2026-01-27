// Name: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// Address: 00585420
// Address Range: [[00585420, 005857a0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_load_FUN_00585420(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,FILE *file_handle)

{
  CDemonSet *pCVar1;
  CVector3f *pCVar2;
  char local_110 [256];
  
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
  crt_stdio_c_sscanf_FUN_0060013c(local_110,"%s\n",this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->orientation,&(this_ptr->orientation).z,
             &(this_ptr->orientation).y);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&this_ptr->projection_scale);
  crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->rotation_matrix,
             &(this_ptr->rotation_matrix).m[0].y,&(this_ptr->rotation_matrix).m[0].z);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",(this_ptr->rotation_matrix).m + 1,
             &(this_ptr->rotation_matrix).m[1].y,&(this_ptr->rotation_matrix).m[1].z);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",(this_ptr->rotation_matrix).m + 2,
             &(this_ptr->rotation_matrix).m[2].y,&(this_ptr->rotation_matrix).m[2].z);
  pCVar1 = g_CDemonSetPtr;
  if (g_CDemonSetPtr->set_file_version < 0x12) {
    this_ptr->fog_enabled = 1;
    (this_ptr->fog).color_index.r = *(int *)(pCVar1->unk4 + 0xbb90);
    (this_ptr->fog).color_index.g = *(int *)(pCVar1->unk4 + 0xbb94);
    pCVar2 = &(this_ptr->fog).scroll;
    (this_ptr->fog).color_index.b = *(int *)(pCVar1->unk4 + 0xbb98);
    if (pCVar2 != (CVector3f *)(pCVar1->unk4 + 0xbb9c)) {
      pCVar2->x = *(float *)(pCVar1->unk4 + 0xbb9c);
      (this_ptr->fog).scroll.y = *(float *)(pCVar1->unk4 + 0xbba0);
      (this_ptr->fog).scroll.z = *(float *)(pCVar1->unk4 + 0xbba4);
    }
    (this_ptr->fog).height_threshold = *(float *)(pCVar1->unk4 + 0xbba8);
    (this_ptr->fog).density_multiplier = *(float *)(pCVar1->unk4 + 0xbbac);
    (this_ptr->fog).reserved = *(float *)(pCVar1->unk4 + 0xbbb0);
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->fog_enabled);
    if (this_ptr->fog_enabled == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00453e50
                (&this_ptr->fog,file_handle,g_CDemonSetPtr->set_file_version);
    }
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (file_handle,"%f,%f,%f\n",&this_ptr->box_min,&(this_ptr->box_min).y,
               &(this_ptr->box_min).z);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (file_handle,"%f,%f,%f\n",&this_ptr->box_max,&(this_ptr->box_max).y,
               &(this_ptr->box_max).z);
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->reverb_preset);
  }
  if (g_CDemonSetPtr->set_file_version == 0x1b) {
    crt_stdio_c_fgets_FUN_005fefd0(local_110,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->is_panning);
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
