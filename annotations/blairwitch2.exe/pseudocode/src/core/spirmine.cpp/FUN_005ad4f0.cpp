// Name: core_spirmine.cpp_FUN_005ad4f0
// Address: 005ad4f0
// Address Range: [[005ad4f0, 005ad52a]]
// Convention: unknown
// Signature: void core_spirmine_cpp_FUN_005ad4f0(CBoxActor *param_1)

#include "nocturne.h"

void core_spirmine_cpp_FUN_005ad4f0(CBoxActor *param_1)

{
  byte *puVar1;
  
  core_boxactor_cpp_FUN_0041be70(param_1);
  puVar1 = &param_1->field_0x154;
  unkaddr_005a7eb0_cpp_FUN_005a8030(puVar1,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(puVar1,param_1);
  unkaddr_005a7eb0_cpp_FUN_005a80d0(puVar1,0);
  return;
}
