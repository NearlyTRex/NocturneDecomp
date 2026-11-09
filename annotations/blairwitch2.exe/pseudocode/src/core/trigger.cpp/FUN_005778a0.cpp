// Name: core_trigger.cpp_FUN_005778a0
// Address: 005778a0
// Address Range: [[005778a0, 00577993]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_005778a0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_FUN_005778a0(CTrigger *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)this_ptr);
  iVar2 = 0x01D182F0;
  *(uint *)&this_ptr->field_0xf8 = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)&this_ptr->field_0x100 = 1;
  *(uint *)&this_ptr->field_0xfc = uVar1;
  if (*(int *)&this_ptr->field_0x2d0 == 5) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  if (*(int *)&this_ptr->field_0x2d0 == 4) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  if (*(int *)&this_ptr->field_0x2d0 == 7) {
    *(uint *)&this_ptr->field_0x100 = 0;
  }
  *(uint *)&this_ptr->field_0x44c = 0;
  *(uint *)&this_ptr->field_0x4c8 = 0;
  iVar2 = _stricmp(&this_ptr->field_0x380,(char *)0x5ecd76);
  if (iVar2 == 0) {
    this_ptr->field_0x380 = 0;
  }
  iVar2 = _stricmp(&this_ptr->field_0x3e4,(char *)0x5ecd7b);
  if (iVar2 == 0) {
    this_ptr->field_0x3e4 = 0;
  }
  *(uint *)&this_ptr->field_0x104 = 0;
  if ((this_ptr->field_0x380 == '\0') && (this_ptr->field_0x3e4 == '\0')) {
    *(uint *)&this_ptr->field_0x104 = 1;
    return;
  }
  return;
}
