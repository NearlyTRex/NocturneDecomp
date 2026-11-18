// Name: core_set.cpp_CDemonSet_loadStateInfo_FUN_00534a90
// Address: 00534a90
// Address Range: [[00534a90, 00534b79]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00534a90(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_00534a90(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CDemonSet *pCVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n");
  if (local_1c != 1) {
    g_CHAR_PTR_01d046a0 = "..\\core\\set.cpp";
    g_INT_01d046a4 = 0x147b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Set saveState info is invalid version %d");
  }
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n");
  if (this_ptr->camera_count != local_18) {
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
              (g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < local_18) {
    do {
      _fscanf(file_handle,"%d\n");
      if (iVar1 < this_ptr->camera_count) {
        pCVar2->cameras[0].enabled = local_14;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < local_18);
  }
  return;
}
