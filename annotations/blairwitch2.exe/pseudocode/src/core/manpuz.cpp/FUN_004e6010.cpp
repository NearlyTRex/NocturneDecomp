// Name: core_manpuz.cpp_FUN_004e6010
// Address: 004e6010
// Address Range: [[004e6010, 004e623a]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e6010(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_FUN_004e6010(CMansionPuzzleCircle *this_ptr)

{
  CMansionPuzzleCircle *pCVar1;
  CMansionPuzzleCircle *pCVar2;
  byte *puVar3;
  byte *puVar4;
  int iVar5;
  byte *puVar6;
  
  pCVar1 = this_ptr;
  pCVar2 = this_ptr;
  do {
    *(uint *)&pCVar2->field_0x750 = 0;
    *(uint *)&pCVar2->field_0x754 = 0;
    *(uint *)&pCVar2->field_0x798 = 0;
    *(uint *)&pCVar2->field_0x79c = 0;
    *(uint *)&pCVar2->field_0x7a0 = 0;
    puVar4 = &pCVar1->field_0x4;
    *(uint *)&pCVar2->field_0x74c = 1;
    *(uint *)&pCVar1->field_0x155c = 0;
    *(uint *)&pCVar1->field_0x158c = 0;
    *(uint *)&pCVar1->field_0x15bc = 0;
    pCVar2 = (CMansionPuzzleCircle *)&pCVar2->field_0x64;
    *(uint *)&pCVar1->field_0x15ec = 0;
    pCVar1 = (CMansionPuzzleCircle *)puVar4;
  } while (puVar4 != &this_ptr->field_0x30);
  *(uint *)&this_ptr->field_0x7a0 = 0xff;
  *(uint *)&this_ptr->field_0x7fc = 0xff;
  *(uint *)&this_ptr->field_0x860 = 0xff;
  *(uint *)&this_ptr->field_0x878 = 0;
  *(uint *)&this_ptr->field_0x928 = 0xff;
  *(uint *)&this_ptr->field_0x994 = 0xff;
  *(uint *)&this_ptr->field_0x9a4 = 0;
  *(uint *)&this_ptr->field_0xa54 = 0xff;
  *(uint *)&this_ptr->field_0xac0 = 0xff;
  *(uint *)&this_ptr->field_0xb1c = 0xff;
  *(uint *)&this_ptr->field_0xb88 = 0xff;
  *(uint *)&this_ptr->field_0xbec = 0xff;
  *(uint *)&this_ptr->field_0x15bc = 0xff;
  *(uint *)&this_ptr->field_0x15c0 = 0xff;
  *(uint *)&this_ptr->field_0x1564 = 0xff;
  *(uint *)&this_ptr->field_0x1568 = 0xff;
  *(uint *)&this_ptr->field_0x15cc = 0xff;
  *(uint *)&this_ptr->field_0x1570 = 0xff;
  *(uint *)&this_ptr->field_0x1574 = 0xff;
  *(uint *)&this_ptr->field_0x15d8 = 0xff;
  *(uint *)&this_ptr->field_0x15dc = 0xff;
  *(uint *)&this_ptr->field_0x15e0 = 0xff;
  *(uint *)&this_ptr->field_0x1584 = 0xff;
  *(uint *)&this_ptr->field_0x798 = *(uint *)&this_ptr->field_0x7a0;
  iVar5 = 0;
  *(uint *)&this_ptr->field_0x155c = *(uint *)&this_ptr->field_0x15bc;
  *(uint *)&this_ptr->field_0x1588 = 0xff;
  puVar4 = &this_ptr->field_0xc04;
  puVar6 = &this_ptr->field_0xc00;
  do {
    puVar3 = &this_ptr->field_0xbfc + iVar5 * 0xb8;
    core_manpuz_cpp_FUN_004e6a50(this_ptr,iVar5,puVar3,puVar6,puVar4);
    *(uint *)(puVar3 + 0x14) = 0;
    iVar5 = iVar5 + 1;
    *(uint *)(puVar3 + 0x20) = 0;
    *(uint *)(puVar3 + 0x10) = *(uint *)(puVar3 + 0x14);
    *(uint *)(puVar3 + 0x1c) = *(uint *)(puVar3 + 0x20);
    *(uint *)(puVar3 + 0xc) = *(uint *)(puVar3 + 0x10);
    *(uint *)(puVar3 + 0x18) = *(uint *)(puVar3 + 0x20);
    puVar4 = puVar4 + 0xb8;
    puVar6 = puVar6 + 0xb8;
  } while (iVar5 < 0xc);
  *(uint *)&this_ptr->field_0x14f8 = 1;
  *(uint *)&this_ptr->field_0x1514 = 0;
  *(uint *)&this_ptr->field_0x1558 = 0xb;
  *(uint *)&this_ptr->field_0x14b4 = 0;
  return;
}
