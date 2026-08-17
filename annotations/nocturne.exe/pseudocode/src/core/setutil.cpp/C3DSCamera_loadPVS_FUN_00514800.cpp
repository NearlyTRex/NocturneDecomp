// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
// Address: 00514800
// Address Range: [[00514800, 005148aa]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(C3DSCamera *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _fscanf(file_handle,"%d\n",&this_ptr->pvs_count);
  piVar1 = (int *)realloc(this_ptr->pvs_list,this_ptr->pvs_count << 2);
  this_ptr->pvs_list = piVar1;
  if (0 < this_ptr->pvs_count) {
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\core\\setutil.cpp";
      g_CurrentLineNumber = 207;
      core_main_c_displayErrorAndQuit_FUN_004c8440
                ("Out of memory for pvsList - %d",this_ptr->pvs_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->pvs_count) {
      iVar3 = 0;
      do {
        iVar2 = (int)this_ptr->pvs_list + iVar3;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
        _fscanf(file_handle,"\t%d\n",iVar2);
      } while (iVar4 < this_ptr->pvs_count);
    }
  }
  return;
}
