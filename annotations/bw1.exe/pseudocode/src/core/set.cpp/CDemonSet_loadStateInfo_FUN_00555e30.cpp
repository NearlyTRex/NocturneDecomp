// Name: core_set.cpp_CDemonSet_loadStateInfo_FUN_00555e30
// Address: 00555e30
// Address Range: [[00555e30, 00555fde]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00555e30(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00555e30(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CDemonSet *pCVar2;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n");
  if ((local_24 < 1) || (3 < local_24)) {
    g_CHAR_PTR_01d1d400 = "..\\core\\set.cpp";
    g_INT_01d1d404 = 0x1494;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Set saveState info is invalid version %d");
  }
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n");
  if (this_ptr->camera_count != local_20) {
    shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
              (g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < local_20) {
    do {
      _fscanf(file_handle,"%d\n");
      if (iVar1 < this_ptr->camera_count) {
        pCVar2->cameras[0].enabled = local_1c;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < local_20);
  }
  if ((1 < local_24) && (0 < local_20)) {
    do {
      _fscanf(file_handle,"%*[^\n]\n");
      iVar1 = 0;
      pCVar2 = this_ptr;
      if (0 < local_20) {
        do {
          _fscanf(file_handle,"%f\n");
          if (iVar1 < this_ptr->camera_count) {
            pCVar2->cameras[0].ambient_value = local_18;
          }
          iVar1 = iVar1 + 1;
          pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
        } while (iVar1 < local_20);
      }
    } while (iVar1 + 1 < local_20);
  }
  if ((2 < local_24) && (0 < local_20)) {
    do {
      _fscanf(file_handle,"%*[^\n]\n");
      iVar1 = 0;
      pCVar2 = this_ptr;
      if (0 < local_20) {
        do {
          _fscanf(file_handle,"%d\n");
          if (iVar1 < this_ptr->camera_count) {
            pCVar2->cameras[0].camera_group = local_14;
          }
          iVar1 = iVar1 + 1;
          pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
        } while (iVar1 < local_20);
      }
    } while (iVar1 + 1 < local_20);
  }
  return;
}
