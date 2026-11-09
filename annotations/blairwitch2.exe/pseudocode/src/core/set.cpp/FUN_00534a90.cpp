// Name: core_set.cpp_FUN_00534a90
// Address: 00534a90
// Address Range: [[00534a90, 00534b79]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00534a90(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00534a90(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CDemonSet *pCVar2;
  int local_1c;
  int local_18;
  uint local_14;
  
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,&DAT_005e5c22,&local_1c);
  if (local_1c != 1) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x147b;
    core_main_c_FUN_004e4500("Set saveState info is invalid version %d",local_1c);
  }
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,&DAT_005e5c67,&local_18);
  if (*(int *)this_ptr != local_18) {
    shape_edittool_cpp_FUN_0047bdf0(g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < local_18) {
    do {
      _fscanf(file_handle,&DAT_005e5cd1,&local_14);
      if (iVar1 < *(int *)this_ptr) {
        *(uint *)&pCVar2->field_0x1a4 = local_14;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->field_0x1a4;
    } while (iVar1 < local_18);
  }
  return;
}
