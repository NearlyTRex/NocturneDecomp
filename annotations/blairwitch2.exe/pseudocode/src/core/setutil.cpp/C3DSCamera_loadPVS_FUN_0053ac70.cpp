// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_0053ac70
// Address: 0053ac70
// Address Range: [[0053ac70, 0053ad1a]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_0053ac70(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_0053ac70(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _fscanf(file_handle,&DAT_005e6145,&this_ptr->pvs_count);
  piVar1 = (int *)realloc(this_ptr->pvs_list,this_ptr->pvs_count << 2);
  this_ptr->pvs_list = piVar1;
  if (0 < this_ptr->pvs_count) {
    if (piVar1 == (int *)0x0) {
      _DAT_01d046a0 = "..\\core\\setutil.cpp";
      _DAT_01d046a4 = 0xe4;
      core_main_c_FUN_004e4500("Out of memory for pvsList - %d",this_ptr->pvs_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->pvs_count) {
      iVar3 = 0;
      do {
        iVar2 = (int)this_ptr->pvs_list + iVar3;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
        _fscanf(file_handle,&DAT_005e617c,iVar2);
      } while (iVar4 < this_ptr->pvs_count);
    }
  }
  return;
}
