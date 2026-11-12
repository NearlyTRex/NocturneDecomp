// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00541f00
// Address: 00541f00
// Address Range: [[00541f00, 00541faa]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00541f00(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00541f00(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  int iVar2;
  
  _fscanf(file_handle,&DAT_005d0dbe);
  piVar1 = (int *)realloc(this_ptr->pvs_list,this_ptr->pvs_count << 2);
  this_ptr->pvs_list = piVar1;
  if (0 < this_ptr->pvs_count) {
    if (piVar1 == (int *)0x0) {
      _DAT_01d71de0 = "..\\core\\setutil.cpp";
      _DAT_01d71de4 = 0xe4;
      core_main_c_FUN_004e4330("Out of memory for pvsList - %d",this_ptr->pvs_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->pvs_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,&DAT_005d0df5);
      } while (iVar2 < this_ptr->pvs_count);
    }
  }
  return;
}
