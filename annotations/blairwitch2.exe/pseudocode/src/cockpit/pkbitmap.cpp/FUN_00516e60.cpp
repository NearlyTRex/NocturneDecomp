// Name: cockpit_pkbitmap.cpp_FUN_00516e60
// Address: 00516e60
// Address Range: [[00516e60, 00516f2c]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_FUN_00516e60(CPackedBitmap *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_FUN_00516e60(CPackedBitmap *this_ptr,_FILE *file_handle)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int aiStack_2c [6];
  int iStack_14;
  
  puVar2 = (uint *)0x61b3bc;
  piVar3 = aiStack_2c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)piVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    piVar3 = (uint *)((int)piVar3 + 1);
  }
  aiStack_2c[1] = *(int *)&this_ptr->field_0x18;
  aiStack_2c[2] = *(int *)&this_ptr->field_0x1c;
  aiStack_2c[3] = 0;
  aiStack_2c[4] = 0;
  aiStack_2c[5] = *(int *)&this_ptr->field_0x18 + -1;
  iStack_14 = *(int *)&this_ptr->field_0x1c + -1;
  _fwrite(aiStack_2c,0x1c,1,file_handle);
  _fwrite(*(uint *)&this_ptr->field_0x20,4,*(int *)&this_ptr->field_0x1c + 1,file_handle);
  _fwrite(*(uint *)&this_ptr->field_0x14,
             *(uint *)(*(int *)&this_ptr->field_0x20 + *(int *)&this_ptr->field_0x1c * 4),1,
             file_handle);
  if (((byte)file_handle[0xc] & 0x20) == 0) {
    return;
  }
  _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d046a4 = 0x49c;
  core_main_c_FUN_004e4500("Error writing PBM");
  return;
}
