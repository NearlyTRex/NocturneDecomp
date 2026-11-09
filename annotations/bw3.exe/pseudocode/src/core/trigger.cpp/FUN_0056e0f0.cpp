// Name: core_trigger.cpp_FUN_0056e0f0
// Address: 0056e0f0
// Address Range: [[0056e0f0, 0056e1f6]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_0056e0f0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_FUN_0056e0f0(CTrigger *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  iVar2 = 0x01D81080;
  *(uint *)&this_ptr->field_0xf8 = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)&this_ptr->field_0x100 = 1;
  *(uint *)&this_ptr->field_0xfc = uVar1;
  if (*(int *)&this_ptr->field_0x174 == 5) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  if (*(int *)&this_ptr->field_0x174 == 4) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  if (*(int *)&this_ptr->field_0x174 == 7) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  if (*(int *)&this_ptr->field_0x174 == 10) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  *(uint *)&this_ptr->field_0x2f0 = 0;
  *(uint *)&this_ptr->field_0x36c = 0;
  iVar2 = _stricmp(&this_ptr->field_0x224,(char *)0x5d65ff);
  if (iVar2 == 0) {
    this_ptr->field_0x224 = 0;
  }
  iVar2 = _stricmp(&this_ptr->field_0x288,(char *)0x5d6604);
  if (iVar2 == 0) {
    this_ptr->field_0x288 = 0;
  }
  *(uint *)&this_ptr->field_0x104 = 0;
  if ((this_ptr->field_0x224 == '\0') && (this_ptr->field_0x288 == '\0')) {
    *(uint *)&this_ptr->field_0x104 = 1;
    return;
  }
  return;
}
