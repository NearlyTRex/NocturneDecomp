// Name: engine_console.cpp_FUN_00445610
// Address: 00445610
// Address Range: [[00445610, 0044568a]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_FUN_00445610(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_FUN_00445610(CConsole *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  iVar6 = 0;
  puVar5 = (uint *)&this_ptr->field_0x58;
  puVar4 = (uint *)&this_ptr->field_0x8;
  while (iVar1 = *(int *)&this_ptr->field_0xfb4 + -1, iVar6 < iVar1) {
    uVar3 = *(uint *)&this_ptr->field_0xfb0;
    iVar6 = iVar6 + 1;
    puVar7 = puVar5;
    puVar8 = puVar4;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    puVar4 = puVar4 + 0x14;
    puVar5 = puVar5 + 0x14;
  }
  memset
            (&this_ptr->field_0x8 + iVar1 * 0x50,0,*(ulong *)&this_ptr->field_0xfb0);
  return;
}
