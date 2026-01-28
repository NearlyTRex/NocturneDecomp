// Name: core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
// Address: 00587450
// Address Range: [[00587450, 005874c7]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,FILE *file_handle)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,FILE *file_handle)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->is_panning != 0) {
    iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"0\n");
    return iVar2;
  }
  iVar3 = 0;
  iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->pvs_count);
  if (0 < this_ptr->pvs_count) {
    iVar4 = 0;
    do {
      puVar1 = (uint *)(iVar4 + (int)this_ptr->pvs_list);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\t%d\n",*puVar1);
    } while (iVar3 < this_ptr->pvs_count);
  }
  return iVar2;
}
