// Name: core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
// Address: 00587450
// MANUAL RECONSTRUCTION
// Address Range: [[00587450, 005874c7]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int iVar2;
  int iVar3;

  if (this_ptr->is_panning != 0) {
    iVar2 = _fprintf(file_handle,"0\n");
    return iVar2;
  }
  iVar2 = _fprintf(file_handle,"%d\n",this_ptr->pvs_count);
  for (iVar3 = 0; iVar3 < this_ptr->pvs_count; iVar3 = iVar3 + 1) {
    iVar2 = _fprintf(file_handle,"\t%d\n",this_ptr->pvs_list[iVar3]);
  }
  return iVar2;
}
