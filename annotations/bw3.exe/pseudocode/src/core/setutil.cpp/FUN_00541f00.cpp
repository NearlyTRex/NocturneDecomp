// Name: core_setutil.cpp_FUN_00541f00
// Address: 00541f00
// Address Range: [[00541f00, 00541faa]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_FUN_00541f00(C3DSCamera *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_FUN_00541f00(C3DSCamera *this_ptr,_FILE *file_handle)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _fscanf(file_handle,&DAT_005d0dbe,&this_ptr->field_0x194);
  pvVar1 = realloc
                     (*(void **)&this_ptr->field_0x198,*(int *)&this_ptr->field_0x194 << 2);
  *(void **)&this_ptr->field_0x198 = pvVar1;
  if (0 < *(int *)&this_ptr->field_0x194) {
    if (pvVar1 == (void *)0x0) {
      _DAT_01d71de0 = "..\\core\\setutil.cpp";
      _DAT_01d71de4 = 0xe4;
      core_main_c_FUN_004e4330("Out of memory for pvsList - %d",*(int *)&this_ptr->field_0x194);
    }
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x194) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)&this_ptr->field_0x198 + iVar3;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
        _fscanf(file_handle,&DAT_005d0df5,iVar2);
      } while (iVar4 < *(int *)&this_ptr->field_0x194);
    }
  }
  return;
}
