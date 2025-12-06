// Name: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// Address: 00585420
// Address Range: [[00585420, 005857a0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_load_FUN_00585420(C3DSCamera * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,FILE *file_handle)

{
  CDemonSet *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar2;
  int *piStack_d0;
  
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,file_handle);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef8,0xff,file_handle);
  crt_stdio_c_sscanf_FUN_0060013c(&stack0xfffffefc,"%s\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff10,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff18,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  pCVar1 = g_CDemonSetPtr;
  if (g_CDemonSetPtr->set_file_version < 0x12) {
    this_ptr->fog_enabled = 1;
    (this_ptr->fog).color_index.r = *(int *)(pCVar1->field19_0x14f0a0 + 0xbb90);
    (this_ptr->fog).color_index.g = *(int *)(pCVar1->field19_0x14f0a0 + 0xbb94);
    pCVar2 = &(this_ptr->fog).scroll;
    (this_ptr->fog).color_index.b = *(int *)(pCVar1->field19_0x14f0a0 + 0xbb98);
    if (pCVar2 != (CVector3f *)(pCVar1->field19_0x14f0a0 + 0xbb9c)) {
      pCVar2->x = *(float *)(pCVar1->field19_0x14f0a0 + 0xbb9c);
      (this_ptr->fog).scroll.y = *(float *)(pCVar1->field19_0x14f0a0 + 0xbba0);
      (this_ptr->fog).scroll.z = *(float *)(pCVar1->field19_0x14f0a0 + 0xbba4);
    }
    (this_ptr->fog).height_threshold = *(float *)(pCVar1->field19_0x14f0a0 + 0xbba8);
    (this_ptr->fog).density_multiplier = *(float *)(pCVar1->field19_0x14f0a0 + 0xbbac);
    (this_ptr->fog).reserved = *(float *)(pCVar1->field19_0x14f0a0 + 0xbbb0);
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
    if (this_ptr->fog_enabled == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00453e50
                (&this_ptr->fog,file_handle,g_CDemonSetPtr->set_file_version);
    }
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&piStack_d0,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&piStack_d0,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  }
  if (g_CDemonSetPtr->set_file_version == 0x1b) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&piStack_d0,0xff,file_handle);
    piStack_d0 = &this_ptr->is_panning;
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
    if (this_ptr->is_panning != 0) {
      g_CurrentFilename = "..\\core\\setutil.cpp";
      g_CurrentLineNumber = 0xd5;
      piStack_d0 = (int *)0x585793;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    this_ptr->is_panning = 0;
  }
  return;
}
