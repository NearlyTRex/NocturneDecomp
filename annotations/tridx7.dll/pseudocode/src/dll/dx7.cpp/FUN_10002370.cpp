// Name: dll_dx7.cpp_FUN_10002370
// Address: 10002370
// Address Range: [[10002370, 1000245a]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10002370(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10002370(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  dll_dx7_cpp_FUN_10002ea0();
  if (DAT_100141b8 != (int *)0x0) {
    (**(code **)(*DAT_100141b8 + 8))(DAT_100141b8);
    DAT_100141b8 = (int *)0x0;
  }
  if (DAT_100141e4 != (int *)0x0) {
    (**(code **)(*DAT_100141e4 + 8))(DAT_100141e4);
    DAT_100141e4 = (int *)0x0;
  }
  if (g_Device != (IDirect3DDevice3 *)0x0) {
    (*g_Device->vtable->Release)((IUnknown *)g_Device);
    g_Device = (IDirect3DDevice3 *)0x0;
  }
  if (DAT_100141dc != (int *)0x0) {
    (**(code **)(*DAT_100141dc + 8))(DAT_100141dc);
    DAT_100141dc = (int *)0x0;
  }
  if (DAT_10014190 != (int *)0x0) {
    (**(code **)(*DAT_10014190 + 8))(DAT_10014190);
    DAT_10014190 = (int *)0x0;
  }
  iVar2 = 0;
  if (0 < DAT_10226a48) {
    piVar3 = &DAT_10014198;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10226a48);
  }
  if (g_PrimarySurface != (IDirectDrawSurface *)0x0) {
    (*g_PrimarySurface->vtable->Release)((IUnknown *)g_PrimarySurface);
    g_PrimarySurface = (IDirectDrawSurface *)0x0;
  }
  return;
}
