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
  DDCAPS *pDVar3;
  byte bVar4;
  IDirectDraw *local_2fc;
  DDCAPS DStack_2f8;
  DDCAPS DStack_17c;
  
  bVar4 = 0;
  HVar1 = DirectDrawCreate(adapter_guid,&local_2fc,(IUnknown *)0x0);
  if (HVar1 == 0) {
    pDVar3 = &DStack_2f8;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar3->dwSize = 0;
      pDVar3 = (DDCAPS *)((int)pDVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    DStack_2f8.dwSize = 0x17c;
    pDVar3 = &DStack_17c;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar3->dwSize = 0;
      pDVar3 = (DDCAPS *)((int)pDVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    DStack_17c.dwSize = 0x17c;
    HVar1 = (*local_2fc->vtable->GetCaps)(local_2fc,&DStack_2f8,&DStack_17c);
    if ((HVar1 == 0) && (((byte)DStack_2f8.dwCaps & 1) != 0)) {
      return 1;
    }
  }
  if (local_2fc != (IDirectDraw *)0x0) {
    (*local_2fc->vtable->Release)((IUnknown *)local_2fc);
  }
  return 0;
}
