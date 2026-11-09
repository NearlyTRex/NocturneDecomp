// Name: core_trigger.cpp_FUN_0059b100
// Address: 0059b100
// Address Range: [[0059b100, 0059b206]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_0059b100(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_FUN_0059b100(CTrigger *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  iVar2 = 0x01D2C900;
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
  iVar2 = _stricmp(&this_ptr->field_0x224,(char *)0x5f8090);
  if (iVar2 == 0) {
    this_ptr->field_0x224 = 0;
  }
  iVar2 = _stricmp(&this_ptr->field_0x288,(char *)0x5f8095);
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
