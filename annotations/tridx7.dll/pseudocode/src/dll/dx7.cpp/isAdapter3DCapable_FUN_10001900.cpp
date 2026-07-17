// Name: dll_dx7.cpp_isAdapter3DCapable_FUN_10001900
// Address: 10001900
// Address Range: [[10001900, 10001990]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(GUID *adapter_guid)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(GUID *adapter_guid)

{
  HRESULT HVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  IDirectDraw *local_2fc;
  uint uStack_2f8;
  byte bStack_2f4;
  uint auStack_17c [95];
  
  bVar4 = 0;
  HVar1 = DirectDrawCreate(adapter_guid,&local_2fc,(IUnknown *)0x0);
  if (HVar1 == 0) {
    puVar3 = &uStack_2f8;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    uStack_2f8 = 0x17c;
    puVar3 = auStack_17c;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    auStack_17c[0] = 0x17c;
    iVar2 = (*local_2fc->vtable->GetCaps)(local_2fc,&uStack_2f8,auStack_17c);
    if ((iVar2 == 0) && ((bStack_2f4 & 1) != 0)) {
      return 1;
    }
  }
  if (local_2fc != (IDirectDraw *)0x0) {
    (*local_2fc->vtable->Release)((IUnknown *)local_2fc);
  }
  return 0;
}
