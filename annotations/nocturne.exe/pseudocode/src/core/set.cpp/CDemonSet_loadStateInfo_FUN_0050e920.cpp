// Name: core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920
// Address: 0050e920
// Address Range: [[0050e920, 0050ea09]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CDemonSet *pCVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n",&local_1c);
  if (local_1c != 1) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 4783;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Set saveState info is invalid version %d");
  }
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n",&local_18);
  if (this_ptr->camera_count != local_18) {
    shape_edittool_cpp_FUN_0046fb40(g_CEditorTools_PTR_005b6d50,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.")
    ;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < local_18) {
    do {
      _fscanf(file_handle,"%d\n",&local_14);
      if (iVar1 < this_ptr->camera_count) {
        pCVar2->cameras[0].enabled = local_14;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < local_18);
  }
  return;
}
