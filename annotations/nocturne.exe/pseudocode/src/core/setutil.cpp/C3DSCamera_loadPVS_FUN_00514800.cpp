// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
// Address: 00514800
// Address Range: [[00514800, 005148aa]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(C3DSCamera *this_ptr,_FILE *file_handle)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  
  _fscanf(file_handle,"%d\n");
  pvVar2 = realloc
                     ((void *)this_ptr->pvs_count,(int)(this_ptr->box).max.z << 2);
  fVar1 = (this_ptr->box).max.z;
  this_ptr->pvs_count = (int)pvVar2;
  if (0 < (int)fVar1) {
    if (pvVar2 == (void *)0x0) {
      PTR_01cc4800 = "..\\core\\setutil.cpp";
      INT_01cc4804 = 0xcf;
      core_main_c_FUN_004c8440("Out of memory for pvsList - %d",fVar1);
    }
    iVar3 = 0;
    if (0 < (int)(this_ptr->box).max.z) {
      do {
        iVar3 = iVar3 + 1;
        _fscanf(file_handle,"\t%d\n");
      } while (iVar3 < (int)(this_ptr->box).max.z);
    }
  }
  return;
}
