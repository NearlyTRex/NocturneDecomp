// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_0053ac70
// Address: 0053ac70
// Address Range: [[0053ac70, 0053ad1a]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_0053ac70(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_0053ac70(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  int iVar2;
  
  _fscanf(file_handle,"%d\n");
  piVar1 = (int *)realloc(this_ptr->pvs_list,this_ptr->pvs_count << 2);
  this_ptr->pvs_list = piVar1;
  if (0 < this_ptr->pvs_count) {
    if (piVar1 == (int *)0x0) {
      g_CHAR_PTR_01d046a0 = "..\\core\\setutil.cpp";
      g_INT_01d046a4 = 0xe4;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory for pvsList - %d");
    }
    iVar2 = 0;
    if (0 < this_ptr->pvs_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,"\t%d\n");
      } while (iVar2 < this_ptr->pvs_count);
    }
  }
  return;
}
