// Name: core_set.cpp_CDemonSet_loadStateInfo_FUN_00571230
// Address: 00571230
// MANUAL RECONSTRUCTION
// Address Range: [[00571230, 00571319]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00571230(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00571230(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;

  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n",&local_1c);
  if (local_1c != 1) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x136a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Set saveState info is invalid version %d",local_1c);
  }
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n",&local_18);
  if (this_ptr->camera_count != local_18) {
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
              (g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
    _fscanf(file_handle,"%d\n",&local_14);
    if (iVar1 < this_ptr->camera_count) {
      this_ptr->cameras[iVar1].enabled = local_14;
    }
  }
  return;
}
