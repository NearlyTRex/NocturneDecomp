// Name: core_setutil.cpp_FUN_0055c1b0
// Address: 0055c1b0
// Address Range: [[0055c1b0, 0055c530]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_FUN_0055c1b0(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_FUN_0055c1b0(C3DSCamera *this_ptr,_FILE *file_handle)

{
  CDemonSet *pCVar1;
  char local_110 [256];
  
  core_setutil_cpp_C3DSCamera_reset_FUN_0055c140(this_ptr);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_110,0xff,file_handle);
  }
  _fgets(local_110,0xff,file_handle);
  sscanf(local_110,&DAT_005f1081);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x100,&this_ptr->field_0x104,
             &this_ptr->field_0x108);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x10c,&this_ptr->field_0x114,
             &this_ptr->field_0x110);
  if (10 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_110,0xff,file_handle);
  }
  _fscanf(file_handle,&DAT_005f1099,&this_ptr->field_0x144);
  _fgets(local_110,0xff,file_handle);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x118,&this_ptr->field_0x11c,
             &this_ptr->field_0x120);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x124,&this_ptr->field_0x128,
             &this_ptr->field_0x12c);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x130,&this_ptr->field_0x134,
             &this_ptr->field_0x138);
  pCVar1 = g_CDemonSetPtr;
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 < 0x12) {
    *(uint *)&this_ptr->field_0x150 = 1;
    *(uint *)&this_ptr->field_0x154 = *(uint *)&pCVar1->field_0x15ac40;
    *(uint *)&this_ptr->field_0x158 = *(uint *)&pCVar1->field_0x15ac44;
    *(uint *)&this_ptr->field_0x15c = *(uint *)&pCVar1->field_0x15ac48;
    if (&this_ptr->field_0x160 != &pCVar1->field_0x15ac4c) {
      *(uint *)&this_ptr->field_0x160 = *(uint *)&pCVar1->field_0x15ac4c;
      *(uint *)&this_ptr->field_0x164 = *(uint *)&pCVar1->field_0x15ac50;
      *(uint *)&this_ptr->field_0x168 = *(uint *)&pCVar1->field_0x15ac54;
    }
    *(uint *)&this_ptr->field_0x16c = *(uint *)&pCVar1->field_0x15ac58;
    *(uint *)&this_ptr->field_0x170 = *(uint *)&pCVar1->field_0x15ac5c;
    *(uint *)&this_ptr->field_0x174 = *(uint *)&pCVar1->field_0x15ac60;
  }
  else {
    _fscanf(file_handle,&DAT_005f10bb,&this_ptr->field_0x150);
    if (*(int *)&this_ptr->field_0x150 == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00454ab0
                (&this_ptr->field_0x154,file_handle,*(uint *)&g_CDemonSetPtr->field_0x15acc0);
    }
  }
  if (0x16 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x17c,&this_ptr->field_0x180,
               &this_ptr->field_0x184);
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x188,&this_ptr->field_0x18c,
               &this_ptr->field_0x190);
  }
  if (0x16 < *(int *)&g_CDemonSetPtr->field_0x15acc0) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,&DAT_005f10d3,&this_ptr->field_0x178);
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15acc0 == 0x1b) {
    _fgets(local_110,0xff,file_handle);
    _fscanf(file_handle,&DAT_005f10d7,&this_ptr->field_0x140);
    if (*(int *)&this_ptr->field_0x140 != 0) {
      _DAT_01d1d400 = "..\\core\\setutil.cpp";
      _DAT_01d1d404 = 0xd5;
      core_main_c_FUN_005030e0("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x140 = 0;
  }
  return;
}
