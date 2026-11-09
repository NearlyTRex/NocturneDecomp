// Name: core_charactr.cpp_FUN_0042a330
// Address: 0042a330
// Address Range: [[0042a330, 0042a3c5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042a330(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042a330(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (0x15 < *(int *)&this_ptr->field_0x2830) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x11a0;
    core_main_c_FUN_004e4500("CCharacter::addLayerAction - too many");
  }
  iVar2 = *(int *)&this_ptr->field_0x2830;
  *(int *)&this_ptr->field_0x2830 = *(int *)&this_ptr->field_0x2830 + 1;
  piVar3 = (int *)(&this_ptr->field_0x2834 + iVar2 * 0x38);
  *piVar3 = from_bone_index;
  piVar4 = piVar3 + 2;
  piVar3[1] = to_bone_index;
  do {
    cVar1 = *motion_name;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = motion_name[1];
    motion_name = motion_name + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  piVar3[10] = direction;
  return;
}
